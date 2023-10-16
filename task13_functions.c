
int print_rev(va_list args)
{
	char *s = va_arg(args, char*);
	int x;
	int y = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[y] != '\0')
	{
		y++;
	}
	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	return (y);
}
