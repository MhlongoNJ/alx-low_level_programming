#include "main.h"

/**
* _strlen - returns the length of a string
* @s: the string whose length to check
*
* Return: integer lenght of a string
*/

int _strlen(char *s)

{
int i = 0;

if (!s)
return (0);

while (*s++)
i++;
return (i);
}

/**
* append_text_to_file - a function that appends text at the end of a file.
* @filename: where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file, Do not create the file if it does not exist, If filename is NULL return -1
* @text_content: text to write
*
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)

{
int fd;
ssize_t bytes = 0, len = _strlen(text_content);

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (len)
bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
