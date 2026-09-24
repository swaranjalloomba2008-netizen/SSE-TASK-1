#include<iostream>
using namespace std;


int main (){


//LOOPS:::: when we have to check same condition repetedly or again and again... 
// 1. while loop
// 2. for loop
// 2. do-while loop

// int count = 1;
// int n;
// cout << " the value of n is:";
// cin>>n;
// while(count<=n){  // LOOP AAGE TBHI AAGE CHLEGA WHEN THE CONDITION INSIDE "WHILE" IS TRUE
//    cout << count << " " ; 
//    count +=1; // this means count ke ander 1 add krdo 
              // this is also denoted as count = count+1 or count++ here count
             //  here count is a variable
// }





//  int n ; 
//  cout <<"THE VALUE OF N IS : " ;
//  cin>>n;

//  for(int i=1; i<=n; i=i+2){
//    cout<< i << " ";
//  }





// QUES ::: SUM OF FIRST N NATURAL NUMBERS......

// int n;
// cout<< " THE VALUE OF n IS ::";
// cin >> n;

// int sum = 0;
// for (int i=1; i <=n ; i++){
//   sum = sum + i ;
// }
// cout<< "SUM = " << sum << endl;








// int n ;
// cout << " THE VALUIE OF n IS :: ";
// cin >>n;

// int i = 1;
// int sum = 0;
// while(i<=n){
// sum = sum +i;
// i = i+1;}
// cout << " SUM = " << sum << endl;









// BREAK STATEMENT INSIDE LOOP

// int n;
// cout<< " THE VALUE OF n IS ::";
// cin >> n;

// int sum = 0;
// for (int i=1; i <=n ; i++){
//   sum = sum + i ;
//   if (i==5){
//     break;// when loop arrives at i=5 loop will break and sum till 5 will print
//   }
// }
// cout<< "SUM = " << sum << endl;






// QUES ::: SUM OF ALL ODD NUMBERS FROM 1 TO N
//METHOD 1
// int n ;
// cout << " THE VALUE OF n IS ::";
// cin >> n;
// int sum = 0;
// for (int i =1; i<=n ;i+=2 ){
// sum = sum +i;

// }
// cout<< " SUM =" << sum << endl;








// METHOD 2

// int n;
// cout<< " n=";
// cin>> n;
// int oddSum = 0;
// for (int i = 1; i<=n ; i++){
//     if(i%2==1){
//         oddSum+=i;}
    
// }
// cout << "ODDSUM="<< oddSum<< endl;





// QUES :: CHECK IF A NUMBER IS PRIME OR NOT....

// int p;
// cout << "P=";
// cin>> p;
//  bool isPrime = true;// BY DEFAULT BS ISKO ASSIGN KR DIYA ..ISKO INITIALIZE KRNA PDEGA
// for (int i =2; i*i<=p; i++)
//    if (p%i==0){
//       isPrime= false;
//    }

//    if (isPrime==true){
//       cout<< "PRIME"<< endl;
//    }else{
//       cout << "NON PRIME"<< endl;
//   }


return 0;
}

