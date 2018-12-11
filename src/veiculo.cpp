/**
 * @file veiculo.cpp
 * @brief Arquivo com a implementação dos metódos do veiculo.
 */
#include <iostream>
#include "veiculo.h"
#include <string>
using namespace std;

Veiculo::Veiculo(string tipo_,string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_):
 m_tipo(tipo_),m_cor(cor_), m_modelo(modelo_), m_ano(ano_), m_placa(placa_){ 
 	/** Teste para saber se as horas passadas estão no formato correto*/
 	if(formatoHoraCorreto(horaEntrada_)==true){
 		m_horaEntrada = horaEntrada_; 	
 	}else{
 		m_horaEntrada = "00:00";
 	}
 	if(formatoHoraCorreto(horaSaida_)==true){
 		m_horaSaida = horaSaida_; 	
 	}
 }
Veiculo::~Veiculo(){}

/**Operador de impressão chamando a função print(que é virtual), dessa forma todas as classes herdadas implementam a função
   print e a sobrecarga do operador serve para todas*/
ostream& operator<< (ostream &saida, Veiculo &v) 
{
	v.print();
	return saida;
}

void Veiculo::print(){
	
}

string Veiculo::getCor()
{
	return m_cor;
}

string Veiculo::getTipo(){
	return m_tipo;
}

string Veiculo::getModelo()
{
	return m_modelo;
}

string Veiculo::getAno()
{
	return m_ano;
}

string Veiculo::getPlaca()
{
	return m_placa;
}

int Veiculo::getTempoEstacionado(){
	return tempoEstacionado(m_horaEntrada,m_horaSaida);
}

void Veiculo::setCor(string cor_)
{ 	
	m_cor = cor_; 
}

void Veiculo::setModelo(string modelo_)
{ 
	m_modelo = modelo_; 
}

void Veiculo::setAno(string ano_)
{
	m_ano = ano_;
}
void Veiculo::setPlaca(string cor_)
{
	m_cor = cor_;
}
void Veiculo::setHoraEntrada(string horaEntrada_)
{
	m_horaEntrada = horaEntrada_;
}

void Veiculo::setHoraSaida(string horaSaida_)
{
	m_horaSaida = horaSaida_;
}

int Veiculo::tempoEstacionado(string entrada_, string saida_){
	/**Dividindo as strings em horas e minutos*/
	string hora_entrada =""; 
	hora_entrada += entrada_[0]; 
	hora_entrada+= entrada_[1];
	string minuto_entrada = "";
	minuto_entrada += entrada_[3]; 
	minuto_entrada+= entrada_[4];

	string hora_saida =""; 
	hora_saida += saida_[0];
	hora_saida+=saida_[1];
	string minuto_saida = "";
	minuto_saida += saida_[3];
	minuto_saida+=saida_[4];

	int horas_passadas =0;
	int minuto_passados =0;
	/**lógica para saber quantas horas se passaram entre a entrada e a saída (o preço do estacionamento é por hora)*/
	if(stoi(hora_saida)>=stoi(hora_entrada)){

	 horas_passadas = stoi(hora_saida) -stoi(hora_entrada);
	 minuto_passados =  (60-stoi(minuto_entrada)) + (stoi(minuto_saida));
	
	}else{
	 horas_passadas = (24- stoi(hora_entrada)) + stoi(hora_saida);
	 minuto_passados =  (60-stoi(minuto_entrada)) + (stoi(minuto_saida));
	}
	if(minuto_passados <60){
		horas_passadas--;
	}


	return horas_passadas;
}

/**lógica para verificar se o formato das horas está correto ( se não estiver ele sai do programa, não faria sentido continuar com as horas erradas)*/
bool Veiculo::formatoHoraCorreto(string hora){
	string horasTotal =""; 
	horasTotal += hora[0]; 
	horasTotal+= hora[1];
	string separador = "";
	separador += hora[2];
	string minutos = "";
	minutos += hora[3]; 
	minutos+= hora[4];

	if(stoi(horasTotal) < 0 || stoi(horasTotal) >23){
		cout<<"Hora " <<hora<<" do veículo de placa: "<<m_placa<<" no formato errado, o formato correto seria por exemplo: 00:00"<<endl;
		exit(0);
	}
	if(stoi(minutos) <0 || stoi(minutos) >59){
		cout<<"Hora " <<hora<<" do veículo de placa: "<<m_placa<<" no formato errado, o formato correto seria por exemplo: 00:00"<<endl;
		exit(0);
	}
	if(separador != ":"){
		cout<<"Hora " <<hora<<" do veículo de placa: "<<m_placa<<" no formato errado, o formato correto seria por exemplo: 00:00"<<endl;
		exit(0);
		}
	return true;
	}

