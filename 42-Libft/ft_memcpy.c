/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_memcpy.c                                                   :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/08 17:28:32 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/08 17:28:32 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;

    if (!dst && !src)
        return (NULL);

    unsigned char *dest;
    unsigned char *source;

    dest = (unsigned char *)dst;
    source = (unsigned char *)src;
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dest);
}