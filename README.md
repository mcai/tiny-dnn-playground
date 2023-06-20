# Tiny-DNN Example

This is a simple example of how to use the Tiny-DNN library. Tiny-DNN is a C++14 implementation of deep learning. It is suitable for deep learning on limited computational resource, embedded systems and IoT devices.

## Requirements

- C++ Compiler with C++14 support
- [tiny-dnn](https://github.com/tiny-dnn/tiny-dnn)

## Getting Started

To clone the repository, run the following command in your terminal:

```bash
git clone https://github.com/tiny-dnn/tiny-dnn.git
```

## Building

To compile the program, use the following command:

```bash
g++ -std=c++14 -I ./tiny-dnn -O3 main.cpp -o main -pthread
```

- `-std=c++14` specifies that the code should be compiled using the C++14 standard.
- `-I ./tiny-dnn` tells the compiler to look in the `./tiny-dnn` directory for include files.
- `-O3` is an optimization level that enables all optimization flags.
- `main.cpp` is the name of the file you're compiling.
- `-o main` specifies the name of the output file.
- `-pthread` links the pthread library for multi-threading support.

After compiling, you can run the program with `./main`.