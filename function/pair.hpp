/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:31:56 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/06 13:49:42 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAIR_HPP
#define PAIR_HPP

namespace ft
{
    template <class _T1, class _T2>
    struct pair
    {
        typedef _T1 first_type;
        typedef _T2 second_type;

        _T1 first;
        _T2 second;
        
        pair(){}
    };

    // template <class _T1, class _T2>
    // pair<_T1, _T2> make_pair(_T1 t, _T2 u)
    // {
    //     pair<_T1, _T2> pr;

    //     pr.first = t;
    //     pr.second = u;
    //     return pr;
    // }
}

#endif
