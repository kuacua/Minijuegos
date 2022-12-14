#include <iostream> <string>

using namespace std;

int main(){

	string opcion;
	string opcion2;
	
	cout<<"Hola tienes que elegir un camino--> [izquierda] o [derecha] : ";cin>>opcion;
	
	if(opcion != "izquierda" && opcion != "derecha"){
		cout<<"[!] OPCION INVALIDA [!]";
		return 1;
		
	}
	else{
		
		if(opcion == "izquierda"){
			
			cout<<"Elegiste el camino por izquierda\n";
			cout<<"En este camino te encuentras un prado lleno de flore donde en el se encuentra un molino roto\n";
			cout<<"Entras en el y justo te cae un peazo ladrillo en la cabeza y pal lobby\n";
			cout<<" ---GAME OVER--- ";
		}
		else{
			cout<<"Elegiste el camino derecha\n";
			cout<<"En este camino encontraras a [Roberto] herido y a [Juanma] herido\n";
			cout<<"A quien salvaras? : ";cin>>opcion2;
			
			if(opcion2 != "Roberto" && opcion2 != "Juanma"){
				cout<<"\n[!] OPCION INVALIDA [!]";
				return 1;
			
			}
			else{
				if(opcion2 == "Roberto"){
				
					cout<<"JA! elegiste a Roberto\n";
					cout<<"En verdad no era Roberto y era tu madre dicientote que te comas el plato de lentajas\n";
					cout<<"Por lo cual no puedes seguir jugando tendras que comer el plato de lentejas\n";
					cout<<" ---GAME OVER--- ";
				}
				else{
					
					cout<<"Wow! elegiste a Juanma\n";
					cout<<"Juanma te da las gracias y te reta uno pa uno sin camiseta en el llano lloviendo\n";
					cout<<"CONTINUARA...";
				}
			}
		}
	}
	

	return 0;
}