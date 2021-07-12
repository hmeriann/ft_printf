//1 case
	if (tab->width > len && tab->tochnost <= 0)
	{
		ft_putstr(str, ft_strlen(str), tab);
		tab->tochnost = -tab->tochnost;
		while (tab->tochnost-- > len) 
			ft_putchar(sym, tab);
	}
	//2 case
	else if (tab->tochnost < tab->width && tab->width < len)
	{
		ft_putstr(str, ft_strlen(str), tab);
		while (tab->width-- > len) 
			ft_putchar(' ', tab);
	}
	//3 case
	else if (tab->zero_prefix == 1 && tab->width > len)
	{
		while (tab->width-- > len) 
			ft_putchar('0', tab);
		ft_putstr(str, ft_strlen(str), tab);
	}
	//4 case
	else if (tab->width > len && tab->tochnost > tab->width)
	{
		while (tab->tochnost-- > len) 
			ft_putchar('0', tab);
		ft_putstr(str, ft_strlen(str), tab);
	}
	//5 case
	else if (tab->width > len && tab->tochnost < tab->width)
	{
		ft_putstr(str, ft_strlen(str), tab);
		while (tab->width-- > len) 
			ft_putchar(' ', tab);
	}
	//6 case
	else if (tab->zero_prefix == 1 && tab->width > tab->tochnost && tab->tochnost > len)
	{
		while (tab->width-- > len) 
			ft_putchar('0', tab);
		ft_putstr(str, ft_strlen(str), tab);
		while (tab->tochnost--) 
			ft_putchar(' ', tab);
	}
	//7 case
	else if (tab->zero_prefix == 0 && tab->width > tab->tochnost && tab->tochnost > len)
	{
		while (tab->width-- > tab->tochnost) 
			ft_putchar(' ', tab);
		ft_putstr(str, ft_strlen(str), tab);
		while (tab->tochnost--) 
			ft_putchar('0', tab);
	}
	