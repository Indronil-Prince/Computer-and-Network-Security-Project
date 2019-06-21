#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int br[94][94]={0};
    vector<long long int> arr, ar, x, sp;
    set<long long int> s;
    long long int a=0, k=0, num=0, l=0, r=0, t=0, p=0, spc=0, cnt=0;
    cout << "Give your key : ";
    cin >> a;
    string ans="", inp="";
    for(int i=a; num<=95; i++)
    {
    bool isPrime = true;

    for(int j=2; j<=i/2; j++) {
      if (i%j == 0)
      {
         isPrime = false;
         break;
      }
    }
       if(isPrime == true){
         ar.push_back(i);
         num++;
         }
    }
        for (int i=0; i<94; i++)
        for (int j=0; j<94; j++)
        {
          br[i][j]=ar[i]*ar[j];
        }

        freopen("11 - Copy.jpg","r",stdin);
        while(cin >> inp)
        {
        spc=spc+inp.length();
        sp.push_back(spc);
        ans.append(inp);
        }
        freopen("encrypt.txt", "w", stdout);
        cout << ans << endl;

//        for (int i=0; i<ans.length()-1; i++)
//        {
//          if(i==sp[cnt])
//          {
//              cout << ar[95] << " ";
//              cnt++;
//          }
//          l=ans[i]-33;
//          r=ans[i+1]-33;
//          cout << br[l][r] << " ";
//        }
//
//     ans.clear();
//     arr.clear();
//     ar.clear();
//     s.clear();
     return 0;
}
