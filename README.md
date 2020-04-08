LeadIt
------

[![Travis CI Linux Build Status](https://travis-ci.org/SmartArray/LeadIt.svg)](https://travis-ci.org/SmartArray/LeadIt "Travis CI Linux Build Status")
[![AppVeyor Windows Build status](https://ci.appveyor.com/api/projects/status/github/SmartArray/LeadIt?svg=true)](https://ci.appveyor.com/project/SmartArray/LeadIt "AppVeyor Windows Build status")

> High Performance Scoreboard / Leaderboard that runs as a REST Service.

Copyright (c) 2020 Yoshi Jäger (yoshi@jaeger.berlin)

## Development Prerequisites

### Install cloc
(Statistics utility to count lines of code)

### Install cppcheck
(Static analysis of C and C++ code)

### Install Doxygen
(Documentation Generator)

## Building & testing with CMake

### Get Google Test submodule

```bash
git submodule init
git submodule update
```

### Typical generic build (see also "build.bat" or "./build.sh")

```bash
mkdir build
cd build
cmake ..        # cmake .. -G "Visual Studio 15 2017 Win64" # for a  64 bits solution using Visual Studio 2017
cmake --build . # make
ctest .         # make test
```

### Debug build for Unix Makefiles

```bash
mkdir Debug
cd Debug
cmake .. -DCMAKE_BUILD_TYPE=Debug   # -G "Unix Makefiles"
cmake --build . # make
ctest .         # make test
```

### Release build

```bash
mkdir Release
cd Release
cmake .. -DCMAKE_BUILD_TYPE=Release  # -G "Unix Makefiles"
cmake --build . # make
ctest .         # make test
```

### Continuous Integration

This project is continuously tested under Ubuntu 14.04 "Trusty" Linux with gcc 4.8.4 and clang 5.0.0 compilers
using the Travis CI community service with the above CMake building and testing procedure.

It is also tested in the same way under Windows with Visual Studio 14 2015 compiler
using the AppVeyor countinuous integration service.

Detailed results can be seen online:
 - https://travis-ci.org/SRombauts/cpp-skeleton
 - https://ci.appveyor.com/project/SbastienRombauts/cpp-skeleton
