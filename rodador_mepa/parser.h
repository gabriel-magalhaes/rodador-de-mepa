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
	void printfile(std::string);
	std::vector<node> parsefile(std::string);
	node parseline(std::string);
	int iskeyword(std::string);
};
