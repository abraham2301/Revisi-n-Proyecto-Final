#pragma once
#include <iostream>
#include <mysql.h>
#include <string>
#include "ConexionBD.h"
#include <vector>

using namespace std;
class Venta{
	//atributos
private: int idVenta, nofactura, idcliente, idempleado;
	   string serie, fechafactura, fechaingreso, total;
public:
	//set (modificar)
	void set_idVenta(int idventaaa) { idVenta = idventaaa; }
	void set_nofactura(int nofacturasss) { nofactura = nofacturasss; }
	void set_idcliente(int idclienteeee) { idcliente = idclienteeee; }
	void set_idempleado(int idempleadooooo) { idempleado = idempleadooooo; }
	void set_serie(string seriesss) { serie = seriesss; }
	void set_fechafactura(string fechafacturaaaaa) { fechafactura = fechafacturaaaaa; }
	void set_fechaingreso(string fechaingresooooo) { fechaingreso = fechaingresooooo; }
	// get (mostrar)
	int get_idVenta() {return idVenta; }
	int get_nofactura() {return nofactura; }
	int get_idcliente() { return idcliente; }
	int get_idempleado() { return idempleado; }
	string get_serie() { return serie; }
	string get_fechafactura() { return fechafactura; }
	string get_fechaingreso() { return fechaingreso; }
	///////////////////////////////////////////////////////////////////////////////////
	void crear(vector<string> idProductos, vector<int> cantidades, vector<double> precios) {
		int q_estado;
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {

			string sidVenta = to_string(idVenta);
			string no_factura = to_string(nofactura);
			string idCliente = to_string(idcliente);
			string idEmpleado = to_string(idempleado);

			string sql = "INSERT INTO ventas (No_Factura, Serie, Fecha_facturada, id_Cliente, id_Empleado, fecha_Ingreso) VALUES (" + no_factura + ",'" + serie + "','" + fechafactura + "'," + idCliente + "," + idEmpleado + ",'" + fechaingreso + "')";
			const char* i = sql.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				string consulta = "SELECT @@identity AS id";
				const char* c = consulta.c_str();
				q_estado = mysql_query(cn.getConectar(), c);
				if (!q_estado) {
					string idMaster = "";
					resultado = mysql_store_result(cn.getConectar());
					while (fila = mysql_fetch_row(resultado)) {
						idMaster = fila[0];
					}
					double total_venta = 0;
					for (int i = 0; i < idProductos.size(); i++) {
						total_venta = total_venta + (cantidades.at(i) * precios.at(i));
						string insertarDetalle = "INSERT INTO ventas_detalle (id_Venta,id_Producto,Cantidad, Precio_Unitario) VALUES (" + idMaster + "," + idProductos.at(i) + "," + to_string(cantidades.at(i)) + "," + to_string(precios.at(i)) + ");";
						const char* inser = insertarDetalle.c_str();
						mysql_query(cn.getConectar(), inser);
					}

				}
				else {
					cout << "---------- Error al leer id ventas ----------" << endl;
				}
			}
			else {
				cout << "--------- Error al ingresar la informacion en master venta----------" << endl;
			}
		}
		else {
			cout << "----------- Error de la conexion ----------" << endl;
		}
		cn.cerrar_conexion();
	}
	void leer() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select *from ventas;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				cout << "--------- Ventas ---------" << endl;
				cout << endl;
				cout << " id_Ventas " << " / " << "No_Factura" << " / " << " Serie " << " / " << "Fecha_Facturada" << " / " << "Id_Cliente" << " / " << "Id_Empleo" << " / " << "Fecha_ingreso" << endl;
				
				while (fila = mysql_fetch_row(resultado)) {
					
					cout << fila[0] << " / " << fila[1] << fila[2] << " / " << fila[3] << " / " << fila[4] << " / " << fila[5] << " / " << fila[6] << endl;
				}
			}
			else {
				cout << "--------- Error al mostrar la informacion ---------" << endl;
			}
		}
		else {
			cout << "---------- Error de la conexion ----------" << endl;
		}
		cn.cerrar_conexion();
	}

	void modificar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {

		}
		else {
			cout << "---------- Error de la conexion ---------" << endl;
		}
		cn.cerrar_conexion();
	}

	void eliminar() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {

		}
		else {
			cout << "---------- Error de la conexion ---------" << endl;
		}
		cn.cerrar_conexion();
	}
};

