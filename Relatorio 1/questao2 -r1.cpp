#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	// 0 < n < 50
	//imprimir restos da divisão pelos antecessores
	
	int n = 0;
	
	while(n > 50 || n == 0){
		cout << "Digite um numero entre 0 e 50" << endl;
		cin >> n;
	}
	
	for(int i = n - 1; i >0; i--){
		cout <<"Resto da divisão de " << n << " por " << i << ":" << n%i << endl;
	}
	return 0;
}