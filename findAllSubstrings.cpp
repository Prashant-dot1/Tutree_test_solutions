/************* Find all substring************/
// sliding window approach

#include<bits/stdc++>
using namespace std;

// concept of slifing window can be applied here

void findSubstring(string str1,string str2)
{
    int k =str1.size();  //finding the length of str1
    int p =str2.size();  //finding the length of str2

    unordered_multiset<char> setOf_str2;  //count of characters in str2 (duplicate characters included)
    unordered_multiset<char> window; //count of characters in the window (duplicate characters included)

    //if size of str2 is greater than size of str1 (no substrings), base case is called
    if(p > k ){
      return;
    }

    for(int i=0;i<p;i++)     //inserting the characters of str2 in the set
    {
      setOfStr2.insert(str2[i]);
    }

    for(int i=0;i<k;i++)   //inserting the characters of str1 in the window of size p
    {
      if(i<p){
          window.insert(str1[i]);
      }
      else{

        if(window==setOfStr2)  // if all characters of str2 are present in the current window of str1 the it's printed
        {
          cout<<"substring "<< str1.substr(i-p,p)<<" present at index "<< i-p <<endl;
        }

        // after printing
        // sliding the window over the string , leftmost character is removed and a new char is inserted in the window
        auto itr=window.find(str1[i-p]);
        window.erase(itr);

        window.insert(str1[i]);
      }
    }

    // case for the last characters in the window matches with all the characters in str2
    if(window==set)
    {
      cout<<"substring "<< str1.substr(k-p,p)<<" present at index "<< k-p <<endl;
    }

}

int main(){

  string str1 = "XYYZXZYZXXYZ";
  string str2 = "XYZ";


  findSubstring(str1,str2);  // function to find all the substrings of string str2 in str1
   return 0;
}
