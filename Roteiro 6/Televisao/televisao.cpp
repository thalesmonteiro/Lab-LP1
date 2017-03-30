#include "televisao.h"
#include <iostream>

using namespace std;

Televisao::Televisao(int v, int c){
	canal = c;
	volume = v;
}

void Televisao::ControleVolume(int v){
	if (v != 0) {
		int gVol;
		gVol = getVolume() + 1;
		setVolume(gVol);
	}else{
		int gVol;
		gVol = getVolume() - 1;
		setVolume(gVol);
	}
}

void Televisao::setVolume(int Vol){
	volume = Vol;
}

void Televisao::setCanal(int Can){
	canal = Can;
}

int Televisao::getVolume(){
	return volume;
}

int Televisao::getCanal(){
	return canal;
}

void Televisao::ControleCanal(int x){
	if (x == 1){
 		canal++;
	}
	if (x == 0){
		canal--;
	}
	//}else if{
	//	setCanal(x);
	//}
}
 
