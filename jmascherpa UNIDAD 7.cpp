#include<iostream>
#include <conio2.h>
using namespace std;

class Ficha{
private:
	
public:
	char figura;
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
	Ficha mapa[3][3];
public:
	Tablero();
	Ficha F1;
	void definirFicha(int x,int y, char c);
	void dibujarTablero();
	void gestionJuego();
	void numerosDisponibles();
	bool ganadorTateti();
	
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

void Tablero::definirFicha(int x,int y, char c){
	
	mapa[x][y] = c;
	
}
bool Tablero::ganadorTateti(){
	
	if((mapa[0][0].figuraX()) && (mapa[1][1].figuraX())&& (mapa[2][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}else if((mapa[0][2].figuraX()) && (mapa[1][1].figuraX())&& (mapa[2][0].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;
	}else if((mapa[0][0].figuraX()) && (mapa[1][0].figuraX())&& (mapa[2][0].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;//Vertical
	}else if((mapa[0][1].figuraX()) && (mapa[1][1].figuraX())&& (mapa[2][1].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;//Vertical
	}else if((mapa[0][2].figuraX()) && (mapa[1][2].figuraX())&& (mapa[2][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;//Vertical
	}else if((mapa[0][0].figuraX()) && (mapa[0][1].figuraX())&& (mapa[0][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;//HORIZONTAL
	}else if((mapa[1][0].figuraX()) && (mapa[1][1].figuraX())&& (mapa[1][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;//Vertical
	}else if((mapa[0][2].figuraX()) && (mapa[2][1].figuraX())&& (mapa[2][2].figuraX())){
		cout<<"Ganador del tateti es el jugador 1."<<endl;return true;//Vertical
	}else if((mapa[0][0].figuraO()) && (mapa[1][1].figuraO())&& (mapa[2][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}else if((mapa[0][2].figuraO()) && (mapa[1][1].figuraO())&& (mapa[2][0].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;
	}else if((mapa[0][0].figuraO()) && (mapa[1][0].figuraO())&& (mapa[2][0].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;//Vertical
	}else if((mapa[0][1].figuraO()) && (mapa[1][1].figuraO())&& (mapa[2][1].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;//Vertical
	}else if((mapa[0][2].figuraO()) && (mapa[1][2].figuraO())&& (mapa[2][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;//Vertical
	}else if((mapa[0][0].figuraO()) && (mapa[0][1].figuraO())&& (mapa[0][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;//HORIZONTAL
	}else if((mapa[1][0].figuraO()) && (mapa[1][1].figuraO())&& (mapa[1][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;//Vertical
	}else if((mapa[0][2].figuraO()) && (mapa[2][1].figuraO())&& (mapa[2][2].figuraO())){
		cout<<"Ganador del tateti es el jugador 2."<<endl;return true;//Vertical
	}
	
	return false;
	
}

void Tablero::numerosDisponibles(){
	
	
	if((mapa[0][0].verificarFicha())==true){
		cout<<"Presione 1 para colocar ficha en (0,0)"<<endl;  
	}
	if((mapa[0][1].verificarFicha())==true){
		cout<<"Presione 2 para colocar ficha en (0,1)"<<endl;  
	}
	if((mapa[0][2].verificarFicha())==true){
		cout<<"Presione 3 para colocar ficha en (0,2)"<<endl;  
	}
	if((mapa[1][0].verificarFicha())==true){
		cout<<"Presione 4 para colocar ficha en (1,0)"<<endl;  
	}
	if((mapa[1][1].verificarFicha())==true){
		cout<<"Presione 5 para colocar ficha en (1,1)"<<endl;  
	}
	if((mapa[1][2].verificarFicha())==true){
		cout<<"Presione 6 para colocar ficha en (1,2)"<<endl;  
	}
	if((mapa[2][0].verificarFicha())==true){
		cout<<"Presione 7 para colocar ficha en (2,0)"<<endl;  
	}
	if((mapa[2][1].verificarFicha())==true){
		cout<<"Presione 8 para colocar ficha en (2,1)"<<endl;  
	}
	if((mapa[2][2].verificarFicha())==true){
		cout<<"Presione 9 para colocar ficha en (2,2)"<<endl;  
	}
	
}

void Tablero::gestionJuego(){
	int cont=0;
	bool gameon = false;
	numerosDisponibles();
	while(gameon==false){
		int x,y;
		
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
				if(mapa[x][y].verificarFicha()==true){
					definirFicha(x,y,'X');
					cont++;
				}else{
					cout<<"Ese lugar ya esta ocupado, elija otro numero."<<endl;
				}
			}else if(cont%2!=0){
				if(mapa[x][y].verificarFicha()==true){ 
					definirFicha(x,y,'O');
					cont++;
				}else{
					cout<<"Ese lugar ya esta ocupado, elija otro numero."<<endl;
				}
			}
			cout<<endl;
			dibujarTablero();
			cout<<endl;
			
			cout<<"/////////////////////////////////"<<endl;
			if(cont%2==0){
				cout<<"Le toca al jugador 1: X"<<endl;
			}else if(cont%2!=0){
				cout<<"Le toca al jugador 2: O"<<endl;
			}
			
			numerosDisponibles();
			
			if(ganadorTateti()){
				break;
			}
			
		}
		
	}
	
}

int main (int argc, char *argv[]) {
	
	Tablero T;
	Ficha F1;
	T.dibujarTablero();
	cout<<endl;
	cout<<"     "<<"//////////////"<<endl;
	T.gestionJuego();
	
	
	
	
	return 0;
}
