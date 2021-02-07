void ft_sort(int *sort,int size)
{
	int i;
	int j;
	int tmp;

	tmp = 0;
	i = 0;
	while (i < size)
	{
		j = 1 + i;
		while (j < size)
		{
			if (sort[i] > sort[j])
			{
				tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
