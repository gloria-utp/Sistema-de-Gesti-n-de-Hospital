<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sistema de Gestión de Hospital</title>
</head>
<body>
    <h1>Sistema de Gestión de Hospital</h1>
    <p>
        Este proyecto es una implementación de un sistema de gestión de hospital en C++ que utiliza
        <strong>colas de prioridad</strong> y <strong>listas enlazadas</strong> para organizar y gestionar la información de pacientes,
        médicos y citas. El sistema permite priorizar la atención de pacientes de acuerdo a su urgencia y administrar citas y médicos de manera eficiente.
    </p>

    <h2>Tabla de Contenidos</h2>
    <ul>
        <li><a href="#caracteristicas">Características</a></li>
        <li><a href="#estructuras">Estructuras de Datos Utilizadas</a></li>
        <li><a href="#requisitos">Requisitos</a></li>
        <li><a href="#instalacion">Instalación</a></li>
        <li><a href="#uso">Uso</a></li>
        <li><a href="#ejemplo-codigo">Ejemplo de Código</a></li>
        <li><a href="#estructura-codigo">Estructura del Código</a></li>
        <li><a href="#futuras-mejoras">Futuras Mejoras</a></li>
        <li><a href="#contribuciones">Contribuciones</a></li>
    </ul>

    <h2 id="caracteristicas">Características</h2>
    <ul>
        <li><strong>Gestión de Pacientes:</strong> Añade pacientes a una cola de prioridad en función de su urgencia.</li>
        <li><strong>Gestión de Médicos:</strong> Administra la información de médicos en una lista enlazada.</li>
        <li><strong>Gestión de Citas:</strong> Programa citas entre pacientes y médicos, con fecha y hora específica.</li>
        <li><strong>Atención de Pacientes:</strong> Atiende al paciente más urgente de la cola de prioridad.</li>
        <li><strong>Visualización de Datos:</strong> Permite listar los médicos y citas programadas.</li>
    </ul>

    <h2 id="estructuras">Estructuras de Datos Utilizadas</h2>
    <ul>
        <li><strong>Cola de Prioridad:</strong> Organiza a los pacientes según su nivel de urgencia.</li>
        <li><strong>Lista Enlazada:</strong> Almacena la información de médicos y citas.</li>
    </ul>

    <h2 id="requisitos">Requisitos</h2>
    <ul>
        <li><strong>C++11</strong> o superior</li>
        <li>Compilador de C++ (como <code>g++</code> o <code>clang++</code>)</li>
    </ul>

    <h2 id="instalacion">Instalación</h2>
    <ol>
        <li>Clona este repositorio:
            <pre><code>git clone https://github.com/tuusuario/sistema-gestion-hospital.git
cd sistema-gestion-hospital</code></pre>
        </li>
        <li>Compila el programa:
            <pre><code>g++ main.cpp -o gestion_hospital</code></pre>
        </li>
        <li>Ejecuta el programa:
            <pre><code>./gestion_hospital</code></pre>
        </li>
    </ol>

    <h2 id="uso">Uso</h2>
    <p>Este sistema incluye varias funcionalidades principales:</p>
    <ul>
        <li><strong>Agregar Paciente:</strong> Registra un paciente en la cola de prioridad según su nivel de urgencia.</li>
        <li><strong>Agregar Médico:</strong> Añade un médico a la lista enlazada.</li>
        <li><strong>Programar Cita:</strong> Programa una cita entre un paciente y un médico.</li>
        <li><strong>Atender Paciente:</strong> Atiende al paciente con mayor prioridad en la cola.</li>
        <li><strong>Mostrar Médicos y Citas:</strong> Muestra los médicos disponibles y las citas programadas.</li>
    </ul>

    <h2 id="ejemplo-codigo">Ejemplo de Código</h2>
    <pre><code>// Agregar pacientes y médicos
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
mostrarCitas();</code></pre>

    <h2 id="estructura-codigo">Estructura del Código</h2>
    <ul>
        <li><strong>Paciente:</strong> Clase para almacenar datos del paciente y su prioridad.</li>
        <li><strong>Medico:</strong> Clase para almacenar la información del médico.</li>
        <li><strong>Cita:</strong> Clase para representar una cita entre un paciente y un médico en una fecha específica.</li>
    </ul>

    <h2 id="futuras-mejoras">Futuras Mejoras</h2>
    <ul>
        <li><strong>Reasignación Automática de Citas:</strong> Reasignar citas en caso de indisponibilidad de médicos.</li>
        <li><strong>Notificaciones de Urgencia:</strong> Alertar al personal sobre pacientes de alta prioridad.</li>
        <li><strong>Persistencia de Datos:</strong> Guardar y cargar datos desde archivos para su uso en futuras ejecuciones.</li>
    </ul>

    <h2 id="contribuciones">Contribuciones</h2>
    <p>Las contribuciones son bienvenidas. Para contribuir:</p>
    <ol>
        <li>Realiza un fork del proyecto.</li>
        <li>Crea una nueva rama (<code>git checkout -b mejora-ejemplo</code>).</li>
        <li>Haz tus cambios y realiza commits (<code>git commit -m 'Añadir nueva funcionalidad'</code>).</li>
        <li>Envía un pull request.</li>
    </ol>
</body>
</html>
