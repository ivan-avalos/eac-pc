# EaC PC

EaC PC lets you keep your code organized and reduce common boilerplate on C code.

## Sections

With EaC, you can keep your code organized into sections.

```c
@["Global variables"] {
    int foo;
    int bar;
@}
```

## Global functions

A global function allows you automatically place functions in a determined place, so you can write them anywhere in your code.

```c
#include <stdio.h>

// EaC PC functions will be declared and implemented here
@;

int main(int argc, char** argv){
    doSomething(argv[0]);
    return 0;
}

// So you can write them anywhere :)

/* name        | params    | type */
@^ doSomething | char* msg | void {
    printf("Something %s\n", msg);
@^}
```

## Comparison

### C code

```c
#include <stdio.h>

char* foo = "foo";
char* bar = "bar";

void doSomething(char* msg);
void doAnotherThing(char* msg);

int main(int argc, char** argv)
{
    doSomething(argv[0]);
    doAnotherThing(argv[0]);

    printf(foo);
    printf(bar);
}

void doSomething(char* msg)
{
    printf("Something %s\n", msg);
}

void doAnotherThing(char* msg)
{
    doSomething(msg); // Lol
}

```

### EaC PC code

```c
#include <stdio.h>

@;

@["Global variables"]{
    char* foo = "foo";
    char* bar = "bar";
@}

int main(int argc, char** argv)
{
    doSomething(argv[0]);
    doAnotherThing(argv[0]);

    printf(foo);
    printf(bar);
}

@["Global functions"]{
    @^ doSomething | char* msg | void {
        printf("Something %s\n", msg);
    @^}

    @^ doAnotherThing | char* msg | void {
        doSomething(msg); // Lol
    @^}
@}

```

## Usage

```
usage: eac
 -i <arg>    Input file
 -o <arg>    Output file
 -h <arg>    Help menu
```
