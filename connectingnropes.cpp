#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mincost(int arr[], int n)
{
    priority_queue<int, vector<int>,greater<int> >pq(arr, arr+n);
    ll res = 0;
    while(pq.size() > 1)
    {
        ll first = pq.top();
        pq.pop();
        ll second = pq.top();
        pq.pop();
        res += first+second;
        pq.push(first+second);
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cout << mincost(arr,n) << endl;
    }
    return 0;
}
