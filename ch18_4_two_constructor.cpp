// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;

class sample
{
    int id1;
    int id2;
public:
    sample(int x,int y)//建構元函數  like inline
    {    
        id1 =x ;
        id2 =y ;    
    }
    void display() //like inline
    {
        cout << " id1 = " << id1 << endl;
        cout << " id2 = " << id2 << endl;
    }

};

int main () 
{
    sample A(10,5);
    sample B(22,33);
    //顯示物件
    cout<< "show A data "<< endl;
    A.display();
    cout<< "show B data "<< endl;
    B.display();
    
    return 0;
}

//g++ ch18_4_two_constructor.cpp -o ch18_4_two_constructor.out -Wall