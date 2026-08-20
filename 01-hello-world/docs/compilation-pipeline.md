# The C compilation pipeline

How a single `.c` source file becomes a runnable executable. The command
`gcc hello.c -o hello` runs all four stages at once and cleans up the
intermediate files, but each stage can be stopped and inspected on its own.

```mermaid
flowchart TD
    SRC["hello.c<br/>(your source)"] -->|preprocessor| TU["translation unit<br/>(expanded source)"]
    TU -->|compiler| ASM["hello.s<br/>(assembly)"]
    ASM -->|assembler| OBJ["hello.o<br/>(object file)"]
    OBJ -->|linker| EXE["hello<br/>(executable)"]

    HDR["stdio.h<br/>(declares printf)"] -->|included| TU
    LIB["C standard library<br/>(printf's real code)"] -->|linked in| EXE

    classDef input fill:#E1F5EE,stroke:#0F6E56,color:#04342C;
    classDef inter fill:#F1EFE8,stroke:#5F5E5A,color:#2C2C2A;
    classDef exe fill:#EEEDFE,stroke:#534AB7,color:#26215C;

    class SRC,HDR,LIB input;
    class TU,ASM,OBJ inter;
    class EXE exe;
```

**Legend:** teal = inputs you provide, gray = throwaway intermediate files,
purple = the final executable.

## Stopping after each stage

Each `gcc` flag halts the pipeline after one of the arrows above, letting you
see the intermediate file it produces.

| Flag   | Stops after  | Produces                                      |
| ------ | ------------ | --------------------------------------------- |
| `-E`   | preprocessor | expanded source (translation unit) on stdout  |
| `-S`   | compiler     | `hello.s` — assembly text                      |
| `-c`   | assembler    | `hello.o` — object file (machine code)         |
| (none) | linker       | `hello` — the executable                       |
