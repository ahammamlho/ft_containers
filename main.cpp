/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:01:33 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/20 21:59:08 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include <unistd.h>
#include <iostream>
#include <iostream>
#include <stack>
#include "Containers/stack.hpp"
#include<iterator> 
#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;
int main()
{
	stack<int> stk;
	stk.push(21); // The values pushed in the stack should be of the same data which is written during declaration of stack
	stk.push(22);
	stk.push(24);
	stk.push(25);
	int num = 0;
	stk.push(num);
	// stk.pop();
	// stk.pop();
	// stk.pop();

	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
	cout << endl;

	ft::stack<int> stk2;
	stk2.push(21); // The values pushed in the stack should be of the same data which is written during declaration of stack
	stk2.push(22);
	stk2.push(24);
	stk2.push(25);
	stk2.push(num);
	// stk.pop();
	// stk.pop();
	// stk.pop();
	

	while (!stk2.empty())
	{
		cout << stk2.top() << " ";
		stk2.pop();
	}

	 // defining a pair
    pair<int, char> PAIR1;
 
    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';
 
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;



	vector<int> ar = { 1, 2, 3, 4, 5 };
      
    
    vector<int>::iterator ptr;

	std::cout << std::iterator_traits<ptr>::value_type << std::endl;

 
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";

	random_access_iterator_tag BDIte;
 

	return 0;
}
