/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:01:33 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/06 13:04:52 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stack.hpp"
#include <unistd.h>
#include <iostream>


#include<iostream>  
#include<algorithm>  
#include<vector>  
#include <type_traits>
#include <stack>

 #include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stk;
	stk.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
	stk.push(22);
	stk.push(24);
	stk.push(25);
	int num=0;
	stk.push(num);
	// stk.pop();
	// stk.pop();
	// stk.pop();

	while (!stk.empty()) {
		cout << stk.top() <<" ";
		stk.pop();
	}
}
