/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exmple.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:34:57 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/30 12:37:58 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>
#include <stack>
#include <vector>

int main()
{
    std::stack<int, std::vector<int> > stk;
    
       stk.push(20);
     stk.push(30);
      stk.push(40);
       stk.push(50);
        stk.push(60);
    while (stk.size())
    {
        std::cout << stk.top() << std::endl;
        stk.pop();
    }
}