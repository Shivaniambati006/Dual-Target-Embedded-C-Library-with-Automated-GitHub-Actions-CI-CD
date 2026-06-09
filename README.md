# Dual-Target Embedded C Library with Automated GitHub Actions CI/CD Pipeline

## Overview

This project is a modular Embedded C library designed to support both **Host (PC)** and **Embedded** platforms from a single codebase.

The project demonstrates:

- Modular C programming
- Platform abstraction
- Dual-target architecture
- Unit testing
- CMake build system
- GitHub Actions Continuous Integration (CI)

---

## Features

- Modular math library
- Platform abstraction layer
- Host and Embedded implementations
- Unit tests
- CMake-based build system
- Automated GitHub Actions workflow

---

## Project Structure

```
dual-target-c-library/
│
├── examples/
│   └── main.c
│
├── include/
│   ├── mathlib.h
│   └── platform.h
│
├── src/
│   └── mathlib.c
│
├── tests/
│   └── test_mathlib.c
│
├── platform/
│   ├── host/
│   │   └── platform_host.c
│   │
│   └── embedded/
│       └── platform_embedded.c
│
├── .github/
│   └── workflows/
│       └── ci.yml
│
├── CMakeLists.txt
└── README.md
```

---

## Build

Configure the project:

```bash
cmake -S . -B build
```

Build:

```bash
cmake --build build
```

Run the example:

```bash
./build/app
```

Run the tests:

```bash
./build/test_app
```

---

## CI Pipeline

Every push to the `main` branch automatically:

- Builds the Host target
- Runs all unit tests
- Builds the Embedded target

using GitHub Actions.

---

## Technologies Used

- C
- CMake
- Git
- GitHub
- GitHub Actions
- GCC

---

## Future Improvements

- Additional math functions
- Embedded hardware support
- Code coverage
- Continuous Deployment (CD)
- Cross-compilation support

---

## License

MIT License