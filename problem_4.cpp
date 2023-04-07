#include<iostream>
using namespace std;
//dry run
// a = a b c d
// b = e f g h 
// n = 4 , m = 4
// i = 0 j = 0
// ans = ae
// i = 1 j = 1
// ans = bf
void  margedString(string &a,string &b,int i,int j )
{
    int n = a.size();
    int m = b.size();

    if(i==n && j==m)
    {
        return ;
    }

    if(i<n)
    {
        cout<<a[i];
    }
    if(j<m)     cout<<b[j];
   

    margedString(a,b,i+1,j+1);

    
}
int main()
{
    string a = "abet";
    string b = "poi";

    margedString(a,b,0,0);
    cout<<endl;
    
    return 0;
}