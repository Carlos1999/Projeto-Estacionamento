/**
 * @file moto.h
 * @brief moto.h com as definições da classe moto, que está herdando da classe veículo.
 */
#ifndef MOTO_H
#define MOTO_H

#include "veiculo.h"

using namespace std;

class Moto : public Veiculo {
public:
	Moto(string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_);
	~Moto();
	void print();

private:
};
#endif