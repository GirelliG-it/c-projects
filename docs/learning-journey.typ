#set document(
  title: "Learning C Through Small Projects",
  author: "Giovanni Girelli",
)

#set page(
  paper: "a4",
  margin: 2.5cm,
)

#set text(
  size: 11pt,
)

= Learning C Through Small Projects

This document records my progress learning the C programming language
through a structured series of small, hands-on projects.

Each lesson introduces one major concept and builds on the previous
exercises.

== Learning roadmap

#table(
  columns: (auto, 1fr, auto),
  inset: 8pt,
  align: (center, left, center),

  [*Lesson*], [*Main concept*], [*Status*],
  [1], [Compilation, Make, and `main()`], [Completed],
  [2], [`argc`, `argv`, and exit codes], [Completed],
  [3], [Variables and arithmetic], [Completed],
  [4], [Loops and control flow], [Completed],
  [5], [Functions], [Next],
  [6], [Header files and modules], [Planned],
  [7], [Strings], [Planned],
  [8], [File input and output], [Planned],
  [9], [Structures], [Planned],
  [10], [Dynamic memory], [Planned],
  [11], [Pointers and arrays], [Planned],
  [12], [Mini Unix utility], [Planned],
)

== Completed lessons

=== Lesson 1: Hello World

This lesson introduced the basic structure of a C program, including
`#include`, the `main()` function, `printf()`, compilation with GCC,
and automated builds using Make.

=== Lesson 2: Command-line arguments

This lesson introduced `argc` and `argv`, which allow a C program to
receive arguments from the command line. It also introduced program
exit codes and basic input validation.

=== Lesson 3: Simple calculator

This lesson introduced variables, numeric types, arithmetic operators,
integer and floating-point division, and protection against division
by zero.

=== Lesson 4: Loops and control flow

This lesson introduced:

- `for` loops
- `while` loops
- `if–else if–else` conditional branching
- `break` to exit a loop
- `continue` to skip the remainder of an iteration
- `return` to exit the current function

The exercises demonstrated that statements execute sequentially.
Control-flow statements only affect code that has not yet executed.

For example:

```c
if (i == 5) {
    continue;
}

printf("%d\n", i);
```
Equivalent Python exercises were created to compare universal
programming concepts with language-specific syntax.

== Comparative exercises

Selected C exercises are recreated in other languages when the
comparison strengthens understanding.

Python provides comparison with a higher-level general-purpose
language.
PowerShell will provide comparison with scripting, structured
objects, pipelines, and Windows automation.

C remains the primary learning track.

== Current position

Lessons 1 through 4 are complete. The next lesson introduces functions
and uses them to refactor the calculator from Lesson 3.
