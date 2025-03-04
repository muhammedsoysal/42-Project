/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_isalnum.c                                                  :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/04 13:33:40 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/04 13:33:40 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
int ft_isalnum(int c)
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

