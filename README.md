# OOP - BOOKS IN A LIBRARY

### 1.  PROBLEM STATEMENT - **problem number 6***
Design and implement a class for representing books in a library. For each book, the following details must be specified :

- the book title

- the author(s)

- the publisher

- the ISBN number (string of characters)

- the year of publication

- the price

The program will allow the creation of an array of books in a library and the possibility of searching for books based on: title, publisher, or ISBN. The functions of the class will be written to allow the above-mentioned operations.


### 2. APPLIED OOP CONCEPTS
1. **Classes and Objects** :
The program defines two classes: ***Carte*** (Book) and ***Biblioteca*** (Library).
Objects of the class ***Carte*** represent individual books with attributes like title, authors, publisher, ISBN, year of publication, and price.
Objects of the class ***Biblioteca*** represent the library, which holds a collection of books ***(vector<Carte>)***.

2. **Encapsulation** :
The class ***Carte*** encapsulates the details of a book using private member variables (***titlu, autori, editura, isbn, an_aparitie,*** and ***pret***).
Access to these private members is provided through public getter methods ***(getTitlu(), getEditura(), getISBN())***.
The data and behavior of the ***Biblioteca*** class are also encapsulated. It manages a collection of books through private data and public methods like ***adaugaCarte(), cautaTitlu(), afiseazaToateCartile()***.

3. **Constructor** :
The class ***Carte*** has a constructor that initializes a book object with the given parameters (title, authors, publisher, etc.).

4. **Inheritance** :
Although not used in this particular program, inheritance could be applied if we wanted to extend the functionality (e.g., a ***EBook*** class that inherits from ***Carte***).

5. **Abstraction** :
The user interacts with the ***Biblioteca*** class in a simplified manner without needing to know the internal implementation details of how books are stored or searched.

6. **Polymorphism** :
Polymorphism isn't explicitly used here in terms of method overriding, but the design could be extended to include polymorphism (e.g., different types of books with different formats for displaying information).


### 3. PROGRAM WORKFLOW
1. **Initialization** :
>The program starts by creating an instance of the ***Biblioteca*** class.

2. **Input** :
>The user is asked how many books they want to add to the library.
>For each book, the program collects details such as title, number of authors, authors' names, publisher, ISBN, year of publication, and price. This information is used to create a ***Carte*** object.

3. **Adding Books** :
>Each ***Carte*** object (representing a book) is added to the ***Biblioteca*** (library) using the ***adaugaCarte()*** method.

4. **Displaying All Books** :
>After adding all the books, the program displays all the books stored in the library. Each book’s information (title, authors, publisher, ISBN, year, price) is printed using the ***afiseazaToateCartile()*** method from the ***Biblioteca*** class, which internally calls ***afiseazaInformatii()*** for each book.

5. **Search** :
>The user is prompted to enter a book title to search for. The program searches the library for books with that title using the ***cautaTitlu()*** method.
If books are found, their details are printed. If no books match the searched title, an appropriate message is displayed.

6. **End** :
>The program terminates after performing the search and displaying the results.

