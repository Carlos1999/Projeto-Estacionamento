#include "estacionamento.h"
#include "carro.h"
#include "moto.h"
/**
 * @file estacionamento.cpp
 * @brief Arquivo com a implementação dos metódos da classe estacionamento.
 */
#include "caminhao.h"
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;
Estacionamento::Estacionamento(){

}
Estacionamento::~Estacionamento(){

}

/**método para inserir os veículos no map, dependendo do parâmetro tipo_ o veículo muda*/
void Estacionamento::insereVeiculo(string tipo_,string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_){
	if(tipo_ =="Carro"){
	Veiculo *v= new Carro(cor_,modelo_,ano_,placa_,horaEntrada_,horaSaida_);
	m_veiculos.insert(std::pair<string, Veiculo*>(placa_, v));
	cout<<"Carro Inserido"<<endl;

	}else if(tipo_ =="Moto"){
	Veiculo *v= new Moto(cor_,modelo_,ano_,placa_,horaEntrada_,horaSaida_);
	m_veiculos.insert(std::pair<string, Veiculo*>(placa_, v));
	cout<<"Moto Inserida"<<endl;
	
	}else if(tipo_ =="Caminhao"){
	Veiculo *v= new Caminhao(cor_,modelo_,ano_,placa_,horaEntrada_,horaSaida_);
	m_veiculos.insert(std::pair<string, Veiculo*>(placa_, v));
	cout<<"Caminhao Inserido"<<endl;

	}else{
		cout<<"Tipo inválido: "<<tipo_<<endl;
	}


	
}
/**removendo veículo com o erase() do map*/
void Estacionamento::removeVeiculo(string placa_){
	m_veiculos.erase(placa_);
}

/**Listando veículos e imprimindo com o uso de iteradores*/
void Estacionamento::listarVeiculos(){
	if(this->m_veiculos.size() > 0){
		for(auto it = m_veiculos.begin(); it != m_veiculos.end(); it++){
			cout << *it->second;
			/** O preço é pago da seguinte forma: é pago um preço inicial mais o adicional, dependendo do veículo, a cada
			hora que se passar*/
			cout <<"Preço pelo tempo estacionado: "<<((*it->second).getTempoEstacionado()+1) * (Tabela((*it->second).getTipo()))  <<endl;
			cout <<"----------------------------------"<<endl;
		}
	}else{
		cout << "Estacionamento vazio, nao é possível listar veículos!" << endl;
	}
}

/**método para definir os preços do estacionamento dependendo do veículo*/
float Estacionamento::Tabela(string tipo_){
	if(tipo_ == "Carro"){
		return 20.0;
	}else if(tipo_ =="Moto"){
		return 10.0;
	}else if(tipo_ == "Caminhao"){
		return 40.0;
	}
	
	cout<<"Tipo de veículo inválido passado como parâmetro para a funçao Preço por hora."<<endl;
	return 0;
}