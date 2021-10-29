#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout << "enter the array size" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    cout << "enter the target value" << endl;
    cin >> k;

    sort(a,a+n);
    int start = a[0];
    int last = a[n-1];
    int last2 = a[n - 2];

    if(start>k||last+last2<k)
        cout << "out of range" << endl;
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            for ( int j = i+1; j < n; j++)
            {
                if(a[i]+a[j]==k)
                    cout << i << "," << j << endl;
            }
            
        }
        
    }
    return 0;
}
