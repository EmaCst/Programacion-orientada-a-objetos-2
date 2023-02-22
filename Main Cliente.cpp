#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono,opccion;
	
	cout<<"Ingresar Nit \n";
	cin>>nit;
	cout<<"Ingresar Nombres \n";
	cin>>nombres;
	cout<<"Ingresar Apellidos \n";
	cin>>apellidos;
	cout<<"Ingresar Direccion \n";
	cin>>direccion;
	cout<<"Ingrese Fecha de Nacimiento \n";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono \n";
	cin>>telefono;
	Cliente obj = Cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit);
	obj.mostrar();
		
	cout<<"Seleccione la opccion que desea realizar \n1. Crear \n2.Leer \n3.Actualizar \n4.Borrar \n5.Salir";
	cin>>opccion;
		switch(opccion){
		case 1: cout<<"Acontinuacion podra crear datos(No podra ingresar nada) \n";
		break;
		case 2:cout<<"Acontinuacion se le mostraran los datos:(No se mostrara Nada) \n";
		break;
		case 3:cout<<"Acontinuacion podra actualizar(No se actualizo nada) \n";
		break;
		case 4:cout<<"Acontinuacion se borraran los datos (no se borro nada)";
		break;
		case 5:cout<<"Saliendo...";
		break;
		default: cout<<"Esa opccion no exite";
}
}