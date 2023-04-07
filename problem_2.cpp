#include<iostream>
using namespace std;
void print_reverse(string &a,int i)
{
    int n = a.size();

    if(i==n+1)
    {
        return ;
    }

    cout<<a[n-i];

    print_reverse(a,i+1);

    }
int main()
{
    string a ;
    cout<<"enter the string you want to reverse:  ";
    cin>>a;

    print_reverse(a,1);
    cout<<endl;
    return 0;
}