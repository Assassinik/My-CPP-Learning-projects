/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HM_megaphone.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:57:39 by hmkrtchy          #+#    #+#             */
/*   Updated: 2021/10/03 15:57:51 by hmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
    int i = 1;
    if(argc == 1)
    {
        std :: cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std :: endl;
        return 0;
    }
    while (i < argc)
    {
        std :: string txt = argv[i];
        size_t	size = txt.length();
        int j = 0;
        while(j < size)
        {
            std :: cout << (char)toupper(argv[i][j]);
            j++;
        }
        i++;
        std::cout << " ";
    }
    std :: cout << std :: endl;
    return 0;
}