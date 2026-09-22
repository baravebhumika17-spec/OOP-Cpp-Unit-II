OOP with C++ – Unit II: Inheritance
📌 Description

This repository contains C++ programs and practical examples based on Unit II – Inheritance of Object Oriented Programming with C++.

The programs are designed to understand inheritance concepts through simple and real-life examples.

👩‍🎓 Student Details
Student Name: Bhumika Barave
Course: Object Oriented Programming with C++
Unit: Unit II – Inheritance
Year: Second Year Engineering
Branch: Artificial Intelligence and Data Science
Programming Language: C++
🎯 Objective

The objective of this unit is to understand how inheritance allows a derived class to reuse and extend the properties and functions of a base class.

📚 Topics Covered
1. Base Class and Derived Class

Understanding parent and child classes and how a derived class inherits members from a base class.

2. Protected Members

Understanding the protected access specifier and its use in derived classes.

3. Relationship Between Base and Derived Class

Understanding the is-a relationship represented by inheritance.

Example:

Animal
   ↓
 Dog

A Dog is an Animal.

4. Constructor and Destructor in Derived Class

Understanding the execution order of constructors and destructors in inheritance.

Base Constructor
       ↓
Derived Constructor

Derived Destructor
       ↓
Base Destructor
5. Overriding Member Functions

Implementing a derived-class version of a function already defined in the base class.

6. Class Hierarchies

Creating a hierarchy of related classes using inheritance.

Example:

             Vehicle
            /       \
          Car       Bike
7. Public and Private Inheritance

Understanding:

class Child : public Parent

and

class Child : private Parent

and how they affect accessibility of inherited members.

8. Types of Inheritance

The major types covered are:

Single Inheritance
Multilevel Inheritance
Multiple Inheritance
Hierarchical Inheritance
Hybrid Inheritance
9. Ambiguity in Multiple Inheritance

Understanding ambiguity when two base classes contain members with the same name.

Example:

     A       B
      \     /
        C

If both A and B have the same function, class C may need to specify which function should be called.

10. Virtual Base Class

Using a virtual base class to avoid duplicate copies of a common base class in multiple/hybrid inheritance.

11. Abstract Class

Understanding classes containing pure virtual functions that are intended to provide a common interface for derived classes.

12. Friend Class

Understanding how one class can be declared as a friend of another class and access its private and protected members.

13. Nested Class

Understanding a class declared inside another class.

💻 Real-Life Applications

Inheritance can be used to model relationships between real-world entities.

🚗 Vehicle Management
             Vehicle
            /       \
          Car       Bike

Common functionality such as starting a vehicle can be placed in the base class, while specific functionality can be implemented in derived classes.

🏦 Banking System
             Account
            /       \
      Savings      Current

Common account information can be maintained in the base class, while account-specific operations can be implemented in derived classes.

👨‍💼 Employee Management
             Employee
            /        \
       Manager      Developer

Common employee information can be inherited, while role-specific functions can be added to derived classes.
