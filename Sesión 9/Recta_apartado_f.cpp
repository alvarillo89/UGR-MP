//////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
Programador: �lvaro Fern�ndez Garc�a.
Ejericio 15 de clases. 
Suprima ahora el m�todo SetCoeficientes. De esta forma, una vez creado el objeto (pas�ndole los 
datos apropiados en el constructor) ya no podremos modificar los datos miembro. 
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Definici�n de clases:

class Recta {
	private:
		double valor_A = 0;
		double valor_B = 0;
		double valor_C = 0;
	
	public:
	
	// M�todos de la clase:
	
	// Constructor:
	
	Recta (double dato1, double dato2, double dato3) {
		valor_A = dato1;
		valor_B = dato2;
		valor_C = dato3;
	}
	
	// M�todo que calcula la pendiente de la recta:
	
	double Pendiente () {
		return - valor_A / valor_B;
	}
	
	// M�todo que calcula la ordenada de una recta a partir de una abcisa:
	
	double Ordenada (double abcisa) {
		return (- valor_C - abcisa * valor_A) / valor_B;
	}

	// M�todo que calcula la abcisa de una recta a partir de una ordenada:

	double Abcisa (double ordenada) {
		return (- valor_C - ordenada * valor_B) / valor_A;
	}

};


int main () {
	
	double real_1, real_2, real_3, real_4, real_5, real_6;
	double abcisa, ordenada;
	
	// Entrada de datos:
	
	cout << "Introduzca seis n�meros reales separados por un espacio: ";
	cin >> real_1;
	cin >> real_2;
	cin >> real_3;
	cin >> real_4;
	cin >> real_5;
	cin >> real_6;
	
	Recta recta_1 (real_1, real_2, real_3);
	Recta recta_2 (real_4, real_5, real_6);
	
	// C�lculo de la pendiente de la primera recta:
	
	cout << "La pendiente de la primera recta vale: " << recta_1.Pendiente() << "\n";
	
	// C�culo de la ordenada de la primera recta:
	
	cout << "Introduzca el valor de una abcisa: X= ";
	cin >> abcisa;
	
	cout << "El valor de la ordenada es: Y= " << recta_1.Ordenada(abcisa) << "\n\n";
	
	// C�lculo de la absisa de la primera recta:
	
	cout << "Introduzca el valor de una ordenada: Y= ";
	cin >> ordenada;
	
	cout << "El valor de la abcisa es: X= " << recta_1.Abcisa(ordenada) << "\n\n";

	
	system ("pause");
	
}
