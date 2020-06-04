#include <iostream>
#include <conio2.h>
using namespace std;

int main(int argc, char *argv[]) {
	int monedas_actuales=0,monedas_ingresadas=0;
	
	cout<<"Ingrese monedas que va utilizar(solo puede ingresar de 1 a 9): ";cin>>monedas_ingresadas; //Obtenemos las monedas que ingresan y la guardamos en la variable

	if(monedas_ingresadas>9 || monedas_ingresadas<1){//utilizamos el if , para que no se pueda agregar mas de 9 monedas ni menos de 1
		cout<<"Solo puede ingresar de 1 a 9 monedas. Vuelva a ingresar por favor."<<endl;
		cout<<"Ingrese monedas que va utilizar(solo puede ingresar de 1 a 9): "<<endl;cin>>monedas_ingresadas;
		
	}
	monedas_actuales=monedas_actuales + monedas_ingresadas; //sumamos las monedas ingresadas a las monedas de la maquina
	
	
	if(monedas_actuales>0){//usamos if para mostrar la cantidad de monedas, y la instruccion de como jugar, siempre y cuando haya monedas
		cout<<"La cantidad de monedas que tiene actualmente son: "<<monedas_actuales<<endl;
		cout<<"Presione la palanca utizando la tecla Espacio."<<endl;
	}
	
	if(monedas_actuales==0){//cuando ya no hay monedas, permitimos que se pueda agregar mas monedas.
		cout<<"Usted no dispone de monedas actuales para jugar, por favor, ingrese monedas, o bien, presione Escape para salir."<<endl;
		cout<<"Ingrese monedas que va utilizar(solo puede ingresar de 1 a 9): ";cin>>monedas_ingresadas;
		monedas_actuales=monedas_actuales + monedas_ingresadas;
		cout<<"Presione la palanca utizando la tecla Espacio.Usted dispone de "<<monedas_actuales<<" monedas para jugar."<<endl;
	}
	
	
	while(monedas_actuales>0){//usamos while, para obtener las letras presionadas, y asi podes apretar la palanca o bien, salir del juego.
		
		if(kbhit()){
			int tecla=getch();
			
			switch(tecla){
				case 32:{//si presiona la Tecla Espacio, obtuve la tecla guardando el getch en la variable y mostrandola ver, para verificar el numero.
					int num1=rand()%7+1,num2=rand()%7+1,num3=rand()%7+1;
					monedas_actuales= monedas_actuales - 1;
					cout<<"los numeros que le tocaron fueron: "<<endl;
					cout<<num1<<endl;
					cout<<num2<<endl;
					cout<<num3<<endl;
					if(num1 == num2 && num2==num3){
						cout<<"USTED GANO 9 MONEDAS!!!!"<<endl;
						monedas_actuales=monedas_actuales+(num1+num2+num3);
					}else{
						cout<<"Usted perdio 1 moneda."<<endl;
					}
					cout<<"Sus monedas actuales son: "<<monedas_actuales<<endl;
					cout<<"Si usted prefiere retirarse con "<<monedas_actuales<<" monedas presione Escape, sino presione Espacio para seguir jugando."<<endl;
					if(monedas_actuales==0){
						cout<<"Usted no dispone de monedas actuales para jugar, por favor, ingrese monedas."<<endl;
						cout<<"Ingrese monedas que va utilizar(solo puede ingresar de 1 a 9): ";cin>>monedas_ingresadas;
						monedas_actuales=monedas_actuales + monedas_ingresadas;
						cout<<"Presione la palanca utizando la tecla Espacio.Usted dispone de "<<monedas_actuales<<" monedas para jugar."<<endl;
					}
					}break;
				case 27:{//Si presiona Escape, puede salir.
					cout<<"Usted decidio retirarse con "<<monedas_actuales<<" monedas."<<endl;
					return 1;}break;
			}
		}
	}
	
	return 0;
}

