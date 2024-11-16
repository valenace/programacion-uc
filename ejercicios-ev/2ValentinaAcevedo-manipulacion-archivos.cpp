#include <stdio.h>
#include <stdlib.h>
typedef struct Persona{
	int codigo;
	char nombre[100];
	int edad;
}tpersona;

void crearArchivo();
void llenarArchivo();
void mostrarArchivoCompleto();
void mostrarUnArchivo();
void modificarEdad();

int main(){
	// Menú de opciones
    int opcion;
    do {
        printf("\nMenu de opciones:\n");
        printf("1. Crear archivo\n");
        printf("2. Llenar datos\n");
        printf("3. Mostrar archivo completo\n");
        printf("4. Mostrar un archivo \n");
        printf("5. Modificar edad por codigo\n");
        printf("6. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                crearArchivo();
                break;
            case 2:
            	llenarArchivo();
            	break;
            case 3:
                mostrarArchivoCompleto();
                break;
            case 4:
                mostrarUnArchivo();
                break;
            case 5:
                modificarEdad();
                break;
            case 6:
                printf("Salida del programa\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
        }
    } while (opcion != 6);

}
void crearArchivo(){
	FILE * archivo = fopen("personas.dat", "wb");
	int numPersonas;
	if (!archivo) {
        printf("Error crear archivo");
        exit(1);
    }
    printf("Archivo creado correctamente.\n");
    fclose(archivo);
}
void llenarArchivo() {
    FILE* archivo = fopen("personas.dat", "ab");
    if (!archivo) {
        printf("Error al abrir el archivo");
        exit(1);
    }
    tpersona per;
    // Solicitar datos de personas y escribirlos en el archivo
    printf("Codigo: ");
    scanf("%d", &per.codigo);
    printf("Nombre: ");
    fflush(stdin);
    gets(per.nombre);
    printf("Edad: ");
    scanf("%d", &per.edad);
    fwrite(&per, sizeof(tpersona), 1, archivo);
    fclose(archivo);
    printf("Datos guardados correctamente.\n");
}
void mostrarArchivoCompleto() {
    FILE* archivo = fopen("personas.dat", "rb");
    if (!archivo) {
        printf("Error al abrir el archivo\n");
        exit(1);
    }

    Persona p;
    while (fread(&p, sizeof(Persona), 1, archivo) == 1) {
    	printf("------------ \n");
        printf("\nCodigo: %d \n", p.codigo);
        printf("Nombre: %s\n", p.nombre);
        printf("Edad: %d\n", p.edad);
        printf("------------ \n");
    }

    fclose(archivo);
}
void mostrarUnArchivo(){
	FILE * archivo = fopen("personas.dat", "rb");
    if (!archivo) {
        printf("Error abrir archivo");
        exit(1);
    }
		
	
	int codigoBuscar;
    printf("Ingrese el codigo de la persona a buscar: ");
    scanf("%d", &codigoBuscar);
	tpersona per;
    bool encontrado = false;
    while (fread(&per, sizeof(tpersona), 1, archivo) == 1) {
        if (per.codigo == codigoBuscar) {
        	printf("------------ \n");
            printf("\nCodigo: %d\n", per.codigo);
            printf("Nombre: %s\n", per.nombre);
            printf("Edad: %d\n", per.edad);
            printf("------------\n");
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        printf("Persona no encontrada.\n");
    }

    fclose(archivo);
}
void modificarEdad() {
    FILE* archivo = fopen("personas.dat", "r+b");
    if (!archivo) {
        printf("Error al abrir el archivo\n");
        exit(1);
    }

    int codigoBuscar, nuevaEdad;
    printf("Ingrese el código de la persona a modificar: ");
    scanf("%d", &codigoBuscar);
    printf("Ingrese la nueva edad: ");
    scanf("%d", &nuevaEdad);

    tpersona per;
    while (fread(&per, sizeof(tpersona), 1, archivo) == 1) {
        if (per.codigo == codigoBuscar) {
            per.edad = nuevaEdad;
            long pos = ftell(archivo); // Obtener la posición actual
            if (pos == -1L) {
                printf("Error al obtener la posición del archivo\n");
                break;
            }
            fseek(archivo, pos - sizeof(tpersona), SEEK_SET); // Retroceder
            if (fwrite(&per, sizeof(tpersona), 1, archivo) != 1) {
                printf("Error al escribir en el archivo\n");
                break;
            }
            break;
        }
    }

    fclose(archivo);
    printf("Edad modificada correctamente.\n");
}

