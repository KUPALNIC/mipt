#pragma once

#include <string>

using namespace std;

class Units{
  protected:
    string name;
    string picture;
  public:
    Units();
    virtual void voice()=0;
};