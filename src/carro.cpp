/**
 * @file carro.cpp
 * @brief Arquivo com a implementação dos metódos do Carro.
 */
#include <iostream>
#include "carro.h"

using namespace std;

Carro::Carro(string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_):
Veiculo("Carro",cor_, modelo_, ano_, placa_,horaEntrada_,horaSaida_){}

Carro::~Carro(){}

void Carro::print(){
	cout << "Tipo de veículo: "<<m_tipo<< endl 
	<< "Cor: " << m_cor << endl
	<< "Modelo: " << m_modelo << endl
	<< "Ano: " << m_ano << endl
	<< "Placa: " << m_placa << endl
	<< "Entrada: " << m_horaEntrada << endl
	<< "Saída: " << m_horaSaida << endl
	<< "Horas estacionado:" << getTempoEstacionado()<<endl;
}
