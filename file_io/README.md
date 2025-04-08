# 0x15. File I/O

This C project focuses on file manipulation using POSIX system calls (`open`, `read`, `write`, `close`). The main objective is to implement functions that can read the content of a file and display it to the standard output.

---

## 📚 General

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names:
  - `STDIN_FILENO` (0) – Standard input (keyboard)
  - `STDOUT_FILENO` (1) – Standard output (screen)
  - `STDERR_FILENO` (2) – Standard error
- How to use the I/O system calls: `open`, `close`, `read`, and `write`
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- What are file permissions and how to set them when creating a file using `open`
- What is a system call
- What is the difference between a function and a system call

---

## ✅ Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the flags:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89

  -All files must end with a new line
  - code must follow the betty coding style. it will be checked using betty-style.pl
  and betty-doc.pl
  -No global variables allowed
  -No more than 5 funcitons per file
  -Only the following standard library function are allowed:
  -malloc
  -free
  -exit
  -The following functions are not allowed:
  -printf
  -puts
  -calloc
  -realloc
  -Allowed system calls:-read(),write(),open(),close()

  -You are allowed to use (_putchar)
  -The mai.c -files shown in the exmaples are only for testing my functions locally.
  
  -All my prototypes and functions need header file named (main.h)
  
  -all my header files must be include guarded
  -#STDDEF MAIN_H
  -#STDIO MAIN_H
  -#ENDIF
  '''
/*Concepts Learned*/

-File manipulation usinf POSIX system calls
-File descriptors and their roles
-Reading from and writing to files
-Error handling with open,read,write.
-Using malloc and free for dynamic memory
-Best practices using POSIX symbolic constants (STDIN_FILENO, etc.)
-Differences between standard library funcitons and systems calls.




