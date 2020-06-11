
#Difficulty Range: 800
#Problem Code: 931A
#Problem Link: https://codeforces.com/problemset/problem/931/A
#Problem Name: Friends Meeting




int a,b; 
cin>>a>>b;
int x = abs(b-a);
if(x%2==0){
x/=2;
cout<<x*(x+1)<<endl;
}
else{
x/=2
cout<<x*(x+1)+x+1<<endl;
