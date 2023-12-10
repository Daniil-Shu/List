#include "Node.h"

template <typename T>
class List
{
private:
	Node<T>* head;
	size_t size;
	
public:
	List();
	List(const List<T> & ll) = delete;
	List& operator=(List const&) = delete;
	~List();
	
	Node<T>* getHead() const;
	size_t getSize() const;
	
	void display(std::ostream& out = std::cout) const;
	
	void push_back(T data);
	void push_front(T data);
	
	void pop_front();
	void pop_back();
	
	template <typename U>
	friend std::ostream & operator<<(std::ostream & os, const List<U> & ll);
};

#include "List.cpp"
