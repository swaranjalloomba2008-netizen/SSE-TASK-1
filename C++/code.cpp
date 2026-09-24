
#include <iostream>
using namespace std;
int main(){
// cout << "hello wolrd"; 
// cout << "namaste dunia"<< endl;

// cout << "hello world\n";
// cout << "namaste dunia\n";

// float percentile = 99.53;
// cout << "hello world" << "namaste dunia" << endl;

// cout << "my percentile in jee mains session 1 is:"<< percentile<< endl;

// /*VARIABLES AND DATA TYPE..
// PRIMITIVE DATATYPES..
// INT=4BYTES
// CHAR=1BYTE
// FLOAT=4BYTES
// BOOL=1BYTE
// DOUBLE=8BYTES

// sizeof(variable) print how many bytes datatype will store in memory
// */
 
// int age =18;
// cout << sizeof(age)<< endl;

// char b= 'y';
// cout << sizeof(b)<< endl;
// cout << b << endl;

// // TYPE CASTING -> CONVERTING DATA FROM TYPE ONE TO ANOTHER

// char ch = 98;
// cout << ch << endl;

// char ch1 = 'A';
// int value1=ch1;
// cout<< value1 <<endl;

//  // giving inputs....

//  int age1 ;
//  //cout << age1 << endl; in this case any random garbage value will print
// cout<< "ENTER THE AGE:";
// cin>>age1 ;
// cout << "MY AGE IS::" << age1 <<endl;


/*
OPERATORS::
1. ARITHMATIC OPERATOR:: +,-,*,/,% (% this is modulo operator which is used fr)
2. RELATIONAL OPERATOR:: ==,<,>,<=,>=,!=  
3. LOGICAL OPERATOR
*/
//ARITHMATIC OPERATORS....
// method 1
// int a1 = 25, a2 = 5 ;

// cout <<"SUM ="<< a1+a2<< endl;
// cout<< "DIFFERENCE ="<< a1-a2<< endl;
// cout<<"PRODUCT ="<< a1*a2<< endl;
// cout<<"QUIOTIENT="<< a1/a2<< endl;
/*
THERE ARE SOME RULES IN DIVISION...
int/int = int 
float/int= float
double/int= double 
WE CAN ALSO PRINT DECIMAL NO. BY USING TYPECASTING
*/
// cout << 5/2 << endl;// int/int
// cout << 5.0/2 <<  endl;// float/int 
// cout << (double)5/2 << endl;// using data typecasting

// int ans1 = (double)5/2 ;// here is 2.5 but datatype is integer so at the end ans1 will store integer value 
// float ans2 = (double)5/2;// here ans is 2.5 and datatype is float therefore at the end float no. will print 
 
// cout << ans1 << endl;
// cout<< ans2<< endl;






// RELATIONAL OPERATORS
// cout<< (3<5) << endl;
// cout << (3>5)<< endl;
// cout<< (3<=5) << endl;
// cout<< (3>=5) << endl;
// cout<< (3!=5) << endl;// 3 is not equal to 5

// // we can also use variables......

// int b1 = 3 , b2 = 5;
// cout<< (b1<b2) << endl;
// cout<< (b1>b2) << endl;
// cout<< (b1<=b2) << endl;
// cout<< (b1>=b2) << endl;
// cout <<(b1!=b2)<< endl;




/*
LOGICAL OPERATOR...
1. OR {"||"} let say we have two statements "0" will only print when both statements false otherwise it will print "1"
2. AND {"&&"} let us suppose there are two statements "1" will print only when both statements are true other it will print "0" 
3. NOT {"!"} it only changes ture->false and vise versa ....if any statement is true and with the help of this "!"  false will print ..and visa versa

*/






// solving a ques sum of two no.
 
// int a,b;
// cout <<"ENTER THE VALUE OF a : ";
// cin >> a;
// cout <<"ENTER THE VALUE OF b : ";
// cin >> b;

// int sum = a+b;
// cout << "sum :" << sum << endl;








//CONTIONAL STATEMENTS... if else conditions

// cin>>a;
 
// int a = -45;
// if (a>0){
//     cout << "a is positive" << endl;// this will print when condition is true i.e when is actualy a>0
// }else{
//     cout<< "a is non positive\n ";// this will print when condition gets false i.e when a<=0 
// }

// int age ;
// cout << "WHAT IS YOUR AGE : ";
// cin >> age;
// if (age >=18){
//     cout << "YOU ARE ELIGIBLE FOR VOTE "<< endl;
// }else{
//     cout<< "YOU ARE NOT ELIGIBLE FOR VOTE " << endl;
// }









// int n ;
// cout <<"THE NUMBER IS :";
// cin >>n;
// if (n%2==0){// n%2=0 is wrong because this "=" notation is used for assigning value
//     cout << "the number is even"<< endl;
// }else{
//     cout<< "the number is odd"<< endl;
// }






// if-> else if-> else conditions 

// int marks;
// cout <<"MARKS IN FINAL SEM :" ;
// cin>>marks;

// if (marks>=90 && marks<=100){
//     cout <<"GRADE A" << endl;
// }else if (marks >=80 && marks <90 ){
//     cout << "GRADE B"<< endl;
// }else if (marks >=70 && marks<80){
//     cout << "GRADE C"<< endl;
// }else {
//     cout << "GRADE D"<< endl;
// }






// QUES ::: FIND THE CHARACTER LOWER OR UPPER CASE..

// char ch;
// cout<< "THE CHARACTEWR IS ::";
// cin>> ch;
// if ('a'<=ch && ch<='z'){// here i can write 97 in place of 'a' and 122 in place of 'z' as per ASCII  table
//     cout << "LOWERCASE"<< endl;
// }else {
//     cout<< "UPPERCASE"<< endl;
// }





// TERNARY(3) STATEMENT (replace if else syntax)::: cout<<(condition?string1:string2);
// example 

// int x ;
// cout<<"x is:";
// cin>>x;
// cout<<( x>=0?"positive": "negetive") ;














return 0;
} 









































































