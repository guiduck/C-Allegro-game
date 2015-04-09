#include "../model/Personagem.h"
#include "../model/Mundo.h"

class ControlePersonagem {

public:

	void atualizaPosicaoPersonagem();

private:

	Personagem personagem;	
	Mundo mundo;

};