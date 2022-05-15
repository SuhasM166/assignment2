#include<iostream.h>
int main(){
int n=100;
int q,total,pad;
cout<<"Quantity purchased";
cin>>q;
total=n*q;
cout<<"MRP"<<total;
if(total >1000){
pad=total-(0.1*total);
}
else
pad=total;

cout<<"Price after Discount"<<pad<<endl;

}