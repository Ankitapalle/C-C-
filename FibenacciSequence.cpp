#include"iostream"
using namespace std;
int FS(int n)
{
    int a=-1;
    int b=1;
    int i;
    int sum;
    for(i=1;i<=n;i++)
    {
        sum=a+b;
        cout<<sum<<endl;;
        a=b;
        b=sum;
    }
}
int main()
{
    int n;
    cin>>n;
    FS(n);
}