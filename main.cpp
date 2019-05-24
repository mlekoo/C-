#include <iostream>
#include "Class.h"

struct Smart_struct {

public:
    Class * object = new Class[4];
    int *  number = new int[4];
};

int main() {

//   Class *object = new Class();
// delete(object);

    std::unique_ptr<Class> smart_class(new Class()); // Używamy słowa new, ale opakowujemy w unique_ptr

    Smart_struct smart_struct;

    smart_struct.object[0] = Class(0);
    smart_struct

}

