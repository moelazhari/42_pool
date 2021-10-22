char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	
	i = 0;
	k = 0;
	d = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0') 
		{
			if (str[i] == str[j])
			{
				k++;
				d = 0;
			}
			j++;
		}
		strs[k][d] = str[i]
		i++;
		d++;
	}
}
