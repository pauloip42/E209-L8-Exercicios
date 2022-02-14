#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	// 0,8 se n < 12
	// 0,65 se n >= 12
	
	int n; //número de laranjas compradas
	double x;
	cout << "Quantas laranjas foram compradas?: ";
	
	cin >> n;
	
	if(n < 12){
		cout << "Preco da unidade: RS 0.8" << endl;
		x = n*0.8;
	}
	else
	{
		cout << "Preco da unidade: RS 0.65" << endl;
		x = n*0.65;
	}
	
	cout << "Preco total: RS " << fixed << setprecision(2) << x;
	
	return 0;
}