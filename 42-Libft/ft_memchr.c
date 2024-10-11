/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_memchr.c                                                   :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/09 18:22:05 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/09 18:22:05 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *tmp;
    unsigned char ch;
    size_t i;

    tmp = (unsigned char *)s;
    ch = (unsigned char)c;
    i = 0;

    while (i < n)
    {
        if (ch == tmp[i])
            return (tmp + i);
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char *cp = "Bilgisayar";
    const char cd = 'g';

    printf("%c karakterinin bellek adresi: %p\n", cd, ft_memchr(cp, cd, 5));

    return 0;
}
