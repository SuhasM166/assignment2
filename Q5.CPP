#include<iostream.h>
int main(){
char ch;
cout<<"Enter a character to check whether uppercase/lowercase";
cin>>ch;
if(ch>=65 &&ch<=90)
cout<<"You have entered an uppercase character";cout<<endl;
if(ch>=97 && ch<=122)
cout<<"You have enterd a lowercase character";cout<<endl;
return 0;
}