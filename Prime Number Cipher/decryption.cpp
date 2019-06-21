#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long int br[94][94]={0};
        vector<long long int> arr, ar, x, sp;
        set<long long int> s;
        int a=0, k=0, num=0, l=-1, r=-1, t=0, p=0, spc=0;
        cin >> a;
        string ans="";
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

        freopen("encrypt.txt","r",stdin);
        while(cin >> p){
        if(p!=ar[95]){
          x.push_back(p);
          k++;
          }
        else{
            sp.push_back(k);
        }
        }

        for (int i=0; i<94; i++)
        for (int j=0; j<94; j++)
        {
          br[i][j]=ar[i]*ar[j];
        }

        for (int i=0; i<94; i++)
        for (int j=0; j<94; j++)
        {
          if(br[i][j]==x[0])
          {
            l=i; r=j;
            break;
          }
        }
    if(l==-1 && r==-1) cout << "Incorrect Key!" << endl;
    else {
            if(x[1]%ar[l]==0)
    {
      ans.append(1u,(char)(r+33));
      ans.append(1u,(char)(l+33));
      t=l;
    }
    else if(x[1]%ar[r]==0)
    {
      ans.append(1u,(char)(l+33));
      ans.append(1u,(char)(r+33));
      t=r;
    }

    for(long long int i=1; i<k; i++)
    {
      for (int j=0; j<94; j++)
        {
          if(br[t][j]==x[i]) {ans.append(1u,(char)(j+33)); t=j; break;}
        }
    }
    cout << "File decrypted!" << endl;
    freopen("decrypt.txt", "w", stdout);
    for(long long int i=0; i<ans.length(); i++)
    {
        if(i==sp[spc])
        {
            cout << " ";
            spc++;
        }
        cout << ans[i];
    }
     ans.clear();
     arr.clear();
     ar.clear();
     s.clear();
    }
    return 0;
}
