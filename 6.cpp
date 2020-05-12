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


ll sum_of_square(int n){
	ll ans = n*(n+1)*(2*n+1)/6;

	return ans ;
}

ll square_of_sum(int n){
	ll  ans = pow(n * (n + 1) / 2,2);

	return ans ;
}

int main(){
	fastercode;
	cout << abs(sum_of_square(100) - square_of_sum(100)) << endl;
	return 0;
}



 

