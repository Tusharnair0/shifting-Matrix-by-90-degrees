#include<iostream>
#define m 3
#define n 3
using namespace std;

void print(int a[m][n]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] <<" ";
		}
		cout <<""<<endl;
	}
}

void transpose(int a[m][n],int t[m][n]){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			t[i][j] = a[j][i];
		}
	}
}
 void reverse(int t[m][n], int rev[m][n]){
 	for(int i = 0; i < m; i++){
		for(int j = n-1; j >= 0; j--){
			rev[i][j] = t[i][2-j];
		}
	}
 }

int main(){
	int a[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
	int t[m][n];
	int rev[m][n];
	transpose(a,t);
	reverse(t,rev);
	print(rev);
}
