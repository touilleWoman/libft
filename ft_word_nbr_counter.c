int		ft_word_nbr_counter(char const *s, char c)
{
	int		i;
	int		in_word;
	int		count;

	in_word = 0;
	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (in_word && s[i] == c)
		{
			in_word = 0;
		}
		if (!in_word && (s[i] !=c))
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}