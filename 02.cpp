#include <iostream>
using namespace std;


class Base
{
protected:
    int GetTrippledNumber(int Number)
    {
        return Number * Number * Number;
    }
};


class SomeMath: public Base
{
public:
    int GetDoubledNumber(int Number)
    {
        return Number * Number;
    }
    int GetProtected(int Value)
    {
        return GetTrippledNumber(Value);
    }
};


int main()
{
    SomeMath Instance;
    cout<<Instance.GetDoubledNumber(5)<<endl;
    cout<<Instance.GetProtected(7)<<endl;

    return 0;
}
