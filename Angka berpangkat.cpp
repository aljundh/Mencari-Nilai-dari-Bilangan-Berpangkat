#include<iostream>
using namespace std;

int pangkat(int x,int y);

int main(){
	int x,y;
	cout<<"Masukkan NILAI X = ";cin>>x;
	cout<<"Masukkan NILAI Y = ";cin>>y;
	cout <<x<<" Dipangkatkan "<<y<<" = "<<pangkat(x,y);
	return 0;
}
int pangkat(int x,int y){
	if (y==0){
		return 1;
	}
	else
	{
		return x*pangkat(x,y-1);
	}
}

