#include<iostream.h>
int main(){
int cheld,cattend;
cout<<"Total classes held:";
cin>>cheld;
cout<<"Total classes attended:";
cin>>cattend;
float percent=(100*cattend)/cheld;
cout<<"classes held"<<cheld<<endl;
cout<<"Classes attended"<<cattend<<endl;
cout<<"% of classess attended"<<percent<<endl;
if(percent < 75){
cout<<"You are not eligible!"<<endl;
}
else
cout<<"You are eligible"<<endl;
}