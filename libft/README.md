*This project has been created as part of the 42 curriculum by dinbarbo.*

# Libft

## Description

Libft is the first project of the 42 curriculum. Its goal is to build, from
scratch, a personal C library (`libft.a`) that reimplements a set of standard
libc functions and adds extra general-purpose utilities for strings, memory,
file descriptors and linked lists. The library is meant to be reused in all
later C projects of the curriculum.

The library is organised in three parts, as defined by the subject.

### Part 1 - Libc functions

Reimplementations of libc functions with the same prototypes and behaviour as
the originals, prefixed with `ft_`. They do not rely on any external function
(except `malloc` for `ft_calloc` and `ft_strdup`).

| Category  | Functions |
|-----------|-----------|
| Character | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| String    | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi` |
| Memory    | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |

### Part 2 - Additional functions

Functions that are not in the libc, or that exist in a different form.

| Function | Description |
|----------|-------------|
| `ft_substr` | Allocates and returns a substring of `s`, starting at index `start`, with at most `len` characters |
| `ft_strjoin` | Allocates and returns the concatenation of `s1` and `s2` |
| `ft_strtrim` | Allocates and returns a copy of `s1` with the characters in `set` removed from both ends |
| `ft_split` | Splits `s` using the delimiter `c` and returns a NULL-terminated array of newly allocated strings |
| `ft_itoa` | Allocates and returns the string representation of an integer (negative numbers included) |
| `ft_strmapi` | Applies `f(index, char)` to each character and returns a new string with the results |
| `ft_striteri` | Applies `f(index, &char)` to each character of `s`, modifying it in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Part 3 - Linked lists

Functions to manipulate singly linked lists built on the following structure,
declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new node with the given content; `next` is `NULL` |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the nodes of the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees one node's content with `del`, then the node itself (not the next one) |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL` |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Builds a new list by applying a function to each node's content, using `del` to clean up on failure |

### Technical choices

- Written in C, following the 42 Norm.
- No global variables; helper functions are `static` and local to their file.
- Compiled with `cc -Wall -Wextra -Werror`.
- The archive is created with `ar` (`libtool` is not used) and placed at the
  root of the repository, alongside `libft.h` and all the `ft_*.c` files.
- All heap memory allocated by the library can be released by the caller with
  `free` (and, for lists, with `ft_lstclear` / `ft_lstdelone`).

## Instructions

### Compilation

```sh
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean + make
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o app
```

### Norm check

```sh
norminette libft.h ft_*.c
```

## Resources

- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [Norminette, the 42 Norm checker](https://github.com/42School/norminette)
