#include"iostream"
using namespace std;
int main()
{
    int n;
    int reverse=0;
    cout<<"Enter the number ";
    cin>>n;
    while(n>0)
    {
        int x;
        x = n%10;
        reverse = 10*reverse+x;
        n=n/10;
    }
    cout<<reverse;
}