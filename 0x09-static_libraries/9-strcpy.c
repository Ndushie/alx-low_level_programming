/**
 * _strcpy - Copies the string pointed to by src to dest + the null byte
 *
 * @src: The source string
 *
 * @dest: The destination buffer
 *
 * Return: the string pointed to by src, to dest
 */
char *_strcpy(char *dest, char *src)
{

	char *dest_first = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_first);
}
