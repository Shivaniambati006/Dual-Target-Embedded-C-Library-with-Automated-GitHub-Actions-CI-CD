# Dual-Target Embedded C Library

A modular Embedded C library that supports both Host and Embedded builds using CMake. The project includes automated unit testing and GitHub Actions CI to ensure code quality.

---

## Features

- Modular C library
- Host and Embedded build support
- CMake build system
- GitHub Actions CI
- Unit testing
- Platform abstraction layer
- Well-documented public API

---

## Project Structure

```text
dual-target-c-library/
│
├── include/                 # Public header files
├── src/                     # Library source code
├── examples/                # Example application
├── tests/                   # Unit tests
├── platform/
│   ├── host/                # Host-specific implementation
│   └── embedded/            # Embedded-specific implementation
├── .github/workflows/       # GitHub Actions
├── CMakeLists.txt
└── README.md
```

---

## Build Instructions

### Configure

```bash
cmake -S . -B build
```

### Build

```bash
cmake --build build
```

### Run Tests

Windows

```bash
./build/Debug/test_app.exe
```

Linux

```bash
./build/test_app
```

---

## Library Functions

- add()
- subtract()
- multiply()
- divide()
- max()
- min()

---

## Technologies Used

- C11
- CMake
- Git
- GitHub
- GitHub Actions
- MSVC / GCC

---

## Current Status

- Host Build
- Embedded Build
- Unit Tests
- Continuous Integration (CI)

Project Status: Active Development