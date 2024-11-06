# Sistema de Gestión de Hospital
Este proyecto es una implementación de un sistema de gestión de hospital en C++ que utiliza colas de prioridad y listas enlazadas para organizar y gestionar la información de pacientes, médicos y citas. El sistema permite priorizar la atención de pacientes de acuerdo a su urgencia y administrar citas y médicos de manera eficiente.

## Tabla de Contenidos
- Características
- Estructuras de Datos
- Requisitos
- Instalación
- Uso
- Ejemplo de Código
- Estructura del Código
- Futuras Mejoras
- Contribuciones
## Características
- Gestión de Pacientes: Añade pacientes a una cola de prioridad en función de su urgencia.
- Gestión de Médicos: Administra la información de médicos en una lista enlazada.
- Gestión de Citas: Programa citas entre pacientes y médicos, con fecha y hora específica.
- Atención de Pacientes: Atiende al paciente más urgente de la cola de prioridad.
- Visualización de Datos: Permite listar los médicos y citas programadas.
## Estructuras de Datos Utilizadas
- Cola de Prioridad: Organiza a los pacientes según su nivel de urgencia.
- Lista Enlazada: Almacena la información de médicos y citas.
## Requisitos
- C++11 o superior
- Compilador de C++ (como g++ o clang++)
## Instalación
1. Clona este repositorio:



    git clone https://github.com/tuusuario/sistema-gestion-hospital.git
    cd sistema-gestion-hospital
2. Compila el programa:


    g++ main.cpp -o gestion_hospital
3. Ejecuta el programa:


    ./gestion_hospital
## Uso
Este sistema incluye varias funcionalidades principales:

- Agregar Paciente: Registra un paciente en la cola de prioridad según su nivel de urgencia.
- Agregar Médico: Añade un médico a la lista enlazada.
- Programar Cita: Programa una cita entre un paciente y un médico.
- Atender Paciente: Atiende al paciente con mayor prioridad en la cola.
- Mostrar Médicos y Citas: Muestra los médicos disponibles y las citas programadas.
## Ejemplo de Código
```cpp
// Agregar pacientes y médicos
agregarPaciente("Juan Perez", 30, 1);
agregarPaciente("Ana Gomez", 45, 3);
agregarMedico("Dr. Garcia", "Cardiología");
agregarMedico("Dr. Lopez", "Neurología");
// Atención de paciente
atenderPaciente();
// Mostrar médicos y programar citas
mostrarMedicos();
time_t fechaCita = time(0); // Fecha actual
programarCita(Paciente("Juan Perez", 30, 1), Medico("Dr. Garcia", "Cardiología"), fechaCita);
mostrarCitas();
```

## Estructura del Código
- Paciente: Clase para almacenar datos del paciente y su prioridad.
- Medico: Clase para almacenar la información del médico.
- Cita: Clase para representar una cita entre un paciente y un médico en una fecha específica.

## Futuras Mejoras
- Reasignación Automática de Citas: Reasignar citas en caso de indisponibilidad de médicos.
- Notificaciones de Urgencia: Alertar al personal sobre pacientes de alta prioridad.
- Persistencia de Datos: Guardar y cargar datos desde archivos para su uso en futuras ejecuciones.

## Contribuciones
Las contribuciones son bienvenidas. Para contribuir:
1. Realiza un fork del proyecto.
2. Crea una nueva rama (git checkout -b mejora-ejemplo).
3. Haz tus cambios y realiza commits (git commit -m 'Añadir nueva funcionalidad').
4. Envía un pull request.
