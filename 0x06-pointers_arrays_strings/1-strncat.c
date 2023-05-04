/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 *
 * @dest: The destination string.
 *
 * @src: The source string to be appended.
 *
 * @n: The maximum number of bytes to be copied from src(input value)
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int a = 0;

	while (dest[dest_length] != '\0')
	dest_length++;

	while (src[a] != '\0' && a < n)
	{
	dest[dest_length + a] = src[a];
	a++;
	}
	dest[dest_length + a] = '\0';
	return (dest);
}
