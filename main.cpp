#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

double cube(double num){
    return num * num * num;
}

int power(int baseNum, int powerNum) {
    int result = 1;

    for (int i = 0; i < powerNum; i++) {
        result *= baseNum;
    }

    return result;
}

int getMax(int num1, int num2, int num3) {
    int result;

    /*
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    */


    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

string getDayOfWeek(int dayNum) {
    string dayName;

    switch(dayNum) {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid dayNum";
    }

    return dayName;
}

class Book {
public:
    string title;
    string author;
    int pages;

    Book(string name) {
        cout << name << endl;
    };

    Book() {
        title = "no title";
        author = "no author";
        pages = 0;
    };

    Book(string aTitle, string aAuthor, int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

class Student {
public:
    string name;
    string major;
    double cgpa;

    Student(string aName, string aMajor, double aCgpa) {
        name = aName;
        major = aMajor;
        cgpa = aCgpa;
    };

    bool hasFirstClass() {
        if (cgpa >= 3.7) {
            return true;
        } else {
            return false;
        }
    };
};

class Movie {
private:
    string rating;
public:
    string name;
    string director;
    //string rating;

    Movie(string aName, string aDirector, string aRating) {
        name = aName;
        director = aDirector;
        setRating(aRating);
    };

    void setRating(string aRating) {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "NR" || aRating == "R") {
            rating = aRating;
        } else {
            rating = "NR";
        }
    };

    string getRating() {
        return rating;
    };
};

class Chef {
public:
    void makeChicken(){
        cout << "The chef makes chicken" << endl;
    };

    void makeSalad(){
        cout << "The chef makes salad" << endl;
    };

    void makeSpecialDish(){
        cout << "The chef makes bbq ribs" << endl;
    };
};

class ItalianChef: public Chef{
public:
    void makePasta() {
        cout << "The chef makes pasta" << endl;
    };
};

int main()
{

    Chef chef1;
    chef1.makeChicken();

    ItalianChef chef2;
    chef2.makeChicken();
    chef2.makePasta();

    /*
    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age =
    50;
    double cgpa = 2.4;
    bool isMale = false;

    cout << grade << endl;
    cout << true << endl;
    cout << 3232 << endl;
    */

    /*
    cout << "Giraffe Academy";
    cout << "Hello" << endl;
    */

    /*
    string phrase = "Giraffe Academy";
    cout << phrase.length() << endl;
    cout << phrase[4] << endl;
    phrase[0] = 'B';
    cout << phrase << endl;

    cout << phrase.find("Aca", 2) << endl;
    string phrase_sub;
    phrase_sub = phrase.substr(8, 3);
    cout << phrase_sub;
    */

    /*
    cout << 10 % 3 << endl;
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5)* 10 << endl;
    */

    /*
    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    cout << wnum << endl;
    cout << "5.5 + 9 = " << 5.5 + 9 << endl;
    cout << "10 / 3 = " << 10 / 3 << endl;
    cout << "10 / 3.0 = " << 10 / 3.0 << endl;
    cout << "10.0 / 3 = " << 10.0 / 3 << endl;
    cout << "10.0 / 3.0 = " << 10.0 / 3.0 << endl;
    */

    /*
    cout << "pow(2, 5) = " << pow(2, 5) << endl;
    cout << "sqrt(25) = " << sqrt(25) << endl;
    cout << "sqrt(35.0) = " << sqrt(35.0) << endl;
    cout << "round(4.3) = " << round(4.3) << endl;
    cout << "round(4.6) = " << round(4.6) << endl;
    cout << "ceil(4.3) = " << ceil(4.3) << endl;
    cout << "ceil(4.6) = " << ceil(4.6) << endl;
    cout << "floor(4.3) = " << floor(4.3) << endl;
    cout << "floor(4.6) = " << floor(4.6) << endl;
    cout << "fmax(2.3, 4.3) = " << fmax(2.3, 4.3) << endl;
    cout << "fmin(2.3, 4.3) = " << fmin(2.3, 4.3) << endl;
    */

    /*
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;

    double age_double;
    cout << "Enter your age: ";
    cin >> age_double;
    cout << "You are " << age_double << " years old." << endl;

    char initial;
    cout << "Enter your initial: ";
    cin >> initial;
    cout << "Your initial is " << initial << endl;
    */

    /*
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is " << name << endl;
    */

    /*Addition calculator*/

    /*
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "num1 + num2 = " << num1 + num2 << endl;


    double num1_double, num2_double;

    cout << "Enter num1(double): ";
    cin >> num1_double;

    cout << "Enter num2(double): ";
    cin >> num2_double;

    cout << "num1 + num2 = " << num1_double + num2_double << endl;
    */

    /*Mad Libs Game*/

    /*
    string colour, plural_noun, celebrity;

    cout << "Enter a colour: ";
    getline(cin, colour);

    cout << "Enter a plural noun: ";
    getline(cin, plural_noun);

    cout << "Enter a celebrity: ";
    getline(cin, celebrity);


    cout << "Roses are " << colour << endl;
    cout << plural_noun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    */

    /*
    int luckyNums[] = {4, 323, 12, 54, 2, 7};

    cout << "luckyNums[0] = " << luckyNums[0] << endl;
    cout << "luckyNums[1] = " << luckyNums[1] << endl;
    cout << "luckyNums[2] = " << luckyNums[2] << endl;
    cout << "luckyNums[3] = " << luckyNums[3] << endl;
    cout << "luckyNums[4] = " << luckyNums[4] << endl;
    cout << "luckyNums[5] = " << luckyNums[5] << endl;

    luckyNums[2] = 32;

    cout << endl << "luckyNums[2] = " << luckyNums[2] << endl;
    */

    /*
    int luckyNums[20] = {4, 323, 12, 54, 2, 7};

    luckyNums[10] = 42;

    cout << "luckyNums[10] = " << luckyNums[10] << endl;
    // Video stopped at 53:08

    int someNums[20];

    someNums[0] = 100;

    cout << endl;

    cout << "someNums[0] = " << someNums[0] << endl;
    */

    /*
    cout << "Top" << endl;
    sayHi("Mike", 60);
    sayHi("Tom", 19);
    sayHi("Steve", 45);
    cout << "Bottom" << endl;
    */

    /*
    double result = cube(5.0);
    cout << result;
    */

    /*
    bool isMale = true;
    bool isTall = true;

    if (isMale) {
        cout << "You are a male.";
    } else {
        cout << "You are not male.";
    }

    cout << endl;

    if (isMale && isTall){
        cout << "You are a tall male.";
    } else if (isMale && !isTall){
        cout << "You are a short male.";
    } else if (!isMale && isTall) {
        cout << "You are tall but not male.";
    } else {
        cout << "You are not tall male.";
    }

    cout << endl;

    if (isMale || isTall){
        cout << "You are tall or you are a male.";
    } else {
        cout << "You are not tall and not a male.";
    }
    */

    /*
    cout << getMax(50, 50, 6);
    */

    /*
    double num1,num2,result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter Operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid Operator";
    }

    cout << result;
    */

    /*
    cout << getDayOfWeek(1);
    */

    /*
    int index = 1;
    while(index <= 5) {
        cout << "index = " << index << endl;
        index++;
    }
    */

    /*
    int secretNum = 32;
    int guessNum;
    int guessCount = 0;
    int guessLimit = 3;
    do {
        cout << "Guess the number: ";
        cin >> guessNum;
        guessCount++;

        if (guessNum == secretNum) {
            cout << "You have guessed the number correctly." << endl;
        } else if (guessLimit != guessCount){
            cout << "Wrong. Try guessing again." << endl;
        } else {
            cout << "Out of guesses. You lose.";
            break;
        }
    } while (guessNum != secretNum);
    */

    /*
    int numsArray[] = {1, 2, 5, 7, 8};

    for (int index = 1; index <= 5; index++) {
        cout << "index is "<< index << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++ ) {
        cout << "numsArray[" << i << "] = " << numsArray[i] << endl;
    }
    */

    /*
    cout << "power(4,3) = " << power(4, 3) << endl;
    */

    /*
    int numberGrid[3][2] = {
                            {1, 2},
                            {3, 4},
                            {5, 6},
                        };

    cout << numberGrid[1][1];

    cout << endl << endl;

    for (int i = 0; i < 3; i++) {
        //string str = "";
        for (int j = 0; j < 2; j++) {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
    */

    // VERY IMPORTANT :: Pointers

    /*
    int age = 23;
    int *p_age = &age;
    double cgpa = 3.71;
    double *p_cgpa = &cgpa;
    string name = "Meghashyaam";
    string *p_name = &name;

    cout << "Age memory address = " << p_age << endl;
    cout << "CGPA memory address = " << p_cgpa << endl;
    cout << "Name memory address = " << p_name << endl;

    cout << "Age memory address = " << p_age << ", has a value of " << *p_age << endl;
    cout << "CGPA memory address = " << p_cgpa << ", has a value of " << *p_cgpa << endl;
    cout << "Name memory address = " << p_name << ", has a value of " << *p_name << endl;
    */

    /*
    //Part 1
    Book book1("Lord of The Rings");

    book1.title = "Lord of The Rings";
    book1.author = "Tolkien";
    book1.pages = 700;

    Book book2("Ponniyin Selvan");

    book2.title = "Ponniyin Selvan";
    book2.author = "Kalki";
    book2.pages = 2000;

    cout << "Author of book1 is: " << book1.author << endl;
    cout << "Title of book1 is: " << book1.title << endl;
    cout << "Book1 has " << book1.pages << " pages." << endl;

    cout << "Author of book2 is: " << book2.author << endl;
    cout << "Title of book2 is: " << book2.title << endl;
    cout << "Book2 has " << book2.pages << " pages." << endl;
    */

    /*
    // Part 2
    Book book1("Lord of The Rings" , "Tolkien", 700);
    Book book2("Ponniyin Selvan", "Kalki", 2000);

    cout << "Book2 Author : " << book2.author << endl;
    cout << "Book2 Title : " << book2.title << endl;
    cout << "Book2 Pages : " << book2.pages << endl;

    cout << "Book1 Author : " << book1.author << endl;
    cout << "Book1 Title : " << book1.title << endl;
    cout << "Book1 Pages : " << book1.pages << endl;
    */

    /*
    Student student1("Meghashyaam", "Computer Science", 3.71);
    Student student2("Tom", "Liberal Arts", 3.47);

    cout << student1.hasFirstClass() << endl;
    cout << student2.hasFirstClass() << endl;
    */

    /*
    Movie movie1("The Avengers", "Josh Whedon", "PG-13");

    cout << movie1.getRating() << endl;
    */

    // Stopped at 2:40:08
    return 0;
}

void sayHi(string name, int age) {
    cout << "Hi " << name << "! You are " << age << " years old." << endl;
}
