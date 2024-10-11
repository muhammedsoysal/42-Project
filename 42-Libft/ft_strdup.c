/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_strdup.c                                                   :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/09 20:21:39 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/09 20:21:39 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *src)
{
    size_t len;
    char *tmp;

    len = ft_strlen(src) + 1;
    tmp = (char *)malloc(len);

    if (!tmp)
        return (NULL);

    ft_memcpy(tmp, src, len);
    return (tmp);
}