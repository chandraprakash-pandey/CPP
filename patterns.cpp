#include<bits/stdc++.h>
using namespace std;


void pattern1(int num){
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern2(int num){
	for(int i=0;i<num;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern3(int num){
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void pattern4(int num){
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void pattern5(int num){
	for(int i=1;i<=num;i++){
		for(int j=num;j>=i;j--){ // (int j = 0; j<num-i+1; j++)
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern6(int num){
	for(int i=1;i<=num;i++){
		for(int j = 1; j<=num-i+1; j++){ 
			cout<<j;
		}
		cout<<endl;
	}
}

void pattern7(int num){
	for(int i = 0; i<num; i++){
		//space
		for(int j = 0; j<num-1-i; j++){
			cout<<" ";
		}

		//star
		for(int j = 0; j<(2*i)+1; j++){
			cout<<"*";
		}

		//space
		for(int j = 0; j<num-1-i; j++){
			cout<<" ";
		}

		cout<<endl;
	}
}

void pattern8(int num){
	for(int i = 0; i<num; i++){
		//space 
		for(int j=0; j<i; j++){
			cout<<" ";
		}

		//star
		for(int j = 0; j< 2*num-(2*i+1) ; j++){
			cout<<"*";
		}

		//space
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

void pattern9(int num){
	pattern7(num);
	pattern8(num);
}

void pattern10(int num){
	for(int i = 1; i<= 2*num-1; i++){
		if(num>=i){
			for(int j = 1; j<=i; j++){
				cout<<"*";
			}
		}
		else{
			for(int j = 1; j<=2*num-i; j++){
				cout<<"*";
			}
		}
		cout<<endl;
	}
}

void pattern11(int num){
	int start = 1;
	for(int i = 0; i<num; i++){
		if(i%2 == 0) start = 1;
		else start = 0;
		for(int j = 0; j<=i; j++){
			cout<<start;
			start = 1-start;
		}
		cout<<endl;
	}
}

void pattern12(int num){
	for(int i = 1; i<=num; i++){
		for(int j = 1; j<=i; j++){
			cout<<j;
		}

		for(int j = 1; j<=2*(num-i); j++){
			cout<<" ";
		}

		for(int j = i; j>=1; j--){
			cout<<j;
		}
		cout<<endl;
	}
}

void pattern13(int num){
	int count = 1;
	for(int i = 1; i<=num; i++){
		for(int j = 1; j<=i; j++){
			cout<<count<<" ";
			count +=1;
		}
		cout<<endl;
	}
}

void pattern14(int num){
	for(int i = 0; i<num; i++){
		for(char ch = 'A'; ch<='A'+i; ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

void pattern15(int num){
	for(int i = 0; i<num; i++){
		for(char j = 'A'; j<='A'+(num-i-1); j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void pattern16(int num){
	char ch = 'A';
	for(int i = 0; i<num; i++){
		for(int j = 0; j<=i; j++){
			cout<<ch<< " ";
		}
		cout<<endl;
		ch = ch+1;
	}
}

void pattern17(int num){
	for(int i = 1; i<=num; i++){
		//space
		for(int j = 1; j<=num-i; j++){
			cout<<" ";
		}

		//star
		char ch = 'A';
		for(int j = 1; j<=2*i-1; j++){
			cout<<ch;
			if(j>=i){
				ch -= 1;
			}
			else{
				ch += 1;
			}
		}

		//space
		for(int j = 1; j<=num-i; j++){
			cout<<" ";
		}

		cout<<endl;
	}
}

void pattern18(int num){
	for(int i = 0; i<num; i++){
		for(char j = 'E'-i; j<='E'; j++){
			cout<<j;
		}
		cout<<endl;
	}
}

void pattern19(int num){
	for(int i = 0; i<num; i++){
		for(int j = 0; j<num-i; j++){
			cout<<"*";
		}

		for(int j = 0; j<2*i; j++){
			cout<<" ";
		}

		for(int j = 0; j<num-i; j++){
			cout<<"*";
		}

		cout<<endl;
	}
	for(int i = 1; i<=num; i++){
		for(int j = 0; j<i; j++){
			cout<<"*";
		}
		for(int j = 0; j<2*(num-i); j++){
			cout<<" ";
		}
		for(int j = 0; j<i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern20(int num){
	int spaces = 2*num-2;
	for(int i = 1; i<=2*num-1; i++){
		int stars = i;
		if(i>num){
			stars = 2*num-i;
		}

		// stars
		for(int j = 0; j<stars; j++){
			cout<<"*";

		}

		//spaces
		for(int j = 0; j<spaces; j++){
			cout<<" ";

		}

		for(int j = 0; j<stars; j++){
			cout<<"*";

		}
		cout<<endl;

		if(i<num){
			spaces -=2;
		}else{
			spaces +=2;
		}
	}
}

void pattern21(int num){
	for(int i = 0; i<num; i++){
		// if(i == 0 || i == num-1){
		// 	for(int j = 0; j<num; j++){
		// 		cout<<"*";
		// 	}
		// }else{
		// 	for(int j = 0; j<num; j++){
		// 		if(j == 0 || j == num-1){
		// 			cout<<"*";
		// 		}else{
		// 			cout<<" ";
		// 		}
		// 	}
		// }
		// cout<<endl;

		for(int j = 0; j<num; j++){
			if(i == 0 || i == num-1 || j == 0 || j == num-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

void pattern22(int num){
	for(int i = 0; i<2*num-1; i++){
		for(int j = 0; j<2*num-1; j++){
			int top = i;
			int left = j;
			int bottom = 2*num-2-i;
			int right = 2*num-2-j;
			cout<<num-min(min(left,right),min(top, bottom)); 
		}
		cout<<endl;
	}
}

int main(){
		int num;
		cin>>num;
		pattern22(num);
	}