#include<iostream>
using namespace std;


// if we pass arrays in the function they are implicitly comes in the category of pass by references 
  void changeArr(int arr[], int size){

      for(int i=0; i<size; i++){
        arr[i] = 2*arr[i];
      }
  }

void swap (int &x , int &y){      //& just infornt of x,y signifies that we are using pass by referances
  int temp;// this a temporary varible
  temp=x;
  x=y;
  y=temp;

}





int main(){
int arr[] ={1,2,3};

 

changeArr(arr,3);
//now new array is created arr[]={1,2,3} --> arr[2,4,6]

    for(int i=0;i<3;i++){
      cout<< arr[i]<<" ";
    }

cout << endl;
    // SWAP NUMBERS

      int a=10,b=20;

      swap(a,b);

      cout << a<< " " <<b<<endl;









  return 0;
  }