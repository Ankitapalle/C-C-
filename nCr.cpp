#include"iostream"
using namespace std;
int Nfactorial(int n)
{
    int i;
    int x=1;
    for(i=n;i>0;i--)
    {
        x*=i;
    }
    return x;
}
float claculatenCr(int n,int r)
{
    float nCr;
    nCr = Nfactorial(n)/Nfactorial(r)*(Nfactorial(n-r));
    return nCr;
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    cout<<claculatenCr(n,m);
}