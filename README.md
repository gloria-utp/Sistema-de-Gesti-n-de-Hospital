# Sistema de Gestión de Hospital

Este proyecto es una implementación de un sistema de gestión hospitalaria en C++ que utiliza colas de prioridad para gestionar la atención de pacientes en función de la urgencia de su condición médica. El sistema permite agregar y atender pacientes según su prioridad. Adicionalmente, se define una estructura para los médicos y se pueden programar citas entre pacientes y médicos.

[![Codigo de colores en triage](https://d1qqtien6gys07.cloudfront.net/wp-content/uploads/2022/11/Captura-de-Pantalla-2022-11-10-a-las-12.15.12.png "Codigo de colores en triage")](https://d1qqtien6gys07.cloudfront.net/wp-content/uploads/2022/11/Captura-de-Pantalla-2022-11-10-a-las-12.15.12.png "Codigo de colores en triage")

### [Enlace del vídeo](https://youtu.be/Jpc-tqZ0oRM).
https://youtu.be/Jpc-tqZ0oRM


## Tabla de Contenidos
- [Características](#características)
- [Estructuras de Datos](#estructuras-de-datos)
- [Requisitos](#requisitos)
- [Uso con Compilador en Línea](#uso-con-compilador-en-línea)
- [Uso en Local](#uso-en-local)
- [Ejemplo de Código](#ejemplo-de-código)
- [Estructura del Código](#estructura-del-código)
- [Futuras Mejoras](#futuras-mejoras)
- [Contribuciones](#contribuciones)

## Características
- **Gestión de Pacientes**: Añade pacientes a una cola de prioridad en función de su urgencia médica.
- **Atención de Pacientes**: Atiende al paciente más urgente de la cola de prioridad.
- **Visualización de Pacientes en Espera**: Muestra el próximo paciente en ser atendido.
- **Gestión de Médicos**: Define a los médicos y sus especialidades.
- **Programación de Citas**: Define la estructura básica de una cita entre un paciente y un médico.

## Estructuras de Datos Utilizadas
- **Cola de Prioridad (Lista Enlazada)**: Organiza a los pacientes en una estructura que permite atender al más urgente.
- **Clase Paciente**: Almacena datos como nombre, edad, condición médica y prioridad de cada paciente.
- **Clase Medico**: Define al médico con su especialidad y disponibilidad.
- **Clase Cita**: Representa una cita entre un paciente y un médico con una fecha.

## Requisitos
- C++11 o superior
- Opcional: Compilador de C++ (como g++ o clang++) si se utiliza localmente

## Uso con Compilador en Línea
Si prefieres no instalar un compilador local, puedes usar [Programiz Online Compiler](https://www.programiz.com/cpp-programming/online-compiler/) para ejecutar el código:

1. Ve a [Programiz Online Compiler](https://www.programiz.com/cpp-programming/online-compiler/).
2. Copia el código fuente y pégalo en el editor de Programiz.
3. Haz clic en "Run" para compilar y ejecutar el programa en línea.

Este método permite probar el sistema sin necesidad de configurar un entorno local. También puedes ejecutar el proyecto con el siguiente enlace: [Click aquí para ejecutar el proyecto en el compilador en línea](https://www.programiz.com/online-compiler/8gfhOUFeluUjt)

## Uso en Local
Si prefieres usar un compilador local:

1. Clona este repositorio:
    ```bash
    git clone https://github.com/tuusuario/sistema-gestion-hospital.git
    cd sistema-gestion-hospital
    ```
2. Compila el programa:
    ```bash
    g++ main.cpp -o gestion_hospital
    ```
3. Ejecuta el programa:
    ```bash
    ./gestion_hospital
    ```

## Ejemplo de Código
Aquí tienes un ejemplo del uso del sistema:

```cpp
int main() {
    SistemaHospitalario sistema;

    // Agregar pacientes con diferentes prioridades
    sistema.agregarPaciente(1, "Juan Perez", 45, "Arritmia", 2);
    sistema.agregarPaciente(2, "Maria Garcia", 29, "Sinusitis", 4);
    sistema.agregarPaciente(3, "Carlos Lopez", 70, "Paro cardiorespiratorio", 1);

    // Mostrar el próximo paciente y atenderlos
    sistema.mostrarProximoPaciente();
    sistema.atenderPaciente();
    sistema.mostrarProximoPaciente();
    sistema.atenderPaciente();
    sistema.mostrarProximoPaciente();
    sistema.atenderPaciente();

    return 0;
}
```


## Estructura del Código
- Paciente: Clase que almacena los datos del paciente y su prioridad.
- Nodo: Estructura de nodo que contiene un paciente y un puntero al siguiente nodo en la cola.
- ColaDePrioridad: Clase que gestiona la cola de pacientes según la prioridad.
- Medico: Clase que representa a un médico, incluyendo su especialidad y disponibilidad.
- Cita: Clase para representar una cita entre un paciente y un médico.
- SistemaHospitalario: Clase principal que utiliza las colas y listas para manejar las operaciones de pacientes, médicos y citas.

## Futuras Mejoras
- Gestión Completa de Citas: Implementar funciones para programar y cancelar citas.
- Almacenamiento en Archivos: Guardar los datos de pacientes y citas en archivos para su uso en futuras ejecuciones.
- Notificaciones de Urgencia: Sistema de alertas para los pacientes de alta prioridad.
- Mejoras en la Visualización: Mostrar más detalles de los pacientes y su historial médico.

## Contribuciones
Las contribuciones son bienvenidas. Para contribuir:
1. Realiza un fork del proyecto.
2. Crea una nueva rama (git checkout -b mejora-ejemplo).
3. Haz tus cambios y realiza commits (git commit -m 'Añadir nueva funcionalidad').
4. Envía un pull request.
