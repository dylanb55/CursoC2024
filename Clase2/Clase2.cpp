#include<iostream> //Libreria de entrada y salida de datos en c++

using namespace std; //Para simplificar codigo

int main(){ //Funcion principal
	int numero;
	cout << "Digite un numero: " << endl;
	cin >> numero;
	
	char caracter;
	
	cout << "Digite una frase: " << endl;
	cin >> caracter;
	cout << caracter << endl;
	
	fflush(stdin);
	string cadena;
	
	cout << "Digite una frase2: " << endl;
	getline(cin,cadena);
	cout << cadena << endl;
	
	
}