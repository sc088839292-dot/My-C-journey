#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    for (i = 1; i<=20;i++)
    {
        if(i%2==0)
        {
            if (i==14)
            {
                continue;
            }
            cout << i << endl;
        }
    }
}