/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equal.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:21:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/31 12:35:41 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class InputIterator1, class InputIterator2>
bool equal(InputIterator1 first1, InputIterator1 last1,InputIterator2 first2)
{
    while (first1 != last1)
    {
        if (*first1 != *first2)
            return false;
        first1++;
        first2++;
    }
    return true;
};

template <class InputIterator1, class InputIterator2>  
bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,  
        InputIterator2 first2, InputIterator2 last2)
{
    while (first1 != last1 && first2 != last2)
    {
        if (*first1 != *first2)
            return false;
        first1++;
        first2++;
    }
    return (first1 == last1 && first2 == last2);
};