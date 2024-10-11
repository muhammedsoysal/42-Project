/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_strchr.c                                                   :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/08 18:22:08 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/08 18:22:08 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
char *strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if (c == '\0')
        return (char *)s;

    return NULL;
}

#include <stdio.h>
int main(void)
{
    const char *str = "Muhammed Soysal";
    char ch = 'd';
    char *result;

    result = strchr(str, ch);
    if (result)
        printf("Karakter '%c' bulundu: %s\n", ch, result);
    else
        printf("Karakter '%c' bulunamadı.\n", ch);

    return 0;
}