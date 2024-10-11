/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_strlcpy.c                                                  :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/10 19:55:56 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/10 19:55:56 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i;

    if (!dstsize)
        return (ft_strlen(src));
    i = 0;
    while (src[i] && (i < dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlama";

    ft_strlcpy(cdizi1, cdizi2, 10);

    printf("cdizi1 bellek içeriği: %s\n", cdizi1);

    return 0;
}