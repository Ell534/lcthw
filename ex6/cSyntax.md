
# C Syntax


## Keywords


| Operator | Description |
| :------: | :---------: |
| `auto` | Give a local variable a local lifetime |
| `break` | Exit out of a compound statement |
| `case` | A branch in a switch-statement |
| `char` | Character data type |
| `const` | Make a variable unmodifiable |
| `continue` | Continue to the top of a loop |
| `default` | Default branch in a switch-statement |
| `do` | Start a do-while loop |
| `double` | A double floating point data type |
| `else` | An else branch of an if statement |
| `enum` | Define a set of int constants |
| `extern` | Declare an identifier is defined externally |
| `float` | A floating point data type |
| `for` | Start a for-loop |
| `goto` | Jump to a label |
| `if` | Starts an if statement |
| `int` | An integer data type |
| `long` | A long integer data type |
| `register` | Declare a variable be stored in a CPU register |
| `return` | Return from a function |
| `short` | A short integer data type |
| `signed` | A signed modifier for integer data types |
| `sizeof` | Determine the size of data |
| `static` | Preserve variable value after its scope exits |
| `struct` | Combine variables into a single record |
| `switch` | Start a switch-statement |
| `typedef` | Create a new type |
| `union` | Start a union-statement |
| `unsigned` | An unsigned modifier for integer data types |
| `void` | Declare a data type empty |
| `volatile` | Declare a variable might be modified elsewhere |
| `while` | Start a while loop |


## Syntax Structures


Anything in `ALLCAPS` is meant as a replacement spot or hole.

Seeing `[ALLCAPS]` means that part is optional.


#### if Statement


```c
if(TEST) {
    CODE;
} else if(TEST) {
    CODE;
} else {
    CODE;
}
```


#### switch Statement


```c
switch (OPERAND) {
    case CONSTANT:
        CODE;
        break;
    default:
        CODE;
}
```


#### while-loop


```c
while(TEST) {
    CODE;
}
```

```c
while(TEST) {
    if(OTHER_TEST) {
        continue;
    }
    CODE;
}
```

```c
while(TEST) {
    if(OTHER_TEST) {
        break;
    }
    CODE;
}
```


#### do-while loop


```c
do {
    CODE;
} while(TEST);
```
can also have continue and break statements



#### for-loop


```c
for(INIT; TEST; POST) {
    CODE;
}
```


#### enum


```c
enum { CONST1, CONST2, CONST3 } NAME;
```


#### goto


```c
if(ERROR_TEST) {
    goto fail;
}

fail:
    CODE;
```


#### function definition


```c
TYPE NAME(ARG1, ARG2, ..) {
    CODE;
    return VALUE;
}
```
for example
```c
int name(arg1, arg2) {
    CODE;
    return 0;
}
```


#### typedef


```c
typedef DEFINITION IDENTIFIER;
```
```c
typedef unsigned char byte;
```


#### struct


```c
struct NAME {
    ELEMENTS;
} [VARIABLE_NAME];
```

common combination
```c
typedef struct [STRUCT_NAME] {
    ELEMENTS;
} IDENTIFIER;
```


```c
union NAME {
    ELEMENTS;
} [VARIABLE_NAME];
```



