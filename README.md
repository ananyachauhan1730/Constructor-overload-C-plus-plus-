# Constructor-overload-C-plus-plus-

# Aim: 
To study and implement Constructor Overloading

# Apparatus:
vs code 

# Theory:

➡️In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments. This concept is known as Constructor Overloading and is quite similar to function overloading.

➡️Overloaded constructors essentially have the same name (exact name of the class) and different by number and type of arguments.

➡️A constructor is called depending upon the number and type of arguments

# 1) Room class (calculate area with constructor overloading):

# Explanation:
Class Room has two private members: length and breadth (double).
Constructors set these values in different ways: default values, given values, or copy from another object.
calculateArea() multiplies length × breadth and returns the area.
When you create an object, the correct constructor runs automatically.


# Algorithm:

1. Start program.


2. Define class Room with private double length, breadth.


3. Write default constructor → set length = 6.9, breadth = 4.2.


4. Write parameterized constructor (double l, double b) → set length = l, breadth = b.


5. Write single-argument constructor (double len) → set length = len, breadth = 7.2 (example).


6. Write copy constructor (const Room &r) → copy length = r.length, breadth = r.breadth.


7. Write double calculateArea() → return length * breadth.


8. In main() create objects: Room r1; Room r2(5.0,4.0); Room r3(r1);


9. Call cout << r1.calculateArea(), r2.calculateArea(), r3.calculateArea().


10. End program.

11. # 2) fetch class (integer value with constructors)

# Explanation:
Class fetch has private int num.
Default constructor sets num = 3.
Parameterized constructor fetch(int x) sets num = x.
Copy constructor fetch(const fetch &b) sets num = b.num.
disp() prints num to the console.
When you create objects in different ways, the matching constructor runs.

# Algorithm:

1. Start program.


2. Define class fetch with private int num.


3. Add default constructor → num = 3.


4. Add parameterized constructor (int x) → num = x.


5. Add copy constructor (const fetch &b) → num = b.num.


6. Add void disp() → cout << num << endl;.


7. In main() create objects: fetch f1; fetch f2(6); fetch f3(f1);


8. Call f1.disp(); f2.disp(); f3.disp();.


9. End program.

10. # 3.area class (float length, int breadth)

# Explanation:

Class area has float len and int bre.
Default constructor sets len = 10, bre = 20.
Parameterized constructor area(float l, int b) sets given values.
Copy constructor copies len and bre from another object.
disp() computes ar = len * bre and prints it.

# Algorithm:

1. Start program.


2. Define class area with float len; int bre;.


3. Write default constructor → len = 10; bre = 20;.


4. Write parameterized constructor (float l, int b) → len = l; bre = b;.


5. Write copy constructor (const area &a1) → len = a1.len; bre = a1.bre;.


6. Write void disp() → compute float ar = len * bre; cout << ar << endl;.


7. In main() create: area a1; area a2(15.6, 10); area a3(a1);


8. Call a1.disp(); a2.disp(); a3.disp();.


9. End program.

# Conclusion:

1. Constructor Overloading allows us to create multiple constructors in the same class with different parameter lists.

Default Constructor initializes data members with fixed values.

Parameterized Constructor initializes data members with user-given values.

Copy Constructor initializes a new object with the values of an already existing object.


