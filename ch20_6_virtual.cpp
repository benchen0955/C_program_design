// constructor 建構元
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

class X
{
protected:
    int x,y;
public:
    virtual void getvalue(int i,int j=0)//設定 Value
    {
        cout << "Class X's getvalue func."<<endl;
        x=i;
        y=j;

    }
    virtual void display() =0;       
};

class square : public X
{
    public:
        void display()
        {
            cout << "X="<<x<<endl;
            cout << "x's square ="<< x*x <<endl;
        }
};

class cube : public X
{
public :
    void display()
    {
        cout << "x="<< x << endl;
        cout << "x's cube ="<< x*x*x <<endl;
    }
};
class chpow : public X
{
public:
    void display()
    {
        cout << " x= "<< x << ", y= " << y << endl;
        cout << " pow(x,y)= " << pow(double(x),double(y)) << endl;
    }

};


int main () 
{
    X *A;
    square BB;
    cube CC;
    chpow DD;
    A=&BB;
    A->getvalue(8);
    A->display();

    A=&CC;
    A->getvalue(9);
    A->display();

    A=&DD;
    A->getvalue(5,4);
    A->display();

        return 0;
}

//g++ ch20_6_virtual.cpp -o ch20_6_virtual.out -Wall