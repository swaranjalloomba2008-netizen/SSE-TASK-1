#include<iostream>
using namespace std;

int linearSearch(int arr[], int size , int target ){

  for(int i=0;i<size;i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
  }
int main(){
 
int arr[] ={1,2,4,5,7,8,9};
int size=7;


cout<< "INDEX OF THE GIVEN TARGET IS : "<<linearSearch(arr,size,7);
cout<<endl;
cout<<"INDEX OF THE GIVEN TARGET IS : "<<linearSearch(arr ,size,90);
return 0;
}



