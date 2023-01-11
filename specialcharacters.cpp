#include<iostream>
using namespace std;
int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
	char c[str.length()],d[str.length()];
	int k=0,j=0,e[str.length()];
	for(int i=0;i<str.length();i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			c[j]=str[i];
			j++;
		}
		else {
			d[k]=str[i];
			e[k]=i;
			k++;
		}
	}
	k=0;
	for(int i=0;i<str.length();i++){
		if(i==e[k]){
			cout<<d[k];
			k++;
		}
		else
		    cout<<c[j-1-i+k];
	}
}