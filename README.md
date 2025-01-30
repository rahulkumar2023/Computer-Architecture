Computer Architecture Repository 

---

### **README.md**  

```md
# Word Count & Two's Complement Subtraction Checker

## 📌 Overview  
This repository contains two C programs:  

1. **`wordcount.c`** – A program that counts the number of lines, words, and characters from standard input, mimicking the Unix `wc` command.  
2. **`twos_complement_subtraction.c`** – A function that checks if subtracting two integers in two’s complement representation causes overflow.  

---

## 📂 Files  

### 📄 `wordcount.c`  
🔹 **Description**:  
This program reads text from standard input and counts:
- **Lines** (`\n`)
- **Words** (separated by spaces, tabs, or newlines)
- **Characters** (including spaces and newlines)

🔹 **Compilation & Execution**:  
```sh
gcc -o wordcount wordcount.c
./wordcount
```
👉 **Manual Input**: Type input, then press `Ctrl+D` (Linux/Mac) or `Ctrl+Z` (Windows) to signal EOF.  
👉 **File Input**:  
```sh
./wordcount < input.txt
```

🔹 **Example Usage**:  
#### **Input:**
```
hello world
This is a test
```
#### **Output:**
```
Number of lines: 2
Number of words: 5
Number of characters: 24
```

---

### 📄 `twos_complement_subtraction.c`  
🔹 **Description**:  
This program checks whether subtracting two integers in **two’s complement** representation causes **overflow**.  

🔹 **Function Prototype**:  
```c
int subtract2sc_issafe(int x, int y);
```
- **Returns `1`** → If subtraction is **safe** (no overflow).  
- **Returns `0`** → If subtraction **overflows**.  

🔹 **Compilation & Execution**:  
```sh
gcc -o test_program twos_complement_subtraction.c main.c
./test_program
```
(Note: A separate `main.c` file should be used for testing.)  

🔹 **Example Test (`main.c`)**:  
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

🔹 **Expected Output**:  
```
Overflow detected
```

---

## ⚙️ Setup & Installation  
1️⃣ Clone the repository:  
```sh
git clone https://github.com/yourusername/your-repo-name.git
cd your-repo-name
```
2️⃣ Compile and run the programs following the instructions in each section above.  

---

## 📜 License  
This project is released under the MIT License.  

---

## 👨‍💻 Author  
[Your Name]  
(GitHub: [yourusername](https://github.com/yourusername))  
```

---

### **📌 How to Add This README to GitHub**
1. **Create the file** in your repository:
   ```sh
   nano README.md
   ```
2. **Paste the content** and save (`CTRL+X`, then `Y`, then `Enter`).
3. **Commit and push it to GitHub**:
   ```sh
   git add README.md
   git commit -m "Added README for word count and two's complement checker"
   git push origin main
   ```

---

This README follows a structured format with clear sections for **Overview, Files, Setup, and Example Usage.** Let me know if you need further customizations! 🚀
