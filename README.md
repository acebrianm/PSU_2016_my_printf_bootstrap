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
gcc <your program>.c -L path/to/library -lmy
```

And add the prototypes for the functions in your program (as of now I don't supply a header):

```C
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);
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