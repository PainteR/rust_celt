fn main() {
    let src = [
        "celt/src/bands.c",
        "celt/src/celt.c",
        "celt/src/cwrs.c",
        "celt/src/entcode.c",
        "celt/src/entdec.c",
        "celt/src/entenc.c",
        "celt/src/header.c",
        "celt/src/kiss_fft.c",
        "celt/src/laplace.c",
        "celt/src/mathops.c",
        "celt/src/mdct.c",
        "celt/src/modes.c",
        "celt/src/pitch.c",
        "celt/src/plc.c",
        "celt/src/quant_bands.c",
        "celt/src/rate.c",
        "celt/src/vq.c",
    ];
    let mut builder = cc::Build::new();
    let build = builder
        .files(src.iter())
        .include("celt/include")
        .include("celt/src")
        .flag("-Wno-unused-parameter");
    build.compile("celt");
}
