// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;

class X
{
protected:
    int x;
public:
    void getx()
    {
        cout<< "Pls input data==>";
        cin >> x;
    }    
};

class Y
{
protected:
    int y;
public:
    void gety()
    {
        cout<< "Pls input data==>";
        cin >> y;
    }    
};

//建立字類別
class Z: public X  , public Y
{
    
public:
    int makexy()
    {
        return x*y;
        // return x;
    }
    

};


int main () 
{
    Z C;
    C.getx();
    C.gety();
    cout << C.makexy() << endl;
    
    
    return 0;
}

//g++ ch18_9_inher.cpp -o ch18_9_inher.out -Wall