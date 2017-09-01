#include<iostream>
using namespace std;
template<class x>void swp(x a,x b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n"<<a<<"   "<<b;
    }
    int main(){
    int c,d;
    double e,f;
    cin>>c>>d>>e>>f;
    swp(c,d);
    swp(e,f);
    return 0;
    }
