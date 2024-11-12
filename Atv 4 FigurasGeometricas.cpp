#include <iostream>

using namespace std;

class FigurasGeometricas{
	
	protected:
	 int perimetro;
	 int area;
	
	public:
	
	int setPerimetro(int perimetro)
	{
		this->perimetro=perimetro;
	}
	
	void setArea(int area)
	{
		this->area=area;
	}
	
	
	void mostrar()
	{
		cout << this->perimetro << endl;
		cout << this->area << endl;
	}
	 			
};

class Poligono: public FigurasGeometricas{
	
	public:
	
	int setPerimetro(int qtd_lado, int tamanho_lado)
	{
		return this->perimetro= tamanho_lado*qtd_lado;
	}

	int setArea(int perimetro, int altura)
	{
		return this->perimetro= tamanho_lado*qtd_lado;
	}
};

class Circulo: public FigurasGeometricas{
	

};

int main()
{
	
	Poligono a1;
	a1.setPerimetro(10,20);
	a1.
	a1.mostrar();

	
}
