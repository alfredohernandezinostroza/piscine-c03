char *ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	i++;
	while (src[i] != 0)
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}