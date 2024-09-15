#include <iostream>

template<typename T>
class Vector {
private:
    T* elems;
    int array_size;
public:

// constructors
    
    Vector();  // no args constructor
    Vector(std::initializer_list<T> list); // constructor
    Vector(const Vector&); // copy constructor
    Vector(Vector&&); // move constructor
    
// assignment  
  
    Vector& operator= (const Vector&); // copy assignment
    Vector& operator= (Vector&&); // move assignment
    
    using iterator = T*;
    
// iterators
    
    iterator begin() {return elems;}
    iterator end() {return elems + array_size;}
    
// member functions

    void push_back(T item);
    void reserve(int num);
    void pop_back();
    
};

template<typename T>
Vector<T>::Vector() {
    elems = nullptr;
    array_size = 0;
}

template<typename T>
Vector<T>::Vector(std::initializer_list<T> list) {
    std::copy(list.begin(), list.end(), elems);
    array_size = list.size();
}

template<typename T>
Vector<T>::Vector(const Vector& to_copy) {
    array_size = to_copy.array_size;
    elems = new T[array_size];
    elems = to_copy.array_size;
}

template<typename T>
Vector<T>::Vector(Vector&& to_move) {
    array_size = to_move.array_size;
    elems = new T[array_size];
    elems = to_move.elems;
    to_move.array_size = 0;
    to_move.elems = nullptr;
}

template<typename T>
Vector<T>& Vector<T>::operator=(const Vector& to_copy) {
    array_size = to_copy.array_size;
    elems = new T[array_size];
    
    for(int i = 0; i < array_size; i++)
        elems[i] = to_copy.elems[i];
}

template<typename T>
Vector<T>& Vector<T>::operator=(Vector&& to_move) {
    array_size = to_move.array_size;
    elems = new T[array_size];
    
    for(int i = 0; i < array_size; i++) {
        elems[i] = to_move.elems[i];
    }
    
    to_move.elems = nullptr;
    to_move.array_size = 0;
}

template<typename T>
void Vector<T>::push_back(T item) {
    
    T* temp = new T[array_size];
    for(int i = 0; i < array_size; i++) {
        temp[i] = elems[i];
    }
    elems = new T[array_size + 1];
    for(int i = 0; i < array_size; i++) {
        elems[i] = temp[i];
    }
    elems[array_size + 1] = item;
    array_size = array_size + 1;
    
    delete[] temp;
}

template<typename T>
void Vector<T>::reserve(int num) {
    T* temp = new T[array_size];
    
    for(int i = 0; i < array_size; i++) {
        temp[i] = elems[i];
    }
    elems = new T[num];
    
    for(int i = 0; i < array_size; i++) {
        elems[i] = temp[i];
    }
    
    array_size = num;

    delete[] temp;
}

template<typename T>
void Vector<T>::pop_back() {
   T* temp = new T[array_size];
   
   for(int i = 0; i < array_size; i++) {
       temp[i] = elems[i];
   }
   
   elems = new T[array_size - 1];
   
   for(int i = 0; i < array_size - 1; i++) {
       elems[i] = temp[i];
   }
   
   --array_size;
   
   delete[] temp;
}

template<typename T>
T* find(T* begin, T* end, T item) {
    while(begin != end && *begin != item) {
        begin++;
    }
    return begin;
}




int main() {
    
    Vector<int> numbers {1, 2, 3, 4};
    
    for(int i: numbers)
        std::cout << i << ", ";
    
    std::cout << std::endl;
    
    auto index = find(numbers.begin(), numbers.end(), 4);
    
    std::cout << *index;
    
    return 0;
    
}

