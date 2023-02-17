/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:39:34 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/16 15:44:06 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

namespace ft
{
    template <class T, class Allocator = allocator<T> >
    class vector
    {
    private:

    public:
        vector();
        ~vector();
    };

    vector::vector(){};

    vector::~vector(){};
}

#endif


