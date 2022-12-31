#include"iostream"
using namespace std;
int sum(int n)
{
    int x;
    x = n*(n+1)/2;
    return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}