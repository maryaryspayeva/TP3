#include "zooanimal.h"

void ZooAnimal::Destroy (){
    delete [] name;
}

char* ZooAnimal::reptName (){
    return name;
}

int ZooAnimal::daysSinceLastWeighed(int today) { //#1 - 2.  Write a function header for the ZooAnimal class member function daysSinceLastWeighed.
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
}

void ZooAnimal::Create (char* n_name, int cN, int wD, int w){
    name = n_name;
    cageNumber = cN;
    weightDate = wD;
    weight = w;
}

inline int ZooAnimal::reptWeightDate(){ //#2 - 1.  Write the ZooAnimal inline member function reptWeightDate.  It should simply return the weightDate data member.
    return weightDate;
}

inline void ZooAnimal::changeWeightDate(int today){ // #2 - 2 Modify the prototype for changeWeightDate below
    weightDate = today;
}

void ZooAnimal::isMotherOf(ZooAnimal *m){ //#2 - 3 Write the ZooAnimal member function isMotherOf
    mother = m;

}
