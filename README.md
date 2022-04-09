<h1 align="center">
	Libft
</h1>

<p align="center">
	<img src="https://user-images.githubusercontent.com/91064070/147372964-01fcc9aa-bf79-4870-8d4b-06f502f86a4e.png?raw=true" alt="Sublime's custom image"/>
</p>

## Result

![](result.png)

## Functions List

### Standard Library Functions

* [`ft_atoi`](ft_atoi.c)			converts an ASCII string to an integer.
* [`ft_bzero`](ft_bzero.c)			writes zeros to the first n bytes of a memory area.
* [`ft_calloc`](ft_calloc.c)			allocates a specified amount of memory and initializes it to zero.
* [`ft_isalnum`](ft_isalnum.c)			tests if a character is alphanumeric.
* [`ft_isalpha`](ft_isalpha.c)			tests if a character is alphabetic.
* [`ft_isascii`](ft_isascii.c)			tests if a character belongs to the ASCII character set.
* [`ft_isdigit`](ft_isdigit.c)			tests if a character is a digit.
* [`ft_isprint`](ft_isprint.c)			tests if a character is printable.
* [`ft_memchr`](ft_memchr.c)			finds the first occurrence of a character in the first n bytes of a memory area.
* [`ft_memcmp`](ft_memcmp.c)			compares the first n bytes of two memory areas.
* [`ft_tolower`](ft_tolower.c)			converts uppercase letters to lowercase.
* [`ft_toupper`](ft_toupper.c)			converts lowercase letters to uppercase.
* [`ft_memcpy`](ft_memcpy.c)			copies the first n bytes of a memory area to another memory area while not allowing overflow.
* [`ft_memmove`](ft_memmove.c)			copies the first n bytes of a memory area to another memory area while handling overflow.
* [`ft_memset`](ft_memset.c)			fills the first n bytes of a memory area with a character.
* [`ft_strchr`](ft_strchr.c)			locates the first occurence of a character in a string.
* [`ft_strdup`](ft_strdup.c)			duplicates a string into a newly created string.
* [`ft_strlcat`](ft_strlcat.c)			appends a string to the end of another string while limiting the number of appended characters.
* [`ft_strlcpy`](ft_strlcpy.c)			copies a string to another string while limiting the number of copied characters.
* [`ft_strlen`](ft_strlen.c)			returns the length of a string.
* [`ft_strncmp`](ft_strncmp.c) 			compares the first n bytes of two strings.
* [`ft_strnstr`](ft_strnstr.c)			locates a substring in a string while limiting the number of searched characters.
* [`ft_strrchr`](ft_strrchr.c)			locates the last occurence of a character in a string.

### Non-Standard Functions

* [`ft_itoa`](ft_itoa.c)			converts an integer to an ASCII string.
* [`ft_putchar_fd`](ft_putchar_fd.c)		outputs a character to a given file.
* [`ft_putendl_fd`](ft_putendl_fd.c)		outputs a string to a given file with a newline.
* [`ft_putnbr_fd`](ft_putnbr_fd.c)		outputs an integer to a given file.
* [`ft_putstr_fd`](ft_putstr_fd.c)		outputs a string to a given file.
* [`ft_split`](ft_split.c)			splits a string using a separator and stores the result into an array of strings.
* [`ft_striteri`](ft_strdup.c)			modifies a string with a specified function.
* [`ft_strjoin`](ft_strjoin.c)			concatenates two strings into a newly created string.
* [`ft_strmapi`](ft_strmapi.c)			creates a new string from modifying a string with a specified function.
* [`ft_strtrim`](ft_strtrim.c)			trimes the beginning and the end of a string with the specified characters.
* [`ft_substr`](ft_substr.c)			extracts a substring from a string.

### Linked List Functions (Bonus)

* [`ft_lstadd_back`](ft_lstadd_back_bonus.c)	adds a new element at the end of list.
* [`ft_lstadd_front`](ft_lstadd_front_bonus.c)	adds a new element at the beginning of list.
* [`ft_lstclear`](ft_lstclear_bonus.c)		deletes a sequence of elements of a list starting from a given element.
* [`ft_lstdelone`](ft_lstdelone_bonus.c)	deletes an element from a list.
* [`ft_lstiter`](ft_lstiter_bonus.c)		applies a function to all elements of a list.
* [`ft_lstlast`](ft_lstlast_bonus.c)		returns the last element of list.
* [`ft_lstmap`](ft_lstmap_bonus.c)		applies a function to all elements of a list and returns a newly created list.
* [`ft_lstnew`](ft_lstnew_bonus.c)		initialises a new list.
* [`ft_lstsize`](ft_lstsize_bonus.c)		counts the elements of a list.

## Usage

The [`Makefile`](Makefile) will generate an archive file named `libft.a` which is a static library of object `*.o` files.

Clone this repository and access its folder:

```shell
git clone https://github.com/ddupont06/42-Libft.git && cd 42-Libft
```

To compile the mandatory functions run:

```shell
make
```

To compile the bonus functions run:

```shell
make bonus
```

To use the Libft library in your code, include its header in your C projects:

```C
#include "libft.h"
```

And compile your C project with the `libft.a` file:

```shell
gcc <projet.c> libft.a -o <project_name>
```

To delete all the objet `*.o` files after compilation run:

```shell
make clean
```

To delete all the objet `*.o` files and the `libft.a` file after compilation run:

```shell
make fclean
```
