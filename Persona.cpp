#include<iostream>
using namespace std;
class Persona{
		//atributos
		protected : string nombres, apellidos, direccion,fecha_nacimiento;
					int telefono;
		//constructo
		protected :
				Persona(){
				}
				Persona(string nom, string ape, string dir, string fecha, int tel){
					nombres = nom;
					apellidos= ape;
					direccion = dir;
					fecha_nacimiento = fecha; 
					telefono = tel;
				}
		//metodo
		void mostrar();
};