#include <iostream>
using namespace std;


int get_max_number(int num1, int num2){
    int biggest;
    if (num1 > num2)
        biggest = num1;
    else
        biggest = num2;

    return biggest;
}
int main(){
    int a = 5;
    int b = 7;
    int result;

    result = get_max_number(a, b);
    cout << "Max number is: " << result << endl;
    return 0;
}
