#include<iostream.h>
int main(){
int i,n=10;
int num[10];
float sum=0.0,avg;
cout<<"Enter 10 numbers:\n";
for(i=0;i<n;i++){
cin>>num[i];
sum+=num[i];
}
avg=sum/10;
cout<<"Average:"<<avg<<endl;
cout<<"Sum:"<<sum;
return 0;
}