//template<typename T>
//class HeapArray {
//private:
//    T* arr;
//    int array_size;
//  HeapArray(HeapArray&& to_move);    // move constructor  
//};
//
//template<typename T>
//HeapArray<T>::HeapArray(HeapArray&& to_move) {   // move constructor definition
//    array_size = to_move.array_size;
//    arr = to_move.arr;
//    to_move.array_size = 0;
//    to_move.arr = nullptr;
//  
//}

// CPP program to illustrate
// concept of Virtual Functions


//#include <iostream>
//#include <thread>
//
//void do_work(int i) {
//    for(int j = 0; j < i; j++) {
//        std::cout << j << std::endl;
//    }
//}
//
//int main() {
//    std::thread t(do_work, 10);
//    
//    t.join();
//    
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void OutPutDoubleVector(vector<int> t) {
//    cout << t[0] << t[1] << std::endl;
//}
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        for(int i = 0; i < nums.size(); i++) {
//            for(int j = 0; j < nums.size(); j++) {
//                if((nums[i] + nums[j]) == target) {
//                    
//                if(i != j) {
//                    vector<int> result{j, i};
//                    return result;
//                    
//                }
//                }
//            }
//        }
//        vector<int> no_result{0,0};
//        return no_result;
//    }
//};
//
//int main() {
//    
//    vector<int> test{3, 2, 4};
//    Solution s;
//    vector<int> result = s.twoSum(test, 6);
//    
//    OutPutDoubleVector(result);
//    
//    return 0;
//    
//    
//}

#include <iostream>
#include <initializer_list>

template<typename T>
class vector {
private:
    T* DataMembers;
    int array_size;
    
public:
    vector();
    vector(std::initailizer_list<T> list);
    vector(vector&);
    vector(vector&&);
    
    vector& operator=(vector&);
    vector& operator=(vector&&);
    
    void push_back(T item);
    
};

template<typename T>
vector<T>::vector() {
    DataMembers = nullptr;
    array_size = 0;
}

template<typename T>
vector<T>::vector(std::initailizer_list<T> list) {
    std::copy(list.begin(), list.end(), DataMembers);
}

template<typename T>
vector<T>::vector(vector& to_copy) {
    DataMembers = to_copy.DataMembers;
    array_size = to_copy.array_size;
}
template<typename T>
vector<T>::vector(vector&& to_move) {
    DataMembers = to_move.DataMembers;
    array_size = to_move.array_size;
    
    to_move.DataMembers = nullptr;
    to_move.array_size = 0;
}

template<typename T>
vector<T>& vector<T>::operator=(vector& to_copy) {
    DataMembers = to_copy.DataMembers;
    array_size = to_copy.array_size;
} 

template<typename T> 
vector<T> vector<T>::operator=(vector&& to_move) {
    DataMembers = to_move.DataMembers;
    array_size = array_size.array_size;
    
    to_move.DataMembers = nullptr;
    to_move.array_size = 0;
}

template<typename T>
void vector<T>::push_back(T push_back_value) {
    T* temp = DataMembers;
    DataMembers = new T[array_size + 1]
    for(int i = 0; i < array_size; i++) {
        DataMembers[i] = temp[i]
    }
    
    DataMembers[array_size + 1] = push_back_value;
    
    array_size++;
}

int main() {
    
}
    