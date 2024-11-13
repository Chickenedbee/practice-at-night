#include<iostream>
#include<string>
#include<vector>
using namespace std;
template<class t1,class t2>
class Mypair
{
private:
    t1 *str;
    t2 begin,end;
public:
    Mypair(){};
    Mypair(t1 *&s,t2 begin,t2 end):str(s),begin(begin),end(end){}

    int binary_search(t1 target,t2 n){
        begin=0;end=n;
        
        while(begin<=end){
            t2 midion=(begin+end)/2;
            if(str[midion]<target){
                begin=midion + 1;
            }
            else if(str[midion]>target){
                end=midion - 1;
            }
            else{
                
                return midion;
            }
        }
        return -1;       

    };
    
    
};
int main(){
    char c;
    int n,line;
    while(cin>>c&&!cin.eof()){
        cin>>n>>line;
        n--;
    if(c=='i'){
        int *data = new int[n],target;
        for(size_t i=0;i<=n;i++){
            cin>>data[i];
        }
        Mypair<int,int> pair(data,0,n);
        for (size_t i = 0; i < line; i++)
        {
            cin>>target;
            cout<<pair.binary_search(target,n)<<endl;
        }
        
    }
    else if(c=='s'){
        string *data = new string[n],target;
        for(size_t i=0;i<=n;i++){
            cin>>data[i];
        }
        Mypair<string,int> pair(data,0,n);
        for (size_t i = 0; i < line; i++)
        {
            cin>>target;
            cout<<pair.binary_search(target,n)<<endl;
        }
    }
    }
    
    
}


