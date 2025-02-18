/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 04:51:40 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/26 21:11:48 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int fixedPointNb;
        static const int fbits = 8;
    public:
        Fixed();
        Fixed(const Fixed &cp);
        ~Fixed();
        Fixed& operator=(const Fixed &cp);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif