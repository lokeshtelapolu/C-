#include<iostream>
using namespace std;
class A{
public:
A() { 
cout << "A's constructor called" << endl; 
}
};
class B{
public:
B() { 
cout << "B's constructor called" << endl; 
}
};

class C  // Note the order
{
public:
C() { 
cout << "C's constructor called" << endl; 
}
};
class D: public B, public A,public C // Note the order
{
public:
D() { 
cout << "D's constructor called"; 
}
};

int main()
{
	D d;
	return 0;
}

