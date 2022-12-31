#include"iostream"
#include"math.h"
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the number ";
    cin>>n;
    int input_n=n;
    while(n>0)
    {
        int lastdigit = n%10;
        sum += round(pow(lastdigit,3));
        n=n/10;
    }
    if(sum==input_n)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"not";
    }
}