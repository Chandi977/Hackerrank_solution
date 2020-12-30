#include<iostream>
using namespace std;

int main()
{
    //cout << "Hello,World!\n";
    int a=0,b=0,n=0;
    char* arr[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(n=a; n<=b; n++)
    {
        if(n>9)
        {
            if(n%2==0)
            {
                 cout<<"even"<<endl;
            }
            else 
            {
                cout<<"odd"<<endl;                         
            }                     
        }
        else 
        {
            puts(arr[n]);
                   
        }          
    }
return 0;
}