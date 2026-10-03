#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	int count = 0;
	for(int i=1; i*i<=n; i++){
        if(n%i==0){
        	count++;
        	if(n/i != 1){
        		count ++;
        	}
        }
	}
	if(count == 2){
		cout << n << " is a prime number";
	}else{
		cout << n << " is not a prime number";
	}

return 0;
}