# C++ Module 03 - Inheritance

## The Diamond Problem in C++
In C++, the diamond problem arises when a class inherits from two classes that both derive from a common base class. This can lead to ambiguity because the derived class receives duplicate instances of the base class's members. For example, if both intermediate classes have their own version of a particular method or data member from the base class, the compiler cannot determine which version to use in the final derived class.

To address this, C++ provides the `virtual` inheritance mechanism, which ensures that only one instance of the common base class is shared among the derived classes, preventing duplication and ambiguity. This module’s exercises will provide you with practical experience in handling such inheritance issues.

## Project Purpose
This module explores the principles of inheritance in C++. Through each exercise, you will gain practical experience in designing class hierarchies, managing inherited attributes, and creating specialized functionality in derived classes. This project provides a foundation in OOP inheritance, demonstrating how to extend and reuse code effectively.

## Exercises Overview

### Exercise 00: Aaaaand... OPEN!
**Objective**: Implement a basic `ClapTrap` class with attributes like name, hit points, energy points, and attack damage. Define methods for attacking, taking damage, and repairing.

**Why We Created This Class**: This class serves as the base for a robotic hierarchy, providing core functionality and attributes. It simulates a basic robot's actions and lays the groundwork for more specialized robots in later exercises.

### Exercise 01: Serena, my love!
**Objective**: Create the `ScavTrap` class, inheriting from `ClapTrap`. Customize attributes and add a special `guardGate` method.

**Why We Created This Class**: `ScavTrap` expands on `ClapTrap` by adding specialized capabilities, demonstrating how inheritance can be used to create more complex and unique classes while reusing base functionality.

### Exercise 02: Repetitive work
**Objective**: Add a `FragTrap` class that inherits from `ClapTrap`, with unique attributes and a special `highFivesGuys` method.

**Why We Created This Class**: `FragTrap` provides another level of specialization within the robotic hierarchy, showcasing different inherited behaviors and properties. It emphasizes the value of creating distinct subclasses for different functionalities.

### Exercise 03: Now it’s weird!
**Objective**: Introduce the `DiamondTrap` class, a hybrid that inherits both `ScavTrap` and `FragTrap`. This class demonstrates multiple inheritance and includes a unique `whoAmI` method.

**Why We Created This Class**: `DiamondTrap` illustrates multiple inheritance, a powerful but complex feature of C++. This class shows how to combine functionalities from multiple parent classes into a single, multi-faceted class.

## Compilation and Testing
Each exercise is contained within its own directory (`ex00/`, `ex01/`, `ex02/`, and `ex03/`). Navigate to the appropriate directory and use the `Makefile` to compile the code. Test the program to see inherited methods and constructor/destructor chaining.

**Example:**
```bash
cd ex00
make
./your_executable
