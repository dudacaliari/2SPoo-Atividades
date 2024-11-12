/*
Faça um programa que cadastre dados
de clientes e contas destes clientes.
Um Cliente pode ter:
* cpf
* nome
* conta

Uma Conta pode ter:
* número
* saldo

Crie métodos para manipular esses atributos.
*/



#include <iostream>
#include <vector>

using namespace std;

class Conta {

protected:
	string numero;
	float saldo;
		
public:
	void setNumero(string numero){
		this->numero = numero;
	}
	
	void setSaldo(float saldo){
		this->saldo = saldo;
	}
	
	string getNumero(){
		return this->numero;
	}

	float getSaldo(){
		return this->saldo;
	}
	
	virtual float calculaCusto(){
		
	}
};

class ContaCorrente: public Conta{
	//Sobrescrita de método

public:	
	ContaCorrente(){
		cout<<"Criando uma conta corrente, no endereço "<<this<<endl<<endl;
	}
	
	float calculaCusto(){
		return this->saldo * 0.05;
	}
};
class ContaPoupanca: public Conta{
	//Sobrescrita de método
	
public:
	ContaPoupanca(){
		cout<<"Criando uma conta poupança, no endereço "<<this<<endl<<endl;
	}
	float calculaCusto(){
		return 10;
	}	
};




class Cliente {

private:
	string nome;
	string cpf;
	Conta* conta;
		
public:
	
	void setNome(string nome){
		this->nome = nome;
	}
	
	void setCpf(string cpf){
		this->cpf = cpf;
	}
	
	string getNome(){
		return this->nome;
	}

	string getCpf(){
		return this->cpf;
	}
	
	void setConta(Conta* conta){
		this->conta = conta;
	}
	
	Conta* getConta(){
		return this->conta;
	}
	
};


class GerenciaDeContas{
/*	Tem um atributo custos, que acumula os custos
	de manutenção de todas as contas do programa.
	
*/
private:
	float custos;
	
public:
	
	GerenciaDeContas(){
		this->custos = 0;
	}
	
	float somaCusto(Conta* conta){
		this->custos += conta->calculaCusto();	
	}
	
	float getCustos(){
		return custos;
	}
};

/*
Extenda a classe Conta para dois tipos
possíveis:
* conta corrente
* conta poupança

As classes de Conta retornam o custo de manutenção
da conta. O custo de uma conta poupança é 10.
O custo de uma conta corrente é 5% do saldo da conta.


*/


int main(){
	
	int quantidade, escolha;
	string nome, cpf, numero;
	float saldo;
	
	cout << "Quantos clientes serao cadastrados? " << endl;
	cin >> quantidade;
	
	vector<Cliente> cadastro;
	
	for (int i=0; i < quantidade; i++)
	{
		cout << "Nome do cliente: " << i+1 << endl;
		cin >> nome;
		
		cout << "CPF: " << endl;
		cin >> cpf;
		
		cout << endl;
		
		Cliente cliente;
		cliente.setNome(nome);
		cliente.setCpf(cpf);
		
		cadastro.push_back(cliente);
	}
	
	vector<ContaCorrente> listaContaCorrente;
	vector<ContaPoupanca> listaContaPoupanca;
	
	for (int i=0; i < quantidade; i++)
	{
		cout << "Numero da conta: " << i+1 << endl;
		cin >> numero;
		
		cout << "Saldo da conta: " << endl;
		cin >> saldo;
		
		cout << endl << endl;
		
		cout << "Escolha uma opcao: "        << endl;
		cout << "1- somente conta corrente." << endl;
		cout << "2- somente conta poupanca." << endl;
		cout << "3- As duas opcoes."         << endl;
		cin >> escolha;
		
		cout << endl;
		
		if(escolha == 1)
		{
			ContaCorrente contaC;
			contaC.setNumero(numero);
			contaC.setSaldo(saldo);
			
			listaContaCorrente.push_back(contaC);
		}
			
		else if(escolha == 2)
		{
			ContaPoupanca contaP;
			contaP.setNumero(numero);
			contaP.setSaldo(saldo);
			
			listaContaPoupanca.push_back(contaP);
		}	
		
		else
		{
			ContaCorrente contaC;
			contaC.setNumero(numero);
			contaC.setSaldo(saldo);
			
			listaContaCorrente.push_back(contaC);
			
			ContaPoupanca contaP;
			contaP.setNumero(numero);
			contaP.setSaldo(saldo);
			
			listaContaPoupanca.push_back(contaP);
		}
		
	}
	
	for (int i = 0; i < cadastro.size(); i++)
	{
		cout << "Nome: " << cadastro[i].getNome() << endl;
		cout << "CPF: "  << cadastro[i].getCpf()  << endl;
		
		if(escolha == 1)
			cout << "Conta corrente: " << listaContaCorrente[i].calculaCusto() << endl;
		else if(escolha == 2)
			cout << "Conta poupanca: " << listaContaPoupanca[i].calculaCusto() << endl;
		else
			cout << "Conta corrente: " << listaContaCorrente[i].calculaCusto() << endl;
			cout << "Conta poupanca: " << listaContaPoupanca[i].calculaCusto() << endl;
		
	}
	
	return 0;
}
