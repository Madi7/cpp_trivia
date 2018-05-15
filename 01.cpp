#include <iostream>

using namespace std;


int GetMaxNumber(int Num1, int Num2)
{
public:
    int Biggest = 0;

    if (Num1 > Num2)
        Biggest = Num1;
    else
        Biggest = Num2;

    return Biggest;
}


int main(void)
{
public:
    int A = 5, B = 7, Result = 0;

    Result = GetMaxNumber(A, B);
    cout<<"Max number is: "<<Result<<endl;

    return 0;
}
