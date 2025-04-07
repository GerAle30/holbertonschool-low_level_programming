# 0x15. File I/O

Este proyecto en lenguaje C explora el manejo de archivos utilizando llamadas al sistema POSIX (`open`, `read`, `write`, `close`). El objetivo principal es implementar funciones que puedan leer el contenido de un archivo y mostrarlo en la salida estándar.

---

## 📚 General

- Buscar la fuente correcta de información en línea.
- Cómo crear, abrir, cerrar, leer y escribir archivos.
- Qué son los *file descriptors*.
- Cuáles son los 3 *file descriptors* estándar, cuál es su propósito y cuáles son sus nombres en POSIX:
  - `STDIN_FILENO` (0) – Entrada estándar (teclado)
  - `STDOUT_FILENO` (1) – Salida estándar (pantalla)
  - `STDERR_FILENO` (2) – Salida de errores
- Cómo usar las llamadas al sistema I/O: `open`, `close`, `read` y `write`.
- Qué son y cómo se usan las banderas `O_RDONLY`, `O_WRONLY`, `O_RDWR`.
- Qué son los permisos de archivo y cómo establecerlos al crear un archivo con `open`.
- Qué es una llamada al sistema (*system call*).
- Diferencia entre una función y una llamada al sistema.

---

## ✅ Requirements

### General

- Editores permitidos: `vi`, `vim`, `emacs`.
- Todos los archivos serán compilados en Ubuntu 20.04 LTS usando `gcc` con las opciones:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89

  Autor:
  Alejandro J. Garcia Sanchez

