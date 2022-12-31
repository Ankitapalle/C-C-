#include"iostream"
using namespace std;
int factor(int n)
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
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<factor(i)/(factor(j)*factor(i-j));
        }
        cout<<endl;
    }
}