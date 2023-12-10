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
	
    return 0;
}