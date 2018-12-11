/**
* @file main.cpp
* @brief Programa para gerenciar um estacionamento.
*
*  @author Carlos Vinícius dos Santos e Carla Joice dos Santos
* @since 06/12/2018
* @date 10/12/2018
*/

#include "veiculo.h"
#include "caminhao.h"
#include "carro.h"
#include "moto.h"
#include "estacionamento.h"
int main(int argc, char const *argv[])
{
	Estacionamento *e = new Estacionamento();
	e->insereVeiculo("Carro","Preto","impala", "1967","ABC-6666","22:30","01:59");
	e->insereVeiculo("Moto","Branco","Titã", "2018","AED-6549","13:00","13:30");
	e->insereVeiculo("Caminhao","Vermelho","Bino", "2014","FJI-4324","16:50","19:59");
	e->listarVeiculos();
	return 0;
}