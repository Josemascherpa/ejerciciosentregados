#include <iostream>
#include <conio2.h>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int mazo[4][10] = {{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12}};
	float valorCartas[13],suma=0,sumaCompu=0;
	int carta=0,fila=0,columna,contadorCarta=1;
	bool gameonn=false;
	string palos;
	
	cout<<endl<<"El juego es el Siete y medio. El objetivo es acercarse a 7 y medio sin pasarse, sacando cartas. El jugador mas cercano al puntaje 7.5 gana. Aclaracion: se juega sin 8 y sin 9 ni comodines."<<endl;
	cout<<"\n"<<endl;
	cout<<"El valor de las cartas son: "<<endl;
	cout<<"\n"<<endl;
	
	for(int i=1;i<13;i++){
		
		if ( i == 8 || i == 9){
			valorCartas[i] = 0;
		}else if( i > 9){
			valorCartas[i] = 0.5;
		}
		else{
			valorCartas[i] = i;
		}
		
		cout<<i<<"-->"<<valorCartas[i]<<endl;
		cout<<"\n";
	}
	
	cout<<"Presione S para sacar una carta: "<<endl;
	
	while(gameonn==false){
		
		
		if(kbhit()){
			
			int tecla=getch();
			
			switch(tecla){
			case 115:
				
				fila=rand()%4;
				columna=rand()%10;
				carta=mazo[fila][columna];
				
				while((mazo[fila][columna])!=-1){
					switch(fila){
					case 0:
						palos=" de Basto";break;
					case 1:
						palos=" de Copa";break;
					case 2:
						palos=" de Espada";break;
					case 3:
						palos=" de Oro";break;
					}
					switch(carta){
						
					case 1:
						suma = suma + 1;break;
					case 2:
						suma = suma + 2;break;
					case 3:
						suma = suma + 3;break;
					case 4:	
						suma = suma + 4;break;
					case 5:	
						suma = suma + 5;break;
					case 6:
						suma = suma + 6;break;
					case 7:
						suma = suma +7;break;
					case 10:
						suma = suma + 0.5;break;
					case 11:
						suma = suma +0.5;break;
					case 12:	
						suma = suma +0.5;break;
					default:break;
					}
					cout<<"Carta "<<contadorCarta<<":"<<carta<<palos<<". Y suma: "<<suma<<" puntos."<<endl;
					contadorCarta++;
					if(suma>7.5){
						cout<<"Usted Perdio :(."<<endl;return 0;
					}
					cout<<endl<<"Si desea sacar otra carta presione S(si) sino N(no)."<<endl;
					
					mazo[fila][columna]=-1;
				} 
				
				break;
				
				
			case 110:
				int contadorCompu=1;
				
				fila=rand()%4;
				columna=rand()%10;
				carta=mazo[fila][columna];
				
				while((mazo[fila][columna])!=-1){
					
					switch(fila){
					case 0:
						palos=" de Basto";break;
					case 1:
						palos=" de Copa";break;
					case 2:
						palos=" de Espada";break;
					case 3:
						palos=" de Oro";break;
					}
					switch(carta){
					case 1:
						sumaCompu = sumaCompu + 1;break;
					case 2:
						sumaCompu = sumaCompu + 2;break;
					case 3:
						sumaCompu = sumaCompu + 3;break;
					case 4:	
						sumaCompu = sumaCompu + 4;break;
					case 5:	
						sumaCompu = sumaCompu + 5;break;
					case 6:
						sumaCompu = sumaCompu + 6;break;
					case 7:
						sumaCompu = sumaCompu +7;break;
					case 10:
						sumaCompu = sumaCompu + 0.5;break;
					case 11:
						sumaCompu = sumaCompu +0.5;break;
					case 12:	
						sumaCompu= sumaCompu +0.5;break;
					default:break;
					}
					
					cout<<endl<<"Ahora me toca a mi!"<<endl;
					
					cout<<"Carta "<<contadorCompu<<": "<<carta<<palos<<". Y suma: "<<sumaCompu<<" puntos."<<endl;
					
					contadorCompu++;
					
					mazo[fila][columna]=-1;
					
					if(sumaCompu==7 && (suma<7 || suma>7.5)){
						cout<<"Usted perdio..."<<endl;return 0;
					}
					
					if(sumaCompu>suma && suma<7.5){
						cout<<"Te gane.. te lo dije."<<endl;return 0;
					}
					
					while(sumaCompu<=7.5 || sumaCompu>suma){
						
						if(sumaCompu==7 && suma<7 || suma>7.5){
							cout<<"Usted perdio..."<<endl;return 0;
						}
						
						if(sumaCompu<7.5 || sumaCompu<7){
							fila=rand()%4;
							
							columna=rand()%10;
							
							carta=mazo[fila][columna];
							
							while((mazo[fila][columna])!=-1){
								switch(fila){
								case 0:
									palos=" de Basto";break;
								case 1:
									palos=" de Copa";break;
								case 2:
									palos=" de Espada";break;
								case 3:
									palos=" de Oro";break;
								default:break;
								}
								
								switch(carta){
								case 1:
									sumaCompu = sumaCompu + 1;break;
								case 2:
									sumaCompu = sumaCompu + 2;break;
								case 3:
									sumaCompu = sumaCompu + 3;break;
								case 4:	
									sumaCompu = sumaCompu + 4;break;
								case 5:	
									sumaCompu = sumaCompu + 5;break;
								case 6:
									sumaCompu = sumaCompu + 6;break;
								case 7:
									sumaCompu = sumaCompu +7;break;
								case 10:
									sumaCompu = sumaCompu + 0.5;break;
								case 11:
									sumaCompu = sumaCompu +0.5;break;
								case 12:	
									sumaCompu = sumaCompu +0.5;break;
								default:break;
								}
								
								cout<<"Carta "<<contadorCompu<<": "<<carta<<palos<<". Y suma: "<<sumaCompu<<" puntos."<<endl;
								
								contadorCompu++;
								mazo[fila][columna]=-1;
							}
						}
						
						if(sumaCompu==7.5 && suma==7.5){
							cout<<"Te gane :)"<<endl;return 0;
						}
						
						if(sumaCompu>7.5){
							cout<<"Ganaste.. cuestion de suerte.."<<endl;return 0;
						}
						
						if(sumaCompu>suma && suma<7.5){
							cout<<"Te gane.. te lo dije."<<endl;return 0;
						}
					}
					break;
					
				}
				
			}
			
		}
	
		
	}
	
	
	return 0;
}

