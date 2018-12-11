#ifndef ESTACIONAMENTO_H
/**
 * @file estacionamento.h
 * @brief estacionamento.h com as definições da classe estacionamento, é nessa classe onde estão implementadas as funcionalidades do estacionamento.
 */
#define ESTACIONAMENTO_H
#include "veiculo.h"
#include <map>
class Estacionamento{
private:
	/** Uso do multimap para guardar o veículo juntamente com a placa para facilitar a busca posteriormente*/
	multimap<string, Veiculo*> m_veiculos;

public:	
	Estacionamento();
	~Estacionamento();


	/** métodos do estacionamento, os nomes estão bem intuitívos*/
	void insereVeiculo(string tipo_,string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_);

	void removeVeiculo(string placa_);

	void listarVeiculos();

	float Tabela(string tipo_);

};
#endif