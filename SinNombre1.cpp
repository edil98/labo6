#include<iostream>
#include<stdio.h>
using namespace std;

    int main(){
		int v1[10],v2[10],v3[10];
	    int (i);

	cout<<"ingrese los 10 valores a sumar del primer arreglo:"<<endl;
	for(i=0;1<10;i++){
		cout<<"ingrese los 10 valores requeridos:"<<i<<":"<<endl;
		cin>> v1[i];
	}
	cout<<"ingrese los 10 valores del segundo arreglo"<<endl;
	for(i=0;1<10;i++){

	    cout<<"ingresa los 10 valores requerido"<<i<<":"<<endl;
	    cin>>v2[i];
	}
	cout<<"la suma de los 2 arreglos fue:"<<endl;
	for(i=0;i<10;i++){
		v3[i]=v1[i]+v2[i];
		cout<<i<<"="<<v3[i]<<endl;
	}
  system("pause");
	return 0;
}
