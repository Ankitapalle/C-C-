#include"iostream"
using namespace std;
int factorialWL(int n)
{
    int i;
    int x=1;
    for(i=n;i>0;i--)
    {
        x*=i;
    }
    return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorialWL(n);
}