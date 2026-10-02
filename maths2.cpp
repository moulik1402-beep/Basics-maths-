#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n){
	 int reversenum = 0;
	 int count = 0;
	 int lastDigit;

	 while(n>0){
	 	lastDigit = n%10;
	 	reversenum = (reversenum * 10) + lastDigit;
	 	n = n/10;
	 }
	 cout << reversenum ;
}

int main(){
	int n;
	cin >> n;
    reverseNumber(n);
}