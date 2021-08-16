Situation: application with 4 classes, A, B, C and D; B and C are subclasses of 
A; classes A, B and C all have a method called checkBalance(), with same 
signature and returning a double, but with different values; D is the main class, 
and execute this lines

A* obj = new B();
double v = obj->checkBalance();

A* obj1 = new C();
double v1 = obj1->checkBalance();

v and v1 return different values; this is a classical example of 

POLYMORPHISM
