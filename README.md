# PSU_2016_my_printf_bootstrap
Library that stores the implementation of sum_stdarg and disp_stdarg in C, based from the C function printf for the EPITECH module "B1 - Unix Programming".

Installation
-----------

To install the library just type:

```C
make
```

You will have your new library called libmy.a.

Usage
-----

You have to compile the library with your program adding:

```C
gcc <your program>.c -L path/to/library -lmy -I path/to/header
```

And add the header for the library in your program:

```C
#include "my.h"
```

Examples
-----

```C
sum_stdarg(0, 3, 1, 2, 3);
```

Result : 6

```C
sum_stdarg(1, 5, "Hello", "a", "toto", "", "plop");
```

Result : 14

```C
disp_stdarg("csiis", 'X', "hi", 10, -3, "plop");
```

Result:

```C
X
hi
10
-3
plop
```