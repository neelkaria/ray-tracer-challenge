#include "tuple\tuple.h"
#include <iostream>
#include <stdio.h>

int main()
{
    Tuple a = Tuple(); 
    Tuple b = Tuple();
    Tuple c = Tuple();

    a = Tuple::Point(3.0f, 2.5f, 5.0f);
    b = Tuple::Point(4.0f, 1.5f, 2.0f);
    c = addTup(a,b);

    std::cout<<"W:"<<c.getW()<<"\n X:"<<c.getX()<<"\n Y:"<<c.getY()<<"\n Z"<<c.getZ();
    return 0;
}