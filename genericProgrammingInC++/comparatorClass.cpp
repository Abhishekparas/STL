#include <bits/stdc++.h>
using namespace std;

class Book
{
public:
	string name;
	int price;
	Book()
	{
	}
	Book(string name, int price)
	{
		this->name = name;
		this->price = price;
	}
};

class BookCompare
{
public:
	bool operator()(Book b1, Book b2)
	{
		if (b1.name == b2.name)
		{
			return true;
		}
		return false;
	}
};

int main(int argc, char const *argv[])
{
	Book b1("C++", 100);
	Book b2("Java", 120);
	Book b3("Python", 130);

	list<Book> l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);

	Book bookToFind("C++", 110);
	BookCompare comp;
	if (comp(b2, bookToFind))
	{
		cout << "The books are same" << endl;
	}
	else
	{
		cout << "The books are not same" << endl;
	}
	return 0;
}