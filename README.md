# 42 C Piscine

A collection of projects from the 42 C Piscine focused on low-level system programming, memory management, and functional programming patterns in C. This repository serves as a personal portfolio of my progression through the intensive 42 Piscine curriculum. Note that I remade all the assignments from C00 to C13 after my experience in the piscine, but I had only validated projects up to the C06 list, so the later projects weren't graded by the moulinette or reviewed by other students.

These projects cover an extensive range of topics from pointers, arrays and system calls to recursion, string manipulation, linked lists and binary trees, while also addressing more general concepts like modularization, file organization, header and makefile.

## 🚀 Featured Project: ft_hexdump

My favorite project in this series is a recreation of the hexdump utility. It mimics the system command's behavior, specifically the canonical hex + ASCII display (-C) and the default little-endian short display.

### Key Learning Outcomes:

**• Advanced File I/O:** Managing multiple file descriptors and handling stdin when no arguments are provided.

**• Buffer Management:** Efficiently reading data in fixed chunks (16 bytes) and handling partial reads at the end of files.

**• System Logic:** Implementing the "Squeeze" feature (*) to skip duplicate lines of data.

**• Architecture:** Using a centralized t_stream struct to maintain state (offset, file pointers, and flags) across multiple functions while staying within the 42 Norm.

## 🛠 Other examples

### Functional Programming in C

In the C11 module, I explored how to pass behavior as data using Function Pointers.

**• ft_foreach:** Iterates through an array to apply a "side-effect" function (e.g., printing each element).

**• ft_map:** A higher-order function that allocates a new array and fills it with the result of a transformation function applied to an input array.

**• ft_any & ft_count_if:** Pattern matching and counting based on a predicate function passed at runtime.

**• ft_is_sort:** Logic to determine if an array is sorted in either ascending or descending order by comparing elements via a pointer to a comparison function.

**• do-op:** Developed a command-line calculator that uses an Array of Function Pointers to dispatch mathematical operations.

## 📋 Technical Constraints (The 42 Norm)

All code in this repository adheres to the **42 Norm**, which imposes strict formatting and logic constraints to encourage clean, modular code:

• Functions are limited to **25 lines** maximum.

• Variables must be declared at the top of the function and separated from assignments.

• No more than **4 arguments** per function.

• No more than **5 functions** per file.

• Only allowed system calls (e.g., write, open, read, close, malloc, free).

## 🖥️ How to Use

Each of the bigger project includes a Makefile for easy compilation with the standard flags: -Wall -Wextra -Werror.

### Example for ft_hexdump
```shell
make
./ft_hexdump -C file1.txt file2.txt
```

For earlier projects up to C05 which are just functions, there's usually a comment at the end of the source file with a main for testing. Just uncomment it and compile the .c file.

### Example for ft_ten_queens_puzzle (after uncommenting main)
```shell
cc -Wall -Wextra -Werror ft_ten_queens_puzzle.c
./a.out
```
## Tips for Students
If you're going through the Piscine right now:

**1. Check everything before submitting:** Always make sure everything in the repository is correct before submitting a project. To be extra sure, I recommend cloning the repository again right before submitting to see exactly what the evaluators will get when they clone it in their machines. Check if there are no extra files and also remember to run norminette for all the files.

**2. Modularize:** If a function is hitting 25 lines, it's a sign that your logic should be split. You can and should make helper functions for your projects, for example, separate "how to print" from "what to read", just remember the norminette limit of 5 functions per file.

**3. The Struct is your friend:** In the more advanced projects like ft_hexdump, passing a struct pointer allows you to bypass the "max 4 arguments" rule while keeping your state organized.

**4. Memory Safety:** Always free what you malloc in your main, even if the exercise doesn't explicitly ask for it!
