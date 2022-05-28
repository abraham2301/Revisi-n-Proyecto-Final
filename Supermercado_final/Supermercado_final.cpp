
#include <iostream>
#include <mysql.h>
#include "Marca.h"
#include "Puesto.h"
#include "Proveedor.h"
#include "Producto.h"
#include "Empleado.h";
#include "Cliente.h"
#include "Venta.h"
#include <vector>
#include "Compra.h"


using namespace std;
int main(){
    int escoger;
    int eleccion=0;

    do {
        system("cls");
        cout << "Que tablas quieres visualizar: " << endl;
        cout << "Marcas: 1" << endl;
        cout << "Producto: 2" << endl;
        cout << "Proveedores: 3" << endl;
        cout << "Clientes: 4" << endl;
        cout << "Puesto: 5" << endl;
        cout << "Empleado: 6" << endl;
        cout << "Compras: 7" << endl;
        cout << "Ventas: 8" << endl;
        cout << "Respuesta: ";
        cin >> escoger;
        if (escoger == 1) {
            int marcaeleccion;
            int idmark;
            string marka;
            system("cls");
            cout << "Leer marcas: 1" << endl;
            cout << "Crear marcas: 2" << endl;
            cout << "eliminar marcas: 3" << endl;
            cout << "Modiciar marcas: 4" << endl;
            cout << "Respuesta: ";
            cin >> marcaeleccion;

            if (marcaeleccion == 1) {
                system("cls");
                Marca l = Marca();
                l.leer();
            }
            else {
                if (marcaeleccion == 2) {
                    system("cls");
                    cout << "Ingresa el nombre de la marca: ";
                    getline(cin, marka);
                    cin.ignore();
                    Marca i = Marca();
                    i.crear();
                    i.leer();

                }
                else {
                    if (marcaeleccion == 3) {
                        system("cls");
                        cout << "Ingresa el id para eliminar la marca: ";
                        cin >> idmark;
                        Marca e = Marca();
                        e.set_idmarca(idmark);
                        e.eliminar();
                        e.leer();
                    }
                    else {
                        if (marcaeleccion == 4) {
                            system("cls");
                            cout << "Ingresa el id de la marca para poder modificar: ";
                            cin >> idmark;
                            cin.ignore();
                            cout << "Ingresa la marca para poder modificar: ";
                            getline(cin, marka);
                            cin.ignore();
                            Marca m = Marca();
                            m.set_idmarca(idmark);
                            m.setmarca(marka);
                            m.modificar();
                            m.leer();
                        }
                    }
                }
            }

        }
        if (escoger == 2) {
            int productoeleccion;
            int idproduc, idmarc, exis;
            string product, descri, fechaingre;
            float preciocost, preciovent;
            system("cls");
            cout << "Leer Producto: 1" << endl;
            cout << "Crear Producto: 2" << endl;
            cout << "eliminar Producto: 3" << endl;
            cout << "Modiciar Producto: 4" << endl;
            cout << "Respuesta: ";
            cin >> productoeleccion;

            if (productoeleccion == 1) {
                system("cls");
                Producto l = Producto();
                l.leer();
            }
            else {
                if (productoeleccion == 2) {
                    system("cls");
                    cout << "Ingresa el nombre del producto: ";
                    getline(cin, product);
                    cin.ignore();
                    cout << "Ingresa el id de la marca: ";
                    cin >> idmarc;
                    cin.ignore();
                    cout << "Ingresa la descripcion del producto: ";
                    getline(cin, descri);
                    cin.ignore();
                    cout << "Ingresa el precio de costo por el producto: ";
                    cin >> preciocost;
                    cin.ignore();
                    cout << "Ingresa el precio de la venta por el producto: ";
                    cin >> preciovent;
                    cin.ignore();
                    cout << "Ingresa la existencia del producto: ";
                    cin >> exis;
                    cin.ignore();
                    cout << "Ingresa la fecha de ingreso del producto: ";
                    getline(cin, fechaingre);
                    cin.ignore();
                    Producto i = Producto();
                    i.set_idProducto(idproduc);
                    i.set_Producto(product);
                    i.set_idMarca(idmarc);
                    i.set_Descripcion(descri);
                    i.set_precio_costo(preciocost);
                    i.set_precio_venta(preciovent);
                    i.set_existencia(exis);
                    i.set_fecha_ingreso(fechaingre);
                    i.crear();
                    i.leer();
                }
                else {
                    if (productoeleccion == 3) {
                        system("cls");
                        cout << "Ingresa el id del producto a eliminar: ";
                        cin >> idproduc;
                        Producto e = Producto();
                        e.set_idProducto(idproduc);
                        e.eliminar();
                        e.leer();
                    }
                    else {
                        if (productoeleccion == 4) {
                            system("cls");
                            cout << "Ingresa el id del producto que quieres modificar ";
                            cin >> idproduc;
                            cin.ignore();
                            cout << "Ingresa el nombre del producto: ";
                            getline(cin, product);
                            cin.ignore();
                            cout << "Ingresa el id de la marca: ";
                            cin >> idmarc;
                            cin.ignore();
                            cout << "Ingresa la descripcion del producto: ";
                            getline(cin, descri);
                            cin.ignore();
                            cout << "Ingresa el precio de costo por el producto: ";
                            cin >> preciocost;
                            cin.ignore();
                            cout << "Ingresa el precio de la venta por el producto: ";
                            cin >> preciovent;
                            cin.ignore();
                            cout << "Ingresa la existencia del producto: ";
                            cin >> exis;
                            cin.ignore();
                            cout << "Ingresa la fecha de ingreso del producto: ";
                            getline(cin, fechaingre);
                            cin.ignore();
                            Producto m = Producto();
                            m.set_idProducto(idproduc);
                            m.set_Producto(product);
                            m.set_idMarca(idmarc);
                            m.set_Descripcion(descri);
                            m.set_precio_costo(preciocost);
                            m.set_precio_venta(preciovent);
                            m.set_existencia(exis);
                            m.set_fecha_ingreso(fechaingre);
                            m.modificar();
                            m.leer();
                        }
                    }
                }
            }
        }
        if (escoger == 3) {
            int proveedoreleccion;
            int idprove;
            string prove, ni, dire, tele;

            system("cls");
            cout << "Leer Proveedores: 1" << endl;
            cout << "Crear Proveedores: 2" << endl;
            cout << "eliminar Proveedores: 3" << endl;
            cout << "Modiciar Proveedores: 4" << endl;
            cout << "Respuesta: ";
            cin >> proveedoreleccion;

            if (proveedoreleccion == 1) {
                system("cls");
                Proveedor l = Proveedor();
                l.leer();
            }
            else {
                if (proveedoreleccion == 2) {
                    system("cls");
                    cout << "Ingresa el nombre del proveedor: ";
                    getline(cin, prove);
                    cin.ignore();
                    cout << "Ingresa el nit del proveedor: ";
                    getline(cin, ni);
                    cin.ignore();
                    cout << "Ingresa la direccion del proveedor: ";
                    getline(cin, dire);
                    cin.ignore();
                    cout << "Ingresa el telefono del proveedor: ";
                    getline(cin, tele);
                    cin.ignore();
                    Proveedor i = Proveedor(tele, ni, idprove, prove, dire);
                    i.crear();
                    i.leer();
                }
                else {
                    if (proveedoreleccion == 3) {
                        system("cls");
                        cout << "Ingresa el id del proveedor a eliminar: ";
                        cin >> idprove;
                        Proveedor e = Proveedor();
                        e.set_idProveedore(idprove);
                        e.eliminar();
                        e.leer();
                    }
                    else {
                        if (proveedoreleccion == 4) {
                            system("cls");
                            cout << "Ingresa el Id del Proveedor para poder realizar la modificacion: ";
                            cin >> idprove;
                            cin.ignore();
                            cout << "Ingresa el nombre del proveedor: ";
                            getline(cin, prove);
                            cin.ignore();
                            cout << "Ingresa el nit del proveedor: ";
                            getline(cin, ni);
                            cin.ignore();
                            cout << "Ingresa la direccion del proveedor: ";
                            getline(cin, dire);
                            cin.ignore();
                            cout << "Ingresa el telefono del proveedor: ";
                            getline(cin, tele);
                            cin.ignore();
                            Proveedor m = Proveedor(tele, ni, idprove, prove, dire);
                            m.modificar();
                            m.leer();
                        }
                    }
                }
            }

        }
        if (escoger == 4) {
            int clienteeleccion;
            int idclient, genero;
            string nom, ape, ni, tele, correo, fechaingre;
            system("cls");
            cout << "Leer Cliente: 1" << endl;
            cout << "Crear Cliente: 2" << endl;
            cout << "eliminar Cliente: 3" << endl;
            cout << "Modiciar Cliente: 4" << endl;
            cout << "Respuesta: ";
            cin >> clienteeleccion;

            if (clienteeleccion == 1) {
                system("cls");
                Cliente l = Cliente();
                l.leer();
            }
            else {
                if (clienteeleccion == 2) {
                    system("cls");
                    cout << "Ingresa los nombres del cliente: ";
                    getline(cin, nom);
                    cin.ignore();
                    cout << "Ingresa los apellidos del cliente: ";
                    getline(cin, ape);
                    cin.ignore();
                    cout << "Ingresa el nit del cliente: ";
                    getline(cin, ni);
                    cin.ignore();
                    cout << "Ingresa el genero del cliente: ";
                    cin >> genero;
                    cin.ignore();
                    cout << "Ingresa el telefono del cliente: ";
                    getline(cin, tele);
                    cin.ignore();
                    cout << "Ingresa el correo del cliente: ";
                    getline(cin, correo);
                    cin.ignore();
                    cout << "Ingresa la fecha de ingreso del cliente: ";
                    getline(cin, fechaingre);
                    cin.ignore();
                    Cliente i = Cliente(tele, ni, idclient, nom, ape, genero, correo, fechaingre);
                    i.crear();
                    i.leer();
                }
                else {
                    if (clienteeleccion == 3) {
                        system("cls");
                        cout << "Ingresa el id del cliente a eliminar: ";
                        cin >> idclient;
                        Cliente e = Cliente();
                        e.set_idCliente(idclient);
                        e.eliminar();
                        e.leer();
                    }
                    else {
                        if (clienteeleccion == 4) {
                            system("cls");
                            cout << "Ingresa el id del cliente para realizar la modificacion ";
                            cin >> idclient;
                            cin.ignore();
                            cout << "Ingresa los nombres del cliente: ";
                            getline(cin, nom);
                            cin.ignore();
                            cout << "Ingresa los apellidos del cliente: ";
                            getline(cin, ape);
                            cin.ignore();
                            cout << "Ingresa el nit del cliente: ";
                            getline(cin, ni);
                            cin.ignore();
                            cout << "Ingresa el genero del cliente: ";
                            cin >> genero;
                            cin.ignore();
                            cout << "Ingresa el telefono del cliente: ";
                            getline(cin, tele);
                            cin.ignore();
                            cout << "Ingresa el correo del cliente: ";
                            getline(cin, correo);
                            cin.ignore();
                            cout << "Ingresa la fecha de ingreso del cliente: ";
                            getline(cin, fechaingre);
                            cin.ignore();
                            Cliente m = Cliente(tele, ni, idclient, nom, ape, genero, correo, fechaingre);
                            m.modificar();
                            m.leer();
                        }
                    }
                }
            }
        }
        if (escoger == 5) {
            int puestoeleccion, idpues;
            string pues;
            system("cls");
            cout << "Leer Empleado: 1" << endl;
            cout << "Crear Empleado: 2" << endl;
            cout << "eliminar Empleado: 3" << endl;
            cout << "Modiciar Empleado: 4" << endl;
            cout << "Respuesta: ";
            cin >> puestoeleccion;

            if (puestoeleccion == 1) {
                system("cls");
                Puesto l = Puesto();
                l.leer();
            }
            else {
                if (puestoeleccion == 2) {
                    system("cls");
                    cout << "Ingresa el puesto del empleado: ";
                    getline(cin, pues);
                    cin.ignore();
                    Puesto i = Puesto();
                    i.set_idpuesto(idpues);
                    i.set_puesto(pues);
                    i.crear();
                    i.leer();
                }
                else {
                    if (puestoeleccion == 3) {
                        system("cls");
                        cout << "Ingresa el id del puesto a eliminar: ";
                        cin >> idpues;
                        Puesto e = Puesto();
                        e.set_idpuesto(idpues);
                        e.eliminar();
                        e.leer();
                    }
                    else {
                        if (puestoeleccion == 4) {
                            system("cls");
                            cout << "Ingresa el id del puesto a modificar: ";
                            cin >> idpues;
                            cin.ignore();
                            cout << "Ingresa el puesto del empleado: ";
                            getline(cin, pues);
                            cin.ignore();
                            Puesto m = Puesto();
                            m.set_idpuesto(idpues);
                            m.set_puesto(pues);
                            m.modificar();
                            m.leer();
                        }
                    }
                }
            }

        }
        if (escoger == 6) {
            int empleadoeleccion, idEmple, idpues, genero;
            string nom, ape, dire, tele, dpii, fechanac, fechainic, fechaingre, ni;
            system("cls");
            cout << "Leer Empleado: 1" << endl;
            cout << "Crear Empleado: 2" << endl;
            cout << "eliminar Empleado: 3" << endl;
            cout << "Modiciar Empleado: 4" << endl;
            cout << "Respuesta: ";
            cin >> empleadoeleccion;
            if (empleadoeleccion == 1) {
                system("cls");
                Empleado l = Empleado();
                l.leer();
            }
            else {
                if (empleadoeleccion == 2) {
                    system("cls");
                    cout << "Ingresa los nombres del empleado: ";
                    getline(cin, nom);
                    cin.ignore();
                    cout << "Ingresa los apellidos del empleado: ";
                    getline(cin, ape);
                    cin.ignore();
                    cout << "Ingresa la direccion del empleado: ";
                    getline(cin, dire);
                    cin.ignore();
                    cout << "Ingresa el numero del empleado: ";
                    getline(cin, tele);
                    cin.ignore();
                    cout << "Ingresa el DPI del empleado: ";
                    getline(cin, dpii);
                    cin.ignore();
                    cout << "Ingresa el genero del empleado: ";
                    cin >> genero;
                    cin.ignore();
                    cout << "Ingresa la fecha de nacimiento del empleado: ";
                    getline(cin, fechanac);
                    cin.ignore();
                    cout << "Ingresa el id del puesto del empleado: ";
                    cin >> idpues;
                    cin.ignore();
                    cout << "Ingresa la fecha de inicio de labores del empleado: ";
                    getline(cin, fechainic);
                    cin.ignore();
                    cout << "Ingresa la fecha de ingreso del empleado: ";
                    getline(cin, fechaingre);
                    cin.ignore();
                    Empleado i = Empleado(tele, ni, idEmple, idpues, nom, ape, dire, dpii, genero, fechanac, fechainic, fechaingre);
                    i.crear();
                    i.leer();
                }
                else {
                    if (empleadoeleccion == 3) {
                        system("cls");
                        cout << "Ingresa el id del empleado a eliminar: ";
                        cin >> idEmple;
                        Empleado e = Empleado();
                        e.set_idEmpleado(idEmple);
                        e.eliminar();
                        e.leer();
                    }
                    else {
                        if (empleadoeleccion == 4) {
                            system("cls");
                            cout << "ingresa el id del Empleado que quieres modificar: ";
                            cin >> idEmple;
                            cin.ignore();
                            cout << "Ingresa los nombres del empleado: ";
                            getline(cin, nom);
                            cin.ignore();
                            cout << "Ingresa los apellidos del empleado: ";
                            getline(cin, ape);
                            cin.ignore();
                            cout << "Ingresa la direccion del empleado: ";
                            getline(cin, dire);
                            cin.ignore();
                            cout << "Ingresa el numero del empleado: ";
                            getline(cin, tele);
                            cin.ignore();
                            cout << "Ingresa el DPI del empleado: ";
                            getline(cin, dpii);
                            cin.ignore();
                            cout << "Ingresa el genero del empleado: ";
                            cin >> genero;
                            cin.ignore();
                            cout << "Ingresa la fecha de nacimiento del empleado: ";
                            getline(cin, fechanac);
                            cin.ignore();
                            cout << "Ingresa el id del puesto del empleado: ";
                            cin >> idpues;
                            cin.ignore();
                            cout << "Ingresa la fecha de inicio de labores del empleado: ";
                            getline(cin, fechainic);
                            cin.ignore();
                            cout << "Ingresa la fecha de ingreso del empleado: ";
                            getline(cin, fechaingre);
                            cin.ignore();
                            Empleado m = Empleado(tele, ni, idEmple, idpues, nom, ape, dire, dpii, genero, fechanac, fechainic, fechaingre);
                            m.modificar();
                            m.leer();
                        }
                    }
                }
            }
        }
        if (eleccion == 7) {
            int compraeleccion;
            system("cls");
            cout << "Leer compra: 1" << endl;
            cout << "Crear compra: 2" << endl;
            cout << "eliminar compra: 3" << endl;
            cout << "Modiciar compra: 4" << endl;
            cout << "Respuesta: ";
            cin >> compraeleccion;
            if (compraeleccion == 1) {
                system("cls");
                Compra l = Compra();
                l.leer();
            }
        }
        if (eleccion == 8) {
            int ventaeleccion;
            int idVen, nofactura, idclient, idemple,canti;
            string seri, fechafac, fechaingre, total,idproductoss;
            float preciou;
            vector<string> idproducto;
            vector<int> cantidades;
            vector<double> precio_unitario;
            system("cls");
            cout << "Leer Ventas: 1" << endl;
            cout << "Crear Ventas: 2" << endl;
            cout << "eliminar Ventas: 3" << endl;
            cout << "Modiciar Ventas: 4" << endl;
            cout << "Respuesta: ";
            cin >> ventaeleccion;
            if(ventaeleccion==1){
                system("cls");
                Venta l = Venta();
                l.leer();

            }
            else {
                if (ventaeleccion == 2) {
                    system("cls");
                    seri = "A";
                    cout << "Ingresa la No. de factura: ";
                    cin >> nofactura;
                    cin.ignore();
                    cout << "Ingresa fecha facturada: ";
                    getline(cin, fechafac);
                    cin.ignore();
                    cout << "Ingresa el id del cliente: ";
                    cin >> idclient;
                    cin.ignore();
                    cout << "Ingresa el id del empleado: ";
                    cin >> idemple;
                    cin.ignore();
                    cout << "Ingresa la fecha de ingreso: ";
                    getline(cin, fechaingre);
                    cin.ignore();
                    cout << "Ingresa el id del producto: ";
                    getline(cin, idproductoss);
                    idproducto.push_back(idproductoss);
                    cin.ignore();
                    cout << "Ingresa las cantidades: ";
                    cin >> canti;
                    cantidades.push_back(canti);
                    cin.ignore();
                    cout << "Ingresa el precio: ";
                    cin >> preciou;
                    precio_unitario.push_back(preciou);

                    Venta c = Venta();
                    c.set_serie(seri);
                    c.set_nofactura(nofactura);
                    c.set_idcliente(idclient);
                    c.set_idempleado(idemple);
                    c.set_fechaingreso(fechaingre);
                    c.set_fechafactura(fechafac);
                    c.crear(idproducto, cantidades, precio_unitario);
                }
                else {
                    if (ventaeleccion == 3) {
                        system("cls");
                        cout << "ingresa el id del producto a eliminar: ";
                        cin >> idVen;
                        Venta e = Venta();
                        e.set_idVenta(idVen);
                        e.eliminar();
                    }
                }
            }
        }
        cout << endl;
        cout << endl;
        cout << "Deseas regresar al menu principal" << endl;
        cout << "Si = 1" << endl;
        cout << "NO = 2" << endl;
        cout << "Respuesta = ";
        cin >> eleccion;
    }while (eleccion==1);

 



    return 0;
}
