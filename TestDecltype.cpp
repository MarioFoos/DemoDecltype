//============================================================================
// Autor: Diardon
// Blog : https://diardon.wordpress.com/
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename U> auto sumar(T a, U b) -> decltype(a + b);

int main()
{
	int num1 = 7;
	decltype(num1) num2 = 13;  // num2 es de tipo int, igual que num1.

	cout << "num2: " << num2 << endl;


	double x = 3.14;
	int y = 2;
	// Se infiere el tipo de (x + y), que es double, para usarlo como tipo para z
	decltype(x + y) z = x + y;

	cout << "z: " << z << endl;

    std::vector<int> numeros = {1, 2, 3, 4, 5};
    // Obtenemos el tipo del iterador del vector
    decltype(numeros.begin()) it = numeros.begin();

    cout << "Primer elemento: " << *it << endl;

	return 0;
}

template <typename T, typename U> auto sumar(T a, U b) -> decltype(a + b)
{
    return a + b;
}


