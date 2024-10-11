/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_memmove.c                                                  :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/10 17:47:48 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/10 17:47:48 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    if (!dst && !src)
        return (NULL);

    if (dst < src)
        return (ft_memcpy(dst, src, len));

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    while (len--)
    {
        d[len] = s[len];
    }
    return (dst);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlar";

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    ft_memmove(cdizi1, cdizi2, 10);

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    return 0;
}