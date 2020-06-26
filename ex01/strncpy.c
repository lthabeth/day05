/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:34:02 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/26 14:09:19 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int main () {
   char src[10];
   char dest[10];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "hello");
   strncpy(dest, src, 10);
   printf("%s\n",src);

   printf(" %s\n", dest);
   
   return(0);
}
