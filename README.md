# Sistema de Gestión de Hospital
Este proyecto es una implementación de un sistema de gestión de hospital en C++ que utiliza colas de prioridad y listas enlazadas para organizar y gestionar la información de pacientes, médicos y citas. El sistema permite priorizar la atención de pacientes de acuerdo a su urgencia y administrar citas y médicos de manera eficiente.

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
- **Gestión de Pacientes**: Añade pacientes a una cola de prioridad en función de su urgencia.
- **Gestión de Médicos**: Administra la información de médicos en una lista enlazada.
- **Gestión de Citas**: Programa citas entre pacientes y médicos.
- **Atención de Pacientes**: Atiende al paciente más urgente de la cola de prioridad.
- **Visualización de Datos**: Permite listar los médicos y citas programadas.

## Estructuras de Datos Utilizadas
- **Cola de Prioridad**: Organiza a los pacientes según su nivel de urgencia.
- **Lista Enlazada**: Almacena la información de médicos y citas.

## Requisitos
- C++11 o superior
- Opcional: Compilador de C++ (como g++ o clang++) si se utiliza localmente

## Uso con Compilador en Línea
Si prefieres no instalar un compilador local, puedes usar [Programiz Online Compiler](https://www.programiz.com/cpp-programming/online-compiler/) para ejecutar el código:

1. Ve a [Programiz Online Compiler](https://www.programiz.com/cpp-programming/online-compiler/).
2. Copia el código fuente desde este repositorio y pégalo en el editor de Programiz.
3. Haz clic en "Run" para compilar y ejecutar el programa en línea.

Este método permite probar el sistema sin necesidad de configurar un entorno local.

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
programarCita(Paciente("Juan Perez", 30, 1), Medico("Dr. Garcia", "Cardiología"));
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
