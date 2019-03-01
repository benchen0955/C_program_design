// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;

class sample
{
    int x,y;
public:
    sample operator+(sample var);
    sample operator=(sample var);
    void display(void);
    void setxy(int xx,int yy);       
};

sample sample::operator+(sample var)
{
    sample tmp;

    // tmp.x = x + var.x;
    tmp.x = this->x + var.x;
    // tmp.y = y + var.y;
    tmp.y = this->y + var.y;

    return tmp;
}

sample sample::operator=(sample var)
{
    x = var.x;
    y = var.y;
    return *this;
}

void sample::display(void)
{
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}
void sample::setxy(int xx,int yy)
{
    x=xx;
    y=yy;
}


int main () 
{
    sample A,B,C;

    A.setxy(10,15);
    B.setxy(20,30);

    C=A+B;
    cout << "Display object C.."<< endl;
    C.display(); 

    cout << "Display object A.."<< endl;
    A.display(); 

    C=A;
    cout << "Display object C.."<< endl;
    C.display(); 
    
    
    return 0;
}

//g++ ch19_4_operator.cpp -o ch19_4_operator.out -Wall