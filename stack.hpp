/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:00:41 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/31 12:07:24 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP

#include <vector>

template <class Type, class Container = std::vector<Type> >
class stack
{
private:
    // Container c;
    std::vector<Type> c;

public:

    stack(){};
    void push(Type ele)
    {
        c.push_back(ele);
    }
    void pop()
    {
        c.pop_back();
    }

    unsigned int size()
    {
        return c.size();
    }
    Type top()
    {
        return *(c.end() - 1);
    }
    
    ~stack(){};
};



#endif