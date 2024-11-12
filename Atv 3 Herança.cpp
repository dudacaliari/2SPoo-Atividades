#include <iostream>

using namespace std;

class Agente{
	
	protected:
	 string nome;
	 string classe;
	 int vida;
	 int dano;
	
	public:
	
	void setNome(string nome)
	{
		this->nome=nome;	
	} 
	
	void setClasse(string classe)
	{
		this->classe=classe;
	}
	
	void setVida(int vida)
	{
		this->vida=vida;
	}
	
	void setDano(int dano)
	{
		this->dano=dano;
	}
	
	void mostrar()
	{
		cout << this->nome << endl;
		cout << this->classe << endl;
		cout << this->vida << endl;
		cout << this->dano << endl;
	}
	 			
};

class Sentinela: public Agente{
	
	private:
	 string intervencao;
	
	public:
	
	void setIntervencao(string intervencao)
	{
		this->intervencao=intervencao;	
	} 
	
	int setVida(int vida)
	{
		return this->vida= vida+50;
	}
	
	void mostrarSent()
	{
		cout << this->intervencao << endl;
	}
};

class Duelista: public Agente{
	
	public:
	
	int setDano(int dano)
	{
		return this->dano= dano+50;
	}
	
};

int main()
{
	Sentinela a1;
	a1.setNome ("Sage");
	a1.setClasse ("Sentinela");
	a1.setVida (200);
	a1.setDano (20);
	a1.setIntervencao ("Barreira");
	a1.mostrar();
	a1.mostrarSent();
	
	Duelista a2;
	a2.setNome ("Reyna");
	a2.setClasse ("Duelista");
	a2.setVida (150);
	a2.setDano (50);
	a2.mostrar();
	
}
