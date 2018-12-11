/**
 * @file veiculo.h
 * @brief veiculo.h com as definições da classe veiculo, que é abstrata e será herdada futuramente.
 */
#ifndef VEICULO_H
#define VEICULO_H
#include <ostream>
#include <string>
using namespace std;

class Veiculo {
public:

	Veiculo(string tipo_ ,string cor_, string modelo_, string ano_, string placa_,string horaEntrada_,string horaSaida_);
	~Veiculo();
	/** definindo o método print como virtual nós tornamos a classe abstrata e 	obrigamos as classes filhas a implementá-la */
	virtual void print()=0;
	/** a sobrecarga do operador de impreção é feita aqui para que as classes filhas apenas implementem a função print */
	friend ostream& operator<< (ostream &saida, Veiculo & v);
	
	/** métodos get */
	string getTipo();
	string getCor();
	string getModelo();
	string getAno();
	string getPlaca(); 
	string getHoraEntrada();
	string getHoraSaida();
	int getTempoEstacionado();

	/** método para testar o formato da hora de entrada e saida dos carros no estacionamento*/
	bool formatoHoraCorreto(string hora);

	/** métodos set*/
	void setCor(string cor_);
	void setModelo(string modelo_);
	void setAno(string ano_);
	void setPlaca(string cor_);
	void setHoraEntrada(string horaEntrada_);
	void setHoraSaida(string horaSaida_);	

	/** método para calcular o tempo que o veículo ficou no estacionamento*/
	int tempoEstacionado(string entrada_, string saida_);
protected:
	/** atributos gerais dos veículos*/
	string m_tipo,m_cor, m_modelo, m_ano, m_placa, m_horaEntrada, m_horaSaida;
	int m_tempoEstacionado;
};

#endif