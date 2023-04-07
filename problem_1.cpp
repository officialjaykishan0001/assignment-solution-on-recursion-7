#include<iostream>
using namespace std;

void ans(string &a,int i)
{
    int n = a.size();

    if(i==n)
    {
        return ;
    }
int j = i+1;
   while(j<n)
   {
    if(a[i]==a[j])
    {
        a.erase(a.begin()+j);
       // j = j - 1;
    }
    else{
        j = j + 1;
    }
   }
    ans(a,i+1);
}
int main()
{
    string a;
    cout<<"enter the string  : ";
    cin>>a;

    ans(a,0);

    cout<<(a)<<endl;

    return 0;
}