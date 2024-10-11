/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_calloc.c                                                   :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/10 15:09:25 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/10 15:09:25 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */
#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
    void *s;
    size_t len;

    len = count * size;
    s = malloc(len);
    if (!s)
        return (NULL);
    ft_bzero(s, len);
    return (s);
}