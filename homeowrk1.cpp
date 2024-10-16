#include <iostream>
#include <string>
using namespace std;
int main() {
	string v={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int n,count=0,arr[26]={0};
	cin>>n;
	n+=1;
	while(n--){
		string str;
		getline(cin,str);
		for(char c:str){
			if('A' <= c && c <= 'Z'){
				arr[c - 'A']+=1;
				if(count<arr[c-'A'])
					count=arr[c-'A'];
			}
				
			if('a' <= c && c <= 'z'){
					
				arr[c - 'a']+=1;
				if(count<arr[c-'a'])
					count=arr[c-'a'];
			}
		}
		
	}
	while(count){
		for(int i=0;i<26;i++){
			if(count==arr[i]){
				cout<<v[i]<<" "<<count<<"\n";
			}
			
		}
		count--;
	}
}