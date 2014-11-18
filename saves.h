/*
 * saves.h
 *
 *  Created on: 09/11/2014
 *      Author: Admin
 */

#ifndef SRC_SAVES_H_
#define SRC_SAVES_H_

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<stdlib.h>
#include "equipa.h"
#include "ciclista.h"
#include"membro.h"
#include "staff.h"
using namespace std;

void guardarMembro(vector<Membro*>membro, string ficheiro);

vector<Membro*> loadMembro(string ficheiro);
void saveCiclista(Ciclista ciclista);
void saveCiclistas(vector<Ciclista> ciclistas);


void saveEquipas(vector<Equipa> equipas);
void saveEquipa(Equipa equipa1);

#endif /* SRC_SAVES_H_ */