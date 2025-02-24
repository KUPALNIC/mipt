#include "Environment.hpp"

Main_Location_Class::Main_Location_Class(unsigned int size){
    Main_Size = size;
    Main_Location_Matrix = new Active_L**[Main_Size];
    for (int i=0; i<Main_Size; i++){
        Main_Location_Matrix[i] = new Active_L*[Main_Size];
    }
    Location_Name_Matrix = new int*[Main_Size];
    for (int i=0; i<Main_Size; i++){
        Location_Name_Matrix[i] = new int[Main_Size];
    }
    for (int i=0; i<Main_Size; i++){
        for (int j=0; j<Main_Size; j++){
            Location_Name_Matrix[i][j] = 0;
        }
    }
    for (int i=0; i<Main_Size; i++){
        for (int j=0; j<Main_Size; j++){
            Set_Local_Name(j,i,Main_Location_Matrix[i][j]->Get_Location_Name());
        }
    }
}

Main_Location_Class::~Main_Location_Class(){
    for (int i=0; i<Main_Size; i++){
        delete[] Main_Location_Matrix[i];
        delete[] Location_Name_Matrix[i];
    }
    delete[] Main_Location_Matrix;
    delete[] Location_Name_Matrix;
}

void Main_Location_Class::Set_Local_Name(unsigned int x, unsigned int y, int Letter_Position){
    Location_Name_Matrix[y][x] = Letter_Position;
}