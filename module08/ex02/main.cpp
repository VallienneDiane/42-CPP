/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vallienne <vallienne@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:56:39 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/16 18:45:50 by vallienne        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/************************************************************************/
/*	push/push_back : insert element at the top of the stack			  	*/
/*	top  : return reference to the top (last) element in the stack		*/
/*	back : return reference to the last element in the list container	*/
/*	pop/pop_back : remove top element									*/
/*	size : number of elements in the stack								*/
/*	begin : returns an iterator pointing to the 1 elemt in the sequence	*/
/*	end : returns an iterator pointing to the last elemt in the sequence*/
/************************************************************************/

int main(void)
{
	std::cout << "---------------- Int --------------------" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "top :" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "it : " << *it << std::endl;
	 	++it;
	}
	std::stack<int> s(mstack);
	std::cout << "---------------- List --------------------"  << std::endl;
	{
		std::list<int> mstack;
		
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "last :" << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "size :" << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << "it : " << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << "---------------- String --------------------" << std::endl;
	MutantStack<std::string>	ms;

	ms.push("Hello, do you want this ?");
	ms.push("Pardon ?");
	std::cout << "top = " << ms.top() << std::endl;
	std::cout << "size = " << ms.size() << std::endl << "pop\n";
	ms.pop();
	std::cout << "size = " << ms.size() << std::endl;
	ms.push("Un cornichon ?");
	ms.push("Jamais, tonnerre de Brest !");
	MutantStack<std::string>::iterator it2 = ms.begin();
	MutantStack<std::string>::iterator ite2 = ms.end();
	++it2;
	--it2;
	int i = 0;
	while (it2 != ite2){
		std::cout << "ms["<< i <<"] = " << *it2 << std::endl;
		++it2;
		i++;
	}

	return (0);
}