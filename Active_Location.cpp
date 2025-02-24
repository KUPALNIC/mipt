#include "Active_Location.hpp"

Active_L::Active_L(unsigned int size){
    Location_Name = 1;
    Size = size;
    Location_Matrix = new int*[Size];
    for (int i=0; i<Size; i++){
        Location_Matrix[i] = new int[Size];
    }
    for (int i=0; i<Size; i++){
        for (int j=0; j<Size; j++){
            Location_Matrix[i][j] = 0;
        }
    }
}

Active_L::~Active_L(){
    for (int i=0; i<Size; i++){
        delete[] Location_Matrix[i];
    }
    delete[] Location_Matrix;
}

int Active_L::Get_Location_Name(){
    return(Location_Name);
}