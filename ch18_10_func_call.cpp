// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;

class X
{

    int x;
public:
    X(int i)
    {
        cout<< "X init."<<endl;
        x=i;
    }
    void display()
    {
        cout << "display data X'x " ;
        cout << x <<endl;
    }    
};

void display(X sam)
{
    sam.display();
}

int main () 
{
    X A(5);
    display(A);
    
    return 0;
}

//g++ ch18_10_inher.cpp -o ch18_10_inher.out -Wall