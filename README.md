# C Projects

This repository documents my progress learning C through a structured series of small, hands-on projects. Each lesson introduces a new concept and builds on the previous exercises.

I write, compile, test, and debug the programs myself while using guided explanations and code review to strengthen my understanding.

## Progress

| Lesson | Main concept                            | Project / focus                                         | Status      |
| ------ | --------------------------------------- | ------------------------------------------------------- | ----------- |
| 01     | Compilation, Make, and `main()`         | Hello World                                             | Completed   |
| 02     | `argc`, `argv`, and loops               | Command-line arguments                                  | Completed   |
| 03     | Variables, arithmetic, and conditionals | Simple calculator                                       | Completed   |
| 04     | Loops                                   | Multiplication table                                    | Completed   |
| 05     | Functions                               | Refactor calculator                                     | Completed   |
| 06     | Header files                            | Split project into modules                              | Completed   |
| 07     | Arrays and indexing                     | Bounds, loops, element count                            | Completed   |
| 08     | Object sizes and `sizeof`               | Array sizing and object representation                  | Completed   |
| 09     | Pointer fundamentals                    | Addresses, `&`, and `*`                                 | Planned     |
| 10     | Arrays vs. pointers                     | Decay, function parameters, and `sizeof` differences    | Planned     |
| 11     | Strings                                 | Character arrays, `'\0'`, `strlen()`, and tiny `echo`   | Planned     |
| 12     | File I/O                                | Count lines in a file                                   | Planned     |
| 13     | Structs                                 | Contact catalog                                         | Planned     |
| 14     | Dynamic memory                          | Allocation and lifetime                                 | Planned     |
| 15     | Memory addresses and offsets            | Hex addresses and byte offsets                          | Planned     |
| 16     | Pointer arithmetic                      | Manual traversal                                        | Planned     |
| 17     | Raw memory and buffers                  | Byte-buffer inspection                                  | Planned     |
| 18     | Memory layout and padding               | Alignment and struct padding                            | Planned     |
| 19     | Memory safety                           | Bounds, lifetime, and undefined behavior                | Planned     |
| 20     | Binary file I/O                         | Read and inspect raw bytes                              | Planned     |
| 21     | Combined fundamentals                   | Tiny Unix utility                                       | Planned     |

The later memory-focused lessons build progressively from addresses and pointer fundamentals to offsets, pointer arithmetic, raw byte buffers, alignment, buffer layouts, allocation lifetime, and memory safety.
These lessons will explicitly distinguish defined behavior from implementation-defined, unspecified, and undefined behavior.

## Repository structure

Each numbered directory contains one lesson and its related source files:

```text
.
├── 01-hello-world
├── 02-command-line-arguments
├── 03-simple-calculator
├── 04-loops
├── 05-functions
├── 06-header-files
├── 07-arrays
├── 08-object-sizes-sizeof
├── docs
└── _parked
```

Generated executables are excluded from version control.

## Building and running

The projects require GCC and GNU Make.

Build and run Lesson 1:

```bash
make -C 01-hello-world
./01-hello-world/hello
```

Build and run Lesson 2:

```bash
make -C 02-command-line-arguments
./02-command-line-arguments/arguments laptop mouse
```

Build and run both Lesson 3 programs:

```bash
make -C 03-simple-calculator
./03-simple-calculator/basic_calculator
./03-simple-calculator/calculator_zero_safe
```

Remove the generated executables from a lesson:

```bash
make -C 03-simple-calculator clean
```

## Development environment

* CentOS Stream 10
* GCC
* GNU Make
* Vim
* Git and GitHub
* Typst and Okular for documentation

The programs are compiled with:

```text
-Wall -Wextra -Wpedantic -g
```

Compiler warnings are treated as problems to investigate rather than noise to ignore.

## Documentation

A more detailed account of the learning process is maintained in Typst:

* [Learning journey PDF](docs/learning-journey.pdf)
* [Typst source](docs/learning-journey.typ)

The document can be compiled with:

```bash
typst compile docs/learning-journey.typ
```

## Learning approach

The repository follows an incremental approach:

1. Introduce one main concept at a time.
2. Write and test a small program.
3. Investigate compiler warnings and bugs.
4. Refactor only after the original version is understood.
5. Record meaningful progress with Git.

The goal is not merely to produce working programs, but to understand how C source code becomes a compiled executable and how the surrounding development toolchain fits together.

## Comparative exercises

Selected lessons include equivalent implementations in other languages:

- **Python** — comparison with a higher-level general-purpose language
- **PowerShell** — comparison with shell scripting, objects, and pipelines

These companion exercises reinforce transferable programming concepts while
keeping C as the primary focus of the project.
