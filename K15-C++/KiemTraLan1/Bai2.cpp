#include <bits/stdc++.h>
using namespace std;

int main()
{
   stack<char> a;
   string str;
   cout<<"nhap chuoi: ";
   getline(cin,str);
   for(int i=0;i<str.size();++i){
    if(str[i]=='('){
       a.push(str[i]);
    }
    else {
        if(a.empty()){
            cout<<"No ";
            return 0;
        }
        else if (str[i]==')'){
            a.pop();
        }
    }
   }
   if(a.empty()){
            cout<<"Yes ";}
            else cout<<"No";
    return 0;
}
