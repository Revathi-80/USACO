#include<iostream>
using namespace std;
#define ll long long

int main(){
freopen("shell.in", "r", stdin);
freopen("shell.out", "w", stdout);
int swaps,g,a,b,i=0,cnt=0,cnt1=0,cnt2=0;
cin>>swaps;
int arr[3] ={1,0,0};
int brr[3]={0,1,0};
int crr[3]={0,0,1};

while(swaps--){
 cin>>a>>b>>g;
swap(arr[a-1],arr[b-1]);
if(arr[g-1]==1) cnt++;
swap(brr[a-1],brr[b-1]);
if(brr[g-1]==1) cnt1++;
swap(crr[a-1],crr[b-1]);
if(crr[g-1]==1) cnt2++;
}
int mx= max(cnt,max(cnt1,cnt2));
cout<<mx<<endl;
	return 0;

}
