/*
 * classe definidora dos n�s que comp�e a lista de comandos
 */

#include <string>

class node{
public:
	std::string label;
	std::string comando;
	std::string parametro1;
	std::string parametro2;
	node(){
		label = "";
		comando = "";
		parametro1 = "";
		parametro2 = "";
	}
};
