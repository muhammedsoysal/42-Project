/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_strncmp.c                                                  :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/09 16:41:01 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/09 16:41:01 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{

    if (n == 0)
        return (0);

    size_t i;

    i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
        i++;

    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}