#ifndef TELEVISAO_H
#define TELEVISAO_H
#include <iostream>

using namespace std;

class Televisao{
private:
	int volume;
	int canal;
public: 
	
	Televisao(int, int);
	void ControleVolume(int);
	void ControleCanal(int);
	int getVolume();
	int getCanal();
	void setVolume(int); 
	void setCanal(int);
};

#endif