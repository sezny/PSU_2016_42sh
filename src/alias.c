/*
** alias.c for  in /home/vatoth/Epitech/PSU_2016_42sh
** 
** Made by 
** Login   <quentin.sonnefraud@epitech.eu>
** 
** Started on  Fri May 19 17:08:22 2017 
** Last update Fri May 19 20:11:04 2017 
*/

typedef struct	s_alias
{
  char		*alias;
  char		*cmd;
  struct s_list	*next;
}		t_alias;

typedef struct	s_list_al
{
  char		**file;
  struct s_list	*first;
}		t_list_al;

int		replace(char **tab, char *alias)
{
  free(tab[0]);
  tab[0] = my_strdup(alias);
  return (0);
}

int		replace_alias(char **cmd, t_list_al *alias)
{
  int		i;
  t_alias	tmp;

  i = 0;
  while (tab[i])
    {
      tmp = alias->first;
      while (alias->next)
	{
	  if (strcmp(tab[i], tmp->alias) == 0)
	    if (replace(&tab[i], al) == 1)
	      return (0);
	}
      tmp = 
    }
}

int		init_alias()
{
  int		fd;

  if ((fd= open("~/.42shrc", O_RDONLY)) == -1)
    {
      if ((fd = open("~/.42shrc", O_CREATE, 0666)) == -1)
	
    }
}
