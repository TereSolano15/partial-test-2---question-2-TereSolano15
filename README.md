# Programación 2 - Examen Parcial 2 - Ejercicio Practico 2

| CODIGO: EIF204          | ESCUELA DE INFORMÁTICA       |
| ----------------------- | ---------------------------- |
| NOMBRE: PROGRAMACIÓN II | PROFESOR: Maikol Guzmán Alán |
| PUNTAJE: 55 puntos      |                              |

## Ejercicio archivos y deseralización de datos

## Temas a evaluar

- Archivos binarios y de texto
  - Serialización y deserialización de objetos
- Aplicar las técnicas de SOLID
- Aplicar las técnicas de manejo de errores
- Aplicar patrones de diseño
- Pruebas de Unidad

## Objetivo

A partir de la siguiente estructura en JSON se le solicita lo siguiente:

Archivo de **datos.json**

```json
{
  "product": "Examen Progra 2",
  "version": 3.1,
  "releaseDate": "2014-06-25T00:00:00.000Z",
  "demo": true,
  "person": {
    "id": 12345,
    "name": "John Doe",
    "phones": {
      "home": "800-123-4567",
      "mobile": "877-123-1234"
    },
    "email": [
      "jd@example.com",
      "jd@example.org"
    ],
    "dateOfBirth": "1980-01-02T00:00:00.000Z",
    "registered": true,
    "emergencyContacts": [
      {
        "name": "Jane Doe",
        "phone": "888-555-1212",
        "relationship": "spouse"
      },
      {
        "name": "Justin Doe",
        "phone": "877-123-1212",
        "relationship": "parent"
      }
    ]
  }
}
```

Se solicita desarrollar lo siguiente:

- Deserializar el archivo datos.json en las clases C++ necesarias

- Aplicar los principios de SOLID:

  - Inversión de Dependencias (DIP)
  - Responsabilidad única

- Aplicar manejo de errores try catch throw

- Aplicar correctamente un patrón de diseño que se encargue de la lectura y almacenamiento de datos en el archivo binario

- Guardar la estructura en un archivo binario denominado **datos_examen.dat**

- Hacer los siguientes unit test:

  - Confirmar que la información del JSON este correctamente almacenada en la estructura correspondiente en el archivo binario
  - Verificar que la aplicación no se caiga en caso de que el **archivo JSON** no exista
  - Verificar que la aplicación no se caiga en caso de que el **archivo binario** no exista

## Evaluación de este ejercicio

| Detalle                                                      | Puntaje |
| ------------------------------------------------------------ | ------- |
| [ **ARCHIVOS** ] Deserializar el archivo **datos.json**      | 5       |
| [ **DESARROLLO** ] Aplicar los principios de SOLID:  DIP (5 pts) y Responsabilidad Única (5 pts) | 10      |
| [ **DESARROLLO** ] Aplicar el manejo de errores **try catch throw** | 5       |
| [ **DESARROLLO** ] Aplicar el patrón de diseño para optimizar la lectura y escritura de datos en archivos | 10      |
| [ **ARCHIVOS** ] Almacenar datos en un archivo binario denominado **datos_examen.dat** | 10      |
| [ **TESTING** ] Confirmar que la información del JSON este correctamente almacenada en la estructura correspondiente en el archivo binario | 5       |
| [ **TESTING** ] Verificar que la aplicación no se caiga en caso de que el **archivo JSON** no exista | 5       |
| [ **TESTING** ] Verificar que la aplicación no se caiga en caso de que el **archivo binario** no exista | 5       |

## Reglas

1. Subir al GitHub todos los archivos necesarios para ejecutar las pruebas unitarias.
2. Si se encuentra plagio o copias entre grupos se anula el examen de acuerdo al reglamento de la universidad.
3. El profesor únicamente revisa lo que esta en el repositório hasta la fecha de entrega. Cualquier entrega posterior a la fecha acordada se declara examen perdido con 0.
