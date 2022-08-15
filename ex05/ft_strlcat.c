#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int dest_size)
{
	int	max_bytes_to_copy;
	int	real_dest_size;
	int	src_size;
	int	i;

	src_size = 0;
	i = 0;
	while (src[i] != 0)
	{
		i++;
		src_size++;
	}
	printf("src size: %d\n", src_size);
	real_dest_size = 0;
	while (dest[i] != 0)
	{
		real_dest_size++;
	}
	printf("dest size: %d\n", real_dest_size);
	max_bytes_to_copy =  ((int)dest_size) - real_dest_size - 1;
	printf("max bytes to copy: %d\n", max_bytes_to_copy);
	i = real_dest_size+1;
	while (src[i] != 0 && i < max_bytes_to_copy)
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (src_size + dest_size);
}