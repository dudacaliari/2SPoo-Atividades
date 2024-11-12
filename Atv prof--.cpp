#include<iostream>
#include<vector>

using namespace std;

//exemplo de vetor
/*
int main(){
	
	vector<int> vetor;
	for(int i=0;i<5;i++)
	vetor.push_back(i); //push_back é um metodo
	//o metodo .size() retorna o tamanho do vetor
	for(int i = 0; i < vetor.size();i++){
		cout << vetor[i];
	}
	
	return 0;
};
*/
class Conta{
	private:
		string numero;
		//vector<Conta> listaDeContas;
	public:
		void setNumero(string numero){
			this->numero = numero;
		}
};

class Cliente{
	private:
		string nome;
		string cpf;
		Conta conta;
		//vector<Conta> listaDeContas;
	public:
		void setNome(string nome){
			this->nome = nome;
		}
		void setCPF(string cpf){
			this->cpf = cpf;
		}
		
		string getNome(){
			return this->nome;
		}
		string getCPF(){
			return this->cpf;
		}
};
//void apresentaCadastro(vector<Clientes>)

int main(){
	
	vector<Cliente> cadastroDeClientes;
	string nome, cpf;
	for(int i=0;i < 2;i++){
		cout << "Entre com nome do cliente:" << endl;
		cin >> nome;
		cout << "Entre com cpf do cliente:" << endl;
		cin >> cpf;
	
		cout << endl;
		
		Cliente cliente;
		cliente.setNome(nome);
		cliente.setCPF(cpf);
		
		cadastroDeClientes.push_back(cliente);
	}
	//apresentaCadastro
	
	for (int i = 0; i < cadastroDeClientes.size(); i++){
		cout << "Nome: " << cadastroDeClientes[i].getNome() << endl;
		cout << "CPF: " << cadastroDeClientes[i].getCPF() << endl;
	}
	
	string name;
	cout << "Editando " << endl;
	cout << "Qual nome alterar?" << endl;
	cin >> name;
	
	int contador = 0;
	while (contador < cadastroDeClientes.size()){
		if (cadastroDeClientes[contador].getNome()==nome){
			string novoNome;
			cout << "Digite o novo Nome: " << endl;
			cin >> novoNome;
			
			cadastroDeClientes[contador].setNome(novoNome);
		}
		contador ++;
	}
	for (int i = 0; i < cadastroDeClientes.size(); i++){
		cout << "Nome: " << cadastroDeClientes[i].getNome() << endl;
		cout << "CPF: " << cadastroDeClientes[i].getCPF() << endl;
	}
	
	return 0;
}
