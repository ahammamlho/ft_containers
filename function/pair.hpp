/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:31:56 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/13 11:18:05 by lahammam         ###   ########.fr       */
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

        pair() : first(), second(){};
        pair(_T1 const &__t1, _T2 const &__t2) : first(__t1), second(__t2){};

        template <class _U1, class _U2>
        pair(const pair<_U1, _U2> &__p) : first(__p.first), second(__p.second){};

        pair& operator=(pair const& __p) {
            first = __p.first;
            second = __p.second;
            return *this;
        };
    };

    template <class _T1, class _T2>
    bool operator==(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
    {
        return __x.first == __y.first && __x.second == __y.second;
    };


    template <class _T1, class _T2>
    bool operator!=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
    {
        return !(__x == __y);
    }

    template <class _T1, class _T2>
    bool operator< (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
    {
        return __x.first < __y.first || (!(__y.first < __x.first) && __x.second < __y.second);
    }

    template <class _T1, class _T2>
    bool operator> (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
    {
        return __y < __x;
    }

    template <class _T1, class _T2>
    bool operator>=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
    {
        return !(__x < __y);
    }

    template <class _T1, class _T2>
    bool operator<=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
    {
        return !(__y < __x);
    }
    
    template <class _T1, class _T2>
    pair<_T1,_T2>  make_pair(_T1 __x, _T2 __y)
    {
        return pair<_T1, _T2>(__x, __y);
    }
}

#endif
