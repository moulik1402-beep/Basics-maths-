#include<bits/stdc++.h>
using namespace std;

int count(int n){
	int cnt = 0;
	int lastDigit;
	while(n > 0){
	    lastDigit = n%10;
		cnt++;
		n = n/10;
	}
	cout << lastDigit << endl;
	return cnt ;
}

int main(){
	int n;
	cin >> n;
   cout << count(n);
}
