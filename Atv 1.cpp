#include <iostream>

using namespace std;

class Agente{
	
	public:
	 string nome;
	 string classe;
	 int vida;
	 int dano_total;			
};

int main()
{
	Agente a1;
	a1.nome = "Sage";
	a1.classe = "Sentinela";
	a1.vida = 150;
	a1.dano_total = 0;
	
	Agente a2;
	a2.nome = "Reyna";
	a2.classe = "Duelista";
	a2.vida = 200;
	a2.dano_total = 50;
	
	cout << a1.nome << "," << a1.classe << "," << a1.vida << "," << a1.dano_total << "\n";
	cout << a2.nome << "," << a2.classe << "," << a2.vida << "," << a2.dano_total;
}
