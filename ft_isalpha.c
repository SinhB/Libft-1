int ft_islower(int c)
{
  if (c < 97 || c > 122)
    return (0);
  return (1);
}

int ft_isupper(int c)
{
  if (c < 65 || c > 90)
    return (0);
  return (1);
}

int ft_isalpha(int c)
{
  return (ft_islower(c) || ft_isupper(c));
}
