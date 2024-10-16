#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
	int count,small,big,i;
	vector<int> arr;
	while((cin>>count)&&(!cin.eof())){
		i=arr.size();
		if(arr.size()==0){
			arr.insert(arr.begin(),count);
			cout<<count<<"\n";
			continue;
		}
		while(arr[--i]>=count);
		arr.insert(arr.begin()+i+1,count);
		big=arr[arr.size()/2];
		if(arr.size()%2==0){
			small=arr[arr.size()/2-1];
			cout<<floor((small+big)/2)<<"\n";
		}
		else{
			
			cout<<floor(big)<<"\n";
		}
		
	}
}

