/**
 * @file moto.cpp
 * @brief Arquivo com a implementação dos metódos da Moto.
 */
#include <iostream>
#include "moto.h"

using namespace std;

Moto::Moto(string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_):
	Veiculo("Moto",cor_, modelo_, ano_, placa_,horaEntrada_,horaSaida_){}

Moto::~Moto(){}

void Moto::print(){
	cout << "Tipo de veículo: "<<m_tipo<< endl 
	<< "Cor: " << m_cor << endl
	<< "Modelo: " << m_modelo << endl
	<< "Ano: " << m_ano << endl
	<< "Placa: " << m_placa << endl
	<< "Entrada: " << m_horaEntrada << endl
	<< "Saída: " << m_horaSaida << endl
	<< "Horas estacionado:" << getTempoEstacionado()<<endl;
}
