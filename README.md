# CS2026---Programaci-n-II-Gastos-personales
CS2023 - Programación III | Ejercicio 2: Patrones de diseño en C++20 (Factory Method, Decorator, Strategy)

# Gastos Personales

## Descripción
Aplicación de consola en C++20 para ordenar y exportar gastos personales.

## Patrones usados

### Strategy
Desacopla el criterio de ordenamiento del algoritmo.

### Factory Method
Desacopla la creación de exportadores del cliente.

### Decorator
Desacopla funcionalidades adicionales como auditoría y resumen.

## Tecnologías
- C++20
- Concepts
- Templates
- std::ranges
- RAII
- GitHub Actions

## Ejecución

mkdir build
cd build

cmake ..
cmake --build .

ctest



## Decisiones de diseño

El sistema fue diseñado siguiendo el principio de desacoplamiento y responsabilidad única.

Strategy desacopla el criterio de ordenamiento del algoritmo de ordenamiento, permitiendo agregar nuevos criterios sin modificar el flujo principal.

Factory Method desacopla la creación de exportadores del cliente, eliminando condicionales repetidos.

Decorator desacopla funcionalidades adicionales como auditoría y resumen del proceso de exportación principal.

Los conceptos de C++20 fueron agrupados según su responsabilidad para mantener componentes pequeños y reutilizables.

La aplicación evita administración manual de memoria utilizando RAII y objetos estándar.

