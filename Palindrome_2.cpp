#include<iostream> 


using namespace std; 

class Solution{
public: 
     bool validPalindrome(string s){
       int n = s.size(); 
       int l=0; 
       int r= n-1; 
       while(l<r){
         if(s[l]==s[r]){
           ++l; 
           --r; 
         }else return isPalindrome(s, l+1,r) || isPalindrome(s, l, r-1); 
       }
       return true; 
     }
     bool isPalindrome (string s, int l, int r){
       while(l<r){
         if(s[l]==s[r]){
           ++l;
           --r;
         }else return false; 
       }
       return true; 
     }
};
int main(){
  string s = "abca"; 
  Solution sol; 
  cout << "String " << s << " is "<<boolalpha<< sol.validPalindrome(s) << endl;  
  return 0; 
}
