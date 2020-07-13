#include<iostream>
#include <conio2.h>
using namespace std;

class Ficha{//Se crea la clase ficha.
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

Ficha::Ficha(){//Constructor para poner "vacia la ficha"
	figura =' ';
}

Ficha::Ficha(char c){//Constructor para igualar c a figura
	figura=c;
}

char Ficha::getFicha(){//Se hace un get para devolver figura
	return figura;
}

void Ficha::setFicha(char _figura){//Metodo para setear la ficha
	figura = _figura;  
}

bool Ficha::verificarFicha(){//Verifica si la ficha es X u O,  y devuelve un return
	
	if((figura!='X') && (figura!='O')){
		return true;
	}else{
		return false;
	}
}

bool Ficha::figuraX(){//Verifica si ficha es X
	
	if(figura=='X'){
		return true;
	}else {
		return false;
	}
}
bool Ficha::figuraO(){//Verifica si ficha es O
	
	
	
	
	
	
	
	if(figura=='O'){
		return true;
	}else {
		return false;
	}
}


class Tablero{//Se crea clase Tablero
private:
	
public:
	Ficha mapa[3][3];//Arreglo haciendo referencia al mapa
	Tablero();//Constructor
	Ficha F;//Creando ficha dentro de tablero
	void ponerFicha(int x,int y, char c);
	void dibujarTablero();
	void gestionJuego();
	void numerosDisponibles();
	bool ganadorTateti();
	bool tableroCompleto();
};
Tablero::Tablero(){}

void Tablero::dibujarTablero(){//Metodo para dibujar tablero
	
	for(int i=0;i<3;i++){
		cout<<"        ";
		for(int j=0;j<3;j++){
			cout<<mapa[i][j].getFicha()<<"|";
		}
		cout<<endl;
	}
}

void Tablero::ponerFicha(int x,int y, char c){//Pone ficha en el arreglo mapa, en cierta coordenada.
	
	mapa[x][y] = c;
	
}
bool Tablero::ganadorTateti(){//Metodo bool que verifica si en esa coordenada del arreglo hay una ficha o no, ya sea X o O.
	
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

void Tablero::numerosDisponibles(){//Verifica si en cierta coordenada del arreglo hay una ficha o no, si no hay ficha pone la opcion para que se pueda colocar ahi.
	
	
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
	if(!ganadorTateti()){
	cout<<"Elija una opcion: "<<endl;
	}
	
}



bool Tablero::tableroCompleto(){//Detecta si el tablero esta lleno y nadie gano.
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
class Juego{//Se crea la clase juego.
	
	private:
	public:
	Juego();//COnstructor
	Tablero T;//Se inicializa tablero.
	Ficha F;//Se inicializa ficha.
	void gestionJuego();
};

Juego::Juego(){//Constructor juego
	
}
void Juego::gestionJuego(){//metodo void, donde se maneja todo el juego, llamando los demas metodos de las otras clases.
	int cont=0;//Contador para el turno de los jugadores.
	bool gameon = false;//mantener el juego iniciado.
	T.numerosDisponibles(); //Metodo ver numeros disponibles para colocar ficha n el mapa.
	while(gameon==false){
		int x,y;
		int contGanador=0;//Contador para finalizar el juego al hacer tateti.
		if(kbhit()){//Funcion para detectar presion de teclas
			int tecla=getch();
			switch(tecla){//en caso que la tecla sea..
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
				if((T.mapa[x][y]).verificarFicha()){//Si es true esta condicion
					T.ponerFicha(x,y,'X');//Si se presiona un numero, colocar la ficha en:
					cont++;
				}else{
					cout<<"Ese lugar ya esta ocupado, elija otro numero."<<endl;//Si ya hay una ficha en ese lugar.
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
			T.dibujarTablero();//Muestra tablero con fichas
			cout<<endl;
			
			cout<<"/////////////////////////////////"<<endl;
			if(T.ganadorTateti()){//Si hay tateti, termina el juego.
				contGanador++;
				break;
			}
			if((T.tableroCompleto())&& contGanador==0 ){//Si no hay tateti, y e ltablero esta completo termina el juego.
				cout<<"Nadie gano :("<<endl;break;
			}
			
			if((contGanador==0)&&(cont%2==0)){//Turnos de jugadores.
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
