#include <bits/stdc++.h>
using namespace std;

void patternPrinting(int spaces,int i)
{
    //base case
    // since we have to print 7 only once. 
    if(i==7)
    {
        while(spaces>0)
        {
            cout<<" ";
            spaces--;
        }
        cout<<i;
        cout<<endl;
        return;
    }

    // printing the decreasing triangle
    int t_space=spaces;
    while(t_space>0)
    {
        cout<<" ";
        t_space--;
    }
    for(int j=i;j<=7;j++)
        {
            cout<<j<<" ";
        }
    cout<<endl;

    //recursion
    // to print the next line
    patternPrinting(spaces+1,i+1);

    // printing the increasing triangle
    // applying the concept of back tracking
    int tt_space=spaces;
    while(tt_space>0)
    {
        cout<<" ";
        tt_space--;
    }
    for(int j=i;j<=7;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;

}
int main()
{
    int spaces=0;
    patternPrinting(spaces,1);  // passing the spaces and the initial number of the pattern as arguments

    return 0;
}
