#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int sizeA=5;
int a[sizeA]={0,1,1,1,0};
int* p;
int war=0;

p=find(a,a+sizeA,0);
for(int i=p-a;i<sizeA;i++){
    if(a[i]==1){war+=1;}
}
a[p-a]=1;
p=find(a,a+sizeA,0);
for(int j=p-a;j<sizeA;j++){
    if(a[j]==1){war+=1;}
}
cout<<war;
return 0;
}
