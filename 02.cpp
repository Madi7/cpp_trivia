#include <iostream>

using namespace std;


class Base
{
protected:
    int GetTrippledNumber(int Number)
    {
        return Number * 3;
    }
};


class SomeMath: public Base
{
public:
    int GetDoubledNumber(int Number)
    {
        return Number * 2;
    }
    int GetProtected(int Value)
    {
        return GetTrippledNumber(Value);
    }
};


int main(void)
{
    SomeMath Instance;
    cout<<Instance.GetDoubledNumber(5)<<endl;
    cout<<Instance.GetProtected(7)<<endl;

    return 0;
}
