# libft
 Create few functions of the C standard library

 <img width="1079" alt="image" src="https://github.com/leebo155/libft/assets/81127600/a0fd8f40-2224-4ac4-bcaa-da8e878a70f9">

## Introduction
* This project is about understanding the way these functions work, implementing and learning to use them.
* The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.
* The libft also contains functions that are not included in libc.

## Funtions
| Name | Return | Parameters | Description |
| ---- | ------ | ---------- | ----------- |
| ft_atoi |  |  |  |
| ft_bzero |  |  |  |
| ft_calloc |  |  |  |
| ft_isalnum |  |  |  |
| ft_isalpha |  |  |  |
| ft_isascii |  |  |  |
| ft_isdigit |  |  |  |
| ft_isprint |  |  |  |
| ft_memchr |  |  |  |
| ft_memcmp |  |  |  |
| ft_memcpy |  |  |  |
| ft_memmove |  |  |  |
| ft_memset |  |  |  |
| ft_strchr |  |  |  |
| ft_strdup |  |  |  |
| ft_strjoin | char * | char const *s1: The prefix string.<br><br>char const *s2: The suffix string. | Allocates with malloc and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
| ft_strlcat |  |  |  |
| ft_strlcpy |  |  |  |
| ft_strlen |  |  |  |
| ft_strncmp |  |  |  |
| ft_strnstr |  |  |  |
| ft_strrchr |  |  |  |
| ft_strtrim | char * | char const *s1: The string to be trimmed.<br><br>char const *set: The reference set of characters to trim. | Allocates with malloc and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
| ft_substr | char * | char const s*: The string from which to create the substring.<br><br>unsigned int start: The start index of the substring in the string ’s’.<br><br>size_t len: The maximum length of the substring. | Allocates with malloc and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
| ft_tolower |  |  |  |
| ft_toupper |  |  |  |
| ft_split | char ** | char const *s: The string to be split.<br><br>char c: The delimiter character. | Allocates with malloc and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer. |
| ft_itoa | char * | int n: the integer to convert. | Allocates with malloc and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| ft_strmapi | char * | char const *s: The string on which to iterate.<br><br>char (*f)(unsigned int, char): The function to apply to each character. | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string with malloc resulting from successive applications of ’f’. |
| ft_striteri | void | char *s: The string on which to iterate.<br><br>void (*f)(unsigned int, char *): The function to apply to each character. | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary. |
| ft_putchar_fd | void | char c: The character to output.<br><br>int fd: The file descriptor on which to write. | Outputs the character ’c’ to the given file descriptor. |
| ft_putstr_fd | void | char *s: The string to output.<br><br>int fd: The file descriptor on which to write. | Outputs the string ’s’ to the given file descriptor. |
| ft_putendl_fd | void | char *s: The string to output.<br><br>int fd: The file descriptor on which to write. | Outputs the string ’s’ to the given file descriptor followed by a newline. |
| ft_putnbr_fd | void | int n: The integer to output.<br><br>int fd: The file descriptor on which to write. | Outputs the integer ’n’ to the given file descriptor. |
| ft_lstnew | t_list * | void *content: The content to create the node with. | Allocates with malloc and returns a new node. The member variable content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |
| ft_lstadd_front | void | t_list **lst: The address of a pointer to the first link of a list.<br><br>t_list *new: The address of a pointer to the node to be added to the list. | Adds the node ’new’ at the beginning of the list. |
| ft_lstsize | int | t_list *lst: The beginning of the list. | Counts the number of nodes in a list. |
| ft_lstlast | t_list * | t_list *lst: The beginning of the list. | Returns the last node of the list. |
| ft_lstadd_back | void | t_list **lst: The address of a pointer to the first link of a list.<br><br>t_list *new: The address of a pointer to the node to be added to the list. | Description Adds the node ’new’ at the end of the list. |
| ft_lstdelone | void | t_list *lst: The node to free.<br><br>void (*del)(void *): The address of the function used to delete the content. | Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed. |
| ft_lstclear | void | t_list **lst: The address of a pointer to a node.<br><br>void (*del)(void *): The address of the function used to delete the content of the node. | Deletes and frees the given node and every successor of that node, using the function ’del’ and free. Finally, the pointer to the list must be set to NULL. |
| ft_lstiter | void | t_list *lst: The address of a pointer to a node.<br><br>void (*f)(void *): The address of the function used to iterate on the list. | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. |
| ft_lstmap | t_list * | t_list *lst: The address of a pointer to a node.<br><br>void *(*f)(void *): The address of the function used to iterate on the list.<br><br>void (*del)(void *): The address of the function used to delete the content of a node if needed. | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed. |
