#include <iostream>
using namespace std;


int GetMaxNumber(int Num1, int Num2)
{
public:
    int Biggest;
    if (Num1 > Num2)
        Biggest = Num1;
    else
        Biggest = Num2;

    return Biggest;
}


int main()
{
public:
    int A = 5;
    int B = 7;
    int Result;

    Result = GetMaxNumber(A, B);
    cout<<"Max number is: "<< Result<<endl;

    return 0;
}
