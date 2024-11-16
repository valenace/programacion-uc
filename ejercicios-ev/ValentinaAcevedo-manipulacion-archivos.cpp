#include <stdio.h>
#include <stdlib.h>

// Definici�n de la estructura Persona
typedef struct Persona
{
    int codigo;
    char nombre[100];
    int edad;
} tpersona;

// Declaraci�n de funciones (prototipos)
void crearArchivo();
void llenarArchivo();
void mostrarArchivoCompleto();
void mostrarUnArchivo();
void modificarEdad();

int main()
{
    int opcion;
    do
	{
        printf("\nMenu de opciones:\n");
        printf("1. Crear archivo\n"); // Opci�n para crear el archivo
        printf("2. Llenar datos\n"); // Opci�n para ingresar datos de personas
        printf("3. Mostrar archivo completo\n"); // Opci�n para mostrar todos los registros
        printf("4. Mostrar un archivo\n"); // Opci�n para mostrar un registro espec�fico
        printf("5. Modificar edad por codigo\n"); // Opci�n para actualizar la edad
        printf("6. Salir\n"); // Opci�n para salir del programa
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
		{
            case 1:
                crearArchivo(); // Llama a la funci�n para crear el archivo
                break;
            case 2:
                llenarArchivo(); // Llama a la funci�n para ingresar datos
                break;
            case 3:
                mostrarArchivoCompleto(); // Llama a la funci�n para mostrar todos los registros
                break;
            case 4:
                mostrarUnArchivo(); // Llama a la funci�n para mostrar un registro espec�fico
                break;
            case 5:
                modificarEdad(); // Llama a la funci�n para actualizar la edad
                break;
            case 6:
                printf("Salida del programa\n"); // Mensaje de salida
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n"); // Mensaje para opciones no v�lidas
        }
    } while (opcion != 6); // Repite el men� hasta que se elija la opci�n de salida

    return 0;
}
// Funci�n para crear un archivo "personas.dat"
void crearArchivo()
{
    FILE* archivo = fopen("personas.dat", "wb"); // Abre el archivo en modo escritura binaria
    if (!archivo) {
        printf("Error al crear el archivo"); // Si no se pudo abrir el archivo, muestra un mensaje de error
        exit(1); // Sale del programa con un c�digo de error
    }
    printf("Archivo creado correctamente.\n"); // Mensaje de �xito
    printf("************** \n"); // L�nea de separaci�n al final
    fclose(archivo); // Cierra el archivo
}

// Funci�n para llenar datos en el archivo "personas.dat"
void llenarArchivo()
{
    FILE* archivo = fopen("personas.dat", "ab"); // Abre el archivo en modo adjuntar (append) binario
    if (!archivo)
	{
        printf("Error al abrir el archivo"); // Si no se pudo abrir el archivo, muestra un mensaje de error
        exit(1); // Sale del programa con un c�digo de error
    }
    tpersona per; // Crea una variable de tipo Persona para almacenar los datos
    // Solicita datos de personas y escribe en el archivo
    printf("Codigo: ");
    scanf("%d", &per.codigo); // Lee el c�digo desde el teclado
    printf("Nombre: ");
    fflush(stdin); // Limpia el b�fer del teclado
    gets(per.nombre); // Lee el nombre desde el teclado
    printf("Edad: ");
    scanf("%d", &per.edad); // Lee la edad desde el teclado
    fwrite(&per, sizeof(tpersona), 1, archivo); // Escribe la estructura en el archivo
    fclose(archivo); // Cierra el archivo
    printf("Datos guardados correctamente.\n"); // Mensaje de �xito
    printf("************** \n"); // L�nea de separaci�n al final
}
// Funci�n para mostrar todos los registros del archivo "personas.dat"
void mostrarArchivoCompleto()
{
    FILE* archivo = fopen("personas.dat", "rb"); // Abre el archivo en modo lectura binaria
    if (!archivo)
	{
        printf("Error al abrir el archivo\n"); // Si no se pudo abrir el archivo, muestra un mensaje de error
        exit(1); // Sale del programa con un c�digo de error
    }

    tpersona per; // Crea una variable de tipo Persona para almacenar los datos
    bool hayRegistros = false; // Variable para verificar si hay registros
    while (fread(&per, sizeof(tpersona), 1, archivo) == 1)
	{
        printf("------------ \n"); // L�nea de separaci�n para cada persona
        printf("Codigo: %d\n", per.codigo); // Muestra el c�digo de la persona
        printf("Nombre: %s\n", per.nombre); // Muestra el nombre de la persona
        printf("Edad: %d\n", per.edad); // Muestra la edad de la persona
        printf("------------ \n"); // L�nea de separaci�n para cada persona
    	hayRegistros = true; // Marca como hay registros
    }

    if (!hayRegistros)
	{
        printf("No hay datos disponibles.\n"); // Si no hay registros, muestra un mensaje
    }
    printf("************** \n"); // L�nea de separaci�n al final
    fclose(archivo); // Cierra el archivo
}
// Funci�n para mostrar un registro espec�fico  del archivo "personas.dat"
void mostrarUnArchivo()
{
    FILE* archivo = fopen("personas.dat", "rb"); // Abre el archivo en modo lectura binaria
    if (!archivo)
	{
        printf("Error al abrir el archivo\n"); // Si no se pudo abrir el archivo, muestra un mensaje de error
        exit(1); // Sale del programa con un c�digo de error
    }

    int codigoBuscar;
    printf("Ingrese el codigo de la persona a buscar: ");
    scanf("%d", &codigoBuscar); // Lee el c�digo de persona a buscar desde el teclado
    tpersona per;
    bool encontrado = false; // Variable para indicar si se encontr� la persona
    while (fread(&per, sizeof(tpersona), 1, archivo) == 1)
	{
        if (per.codigo == codigoBuscar)
		{ // Si el c�digo coincide
            printf("------------ \n"); // L�nea de separaci�n para la persona encontrada
            printf("Codigo: %d\n", per.codigo); // Muestra el c�digo de la persona
            printf("Nombre: %s\n", per.nombre); // Muestra el nombre de la persona
            printf("Edad: %d\n", per.edad); // Muestra la edad de la persona
            printf("------------\n"); // L�nea de separaci�n para la persona encontrada
            encontrado = true; // Marca como encontrada
            break; // Sale del bucle
        }
    }
    if (!encontrado)
	{
        printf("Persona no encontrada.\n"); // Si no se encontr� la persona, muestra un mensaje
    }

    fclose(archivo); // Cierra el archivo
}
void modificarEdad() {
    FILE* archivo = fopen("personas.dat", "r+b"); // Abre el archivo en modo lectura y escritura binaria
    if (!archivo) {
        printf("Error al abrir el archivo\n"); // Si no se pudo abrir el archivo, muestra un mensaje de error
        exit(1); // Sale del programa con un c�digo de error
    }

    int codigoBuscar, nuevaEdad;
    printf("Ingrese el codigo de la persona a modificar: ");
    scanf("%d", &codigoBuscar); // Lee el c�digo de persona a buscar desde el teclado

    tpersona per;
    bool encontrado = false; // Variable para indicar si se encontr� la persona
    while (fread(&per, sizeof(tpersona), 1, archivo) == 1) {
        if (per.codigo == codigoBuscar) { // Si el c�digo coincide
            printf("Persona encontrada:\n");
            printf("Nombre: %s\n", per.nombre);
            printf("Edad actual: %d\n", per.edad);

            printf("Ingrese la nueva edad: ");
            scanf("%d", &nuevaEdad); // Lee la nueva edad desde el teclado
            per.edad = nuevaEdad; // Actualiza la edad con la nueva edad ingresada

            long pos = ftell(archivo); // Obtener la posici�n actual en el archivo
            if (pos == -1L) {
                printf("Error al obtener la posici�n del archivo\n");
                break;
            }
            fseek(archivo, pos - sizeof(tpersona), SEEK_SET); // Retrocede a la posici�n anterior
            if (fwrite(&per, sizeof(tpersona), 1, archivo) != 1) { // Escribe la estructura actualizada en el archivo
                printf("Error al escribir en el archivo\n");
                break;
            }
            encontrado = true; // Marca como encontrada
            printf("************** \n"); // L�nea de separaci�n
            printf("Edad guardada correctamente.\n"); // Mensaje de �xito
    		printf("************** \n"); // L�nea de separaci�n al final
            break; // Sale del bucle
            
        }
    }

    if (!encontrado) {
        printf("Persona no encontrada.\n"); // Si no se encontr� la persona, muestra un mensaje
    }

    fclose(archivo); // Cierra el archivo
}

