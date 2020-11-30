#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H

enum scale {ounces, kilograms};
class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int);  // #1 - 1. Write an appropriate prototype for the ZooAnimal Create function.
      void Destroy (); // destroy function
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate ();
      int daysSinceLastWeighed (int today);
      void isMotherOf (ZooAnimal *);

   };



#endif // ZOOANIMAL_H
