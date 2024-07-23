#include<iostream> 

using namespace std;

int main(){
	int numero1;
	int numero2;
	float resultado;
	
	cout << "Digite un numero" << endl;
	cin >> numero1;
	
	cout << "Digite otro numero" << endl;
	cin >> numero2;
	
	resultado = numero1 + numero2;
	cout << "El resultado de la suma es: " << resultado << endl;
	resultado = numero1 - numero2;
	cout << "El resultado de la resta es: " << resultado << endl;
	resultado = numero1*numero2;
	cout << "El resultado de la multiplicacion es: " << resultado << endl;
	resultado = float(numero1)/float(numero2); //Casting, el programador decide que los numeros enteros sean trabajados como float
	cout << "El resultado de la division es: " << resultado << endl;
	
	//diga si el numero ingresado es par o impar
	
	int numero_par_impar;
	
	cout << "Digite un numero" << endl;
	cin >> numero_par_impar;
	
	if(numero_par_impar % 2 == 0){
		cout << "El numero es par" << endl;
	}
	else{
		cout << "El numero es impar" << endl;
	}
	
}