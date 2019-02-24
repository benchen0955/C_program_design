// constructor 建構元
#include <cstdlib>
#include <iostream>
using namespace std;




int main () 
{
    int *i;
    // i= new int;
    // *i=10;
    i= new int(10);//初值設定

    cout<< " i= "<< *i << endl;
    delete i;
    return 0;
    
}

//g++ ch17_16_17new_del.cpp -o ch17_16_17new_del.out -Wall