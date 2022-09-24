//creado por: Martha Paola Loor Andrade
#include<iostream>
using namespace std;
int main()
{
	int MPLA_i=0,MPLA_l;
	float MPLA_x,MPLA_s=0;
	cout<<"ingrese el limite MPLA_l="; cin>>MPLA_l;
	do{

	cout<<"ingrese el numero MPLA_x="; cin>>MPLA_x;
	MPLA_i=MPLA_i+1;
	MPLA_s=MPLA_s+MPLA_x;



	}while(MPLA_i<MPLA_l);
	cout<<"Se ingresaron "<<MPLA_l<<" numeros "<< "que sumaron "<<MPLA_s<<endl;
	return 0;
}
