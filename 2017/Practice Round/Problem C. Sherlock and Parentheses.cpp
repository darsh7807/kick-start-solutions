#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	freopen("C-large-practice.in","r",stdin);
	freopen("output1.out","w",stdout);
    int t;
    cin>>t;
    int tests=1;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        long long int x = min (l,r);
        cout<<"Case #"<<tests++<<": "<<(x*(x+1))/2<<endl;
    }
    return 0;
}
