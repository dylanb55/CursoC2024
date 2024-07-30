#include<iostream>
#include<math.h> //Libreria matematica y trigonometrica de c++

using namespace std; //Ahorrar codigo

int main(){
	float numero;
	float numero2;
	float resultado;
	cout << "Digite un numero ";
	cin >> numero;
	cout << "Digite otro numero";
	cin >> numero2;
	
	resultado = sqrt(numero);
	
	cout << resultado << endl;
	
	resultado = pow(numero,numero2);
	cout << resultado << endl;
	
	resultado = exp(numero);
	cout << resultado << endl;
	
	resultado = fabs(numero);
	cout << resultado << endl;
	
	resultado = floor(numero);
	cout << resultado << endl;
	
	resultado = ceil(numero);
	cout << resultado << endl;
	
	resultado = floor(cos(numero));
	cout << resultado << endl;
}