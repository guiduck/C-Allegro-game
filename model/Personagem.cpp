#include "Personagem.h"

void Personagem::setAceleracao(Vector a){
    this->aceleracao = a;
}

Vector Personagem::getAceleracao(){
	return aceleracao;
}

void Personagem::setVelocidade(Vector v){
    this->velocidade = v;
}

Vector Personagem::getVelocidade(){
	return velocidade;
}

void Personagem::setPosicaoAtual(Vector pa){
    this->posicaoAtual = pa;
}

Vector Personagem::getPosicaoAtual(){
	return posicaoAtual;
}