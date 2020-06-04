#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int nacimiento,anio,nummes,anioactual,edad,diactual, mesactual;
	string mes; //Definimos las variables a usar.
	
	cout<<"¿Que dia nacio?: ";cin>>nacimiento;
	cout<<"¿En que mes nacio?: ";cin>>nummes;
	
	//Dias de cada mes
	switch(nummes){ //Usamos swicht para definir los dias de cada mes.
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(nacimiento>31){
				cout<<"Imposible, este mes tiene 31 dias.";
				cout<<"¿Que dia nacio?: ";cin>>nacimiento;
				cout<<"¿En que mes nacio?: ";cin>>nummes;
			}
			break;
		case 2:
			if(nacimiento>28){
				cout<<"Imposible, este mes tiene 28 dias.";
				cout<<"¿Que dia nacio?: ";cin>>nacimiento;
				cout<<"¿En que mes nacio?: ";cin>>nummes;
			}
			break;
		case 4: case 6: case 9: case 11:
			if(nacimiento>30){
				cout<<"Imposible, este mes tiene 30 dias.";
				cout<<"¿Que dia nacio?: ";cin>>nacimiento;
				cout<<"¿En que mes nacio?: ";cin>>nummes;
			}
			break;
	}
	
	//Cantidad de meses existentes
	if(nummes<1 && nummes>12){ 
		cout<<"Imposible, por favor, coloque un numero de mes existente, entre 1-12.";
		cout<<endl<<"¿En que mes nacio?: ";cin>>nummes;
	}
	
	//Obtenemos el año de nacimiento por teclado
	cout<<"¿En que año nacio?: ";cin>>anio;
	if(anio> 2020){ //Usamos If para que la fecha de nacimiento sea verdadera.
		cout<<"Imposible, por favor, coloque bien su año de nacimiento."<<endl;
		cout<<"¿En que año nacio?: ";cin>>anio;
		
	}
	
	//Comenzamos a obtener la fecha actual.
	
	//Obtenemos el año actual	
	cout<<"Ingrese año actual: ";cin>>anioactual;
	if(anioactual> 2020){ //Usamos If para que la fecha de nacimiento sea verdadera.
		cout<<"Imposible, por favor, coloque bien su año de nacimiento."<<endl;
		cout<<"Ingrese año actual: ";cin>>anioactual;
		
	}
	
	cout<<"Mes actual: ";cin>>mesactual;		
	//corroboramos que mes actual sea valido.
	if(mesactual<1 || mesactual>12){ 
		cout<<"Imposible, por favor, coloque un numero de mes existente, entre 1-12.";
		cout<<endl<<"Mes actual: ";cin>>mesactual;
	}
	
	//Pedimos el dia actual:
	cout<<"Dia actual: ";cin>>diactual;
	
	//Usamos swicht para definir los dias actuales de cada mes.
	switch(mesactual){ 
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if(diactual>31){
			cout<<"Imposible, este mes tiene 31 dias.";
			cout<<"¿Que dia nacio?: ";cin>>diactual;
		}
		break;
	case 2:
		if(diactual>28){
			cout<<"Imposible, este mes tiene 28 dias.";
			cout<<"¿Que dia nacio?: ";cin>>diactual;
		}
		break;
	case 4: case 6: case 9: case 11:
		if(diactual>30){
			cout<<"Imposible, este mes tiene 30 dias.";
			cout<<"¿Que dia nacio?: ";cin>>diactual;
		}
		break;
	}
	
	//calculando edad
	edad = anioactual-anio;	
	if(nummes>mesactual || (nummes==mesactual && nacimiento>diactual )){
		edad = edad - 1;
	}
	
	//Usamos otro switch, para asignar a cada numero, el mes exacto.
	switch(nummes){
		case 1:
			mes = "Enero";break;
		case 2:
			mes = "Febrero";break;
		case 3:
			mes = "Marzo";break;
		case 4:
			mes = "Marzo";break;
		case 5:
			mes = "Mayo";break;
		case 6:
			mes = "Junio";break;
		case 7:
			mes = "Julio";break;
		case 8:
			mes = "Agosto";break;
		case 9:
			mes = "Septiembre";break;
		case 10:
			mes = "Octubre";break;
		case 11:
			mes = "Noviembre";break;
		case 12:
			mes = "Diciembre";break;
	}	
	
	
	cout<<"Usted nacio el dia: "<<nacimiento<<" de "<<mes<<" de "<<anio<<" y tiene "<<edad<<" años.";
	
	
	return 0;
}

