/* ************************************************************************************** */
/*                                                                                        */
/*                                                                   :::      ::::::::    */
/*   ft_atoi.c                                                     :+:      :+:    :+:    */
/*                                                               +:+ +:+         +:+      */
/*   By: musoysal <musoysal@student.42istanbul.com.tr>         +#+  +:+       +#+         */
/*                                                           +#+#+#+#+#+   +#+            */
/*   Created: 2024/10/04 13:33:19 by musoysal                     #+#    #+#              */
/*   Updated: 2024/10/04 13:33:19 by musoysal                    ###   ########.tr        */
/*                                                                                        */
/* ************************************************************************************** */

#include "libft.h"
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    result = 0;
    sign = 1;

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }

    return (result * sign);
}