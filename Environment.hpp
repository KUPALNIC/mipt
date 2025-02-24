#include "Active_Location.hpp"

class Main_Location_Class{
    private:
        Active_L*** Main_Location_Matrix;
        int **Location_Name_Matrix;
        unsigned int Main_Size;
    public:
        Main_Location_Class(unsigned int size);
        ~Main_Location_Class();
        void Set_Local_Name(unsigned int x, unsigned int y, int Letter_Position);
};