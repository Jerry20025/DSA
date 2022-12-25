#include <bits/stdc++.h>

using namespace std;
void reverse_word(string s){
   vector<string>temp; 
   string str=""; 
   for(int i=0; i<s.length(); i++){
       if(s[i]==' '){
           temp.push_back(str); 
           str=""; 
       }
       else{
           str+=s[i]; 
       }
   }
   // push the last word to the temp
   temp.push_back(str); 
   for(int i=temp.size()-1;i>0;i--){
       cout<<temp[i]<<" ";
   }
   // print the last word which was inserted in last
   cout<<temp[0];
}
int main()
{
    string s = "i like this program very much";
    reverse_word(s);
    return 0;
}
