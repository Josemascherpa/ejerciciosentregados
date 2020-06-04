#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string nombre;	
	
	float runa1,runa2,runa3,cal1,cal2,vida=10;
	
	bool corazones;
	
	cout<<"Ingrese nombre de su personaje: "<<nombre;cin>>nombre;//Almacenamos el nombre en la variable
	
	cout<<"Su nombre es: "<<nombre<<endl;//Mostramos el nombre
	
	cout<<"Sus puntos de vida son: "<<vida<<endl;//Mostramos la vda del personaje
	
	cout<<"Ingresar primera runa: ";cin>>runa1;//Obtenemos primer runa1
	
	cout<<"Ingresar segunda runa: ";cin>>runa2;//Obtenemos segunda runa2
	
	cout<<"Ingresar tercera runa: ";cin>>runa3;//Obtenemos tercer runa3
	
	cal1=((runa1)-(runa2/2)+(runa3/2)); //Hacemos el primer calculo de runas
	
	vida = vida - cal1;
	
	cout<<"Sus puntos de vida son: "<<vida<<endl; //Volvemos a mostrar la vida luego del primer calculo
	
	cal2=((runa2)-(runa1/2)+(runa3/2));//Realizamos segundo calculo variando el lugar de las runas
	
	vida = vida - cal2; 
	
	cout<<"Sus puntos de vida son: "<<vida<<endl; //Volvemos a mostrar la vida luego del segundo calculo
	
	corazones = (vida > 0); //Verificamos si el personaje esta con vida.
	
	cout<<"Tu personaje sigue vivo?: "<<corazones; //Mostramos si esta con vida o no.
	
	return 0;
}

