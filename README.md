# MOnty Interpreter

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Getting Started](#getting-started)
	- [Prerequisites](#prerequisities)
	- [Installation](#installation)
- [Usage](#usage)
- [Monty Language](#monty-language)
- [Supported Opcodes](#supported-opcodes)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgments)


## Description

The Monty Interpreter is a simple scripting language interpreter for Monty ByteCodes files.
It allows you to execute Monty programs by reading Monty byte code files and performing various stack operations.
This project is implemented in C and adheres to the specified Monty language standards.

##
- Execute Monty programs from Monty byte code files.
- Implement various stack operations such as push, pop, swap, add, sub, div, mul, mod, and more.
- Print stack contents and error messages.
- Supports comments in Monty programs.

## Getting Started

### Prerequisites

- C compiler (gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty)

### Installation
1. Clone the repository:

```bash
git clone https://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@github.com/ohenebappiagyei/monty.git
```

2. Enter the directory and compile
``` cd monty```
```gcc ...```

3. To run the program, use ```./monty program.m```. NB: Ensure the file is in the same directory. Else use: ```./monty path/to/to/monty_program.m```

Supported Opcodes
The Monty Interpreter supports various opcodes, including:

push: Pushes an integer onto the stack.
pop: Removes the top element from the stack.
swap: Swaps the top two elements of the stack.
add: Adds the top two elements and pushes the result onto the stack.
sub: Subtracts the top element from the second top element and pushes the result.
div: Divides the second top element by the top element and pushes the result.
mul: Multiplies the top two elements and pushes the result.
mod: Computes the remainder of the division of the second top element by the top element.
pall: Prints all the values on the stack.
pint: Prints the value at the top of the stack.
nop: No operation, does nothing.
pchar: Prints the character at the top of the stack.
pstr: Prints the string starting at the top of the stack.
rotl: Rotates the stack to the top.
For a full list of supported opcodes and their usage, refer to the source code and documentation.

Contributing
Contributions are welcome! If you'd like to contribute to this project, please follow the guidelines in CONTRIBUTING.md.

License
This project is licensed under the MIT License.

Acknowledgments
This project was inpired by ALX and its unique way of teaching.
Special thanks to the ALX community for feedback and support.
