#include "Vector.h"

class Personagem {

private:
	Vector aceleracao;
	Vector velocidade;
	Vector posicaoAtual;

public:

	Vector getAceleracao();

	void setAceleracao(Vector aceleracao);

	Vector getVelocidade();

	void setVelocidade(Vector velocidade);

	Vector getPosicaoAtual();

	void setPosicaoAtual(Vector posicaoAtual);



};