#include <iostream>
#include <conio2.h>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int mazo[4][10] = {{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12},{1,2,3,4,5,6,7,10,11,12}};
	float valorcartas[13],suma=0,sumacompu=0;
	int carta=0,fila=0,columna,contadorcarta=1;
	bool gameon=false;
	bool gameonn=false;
	string palos;
	
	cout<<endl<<"El juego es el Siete y medio. El objetivo es acercarse a 7 y medio sin pasarse, sacando cartas. El jugador mas cercano al puntaje 7.5 gana. Aclaracion: se juega sin 8 y sin 9 ni comodines."<<endl;
	cout<<"\n"<<endl;
	cout<<"El valor de las cartas son: "<<endl;
	cout<<"\n"<<endl;
	for(int i=1;i<13;i++){
		valorcartas[i] = i;
		valorcartas[8]=0;
		valorcartas[9]=0;
		valorcartas[10]=0.5;
		valorcartas[11]=0.5;
		valorcartas[12]	=0.5;
		cout<<i<<"-->"<<valorcartas[i]<<endl;
		cout<<"\n";
	}
	
	
	while(gameonn==false){
		cout<<"Presione S para sacar una carta: "<<endl;
		
		while(gameon==false){
			
			
			
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
						}
						cout<<"Carta "<<contadorcarta<<":"<<carta<<palos<<". Y suma: "<<suma<<" puntos."<<endl;
						contadorcarta++;
						if(suma>7.5){
							cout<<"Usted Perdio :(."<<endl;return 0;
						}
						cout<<endl<<"Si desea sacar otra carta presione S(si) sino N(no)."<<endl;
						
						mazo[fila][columna]=-1;
					} 
					
					break;
					
					
				case 110:
					int contadorcompu=1;
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
							sumacompu = sumacompu + 1;break;
						case 2:
							sumacompu = sumacompu + 2;break;
						case 3:
							sumacompu = sumacompu + 3;break;
						case 4:	
							sumacompu = sumacompu + 4;break;
						case 5:	
							sumacompu = sumacompu + 5;break;
						case 6:
							sumacompu = sumacompu + 6;break;
						case 7:
							sumacompu = sumacompu +7;break;
						case 10:
							sumacompu = sumacompu + 0.5;break;
						case 11:
							sumacompu = sumacompu +0.5;break;
						case 12:	
							sumacompu= sumacompu +0.5;break;
						}
						
						cout<<endl<<"Ahora me toca a mi!"<<endl;
						
						cout<<"Carta "<<contadorcompu<<": "<<carta<<palos<<". Y suma: "<<sumacompu<<" puntos."<<endl;
						
						contadorcompu++;
						
						mazo[fila][columna]=-1;
						
						if(sumacompu==7 && (suma<7 || suma>7.5)){
							cout<<"Usted perdio..."<<endl;return 0;
						}
						
						if(sumacompu>suma && suma<7.5){
							cout<<"Te gane.. te lo dije."<<endl;return 0;
						}
						
						while(sumacompu<=7.5 || sumacompu>suma){
							
							if(sumacompu==7 && suma<7 || suma>7.5){
								cout<<"Usted perdio..."<<endl;return 0;
							}
							
							if(sumacompu<7.5 || sumacompu<7){
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
										sumacompu = sumacompu + 1;break;
									case 2:
										sumacompu = sumacompu + 2;break;
									case 3:
										sumacompu = sumacompu + 3;break;
									case 4:	
										sumacompu = sumacompu + 4;break;
									case 5:	
										sumacompu = sumacompu + 5;break;
									case 6:
										sumacompu = sumacompu + 6;break;
									case 7:
										sumacompu = sumacompu +7;break;
									case 10:
										sumacompu = sumacompu + 0.5;break;
									case 11:
										sumacompu = sumacompu +0.5;break;
									case 12:	
										sumacompu = sumacompu +0.5;break;
									}
									
									cout<<"Carta "<<contadorcompu<<": "<<carta<<palos<<". Y suma: "<<sumacompu<<" puntos."<<endl;
									
									contadorcompu++;
									mazo[fila][columna]=-1;
								}
							}
							
							if(sumacompu==7.5 && suma==7.5){
								cout<<"Te gane :)"<<endl;return 0;
							}
							
							if(sumacompu>7.5){
								cout<<"Ganaste.. cuestion de suerte.."<<endl;return 0;
							}
							
							if(sumacompu>suma && suma<7.5){
								cout<<"Te gane.. te lo dije."<<endl;return 0;
							}
						}
						break;
						
					}
					
				}
				
			}
			
		}
		
		
	}
	
	
	return 0;
}

