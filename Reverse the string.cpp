#include <bits/stdc++.h>
#include<string>
using namespace std;
     
int main() {
   string S,N="";
   cin>>S;
   for(int i = S.length()-1; i>=0; i--){
    N += S[i];

   }
cout<<N;
    return 0;
}
