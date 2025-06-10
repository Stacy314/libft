# 🧱 Libft - Your First C Library

This project is part of the 42 curriculum and consists of creating a custom implementation of standard C library functions. It provides a strong foundation in memory management, string handling, linked lists, and writing clean C code following strict rules (Norminette).

## 📚 Project Overview

- Language: C  
- Compiler flags: `-Wall -Wextra -Werror`  
- Output: `libft.a` static library  
- Makefile rules: `all`, `clean`, `fclean`, `re`, `bonus`  

## ✅ Mandatory Part

Re-implementation of commonly used C standard functions with the `ft_` prefix:

### Libc Functions
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String and memory: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`
- Case conversion: `ft_toupper`, `ft_tolower`
- String search and compare: `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_memchr`, `ft_memcmp`
- Conversion: `ft_atoi`
- Memory allocation: `ft_calloc`, `ft_strdup`

### Additional Functions
- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- Conversion: `ft_itoa`
- Functional string mapping: `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## 🏆 Bonus Part

Includes a full set of singly linked list utilities using the following structure:

```c
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
```
Implemented Bonus Functions
- ft_lstnew – Create a new list node

- ft_lstadd_front – Add node at the front

- ft_lstsize – Count nodes in a list

- ft_lstlast – Get last node

- ft_lstadd_back – Add node at the end

- ft_lstdelone – Delete one node

- ft_lstclear – Clear entire list

- ft_lstiter – Apply a function to each content

- ft_lstmap – Map a function over list contents and return a new list

## 🔧 Compilation
To compile the library:

```bash
make        # Builds mandatory part
make bonus  # Adds bonus functions to libft.a
```
To clean up:

```bash
make clean      # Removes object files
make fclean     # Removes object files and the library
make re         # Rebuilds everything
```
## 📌 Note
- No memory leaks allowed

- No forbidden functions used

- All functions comply with the 42 Norm

- No libtool, global variables, or unused files
