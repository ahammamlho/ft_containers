/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexicographical_compare.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:14:13 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/06 13:50:27 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXICO_HPP
#define LEXICO_HPP

namespace ft
{
    template <class InputIterator1, class InputIterator2>
    bool lexicographical_compare(InputIterator1 first1, InputIterator1 last1,
                                 InputIterator2 first2, InputIterator2 last2)
    {
        while (first1 != last1 && first2 != last2)
        {
            if (*first1 >= *first2)
                return false;
            first1++;
            first2++;
        }
        return (first1 >= last1 && first2 >= last2);
    };
}

#endif
