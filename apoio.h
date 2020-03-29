#include "tipos_comuns.h"

#ifndef APOIO_H_INCLUDED
#define APOIO_H_INCLUDED

/***************************************************************************
 * Transforma um numero inteiro em bin�rio
 *
 * @param valor O valor inteiro para convers�o
 * @param vetor O vetor para receber a representa��o
 ***************************************************************************/
void binario(int valor, int vetor[8]);

/***************************************************************************
 * Transforma um n�mero inteiro em bin�rio truncado em 5 posi��es
 *
 * @param valor O valor inteiro para convers�o
 * @param vetor O vetor para receber a representa��o
 ***************************************************************************/
void binario5(int valor, int vetor[5]);

/***************************************************************************
 * Obt�m a representa��o em bin�rio para o valor literal de um registrador
 *
 * @param valor O valor literal (string) do registrador
 * @param vetor O vetor para receber a representa��o
 ***************************************************************************/
void registrador(char* valor, int vetor[5]);

/***************************************************************************
 * Obt�m a representa��o em bin�rio para o valor imediato
 *
 * @param valor O valor literal (string) para convers�o
 * @param vetor O vetor para receber a representa��o
 ***************************************************************************/
void immediate(char* valor, int vetor[16]);

/***************************************************************************
 * Obt�m a representa��o em bin�rio para o valor de pulo
 *
 * @param valor O valor literal (string) para convers�o
 * @param vetor O vetor para receber a representa��o
 ***************************************************************************/
void jump(char* valor, int vetor[26]);

#endif // APOIO_H_INCLUDED
