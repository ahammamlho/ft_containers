/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:10:32 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/20 22:18:28 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TRAIT_HPP
#define ITERATOR_TRAIT_HPP

#include <cstddef>

namespace ft
{
    template<class Category, class T, class Distance = ptrdiff_t,
         class Pointer = T*, class Reference = T&>
    struct iterator
    {
        typedef T         value_type;
        typedef Distance  difference_type;
        typedef Pointer   pointer;
        typedef Reference reference;
        typedef Category  iterator_category;
    };

    template<class Iterator>
    struct iterator_traits
    {
        typedef typename Iterator::difference_type difference_type;
        typedef typename Iterator::value_type value_type;
        typedef typename Iterator::pointer pointer;
        typedef typename Iterator::reference reference;
        typedef typename Iterator::iterator_category iterator_category;
    };

    struct input_iterator_tag  {};
    struct output_iterator_tag {};
    struct forward_iterator_tag       : public input_iterator_tag         {};
    struct bidirectional_iterator_tag : public forward_iterator_tag       {};
    struct random_access_iterator_tag : public bidirectional_iterator_tag {};

   template <class Iterator>
    class reverse_iterator
        : public iterator<typename iterator_traits<Iterator>::iterator_category,
                      typename iterator_traits<Iterator>::value_type,
                      typename iterator_traits<Iterator>::difference_type,
                      typename iterator_traits<Iterator>::pointer,
                      typename iterator_traits<Iterator>::reference>
    {
    protected:
        Iterator current;
    public:
        typedef Iterator                                            iterator_type;
        typedef typename iterator_traits<Iterator>::difference_type difference_type;
        typedef typename iterator_traits<Iterator>::reference       reference;
        typedef typename iterator_traits<Iterator>::pointer         pointer;

        reverse_iterator() : current(){};
        explicit reverse_iterator(Iterator x)
        {
            current = x;
        }
        template <class U>
        reverse_iterator(const reverse_iterator<U> &u)
        {
            current = u.base();
        };

        template <class U>
        reverse_iterator &operator=(const reverse_iterator<U> &u)
        {
            current = u.base();
            return *this;
        };

        Iterator base() const { return current;};

        reference operator*() const 
        {
            Iterator tmp = current; 
            return *tmp; // why --tmp
        };
        
        pointer operator->() const;
        
        reverse_iterator &operator++()
        {
            --current; 
            return *this;
        };
        reverse_iterator operator++(int)
        {

        };
        reverse_iterator &operator--();
        reverse_iterator operator--(int);
        reverse_iterator operator+(difference_type n) const;
        reverse_iterator &operator+=(difference_type n);
        reverse_iterator operator-(difference_type n) const;
        reverse_iterator &operator-=(difference_type n);
        reference operator[](difference_type n) const;
    
    };



    template <class Iterator>
    class random_access_iterator
    {
    protected:
        Iterator _iter;

    public:
        
    }

}

#endif
