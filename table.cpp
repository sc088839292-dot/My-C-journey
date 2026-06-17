#include <iostream>
using namespace std;
 void printtable(int number)
{ int i = 1;
    for(i=1;i<=10;i++)
    {
     cout << number << "x" << i << "=" << number*i << endl;
    }
}
int main()
{
    int n;
    cout << "Satish,apna manpasand number daalo jis number ka tumhe pahda/table chahiye" << endl;
    cin >>n;
    cout << "---" << n << " ka pahda/table" << endl;
    printtable(n);
    return 0;
}