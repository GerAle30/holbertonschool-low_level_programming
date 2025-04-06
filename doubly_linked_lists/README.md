# Doubly Linked Lists"

## 📚 General

This project is focused on understanding and working with **doubly linked lists** in C.

### What is a doubly linked list?

A doubly linked list is a type of linked list in which each node contains:
- A data field
- A pointer to the **next** node
- A pointer to the **previous** node

This allows traversal of the list in **both directions**, which is more flexible than singly linked lists.

### How to use doubly linked lists

To use a doubly linked list:
- Create a struct with `prev`, `next`, and data fields.
- Dynamically allocate memory for each new node using `malloc`.
- Carefully update the `next` and `prev` pointers when inserting or removing nodes.

### Learning to learn

As part of this project, we are encouraged to find and understand 
information from reliable sources on our own, instead 
of relying on direct help.

---

## ✅ Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 20.04 LTS** using **gcc** and **C standard**
- All files must end with a new line
- A `README.md` file is mandatory at the root of the project folder
- Code must follow the **Betty coding style**  
  Checked using: `betty-style.pl` and `betty-doc.pl`
- No use of global variables
- Maximum of **5 functions per file**
- Only the following C standard library functions are allowed:  
  `malloc`, `free`, `printf`, `exit`
- Sample `main.c` files provided are for testing purposes only; they **should not be pushed**
- All function prototypes must be included in the header file: `lists.h`
- The header file must be **include guarded**

---

---

## 🧠 Author
Alejandro J. garcia Sanchez

