#include <iostream>
#include <zooanimal.h>
using namespace std;


int main()
{
    ZooAnimal bozo;

    bozo.Create ("Bozo", 408, 1027, 400);

    //#1 - 3 Modify that statement so that it uses a public member function that returns the ZooAnimal's name.
    cout << "This animal's name is " << bozo.reptName() << endl;

    bozo.Destroy ();

    return 0;

}
