
class Active_L{
    private:
    protected:
        int Location_Name;
        int **Location_Matrix;
        unsigned int Size;
    public:
        Active_L(unsigned int size);
        ~Active_L();
        int Get_Location_Name();
};