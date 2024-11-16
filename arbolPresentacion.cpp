#include <stdio.h>
#include <stdlib.h>

// Definicion de la estructura de un nodo de arbol binario
typedef struct nodo
{
    int dato;         // Valor del nodo
    struct nodo *der; // Puntero al nodo hijo derecho
    struct nodo *izq; // Puntero al nodo hijo izquierdo
} Nodo;

// Prototipos de funciones
void Menu();                    // Funcion para mostrar el menu y manejar las opciones
Nodo *crearNodo(int);           // Funcion para crear un nuevo nodo
void agregarNodo(Nodo **, int); // Funcion para agregar un nodo al arbol
void MostrarArbol(Nodo *, int); // Funcion para mostrar el arbol de forma grafica
int busqueda(Nodo *, int);      // Funcion para buscar un elemento en el arbol

Nodo *arbol = NULL; // Declaracion de un puntero al arbol, inicializado como NULL

// Funcion principal
int main()
{
    Menu(); // Llama a la funcion del menu
    return 0;
}

// Definicion de la funcion del menu
void Menu()
{
    int dato, opcion, contador = 0;

    do
    {
        // Mostrar las opciones del menu
        printf("1. Agregar elementos al arbol.\n");
        printf("2. Mostrar Arbol.\n");
        printf("3. Buscar en Arbol.\n");
        printf("4. Salir.\n");
        printf("\nOpcion: ");
        scanf("%d", &opcion);

        // Segun la opcion seleccionada por el usuario, realiza la accion correspondiente
        switch (opcion)
        {
        case 1:
            printf("Numero a agregar: ");
            scanf("%d", &dato);
            agregarNodo(&arbol, dato); // Llama a la funcion para agregar un nodo al arbol
            break;
        case 2:
            printf("\n.:Mostrando Arbol:.\n");
            MostrarArbol(arbol, contador); // Llama a la funcion para mostrar el arbol
            break;
        case 3:
            printf("\nNumero a Buscar: ");
            scanf("%d", &dato);
            // Llama a la funcion para buscar un elemento en el arbol y muestra el resultado
            if (busqueda(arbol, dato))
            {
                printf("Elemento '%d' SI fue encontrado.\n", dato);
            }
            else
            {
                printf("Elemento '%d' NO fue encontrado.\n", dato);
            }
            break;
        }
        system("pause");   // Pausa la ejecucion del programa para esperar a que el usuario presione una tecla
        system("cls");     // Limpia la pantalla
    } while (opcion != 4); // Repite el bucle hasta que el usuario seleccione la opcion para salir
}

// funcion para crear un nuevo nodo con el valor dado
Nodo *crearNodo(int n)
{
    Nodo *nuevoNodo = (Nodo *)malloc(sizeof(Nodo)); // Asigna memoria para un nuevo nodo
    nuevoNodo->dato = n;                            // Establece el valor del nodo
    nuevoNodo->der = NULL;                          // Inicializa el puntero al hijo derecho como NULL
    nuevoNodo->izq = NULL;                          // Inicializa el puntero al hijo izquierdo como NULL

    return nuevoNodo; // Devuelve el nuevo nodo creado
}

// funcion para agregar un nodo al arbol
void agregarNodo(Nodo **arbol, int n)
{
    if (*arbol == NULL)
    {
        *arbol = crearNodo(n); // Si el arbol esta vacio, crea un nuevo nodo y lo asigna como raiz
        printf("Nodo agregado\n");
    }
    else
    {
        int valorRaiz = (*arbol)->dato; // Obtiene el valor de la raiz del subarbol
        if (n < valorRaiz)
        {
            agregarNodo(&((*arbol)->izq), n); // Si el valor a insertar es menor, se inserta en el subarbol izquierdo
        }
        else
        {
            agregarNodo(&((*arbol)->der), n); // Si el valor a insertar es mayor, se inserta en el subarbol derecho
        }
    }
}

// funcion para mostrar el arbol de forma grafica
void MostrarArbol(Nodo *arbol, int cont)
{
    if (arbol == NULL)
    {
        return; // Si el arbol esta vacio, no hace nada
    }
    else
    {
    	//actua de manera recursiva
        MostrarArbol(arbol->der, cont + 1); // Muestra el subarbol derecho
        for (int i = 0; i < cont; i++)
        {
            printf("   "); // Espacio - Indentacion para visualizar la profundidad del nodo en el arbol
        }
        printf("%d\n", arbol->dato);        // Imprime el valor del nodo
        MostrarArbol(arbol->izq, cont + 1); // Muestra el subarbol izquierdo
    }
}

// funcion para buscar un elemento en el arbol
int busqueda(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return 0; // Si el arbol esta vacio, el elemento no se encuentra
    }
    else if (n == arbol->dato)
    {
        return 1; // Si el valor del nodo actual es igual al valor buscado, se encontro el elemento
    }
    else if (n < arbol->dato)
    {
        return busqueda(arbol->izq, n); // Si el valor buscado es menor que el valor del nodo actual, busca en el subarbol izquierdo
    }
    else
    {
        return busqueda(arbol->der, n); // Si el valor buscado es mayor que el valor del nodo actual, busca en el subarbol derecho
    }
}


