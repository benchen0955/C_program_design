// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;

class X
{
    int x;
public:
    void setx(int i);
    int putx();
       
};

void X::setx(int i)
{
    x=i;
}

int X::putx()
{
    return x;
}

int main () 
{
    X A[3],*p;
    
    A[0].setx(5);
    A[1].setx(7);
    A[2].setx(6);

    for (int j=0; j<3; j++)
    {
        p= &A[j];
        cout << p->putx()<<endl;

    }  
    
    return 0;
}

//g++ ch18_13_point.cpp -o ch18_13_point.out -Wall