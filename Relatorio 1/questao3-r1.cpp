#include <iostream>
#include <iomanip>

using namespace std;

void analisa(int vetor[5]);

int main()
{
	//n -> quantidade de testes
	//funcao -> 5 valores inteiros e mostra quantos são pares, impares, positivos e negativos

	int n;
	cin >> n;

	while(n > 0)
	{
		int vetor[5];

		for(int i = 0; i < 5; i++)
		{
			cin >> vetor[i];
		}
		analisa(vetor);
		n--;
	}

	return 0;
}

void analisa(int vetor[5])
{
	int par = 0;
	int impar = 0;
	int positivo = 0;
	int negativo = 0;

	for(int i = 0; i < 5; i++)
	{
		if(vetor[i] % 2 == 0)
		{
			par++;
		}
		else
		{
			impar++;
		}

		if(vetor[i] >= 0)
		{
			positivo++;
		}
		else
		{
			negativo++;
		}
	}

	cout <<"Quantidade de numeros pares: " << par << endl << "Quantidade de numeros impares: " << impar << endl << "Quantidade de numeros positivos: " << positivo << endl << "Quantidade de numeros negativos: " << negativo << endl;
}
