#include <iostream>
#include <string>
using namespace std;

// Product class
class Product {
private:
    int data;          
    int productId;     
    Product* next;      

public:
    Product(int d, int pid) {
        data = d;
        productId = pid;
        next = nullptr;
    }

    int getData() {
        return data;
    }

    void setData(int d) {
        data = d;
    }

    Product* getNext() {
        return next;
    }

    void setNext(Product* nextNode) {
        next = nextNode;
    }

    int getProductId() {
        return productId;
    }

    void setProductId(int pid) {
        productId = pid;
    }
};

// Queue class
class Queue {
private:
    Product* front;
    Product* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int data, int pid) {
        Product* newProduct = new Product(data, pid);
        if (rear == nullptr) {
            front = rear = newProduct;
        } else {
            rear->setNext(newProduct);
            rear = newProduct;
        }
        cout << "Added -> Serial: " << data << ", Product ID: " << pid << endl;
    }

    int dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return -1;
        }
        int soldSerial = front->getData();
        int soldId = front->getProductId();
        Product* temp = front;
        front = front->getNext();
        if (front == nullptr)
            rear = nullptr;
        delete temp;
        cout << "Sold product with serial: " << soldSerial << " and ID: " << soldId << endl;
        return soldSerial;
    }

    void displayFront() {
        if (front)
            cout << "First product in queue -> Serial: " << front->getData()
                 << ", Product ID: " << front->getProductId() << endl;
        else
            cout << "Queue is empty.\n";
    }

    void displayRear() {
        if (rear)
            cout << "Last product in queue -> Serial: " << rear->getData()
                 << ", Product ID: " << rear->getProductId() << endl;
        else
            cout << "Queue is empty.\n";
    }
};

// Main function
int main() {
    string studentId = "BC240436201";
    cout << "Student ID: " << studentId << endl;
    cout << "===============================\n";

    int lastThree = 789;
    int smartphones = 7;
    int tablets = 8;
    int watches = 9;

    int startProductId = 6789;
    int serial = 1;

    Queue inventory;

    cout << "\n" << smartphones << " smartphones being added to inventory:\n";
    for (int i = 0; i < smartphones; ++i) {
        inventory.enqueue(serial++, startProductId++);
    }

    cout << "\n" << tablets << " tablets being added to inventory:\n";
    for (int i = 0; i < tablets; ++i) {
        inventory.enqueue(serial++, startProductId++);
    }

    cout << "\n" << watches << " smart watches being added to inventory:\n";
    for (int i = 0; i < watches; ++i) {
        inventory.enqueue(serial++, startProductId++);
    }

    cout << "\n----------------------------------------\n";
    inventory.displayFront();
    inventory.displayRear();
    cout << "----------------------------------------\n";

    cout << "\nSelling 2 products...\n";
    inventory.dequeue();
    inventory.dequeue();

    cout << "\n----------------------------------------\n";
    inventory.displayFront();
    cout << "----------------------------------------\n";

    return 0;
}
