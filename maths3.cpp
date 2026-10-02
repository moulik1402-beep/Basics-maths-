#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
    int temp = n;
	int ld;
	int sum = 0;
	while(n>0){
		ld = n%10;
		sum = sum + (ld*ld*ld);
		n=n/10;
	}
    if(sum == temp){
    	cout << temp << " is a armstrong number";
    }else{
    	cout << temp << " is not a armstrong number";
    }
return 0;    
}