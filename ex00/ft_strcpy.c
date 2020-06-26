/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:42:02 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/26 13:07:30 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char *src;
	char *dest;
	dest=malloc(sizeof(char)*5);
	src="hello";
	printf("%s",ft_strcpy(dest,src));
	return(0);
}
