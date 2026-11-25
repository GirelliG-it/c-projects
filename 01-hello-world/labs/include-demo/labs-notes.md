## This document exists to save schematics and short examples with explanations for my learning journey in C.

```mermaid
flowchart LR
    A["See the mechanism<br/>as a schematic"]
    B["Predict what happens"]
    C["Write a small piece<br/>of code"]
    D["Compile and run"]
    E["Inspect underneath"]
    F["Add one new piece"]

    A --> B --> C --> D --> E --> F
    F --> A
```

### Step 1: everything in one file

```mermaid
flowchart LR
    subgraph S["main.c"]
        A["print_message()<br/>function definition"]
        B["main()<br/>calls print_message()"]
    end

    A --> B
    B -->|GCC compiles and links| C["include-demo<br/>executable"]
    C --> D["Message printed"]
```

Create main.c in the lab directory. It should:
- include stdio.h;
- define void `print_message(void);`
- have that function print any short message you choose;
- define main;
- call `print_message` from main;
- return 0.

The next step will be to split this exercise into three separate files:
 - main.c      → uses the function
 - message.h   → declares the function
 - message.c   → defines the function
