#include <iostream>
#include "List.h"

int main()
{
    List<int> ll1;
	
    ll1.push_back(5);
	std::cout << ll1 << '\n';
	std::cout << "Size: " << ll1.getSize() << "\n\n";
	
	
    ll1.push_front(6);
	std::cout << ll1 << '\n';
	std::cout << "Size: " << ll1.getSize() << "\n\n";
	
    ll1.push_back(7);
	std::cout << ll1 << '\n';
	std::cout << "Size: " << ll1.getSize() << "\n\n";
	
    ll1.push_front(8);
    std::cout << ll1 << '\n';
	std::cout << "Size: " << ll1.getSize() << "\n\n";
	
	ll1.pop_back();
	std::cout << ll1 << '\n';
	std::cout << "Size: " << ll1.getSize() << "\n\n";
	
	ll1.pop_front();
	std::cout << ll1 << '\n';
	std::cout << "Size: " << ll1.getSize() << "\n\n";
	
	List<int> ll2(ll1);
	std::cout << ll2 << '\n';
	
	List<int> ll3;
	ll3 = ll1;
	std::cout << ll3 << '\n';
	
    return 0;
}