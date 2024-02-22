#include <iostream>

using namespace std;

// Definición de la estructura del nodo
struct Node {
    int data;
    Node* next;
};

// Clase para la lista enlazada
class LinkedList {
private:
    Node* head; // Puntero al primer nodo de la lista

public:
    // Constructor
    LinkedList() {
        head = NULL; // Inicializa el puntero a NULL
    }

    // Método para agregar un nodo al final de la lista
    void insertNode(int value) {
        Node* newNode = new Node; // Crea un nuevo nodo
        newNode->data = value;
        newNode->next = NULL; // Establece el siguiente nodo como NULL

        if (head == NULL) { // Si la lista está vacía, el nuevo nodo se convierte en el primer nodo
            head = newNode;
        } else { // Si no, busca el último nodo y agrega el nuevo nodo después de él
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Método para editar el valor de un nodo en una posición específica
    void editNode(int position, int value) {
        Node* temp = head;
        int currentPosition = 1;
        while (temp != NULL && currentPosition < position) { // Busca el nodo en la posición especificada
            temp = temp->next;
            currentPosition++;
        }

        if (temp == NULL) { // Si no se encuentra la posición, muestra un mensaje de error
            cout << "La posicion especificada esta mas alla del final de la lista." << endl;
        } else { // Si se encuentra la posición, actualiza el valor del nodo
            temp->data = value;
            cout << "El valor del nodo en la posicion " << position << " ha sido editado." << endl;
        }
    }

    // Método para eliminar un nodo en una posición específica
    void deleteNode(int position) {
        if (head == NULL) { // Si la lista está vacía, muestra un mensaje de error
            cout << "La lista está vacia." << endl;
            return;
        }

        Node* temp = head;
        if (position == 1) { // Si se va a eliminar el primer nodo, actualiza el puntero head
            head = head->next;
            delete temp;
            cout << "El nodo en la posicion " << position << " ha sido eliminado." << endl;
            return;
        }

        int currentPosition = 1;
        while (temp != NULL && currentPosition < position - 1) { // Busca el nodo anterior al nodo a eliminar
            temp = temp->next;
            currentPosition++;
        }

        if (temp == NULL || temp->next == NULL) { // Si no se encuentra la posición, muestra un mensaje de error
            cout << "La posicion especificada esta mas alla del final de la lista." << endl;
        } else { // Si se encuentra la posición, elimina el nodo
            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
            cout << "El nodo en la posicion " << position << " ha sido eliminado." << endl;
        }
    }

    // Método para imprimir la lista
    void displayList() {
        if (head == NULL) { // Si la lista está vacía, muestra un mensaje de que está vacía
            cout << "La lista esta vacia." << endl;
            return;
        }

        Node* temp = head;
        cout << "Lista de nodos:" << endl;
        while (temp != NULL) { // Mientras haya nodos, imprime sus valores
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Función principal
int main() {
    LinkedList myList;

    // Insertar algunos nodos
    myList.insertNode(5);
    myList.insertNode(10);
    myList.insertNode(15);
    myList.insertNode(24);

    // Mostrar la lista inicial
    cout << "Lista inicial" << endl;
    myList.displayList();

    // Editar un nodo
    myList.editNode(3, 12);

    // Mostrar la lista después de editar
    cout << "Lista despues de editar:" << endl;
    myList.displayList();

    // Eliminar un nodo
    myList.deleteNode(2);

    // Mostrar la lista después de eliminar
    cout << "Lista despues de eliminar:" << endl;
    myList.displayList();

    return 0;
}

//Jonathan Mora y Willian Peralta
