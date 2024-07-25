#include<iostream>

using namespace std;

int main(){
	int calefaccion = 500000;
	string mes;
	int numero_empresa;
	
	cout << "Digite el mes: " << endl;
	getline(cin,mes);
	
	cout << "Digite el numero de la empresa " << endl;
	cin >> numero_empresa;
	
	int factor_alojamiento = (numero_empresa/100) % 10;
	int factor_empleador = (numero_empresa/10) % 10;
	int factor_bono = (numero_empresa % 10);
	
	int gasto_total = (factor_alojamiento*factor_empleador*factor_bono) + calefaccion;
	
	cout << "El mes es: " << mes << " y el gasto total del mes fue de: " << gasto_total << endl;
}