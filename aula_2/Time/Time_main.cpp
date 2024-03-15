#include <iostream>
#include "Time.h"    
using namespace std;

int main()
{
    Time t1(23,59,59); 
    t1.print();

    Time t2(12);
    t2.print();
    
    Time t3(23,59,59); 
    t3.print();
    t3.nextSecond();
    t3.print();
    t3.nextSecond();
    t3.print();

};