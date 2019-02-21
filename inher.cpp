// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;

class X
{
protected:
    int value;
public:
    void getvalue()
    {
        cout<< "Pls input data==>";
        cin >> value;
    }    
    void display()
    {
        cout << "value = " << value << endl;
    }
};
//建立字類別
class Y: public X
{
    int k;
public:
    void makek()
    {
        k= value *3;
    }
    void displayk()
    {
        cout<<"k="<<k<<endl;
    }


};


int main () 
{
    Y A;
    A.getvalue();
    A.display();
    A.makek();
    A.displayk();
    
    return 0;
}

//g++ inher.cpp -o inher.out -Wall