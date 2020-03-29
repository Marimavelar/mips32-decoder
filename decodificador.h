#include "tipos_comuns.h"

#ifndef DECODIFICADOR_H_INCLUDED
#define DECODIFICADOR_H_INCLUDED

/***************************************************************************
 * Decodifica um comando intermedi�rio MIPS em assembly MIPS
 *
 * @param linha O conteudo de linha para decodifica��o
 * @return A representa��o de assembly MIPS
 ***************************************************************************/
Assembly decodificar(char* linha);

#endif // DECODIFICADOR_H_INCLUDED
