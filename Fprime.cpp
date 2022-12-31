#include"iostream"
#include"cmath"
using namespace std;
bool prime(int a)
{
    int i;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return false;    
        }
    }
    return true;
}
int main()
{
    int n1,n2,i;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    for(i=n1;i<n2;i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
}