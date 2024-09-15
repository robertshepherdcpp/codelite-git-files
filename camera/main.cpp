#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <cstdlib>

struct Picture {
    int bits;
    std::pair<int, int> size;
    
    Picture() {bits = 0; size = std::pair<int,int> {0,0};}
    Picture(int p_bits, std::pair<int, int> p_size) : bits(p_bits), size(p_size) {}
};

void TurnOnLight() {}
void Flash() {}
Picture* GetInput() {Picture* p = new Picture; return p;}
void PictureFormat(Picture p) {}

std::vector<Picture> MemoryPile {};

struct Camera {
    
    std::string type;
    Camera() {type = "None";}
    Camera(std::string c_type) : type(c_type) {}
};

Camera* NoCamera() {Camera c = new Camera; return c;}


struct PrimaryCamera {
  Camera* c_camera = new Camera;
  PrimaryCamera(Camera* camera) : c_camera(camera) {};
  PrimaryCamera() {c_camera = new Camera;};
  
  void CameraTakePicture(); 
};

void PrimaryCamera::CameraTakePicture() {
    TurnOnLight();
    Flash();
    MemoryPile.push_back(GetInput());
    
}

struct SecondaryCamera {
  Camera* c_camera;
  SecondaryCamera(Camera* camera) : c_camera(camera) {}
  SecondaryCamera() {c_camera = new Camera;};
  
  void CameraTakePicture();
};

void SecondaryCamera::CameraTakePicture() {
    TurnOnLight();
    Flash();
    MemoryPile.push_back(GetInput());
    
}

void ViewCameraRoll() {
    for(Picture p : MemoryPile) {
        PictureFormat(p);
    }
}

void TakePicture() {
    int i;
    std::cout << "Which Camera do you want to use: ";
    std::cin >> i;
    
    if(i == 1) {
        PrimaryCamera p;
        p.CameraTakePicture();
    } else {
        SecondaryCamera p;
        p.CameraTakePicture();
    }
}

void TurnOff() {
    std::exit(EXIT_FAILURE);
}

void ClearMemory() {
    MemoryPile.clear();
}
void DealWithOption(int i) {
    if(i == 1) {
        ViewCameraRoll();
    } else if(i == 2) {
        TakePicture();
    } else if(i == 3) {
        TurnOff();
    } else if(i == 4) {
        ClearMemory();
    }
}

int main() {
    
    std::vector<std::string> options {"View Camera Roll", "Take Picture", "Turn Off", "Clear Memory"};
    std::cout << "Hello please select one of these four options:" << std::endl;
    for(int i = 0; i < options.size(); i++) {
        std::cout << i + 1 << ". " << options[i] << std::endl;
    }
    
    int i;
    
    std::cin >> i;
    
    DealWithOption(i);
   
return 0; 
}