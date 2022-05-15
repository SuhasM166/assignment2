#include<iostream.h>
int main(){
int m;
cout<<"Please enter your marks:";
cin>>m;
if(m<25)
cout<<"F"<<endl;
else if(m>=25 && m<45)
cout<<"E"<<endl;
else if(m>=45 && m<50)
cout<<"D"<<endl;
else if(m>=50 && m<60)
cout<<"C"<<endl;
else if(m>=60 && m<80)
cout<<"B"<<endl;
else if(m>=80 && m<=100)
cout<<"A"<<endl;
}