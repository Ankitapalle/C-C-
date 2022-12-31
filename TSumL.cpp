#include"iostream"
using namespace std;
    int * twosum( int arr[],int target,int n)
    {
        int sum = 0;
        int i,j;
        int* arr1 = new int[100];
        for(int i=0;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                sum=arr[i]+arr[j];
                if(sum==target)
                {
                    arr1[0]=i;
                    arr1[1]=j;
                    return arr1;
                }
                else
                {
                    sum=0;
                }
            }
        }
        return 0;
    }
int main()
{
    int arr[]={2,3,5,6,2};
    int j;
    int arr1[2];
    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    int* p=twosum(arr,target,n);
        cout<<(p[0])<<","<<p[1];
}
