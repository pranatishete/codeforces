#Difficulty Range: 900
#Problem Code: 631A
#Problem Link: https://codeforces.com/problemset/problem/631/A
#Problem Name: Interview


using namespace std;
int main()
{
    long long int i,j,n,m,x;
    while(cin>>n)
    {
        long long a[n],b[n],sum_a,sum_b;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sum_a=a[0];
        sum_b=b[0];
        for(i=1;i<n;i++){
            sum_a|=a[i];
            sum_b|=b[i];
        }
        cout<<sum_a+sum_b<<endl;
    }
