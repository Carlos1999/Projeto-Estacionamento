#Projeto feito por Carlos Vinícius dos Santos e Carla Joice dos Santos
CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build

PROG = $(BIN)/run
OBJS = $(OBJ)/estacionamento.o  $(OBJ)/veiculo.o $(OBJ)/caminhao.o $(OBJ)/carro.o  $(OBJ)/moto.o  $(OBJ)/main.o  

all:mkdirs $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS) 

$(OBJ)/veiculo.o: $(SRC)/veiculo.cpp $(INC)/veiculo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/veiculo.cpp -o $(OBJ)/veiculo.o

$(OBJ)/caminhao.o:  $(SRC)/veiculo.cpp $(INC)/veiculo.h $(SRC)/caminhao.cpp $(INC)/caminhao.h  
	$(CC) $(CPPFLAGS) -c $(SRC)/caminhao.cpp -o $(OBJ)/caminhao.o

$(OBJ)/carro.o:  $(SRC)/veiculo.cpp $(INC)/veiculo.h $(SRC)/carro.cpp $(INC)/carro.h  
	$(CC) $(CPPFLAGS) -c $(SRC)/carro.cpp -o $(OBJ)/carro.o

$(OBJ)/moto.o:  $(SRC)/veiculo.cpp $(INC)/veiculo.h $(SRC)/moto.cpp $(INC)/moto.h  
	$(CC) $(CPPFLAGS) -c $(SRC)/moto.cpp -o $(OBJ)/moto.o

$(OBJ)/estacionamento.o: $(SRC)/estacionamento.cpp $(SRC)/veiculo.cpp $(INC)/veiculo.h $(SRC)/caminhao.cpp $(INC)/caminhao.h $(SRC)/carro.cpp $(INC)/carro.h  $(SRC)/moto.cpp $(INC)/moto.h   
	$(CC) $(CPPFLAGS) -c $(SRC)/estacionamento.cpp -o $(OBJ)/estacionamento.o

$(OBJ)/main.o: $(SRC)/main.cpp $(SRC)/veiculo.cpp $(INC)/veiculo.h $(SRC)/caminhao.cpp $(INC)/caminhao.h $(SRC)/carro.cpp $(INC)/carro.h  $(SRC)/moto.cpp $(INC)/moto.h   
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

mkdirs: 
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

run: 
	$(BIN)/run

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*
	