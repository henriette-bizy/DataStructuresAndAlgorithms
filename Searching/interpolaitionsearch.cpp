#include<iostream>
using namespace std;
int interpolationSearch(int*arr, int start, int end, int search_key){
	int pos;
	
	if(start <= end && search_key>= arr[start] && search_key<=arr[end]){
		pos= start +(((double)(end-start)/(arr[end]-arr[start]))*(search_key-arr[start]));
		if(arr[pos]==search_key){
			return pos;
		}else if(arr[pos]>search_key){
			return interpolationSearch(arr, start, pos+1, search_key);
		}else{
			return interpolationSearch(arr, pos-1, end, search_key);
		}	
	}
	return -1;
}int main(){
	int arr[]={ 10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47 };
	int size= sizeof(arr)/sizeof(arr[0]);
	int search_key;
	cout<< "Enter the value you want to search"<< endl;
	cin>>search_key;
	int index= interpolationSearch(arr, 0, size-1, search_key);
	if(index!=-1){
		cout<<"The index of the searched key is: "<<index<<endl;	
	}
	
	return 0;
	
}