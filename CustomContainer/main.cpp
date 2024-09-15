#include <iostream>

template <typename T>
class Container {  
private:
    T* elems;
    int array_size;
public:
    
    T* begin() {return elems;}
    T* end() {return elems + array_size;}
    
    // constructors
    
    Container(std::initializer_list<T>);
    Container(const Container& to_copy);
    Container(Container&& to_move);
    
    // assignment
    
    Container& operator= (const Container& to_copy);
    Container& operator= (Container&& to_move);
    
    // member functions
    
    void push_back(T item);
    int get_array_size() {return array_size;};
    auto operator[](int index) {return elems[index];};
    
};

template <typename T>
Container<T>::Container(std::initializer_list<T> values) {
    elems = new T[array_size];
    array_size = values.size();
    std::copy(values.begin(), values.end(), elems);
}

template <typename T>
Container<T>::Container(const Container& to_copy) {
    array_size = to_copy.array_size;
    elems = new T[array_size] {};
    elems = to_copy.elems;
}

template <typename T>
Container<T>::Container(Container&& to_move) {
    elems = to_move.elems;
    array_size = to_move.array_size;
    
    to_move.elems = nullptr;
    to_move.array_size = 0;
}

template <typename T>
Container<T>& Container<T>::operator=(const Container& to_copy) {
    
    array_size = to_copy.array_size;
    elems = new T[array_size];
    
    for (int i = 0; i < array_size; i++) {
        elems[i] = to_copy.elems[i];
    }
    
}

template <typename T>
Container<T>& Container<T>::operator=(Container&& to_move) {
    
    delete[] elems;
    elems = to_move.elems;
    array_size = to_move.array_size;
    
    elems = nullptr;
    array_size = 0;
}

template<typename T>
void Container<T>::push_back(T item) {
    
    T* temp;
    for(int i = 0; i < array_size; i++) {
        temp[i] = elems[i];
    }
    delete[] elems;
    elems = new T[array_size + 1];
    
    for(int i = 0; i < array_size; i++) {
        elems[i] = temp[i];
    }
    
    elems[array_size] = item;
    
    array_size++;
}


int main() {
    
    Container<int> nums {1, 2, 3, 4};   // use std::copy to convert std::intitializer_list to elems.
    
    for(int i = 0; i < nums.get_array_size(); i++) {
        std::cout << nums[i] << std::endl;
    }
    
    std::cout << std::endl;
    
    Container<int> nums2 = nums;
    nums2.push_back(5);
    
    for(int i = 0; i < nums2.get_array_size(); i++) {
        std::cout << nums2[i] << std::endl;
    }
    
    std::cout << std::endl;
    
    for(auto i : nums2) {
        std::cout << i << std::endl;
    }
    
    return 0;
    
}