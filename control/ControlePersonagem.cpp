#include "ControlePersonagem.h"



void ControlePersonagem::atualizaPosicaoPersonagem() {
	Vector posicaoatual = this->personagem.getPosicaoAtual();
	Vector velocidade = this->personagem.getVelocidade();
	Vector aceleracao = this->personagem.getAceleracao();
	float tempo = this->mundo.getTempo();
	Vector posicaofinal = PhysicalEngine::AtualizaPosicao(posicaoatual,velocidade,aceleracao,tempo);
	this->personagem.setPosicaoAtual(posicaofinal);	
}
