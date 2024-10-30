#include <iostream>

using namespace std;

void print_arr(int *arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout <<"size:"<<size<< '\n';
}

void change_size(int *&arr, int *size) {
	int new_size=*size+10;
    int *new_arr = new int[new_size];
    int *recycler = arr;
    copy(recycler, recycler + (*size), new_arr);
	
    delete[] recycler;
    arr = new_arr;
    
	for(int i=0;i<new_size;i++)
		arr[i]=1;
	
    
    *size=new_size;
}

int main() {
    int size = 3;
    int *arr = new int[size];
    arr[2]=4;
    print_arr(arr,size);
	change_size(arr,&size);
	print_arr(arr,size);
	
   }
