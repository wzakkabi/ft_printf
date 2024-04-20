# ft_printf

## Description
`ft_printf` is a custom implementation of the standard C library function `printf`. This project aims to replicate the functionality of `printf` while offering additional features and optimizations.

## Features
- Supports basic conversion specifiers such as `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%p`.
- Handles flags such as `0`, `-`, `+`, `space`, and `#`.
- Supports field width and precision.
- Handles length modifiers like `h`, `hh`, `l`, `ll`, and `L`.
- Handles conversion specifiers for custom data types.
- Customizable error handling and return values.

## Getting Started
To use `ft_printf` in your project, follow these steps:

1. Clone the repository to your local machine:
https://github.com/wzakkabi/ft_printf.git

2. Compile the library by running:
make

3. Link the compiled library (`libftprintf.a`) to your project's build process.

4. Include the `ft_printf.h` header file in your source code to access the library's functions.

## Usage
Here's an example demonstrating the usage of `ft_printf`:

```c
#include "ft_printf.h"

int main() {
 ft_printf("Hello, %s!\n", "world");
 return 0;
}
```
## Contact
If you have any questions, suggestions, or issues regarding ft_printf, feel free to contact [wzakkabi@gmail.com] or open an issue on the GitHub repository.

The ft_printf project was created by [walid zakkabi]. Special thanks to [(https://www.1337.ma/en/) and (https://www.42network.org)] for their contributions and support.
