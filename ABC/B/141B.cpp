#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int res = 0;
	char dance[100];
	for(int i = 0; i < 100 ; i++) {
		scanf("%c",&dance[i]);
		if(i % 2 == 1 && dance[i] == 'L'){
			res = 1;
			break;
		}
		else if(dance[i] == 'R') {
            res = 1;
			break;
		}
		if(dance[i] == '\n')break;
	}
	if(res == 0)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}