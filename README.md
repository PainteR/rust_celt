# Raw celt bindings for rust compat with Valve.

Decode CS:GO Voice packets:

```rust
use rust_celt::{
    celt_decode, celt_decoder_create_custom, celt_decoder_ctl, celt_mode_create, celt_strerror,
    CELTDecoder, CELTMode,
};

#[derive(Debug)]
pub struct CeltDecoder {
    mode_: *mut CELTMode,
    decoder_: *mut CELTDecoder,
}

impl CeltDecoder {
    pub fn init() -> Self {
        unsafe {
            let mut error = 0;
            let mode_ = celt_mode_create(22050, 512, &mut error);
            if error != 0 {
                panic!(
                    "celt_mode_create error {:?} ({})",
                    celt_strerror(error),
                    error
                );
            }
            error = 0;
            let decoder_ = celt_decoder_create_custom(mode_, 1, &mut error);
            if error != 0 {
                panic!(
                    "celt_decoder_create_custom error {:?} ({})",
                    celt_strerror(error),
                    error
                );
            }
            celt_decoder_ctl(decoder_, 8, 0);
            return CeltDecoder { mode_, decoder_ };
        }
    }

    pub fn decode(&self, data: &[u8], out: &mut [i16; 512]) -> i32 {
        if data.len() < 64 {
            println!(
                "Bad input length {} passed to CeltDecoder::decode",
                data.len()
            );
            return 0;
        }

        let decode_ret = unsafe { celt_decode(self.decoder_, &data[0], 64, &mut out[0], 512) };
        if decode_ret < 0 {
            println!(
                "celt_decode error: {:?} ({})",
                unsafe { celt_strerror(decode_ret) },
                decode_ret
            );
            return 0;
        }
        return decode_ret;
    }
}

```
