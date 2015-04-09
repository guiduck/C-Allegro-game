//#include "../view/InitialScreen.h"
#include "../control/ControlePersonagem.h"
#include <iostream>

using namespace std;

int main() {

  //InitialScreen a;

	Personagem p;
	ControlePersonagem cp;

	cp.setPersonagem(p);

	cout << cp.getPersonagem(p).getVetor().getX() << endl;
	cout << cp.getPersonagem(p).getVetor().getY() << endl;

	cp.atualizaPosicaoPersonagem();

	cout << cp.getPersonagem(p).getVetor().getX() << endl;
	cout << cp.getPersonagem(p).getVetor().getY() << endl;
}
