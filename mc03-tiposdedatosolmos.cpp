//TIPOS DE DATOS EN C++
#include <string>
using namespace std;

//TIPOS DE DATOS BÁSICOS
int edad = 20; //entero
float altura = 1.75; //decimal
double pi = 3.141592; //doble decimal
char inicial = 'S'; //caracter
bool aprobado = true; //booleano

//TIPOS DE MODIFICADORES
short int numeroPequeno = 10; //entero corto
long long int numeroGrande = 999999999; //entero largo
unsigned int edad2 = 25; //entero sin signo

//TIPOS DERIVADOS O COMPUESTOS
string nombre = "Sofia"; //cadena de texto
int numeros[3] = {1,2,3}; //array
union Dato { //union
    int entero;
    float decimal;
    char letra;
};
enum Dia { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES }; //enumeración

//TIPOS DEFINIDOS POR EL USUARIO
struct Personas {  //estructura
    string nombre;
    int edad;
};

//PROGRAMA
#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {

    // Tipos básicos
    int edad;
    float altura;
    char inicial;
    bool estudiante;

    // Tipo derivado
    string nombre;

    // Array
    int notas[3] = {80, 90, 100};

    // Struct
    Persona p1;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su altura: ";
    cin >> altura;

    cout << "Ingrese inicial de apellido: ";
    cin >> inicial;

    estudiante = true;

    p1.nombre = nombre;
    p1.edad = edad;

    cout << "--- DATOS ---";
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Edad: " << p1.edad << endl;
    cout << "Altura: " << altura << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Estudiante: " << estudiante << endl;
    cout << "Primera nota: " << notas[0] << endl;

    return 0;
}
