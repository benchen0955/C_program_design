// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;
class bank2;
class bank1
{
    int balance;
public:
    friend int same_balance(bank1 A,bank2 B);
    bank1(int dl);
    void display();
};
class bank2
{
    int balance;
public:
    friend int same_balance(bank1 A,bank2 B);
    bank2(int d1);
    void display();
};
int same_balance(bank1 A,bank2 B)
{
    if (A.balance == B.balance)
        return 1;
    return 0;
}

//建構元函數
bank1::bank1(int x)
{
    balance=x ;
}
void bank1::display()
{
    cout<< "bank1  "<< balance << endl;
}

bank2::bank2(int x)
{
    balance=x ;
}
void bank2::display()
{
    cout<< "bank2  "<< balance << endl;
}

int main () 
{
    bank1 A(2000);
    bank2 B(2000);
    //顯示物件
    
    A.display();    
    B.display();
    if ( same_balance(A,B) ) 
        cout<<"The same"<<endl;
    else
        cout<<"The different"<<endl;
    
    
    return 0;
}

//g++ ch18_5_friend.cpp -o ch18_5_friend.out -Wall
