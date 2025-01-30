### **Computer Architecture Repository**

```md
# Word Count & Two's Complement Subtraction Checker

## Overview  
This repository contains two C programs:  

1. `wordcount.c` – A program that counts the number of lines, words, and characters from standard input, similar to the Unix `wc` command.  
2. `twos_complement_subtraction.c` – A function that checks if subtracting two integers in two’s complement representation results in overflow.  

## Files  

### `wordcount.c`  
Description:
This program reads text input from the keyboard or a file and counts:  
- The number of lines (`\n`)  
- The number of words (separated by spaces, tabs, or newlines)  
- The number of characters (including spaces and newlines)  

Compilation & Execution:  
```sh
gcc -o wordcount wordcount.c
./wordcount
```
To enter input manually, type text and press `Ctrl+D` (Linux/Mac) or `Ctrl+Z` (Windows) to signal EOF.  
To run it with a file:  
```sh
./wordcount < input.txt
```

**Example Input:**
```
hello world
This is a test
```
**Example Output:**
```
Number of lines: 2
Number of words: 5
Number of characters: 24
```

---

### `twos_complement_subtraction.c`  
**Description:**  
This program checks whether subtracting two integers causes overflow in **two’s complement** representation.  

**Function Prototype:**  
```c
int subtract2sc_issafe(int x, int y);
```
- Returns `1` if subtraction is safe (no overflow).  
- Returns `0` if subtraction results in overflow.  

**Compilation & Execution:**  
```sh
gcc -o test_program twos_complement_subtraction.c main.c
./test_program
```
(*You need a separate `main.c` file to test the function.*)  

**Example Test (`main.c`):**  
```c
#include <stdio.h>

int subtract2sc_issafe(int x, int y);

int main() {
    int x = 2147483647; // INT_MAX
    int y = -1;

    if (subtract2sc_issafe(x, y)) {
        printf("Safe subtraction\n");
    } else {
        printf("Overflow detected\n");
    }

    return 0;
}
```

**Expected Output:**
```
Overflow detected
```

---

## How to Use  
1. Clone the repository:  
```sh
git clone https://github.com/yourusername/your-repo-name.git
cd your-repo-name
```
2. Compile and run the programs following the instructions above.  

---

## License  
This project is released under the MIT License.  

---

## Author  
Rahul Kumar
