/*
 * A responsabilidade dessa classe � processar o arquivo de entrada e retornar
 * uma lista que conter� todos os comandos MEPA em sequ�ncia
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "node.h"

class parser{
public:
	std::string linha;
	std::ifstream file;
	std::vector<node> vetor;
	
	//imprime conteudo do arquivo, pra debug
	void printfile(std::string);
	
	//retorna um vetor com os comandos
	std::vector<node> parsefile(std::string);
	
	//utilizado pelo parsefile, processa a linha que for dada � ela como parametro
	node parseline(std::string);
	
	//verifica se parametro � uma palavra chave do MEPA
	int iskeyword(std::string);
};
