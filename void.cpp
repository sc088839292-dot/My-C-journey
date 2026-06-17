#include <iostream>
using namespace std;
int addNumbers(int a,int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int output = addNumbers(5,7);
    cout << " The sum is:" << output<< endl;
    return 0;
}