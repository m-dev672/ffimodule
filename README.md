# ffimodule
An example of Python module written in Rust.

## Usage

### Static

```bash
rustc --crate-type="staticlib" helloworld.rs
gcc -fPIC -Wall -shared -o helloworld.so helloworld.c libhelloworld.a $(python3-config --cflags --ldflags)
```

### Dynamic

```bash
rustc --crate-type="dylib" helloworld.rs
mv libhelloworld.so /usr/local/lib
gcc -fPIC -Wall -shared -o helloworld.so helloworld.c -L/usr/local/lib -lhelloworld $(python3-config --cflags --ldflags)
```