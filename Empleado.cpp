#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	
	private : string codigo_empleado, puesto;
	
	public :
		Empleado(){
		}
		Empleado (string nom, string ape, string dir,string fecha, int tel, string cod_e, string pue) : Persona(nom,ape,dir,fecha,tel){
			codigo_empleado = cod_e;
			puesto = pue;
		}
		
	void setCodigo_Empleado(string cod_e){codigo_empleado = cod_e;}
	void setPuesto(string pues){puesto = pues;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_Nacimiento(string fecha){fecha_nacimiento = fecha;}
	void setTelefono(int tel){telefono = tel;}
	
	  string getCodigo_Empleadot(){return codigo_empleado;}
	  string getPuesto(){return puesto;}
	  string getNombres(){return nombres;}
	  string getApellidos(){return apellidos;}
	  string getDireccion(){return direccion;}
	  string getFecha_Nacimiento(){return fecha_nacimiento;}
	  int getTelefono(){return telefono;}
	  
	  void mostrar(){
		cout<<"_______________"<<endl;
		cout<<codigo_empleado<<", "<<puesto<<", "<<nombres<<" "<<apellidos<<", "<<direccion<<", "<<telefono<<", "<<fecha_nacimiento<<endl;
	}
};