![C++](https://img.shields.io/badge/c++->=17-blue)
![Platform](https://img.shields.io/badge/platform-Window-lightgrey)
![Compiler](https://img.shields.io/badge/MSVC-16%202019-lightgrey)
[![MIT license](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

# Project Title

This project was tested on Window 10 in Visual studio 2019 (16.7.7) compiler.

# Requiements

* Window 10

* Visual studio 2019

    https://visualstudio.microsoft.com/zh-hant/downloads/

* CMake (version >3.5)

    https://cmake.org/download/

# Build solution

Run buildvs.bat in Solution folder.

Type ```build x86``` or ```build x64```

# Run Test

### Run in CTest
Run runtest.bat in Solution folder

### Run in Visual Studio

1. Download OpenCppCoveragePlugin and install: 
    
    https://marketplace.visualstudio.com/items?itemName=OpenCppCoverage.OpenCppCoveragePlugin

2. Right click the test project and click the OpenCppCoverage Settings

3. Click the **Toggle projects selection** Button and select the test project and the source project in the **Selected projects** field.

4. Click the **Run Coverage** Button