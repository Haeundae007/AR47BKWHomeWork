

#include <iostream>




int main()
{
    int Value0 = 10;
    int Value1 = 20;

    int* Ptr = &Value0;
    *Ptr = 100;
    *Ptr = Value1;

    int Size0 = sizeof(Ptr);
    Size0 = sizeof(*Ptr);

    int& Ref = Value0;
    Ref = 100;
    Ref = Value1;

    int Size1 = sizeof(Ref);



}

