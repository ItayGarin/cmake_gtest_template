CMake-GTest Template Project
=============

This repo contains a barebone template C project.<br />
This project uses CMake as the primary build-generation tools</br >
and Gtest as the unit-testing framwork.

## Goal

The goal of this repo is to speed up the setup period
and get you started coding as fast as possible.

## Installation

1. Install CMake (on debian based system use `apt-get install cmake`).
2. Checkout the [Google Test](http://code.google.com/p/googletest/) framework into `test/gtest`.
3. Add your sources into source/ directory
3. Add your tests into test/ directory
4. Modify the CMake files accordingly

## Usage

#### Configure CMake

```bash
$ mkdir build
$ cd build
$ cmake ..
```

#### Make Targets

0. Assuming you configured cmake, and you are in the build directory...
1. To compile use :
```make
```
2. To invoke the unit-tests use :
```make test
```

## Compatibility

This was only tested on linux (Ubuntu 12.04 specifically).<br />
Let me know if you try it out on other systems.

## Contact and Contributing

Please feel free to contact me at : thifixp@gmail.com .<br />
Also, all contribuation are welcome via a pull request.
