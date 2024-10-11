/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_memset.c                                                   :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/10 16:13:54 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/10 16:13:54 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *str;

    i = 0;
    str = (unsigned char *)s;
    while (i < n)
        str[i++] = (unsigned char)c;
    return s;
}