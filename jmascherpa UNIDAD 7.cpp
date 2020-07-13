#include<iostream>
#include <conio2.h>
using namespace std;

class Ficha{
private:
	char figura;
public:
	
	Ficha();
	Ficha(char);
	char getFicha();
	void setFicha(char _figura);
	bool verificarFicha();
	bool figuraX();
	bool figuraO();
};

Ficha::Ficha(){
	figura =' ';
}

Ficha::Ficha(char c){
	figura=c;
}

char Ficha::getFicha(){
	return figura;
}

void Ficha::setFicha(char _figura){
	figura = _figura;  
}

bool Ficha::verificarFicha(){
	
	if((figura!='X') && (figura!='O')){
		return true;
	}else{
		return false;
	}
}

bool Ficha::figuraX(){
	
	if(figura=='X'){
		return true;
	}else {
		return false;
	}
}
bool Ficha::figuraO(){
	
	
	
	
	
	
	
	if(figura=='O'){
		return true;
	}else {
		return false;
	}
}


class Tablero{
private:
	
public:
	Ficha mapa[3][3];
	Tablero();
	Ficha F;
	void ponerFicha(int x,int y, char c);
	void dibujarTablero();
	void gestionJuego();
	void numerosDisponibles();
	bool ganadorTateti();
	bool tableroCompleto();
};
Tablero::Tablero(){}

void Tablero::dibujarTablero(){
	
	for(int i=0;i<3;i++){
		cout<<"        ";
		for(int j=0;j<3;j++){
			cout<<mapa[i][j].getFicha()<<"|";
		}
		cout<<endl;
	}
}

void Tablero::ponerFicha(int x,int y, char c){
	
	mapa[x][y] = c;
	
}
bool Tablero::ganadorTateti(){
	
	if((mapa[0][0].figuraX()) && (mapa[1][1].figuraX())&& (mapa[2][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[0][2].figuraX()) && (mapa[1][1].figuraX())&& (mapa[2][0].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[0][0].figuraX()) && (mapa[1][0].figuraX())&& (mapa[2][0].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[0][1].figuraX()) && (mapa[1][1].figuraX())&& (mapa[2][1].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[0][2].figuraX()) && (mapa[1][2].figuraX())&& (mapa[2][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[0][0].figuraX()) && (mapa[0][1].figuraX())&& (mapa[0][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[1][0].figuraX()) && (mapa[1][1].figuraX())&& (mapa[1][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[0][2].figuraX()) && (mapa[2][1].figuraX())&& (mapa[2][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[2][0].figuraX()) && (mapa[2][1].figuraX()) && (mapa[2][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[2][2].figuraX()) && (mapa[1][2].figuraX()) && (mapa[0][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[2][0].figuraX()) && (mapa[1][1].figuraX()) && (mapa[0][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}
	if((mapa[0][0].figuraO()) && (mapa[1][1].figuraO())&& (mapa[2][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[0][2].figuraO()) && (mapa[1][1].figuraO())&& (mapa[2][0].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[0][0].figuraO()) && (mapa[1][0].figuraO())&& (mapa[2][0].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[0][1].figuraO()) && (mapa[1][1].figuraO())&& (mapa[2][1].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[0][2].figuraO()) && (mapa[1][2].figuraO())&& (mapa[2][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[0][0].figuraO()) && (mapa[0][1].figuraO())&& (mapa[0][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[1][0].figuraO()) && (mapa[1][1].figuraO())&& (mapa[1][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[0][2].figuraO()) && (mapa[2][1].figuraO())&& (mapa[2][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	if((mapa[2][0].figuraO()) && (mapa[2][1].figuraO())&& (mapa[2][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}
	
	return false;
	
}

void Tablero::numerosDisponibles(){
	
	
	if((mapa[0][0].verificarFicha())){
		cout<<"Presione 1 para colocar ficha en (0,0)"<<endl;  
	}
	if((mapa[0][1].verificarFicha())){
		cout<<"Presione 2 para colocar ficha en (0,1)"<<endl;  
	}
	if((mapa[0][2].verificarFicha())){
		cout<<"Presione 3 para colocar ficha en (0,2)"<<endl;  
	}
	if((mapa[1][0].verificarFicha())){
		cout<<"Presione 4 para colocar ficha en (1,0)"<<endl;  
	}
	if((mapa[1][1].verificarFicha())){
		cout<<"Presione 5 para colocar ficha en (1,1)"<<endl;  
	}
	if((mapa[1][2].verificarFicha())){
		cout<<"Presione 6 para colocar ficha en (1,2)"<<endl;  
	}
	if((mapa[2][0].verificarFicha())){
		cout<<"Presione 7 para colocar ficha en (2,0)"<<endl;  
	}
	if((mapa[2][1].verificarFicha())){
		cout<<"Presione 8 para colocar ficha en (2,1)"<<endl;  
	}
	if((mapa[2][2].verificarFicha())){
		cout<<"Presione 9 para colocar ficha en (2,2)"<<endl;  
	}
	/*if(!ganadorTateti()){
	cout<<"Elija una opcion: "<<endl;
	
	}*///PREGUNTAR PROFE
	
}



bool Tablero::tableroCompleto(){
	int contador = 0;
	for(int i = 0;i<3;i++){
		for(int j=0;j<3;j++){
			if((mapa[i][j].figuraX())|| (mapa[i][j].figuraO())){
				contador++;
			}
		}
	}
	if(contador==9){
		return true;
	}
	
	return false;
	
}
class Juego{
	
	private:
	public:
	Juego();
	Tablero T;
	Ficha F;
	void gestionJuego();
};

Juego::Juego(){
	
}
void Juego::gestionJuego(){
	int cont=0;
	bool gameon = false;
	T.numerosDisponibles();
	while(gameon==false){
		int x,y;
		int contGanador=0;
		if(kbhit()){
			int tecla=getch();
			switch(tecla){
			case 49:
				
				x=0;y=0;
				break;
				
			case 50:
				x=0;y=1;
				
				break;
			case 51:
				x=0;y=2;
				
				break;
			case 52:
				x=1;y=0;
				
				break;
			case 53:
				x=1;y=1;
				
				break;
			case 54:
				x=1;y=2;
				
				break;
			case 55:
				x=2;y=0;
				
				break;
			case 56:
				x=2;y=1;
				
				break;
			case 57:
				x=2;y=2;
				
				break;
			default:break;     
			}
			
			if(cont%2==0){
				if((T.mapa[x][y]).verificarFicha()){
					T.ponerFicha(x,y,'X');
					cont++;
				}else{
					cout<<"Ese lugar ya esta ocupado, elija otro numero."<<endl;
				}
			}else if(cont%2!=0){
				if((T.mapa[x][y]).verificarFicha()){ 
					T.ponerFicha(x,y,'O');
					cont++;
				}else{
					cout<<"Ese lugar ya esta ocupado, elija otro numero."<<endl;
				}
			}
			cout<<endl;
			T.dibujarTablero();
			cout<<endl;
			
			cout<<"/////////////////////////////////"<<endl;
			if(T.ganadorTateti()){
				contGanador++;
				break;
			}
			if((T.tableroCompleto())&& contGanador==0 ){
				cout<<"Nadie gano :("<<endl;break;
			}
			
			if((contGanador==0)&&(cont%2==0)){
				cout<<"Le toca al jugador 1: X"<<endl;
			}else if((contGanador==0)&&(cont%2!=0)){
				cout<<"Le toca al jugador 2: O"<<endl;
			}
			
			T.numerosDisponibles();
			
		}
		
	}
	
}

int main (int argc, char *argv[]) {
	cout<<"JUEGO DE TA-TE-TI"<<endl;
	cout<<"Jugador 1 X"<<endl;
	cout<<"Jugador 2 O"<<endl;
	
	cout<<"Le toca al jugador 1: X"<<endl;
	cout<<endl;
	Tablero T;
	Juego J;
	T.dibujarTablero();
	cout<<endl;
	cout<<"     "<<"//////////////"<<endl;
	J.gestionJuego();
	
	
	
	
	return 0;
}
