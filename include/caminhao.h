/**
 * @file caminhao.h
 * @brief caminhao.h com as definições da classe caminhao, que está herdando da classe veículo.
 */
#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "veiculo.h"
#include <string>
using namespace std;

class Caminhao : public Veiculo {
public:
	Caminhao(string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_);
	~Caminhao();
	void print();

	

private:
};

#endif