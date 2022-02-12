#include<iostream>
using namespace std;
#define ll long long
const int n=3;
int capacity[n],milk[n];
void pour(int i,int j){
	int amt= min(milk[i],capacity[j]-milk[j]);
	milk[i]-=amt;
	milk[j]+=amt;
}

int main(){
freopen("mixmilk.in", "r", stdin);
freopen("mixmilk.out", "w", stdout);
for(int i=0;i<3;i++){
cin>>capacity[i]>>milk[i];
}
for(int i=0;i<100;i++){
	pour(i%n,(i+1)%n);
}
for(int i=0;i<n;i++)
	cout<<milk[i]<<endl;

	return 0;
}
