#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b+c+d)cout<< "Yes"<<endl;
    else if(a+b==c+d){
        cout<< "Yes"<<endl;
    }
    else if(a+b+c==d){
        cout<< "Yes"<<endl;
    }
    else if(a+c+d==b){
        cout<< "Yes"<<endl;
    }
    else if(a+b+d==c){
        cout<< "Yes"<<endl;
    }
    else if(b+c+d==a)
    {
        cout<< "Yes"<<endl;
    }
    else if(b+c==a+d)
    {
        cout<< "Yes"<<endl;
    }
    else if(a+c==b+d)
    {
        cout<< "Yes"<<endl;
    }
    else if(b==a+c+d)
    {
        cout<< "Yes"<<endl;
    }
    else if(c==a+b+d)
    {
        cout<< "Yes"<<endl;
    }
    else if(d==a+b+c){
        cout<< "Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }    
}
