// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;

class sample
{
    int value;
    int id;
public:
    sample(int id);
    void increment();
    void display();

};
//建構元函數
inline sample::sample(int x)
{
    cout << "=Constructor="<< endl;
    value=0;
    id =x ;    
}
inline void sample::increment()
{
    value++;
}
void sample::display()
{
    cout << " id = " << id << ", value=";
    cout << value <<endl;
}


int main () 
{
    sample A(1);
    // sample B(2);
    //顯示物件
    cout<< "show A data ";
    A.display();
    // cout<< "show B data ";
    // B.display();
    A.increment();
    cout << "show A data ";
    A.display();
    // cout << "show B data ";
    // B.display();
    return 0;
}

//g++ constructor.cpp -o constructor.out -Wall