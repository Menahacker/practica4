#include <iostream>
#include <string>

using namespace std;

int main()
{
	float altura, peso, IMC;

	cout<< ("Introduce tu altura (en metros): ");
	cin >> altura;

	cout<< ("Introduce tu peso (en kilogramos): ");
	cin >> peso;

	IMC = peso / (altura * altura);

	cout << ("Tu indice de masa corporal es: ", IMC);

	if (IMC < 20)
		cout<<(" Peligro, estas bajo de peso");
	else
		if (20 < IMC && IMC <= 25)
			cout<< (" Felicidades estas en tu peso");
		else
			if (25 < IMC && IMC < 30)
				cout<< ("Tienes sobrepeso");
			else
				if (30 < IMC && IMC < 35)
					cout<< ("tienes obesidad");
				else
					if (35 <= IMC)
						cout<< ("Tienes obesidad morbida");


	return 0;

}
