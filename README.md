# 42-Libft
This project is about coding a C library. It contains a lot of general purpose functions
![Screenshot](result.png)
# Makefile
|Command|Action|
|-------|------|
|`make`|Compiles .c files and creates **libft.a** library|
|`make clean`|Deletes .o files|
|`make fclean`|Deletes .o files and **libft.a** library|
|`make re`|Rebuilds the library|
# Additional functions
| Function       	|  ft_substr  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_substr(char const *s, unsigned int start, size_t len); |
| Parameters     	| #1.  The string from which to create the substring <br/> #2.  The start index of the substring in the string ’s’. <br/> #3.  The maximum length of the  substring. |
| Return value   	| The substring.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.	|

----------

| Function       	|  ft_strjoin  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strjoin(char const *s1, char const *s2); |
| Parameters     	| #1.  The prefix string. <br/> #2.  The suffix string. |
| Return value   	| The new string.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.	|

----------

| Function       	|  ft_strtrim  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strtrim(char const *s1, char const *set); |
| Parameters     	| #1.  The string to be trimmed. <br/> #2.  The reference set of characters to trim. |
| Return value   	| The trimmed string.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.	|


----------

| Function       	|  ft_split  |
|----------------	|---------------------------------------	|
| Prototype      	| char **ft_split(char const *s, char c); |
| Parameters     	| #1.  The string to be split. <br/> #2.  The delimiter character. |
| Return value   	| The array of new strings resulting from the split. NULL if the allocation fails. |
| External functs | malloc, free |
| Description    	| Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must be ended by a NULL pointer.	|

----------


| Function       	|  ft_itoa  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_itoa(int n); |
| Parameters     	| #1.  the integer to convert. |
| Return value   	| The string representing the integer.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.	|

----------


| Function       	|  ft_strmapi  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); |
| Parameters     	| #1.  The string on which to iterate. <br/> #2.  The function to apply to each character. |
| Return value   	| The string created from the successive applications of ’f’.  Returns NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.	|

----------

| Function       	|  ft_putchar_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putchar_fd(char c, int fd); |
| Parameters     	| #1.  The character to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the character ’c’ to the given file descriptor.	|

----------

| Function       	|  ft_putstr_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putstr_fd(char *s, int fd); |
| Parameters     	| #1.  The string to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the string ’s’ to the given file descriptor.	|

----------

| Function       	|  ft_putendl_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putendl_fd(char *s, int fd); |
| Parameters     	| #1.  The string to output. <br/> #2.  The file descriptor on which to write.. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the string ’s’ to the given file descriptor, followed by a newline.	|

----------

| Function       	|  ft_putnbr_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putnbr_fd(int n, int fd); |
| Parameters     	| #1.  The integer to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the integer ’n’ to the given file descriptor.	|
# Bonus functions
For this part we implemented a struct defining the well-known linked lists
```C
typedef	struct	s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;
```

Bonus functions to implement

| Bonus Function | Description |
| :------------: | :---------: |
| ``ft_lstnew`` | Creates new node allocating with ``malloc`` |
| ``ft_lstadd_front`` | Adds new node at the beginning of the linked list |
| ``ft_lstsize`` | Returns number of elements of linked list |
| ``ft_lstlast`` | Retrieves last node of the list |
| ``ft_lstadd_back`` | Adds new node at the end of the linked list |
| ``ft_lstdelone`` | Deletes, frees, and applies function del to content of a given node |
| ``ft_lstclear`` | Deletes a given element and every element after that |
| ``ft_lstiter`` | Applies a function to the content of every node of the linked list |
| ``ft_lstmap`` | Applies function to a copy of the list, freeing when necessary |
