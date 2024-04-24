cpp
#include<iostream>
using namespace std;

void displayMenu();
int addition(int a, int b);
int subtraction(int a,int b);
int multiplication(int a,int b);
void division(int a,int b);

int main(){
char choice;
int num1,num2;

do{
displayMenu();

int option;
cout<<"enter your choice:";
cin>>num1>>num2;

switch(option){
case 1:
cout<<"Result:"<<addition(num1,num2)<<endl;
break;
case 2:
cout<<"Result:"<<substraction(num1,num2)<<endl;
break;
case 3:
cout<<"Result:"<<multiplication(num1,num2)<<endl;
break;
case 4:
division(num1,num2);
break;
default:
cout<<"Invalid choice!"<<endl;}

cout<<"press y or Y to continue:";
cin>>choice; }
while(choice=='y'|| choice =='Y');

return 0;
}
void displayMenu(){
cout<<"1- Addition\n";
cout<<"2- Substraction\n";
cout<<"3- Multiplication\n";
cout<<"4- Division\n";
}
int addition(int a,int b
return a+b;}
int substraction(int a,int b){
return a-b;}
int multiplication(int a,int b){
 return a*b;}
void division(int a, int b){if(b=!0){
cout<<"Result:"<<(float)a/b<<endl;
}
else{
cout<<"The second integer is zero,divide by zero"endl;
}

}
