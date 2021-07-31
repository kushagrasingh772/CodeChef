#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int a[n];
    int i;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0;
    for (i=0;i<n;i++)
    {
        if (a[i]+x==h)
        {
            printf("YES");
            c=1;
            break;
        }
    }
    if (c==0)
    {
        printf("NO");
    }
    return 0;
}
