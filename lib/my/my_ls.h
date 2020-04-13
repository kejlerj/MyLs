/*
** EPITECH PROJECT, 2017
** my_ls.h
** File description:
**
*/

#ifndef MY_LS_H_
#define MY_LS_H_

#include "my.h"
#include "mylist.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>
#include <errno.h>
#include <stdio.h>

#define FLAG_d	1
#define FLAG_R	2
#define FLAG_l	4
#define FLAG_t	8
#define FLAG_r	16

void	my_ls_l(char *str);
void	my_ls_d(unsigned int flags, char *str);
void	my_ls_r(linked_list_t **list);
linked_list_t	*my_ls_t(linked_list_t *list);
int	value_flag(char c);
void	print_error(char *mes, int ret);
char	*get_relative_name(char *path);
char	*get_path(char *name, char *origin);
int	cmp_date(char const *s1, char const *s2);
int	cmp_alpha(char *s1, char *s2);
DIR	*open_dir(char const *name);
int	get_flags(unsigned int flags, char const *arg);


#endif
