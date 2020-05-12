// ----------------------------------------------------IN CPP --------------------------------------------------------//
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<math.h>
#include<string>
#include<numeric>
#include<map>
#define fastercode ios_base::sync_with_stdio(false);cin.tie(NULL);
#define FOL(i,a,b) for(int i = a; i < b; i++)
#define FE(x) for(auto i:x)
#define WD(n) while(n--)
#define ll long long 
#define pb push_back
#define endl "\n"
using namespace std;


int gcd(int a, int b){
	if(b == 0) 
		return a;
	return gcd(b, a % b);
}

int lcm(){
	ll ans = 1;
	for(int i = 2; i <=20; i++){
		ans = (i*ans)/gcd(i, ans);
	}
	return ans;
}

int main(){
	fastercode;
	cout << lcm() << endl;
	return 0;
}



 

