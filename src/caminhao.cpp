/**
 * @file caminhao.cpp
 * @brief Arquivo com a implementação dos metódos do caminhão.
 */

#include <iostream>
#include "caminhao.h"
using namespace std;

Caminhao::Caminhao(string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_):
 Veiculo("Caminhao", cor_, modelo_, ano_, placa_, horaEntrada_, horaSaida_){}

Caminhao::~Caminhao(){}

void Caminhao::print(){
	cout << "Tipo de veículo: "<<m_tipo<< endl 
	<< "Cor: " << m_cor << endl
	<< "Modelo: " << m_modelo << endl
	<< "Ano: " << m_ano << endl
	<< "Placa: " << m_placa << endl
	<< "Entrada: " << m_horaEntrada << endl
	<< "Saída: " << m_horaSaida << endl
	<< "Horas estacionado:" << getTempoEstacionado()<<endl;
}
