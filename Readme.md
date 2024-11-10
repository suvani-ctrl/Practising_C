# File Handling in C: Writing to a File ✍️📄

This C program demonstrates how to create a file, write some data into it, and handle basic file operations such as error handling using system calls. The program uses `open()` to create or open a file and `write()` to write data to that file. 💻

## 📖 Overview
In this program, we will:
1. **Create/Open a file** using the `open()` system call.
2. **Write data** (a string in this case) to the file using the `write()` system call.
3. **Handle errors** properly to ensure smooth execution.

The program will create a file named `data.txt` and write the message "Hello suvani!" into it. If any error occurs while creating the file or writing to it, it will be reported with an error message. 🛠️

## 🚀 How It Works
- We define a character array `data[]` with the message "Hello suvani!".
- The `createFile()` function handles opening or creating the file with permissions `0644` (read/write for the owner, read-only for the group and others). If the file creation fails, it returns `-1` and prints an error message.
- The program writes the data in the `data[]` array to `data.txt` using `write()`. It ensures that the null terminator is excluded from the write operation.
- Once the data is written, the file is closed using `close()`. 📂

## 💡 Key Concepts
1. **System Calls**: This program utilizes low-level system calls (`open()` and `write()`) to work with files directly.
2. **File Permissions**: We specify `0644` for the file permissions, ensuring that the file is readable and writable by the owner but only readable by others.
3. **Error Handling**: The program checks the return values of `open()` and `write()`. If either of them fails, an appropriate error message is printed using `perror()`. 🚨

💻 Explanation:
createFile(): This function tries to create a file named data.txt. If it already exists, it will be truncated to 0 length. The function checks if the file creation was successful by checking the return value of open().
write(): This writes the data from the data[] array (excluding the null terminator) to the file.
Error handling: We ensure that any error in file creation or writing is caught and reported using perror().

📝 Steps to Run the Program
Clone or Copy the Code: Copy the C code into a .c file (e.g., file_writer.c).
Compile the code using a C compiler like gcc:

gcc file_writer.c -o file_writer

Run the Program:

./file_writer

Check the File: After running the program, you should find a data.txt file created in the current directory, containing the text:

Hello suvani!

🔍 Error Handling
If there is an issue with file creation or writing, you'll see an error message printed, such as:

"Error while making a file !"
"(+) Error Occured ! Could not write !"


