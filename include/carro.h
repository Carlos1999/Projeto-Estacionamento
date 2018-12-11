/**
 * @file carro.h
 * @brief carro.h com as definições da classe carro, que está herdando da classe veículo.
 */
#ifndef CARRO_H
#define CARRO_H

#include "veiculo.h"

using namespace std;

class Carro : public Veiculo {
public:
	Carro(string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_);
	~Carro();
	void print();


private:
};
#endif