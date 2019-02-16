#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<stdio.h>
#include <map>
using namespace std;
int main(){
	freopen("input.in","r",stdin);
	freopen("output1.out","w",stdout);
 	int t;
	cin>>t;
	int cnt =0;
	while(t--)
	{
		int n;
		cin>>n;
		getchar();
		string s[n];
		string ans="";
		int max_count = 0;
		for(int i=0;i<n;i++)
		{
			getline(cin,s[i]);
		}
		sort(s, s+n);
		for(int i=0;i<n;i++)
		{
			map<char,bool>mp;
			int count = 0;
			for(int j=0;j<s[i].length();j++)
			{
				if(s[i][j]>='A' && s[i][j]<='Z')
				{
					if(mp[s[i][j]]==0)
					{
						count++;
					}
					mp[s[i][j]] =1;
				}
			}
			if(max_count<count)
			{
				ans = s[i];
				max_count = count;
			}
		}
		cout<<"Case #"<<++cnt<<": "<<ans<<endl;
	}
    return 0;
}



