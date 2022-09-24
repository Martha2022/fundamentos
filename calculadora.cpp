//Programa que presenta las operaciones básicas
//Creado por martha paola loor andrade 
//Fecha: 24-09-2022
#include<iostream>
using namespace std;
int main()
{
	float MPLA_x,MPLA_y,MPLA_s,MPLA_m,MPLA_d,MPLA_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de MPLA_x=:";
	cin>>MPLA_x;
	cout<<"Ingrese en valor de MPLA_y=:";
	//Operaciones 
	cin>>MPLA_y;
	MPLA_s=MPLA_x+MPLA_y;
	MPLA_m=MPLA_x*MPLA_y;
	MPLA_d=MPLA_x/MPLA_y;
	MPLA_r=MPLA_x-MPLA_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<MPLA_x<<" + "<<MPLA_y<<" = "<<MPLA_s<<endl;
	cout<<"Las multiplicacion de "<<MPLA_x<<" * "<<MPLA_y<<" = "<<MPLA_m<<endl;
	cout<<"Las division de "<<MPLA_x<<" / "<<MPLA_y<<" = "<<MPLA_d<<endl;
	cout<<"Las resta de "<<MPLA_x<<" - "<<MPLA_y<<" = "<<MPLA_r<<endl;
	return 0;
}
