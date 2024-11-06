#include <iostream>
#include <string>

class Paciente {
public:
    int id;
    std::string nombre;
    int edad;
    std::string condicionMedica;
    int prioridad;  // Prioridad de 1 (más alta) a 5 (más baja)

    Paciente(int id, std::string nombre, int edad, std::string condicion, int prioridad)
        : id(id), nombre(nombre), edad(edad), condicionMedica(condicion), prioridad(prioridad) {}
};

struct Nodo {
    Paciente paciente;
    Nodo* siguiente;

    Nodo(Paciente paciente) : paciente(paciente), siguiente(nullptr) {}
};

class ColaDePrioridad {
private:
    Nodo* frente;

public:
    ColaDePrioridad() : frente(nullptr) {}

    // Insertar paciente según la prioridad
    void insertar(Paciente nuevoPaciente) {
        Nodo* nuevoNodo = new Nodo(nuevoPaciente);
        if (!frente || nuevoPaciente.prioridad < frente->paciente.prioridad) {
            nuevoNodo->siguiente = frente;
            frente = nuevoNodo;
        } else {
            Nodo* actual = frente;
            while (actual->siguiente && actual->siguiente->paciente.prioridad <= nuevoPaciente.prioridad) {
                actual = actual->siguiente;
            }
            nuevoNodo->siguiente = actual->siguiente;
            actual->siguiente = nuevoNodo;
        }
    }

    // Eliminar paciente de la cabeza de la cola (el de mayor prioridad)
    void atenderPaciente() {
        if (!frente) {
            std::cout << "No hay pacientes en espera." << std::endl;
            return;
        }
        Nodo* temp = frente;
        frente = frente->siguiente;
        std::cout << "Atendiendo a paciente: " << temp->paciente.nombre << std::endl;
        delete temp;
    }

    // Ver el siguiente paciente a ser atendido
    void mostrarSiguiente() const {
        if (frente) {
            std::cout << "Próximo paciente: " << frente->paciente.nombre << ", Prioridad: " << frente->paciente.prioridad << std::endl;
        } else {
            std::cout << "No hay pacientes en espera." << std::endl;
        }
    }
};

class Medico {
public:
    int id;
    std::string nombre;
    std::string especialidad;
    bool disponible;

    Medico(int id, std::string nombre, std::string especialidad, bool disponible)
        : id(id), nombre(nombre), especialidad(especialidad), disponible(disponible) {}
};

class Cita {
public:
    Paciente paciente;
    Medico medico;
    std::string fecha;

    Cita(Paciente paciente, Medico medico, std::string fecha)
        : paciente(paciente), medico(medico), fecha(fecha) {}
};

class SistemaHospitalario {
private:
    ColaDePrioridad colaPacientes;
    // Puedes añadir más estructuras de datos para manejar médicos y citas

public:
    // Agregar un paciente a la cola de prioridad
    void agregarPaciente(int id, std::string nombre, int edad, std::string condicion, int prioridad) {
        Paciente nuevoPaciente(id, nombre, edad, condicion, prioridad);
        colaPacientes.insertar(nuevoPaciente);
    }

    // Atender al paciente con mayor prioridad
    void atenderPaciente() {
        colaPacientes.atenderPaciente();
    }

    // Mostrar el próximo paciente a ser atendido
    void mostrarProximoPaciente() {
        colaPacientes.mostrarSiguiente();
    }

    // Puedes añadir métodos para gestionar médicos y citas aquí
};

int main() {
    SistemaHospitalario sistema;

    // Agregar pacientes con diferentes prioridades
    sistema.agregarPaciente(1, "Juan Perez", 45, "Arritmia", 2);  // Rojo
    sistema.agregarPaciente(2, "Maria Garcia", 29, "Sinusitis", 4);  // Verde
    sistema.agregarPaciente(3, "Carlos Lopez", 70, "Paro cardiorespiratorio", 1);  // Azul

    // Mostrar el próximo paciente y atenderlos
    sistema.mostrarProximoPaciente();
    sistema.atenderPaciente();
    sistema.mostrarProximoPaciente();
    sistema.atenderPaciente();
    sistema.mostrarProximoPaciente();
    sistema.atenderPaciente();

    return 0;
}
