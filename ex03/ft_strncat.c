char *ft_strncat(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	i++;
	while (src[i] != 0 && (unsigned int)i < n)
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}