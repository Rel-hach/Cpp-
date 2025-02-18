/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:25:47 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 02:38:13 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
    std::string name;
    public:
        Zombie();
        ~Zombie();
        void    announce (void);
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif