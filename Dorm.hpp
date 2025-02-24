#include "Active_Location.hpp"

class Dorm:public Active_L{
    private:
        unsigned int x;
        unsigned int y;
    protected:
    public:
        Dorm(unsigned int X, unsigned int Y);
        ~Dorm();
};