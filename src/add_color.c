/*
** add_color.c for 42sh in /home/leandre/System_unix/PSU_2016_42sh
** 
** Made by Léandre Blanchard
** Login   <leandre.blanchard@epitech.eu>
** 
** Started on  Thu May 18 21:05:43 2017 Léandre Blanchard
** Last update Thu May 18 21:06:48 2017 Léandre Blanchard
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char			*add_color(char *cmd)
{
  char                  *new;

  if (isatty(1) == 0 || via_pipe(NULL) == -1)
    return (cmd);
  if ((new = my_catalloc(cmd, " --color=tty", NULL)) == NULL)
    return (cmd);
  if (cmd)
    free(cmd);
  return (new);
}

