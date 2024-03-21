#include <iostream>

using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node<T>* next=NULL;
};

template <class T>
class List {
private:
    Node<T>* head;
public:
    List() : head(NULL) {};
    ~List(){
        while(head!=NULL){
            Node<T> *ptr=head;
            head=head->next;
            delete ptr;
        }
    }
    List(T* arr, int n_nodes){
        Node<T>* temp;
        for (int i=0; i<n_nodes; i++){
            Node<T>* da = new Node<T>;
            da->data=arr[i];
            if (i==0) head=da;
            else temp->next=da;
            temp=da;
        }
    }
    void insert_at(int idx, const T& data){
        Node<T> *ptr=head;
        for (int i=0; i<idx; i++){
            ptr=ptr->next;
        }
        Node<T> *temp = new Node<T>;
        temp->data=data;
        temp->next=ptr;
        ptr=head;
        for (int i=0; i<idx-1; i++){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    void remove_at(int idx){
        Node<T> *ptr=head;
        for (int i=0; i<idx; i++){
            ptr=ptr->next;
        }
        Node<T> *temp=ptr;
        ptr=head;
        for (int i=0; i<idx-1; i++){
            ptr=ptr->next;
        }
        ptr->next=temp->next;
        delete temp;
    }
    void pop_back(){
        Node<T> *ptr=head;
        int cnt=0;
        while(ptr->next!=NULL) {
            ptr=ptr->next;
            cnt++;
        }
        delete ptr;
        ptr=head;
        for (int i=0; i<cnt-1; i++) ptr=ptr->next;
        ptr->next=NULL;
    }
    void push_back(const T& val){
        Node<T> *temp = new Node<T>;
        temp->data=val;
        temp->next=NULL;
        Node<T> *ptr=head;
        while(ptr->next!=NULL) ptr=ptr->next;
        ptr->next=temp;
    }
    void pop_front(){
        Node<T> *ptr=head;
        head=head->next;
        delete ptr;
    }
    void push_front(const T& val){
        Node<T> *temp = new Node<T>;
        temp->data=val;
        temp->next=head;
        head=temp;
    }
    friend ostream& operator<<(ostream& out, List& rhs){
        Node<T>* a=rhs.head;
        while (a->next!=NULL){
            out<<a->data<<",";
            a=a->next;
        }
        out << a->data;
        return out;
    }
};
