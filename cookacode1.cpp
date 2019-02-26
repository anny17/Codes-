#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       map <int,int> MM;
       int ans = 0;
       int I = 0;
       int J = 0;
       if(n % 2 == 0)
       {
            for(int i = 0; i < n/2; i++)
            {
                int te;
                cin >> te;
                MM[i] = te;
            }
            for(int i = n/2,int j = 0; i < n; i++,j++)
            {

                int te;
                cin >> te;
                int tem = MM[j] + te;
                if(ans < tem)
                {

                    ans = tem;
                    I = j;
                    J = i;
                }
            }

       }else
       {
           int te;
            for(int i = 0; i < n/2; i++)
            {

                cin >> te;
                MM[i] = te;
            }
            cin >> te;
            MM[n/2] = te;
            for(int i = n/2,int j = 0; i < n; i++,j++)
            {
                cin >> te;
                int tem = MM[j] + te;
                if(ans < tem)
                {
                    ans = tem;
                    I = j;
                    J = i;
                }
            }
            if(ans < MM[n/2])
            {
                ans = MM[n/2];
                I = n/2;
                J = n/2;
            }
       }
       cout<< ans <<" "<< I+1 <<" "<< J+1<<endl;
    }
    return 0;
}
