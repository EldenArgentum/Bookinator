#include <iostream> // input output console
#include <fstream> // file stream stuff
#include <string> // string stuff
#include <stdio.h> // pause console

// This is the bookinator!

std::string numberToYear(int month) {
    switch (month)
    {
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    }
    return "Not a valid month number.";
}

int main() {
// std::ofstream ostream();  // istream reads, ostream writes
        std::ofstream ostream;
        std::ifstream istream;

        // Used program?
        char programUse;
        std::string textFile = "Book Backlog.txt";
        std::cout << "Welcome to the bookinator! Have you used this program before? (y/n)\t";
        std::cin >> programUse;
        programUse = tolower(programUse);

        // If yes, append to existing text file
        if (programUse == 'y') {
            ostream.open(textFile, std::ios::app);
            // std::ofstream ostream(textFile, std::ios::app);
            }
        // If no, create new text file
        else if (programUse == 'n') {
            ostream.open(textFile);
            std::ofstream ostream(textFile);
            std::cout << std::endl;
            std::cout << "This program will organize your stubborn backlog of to-read books into a text file."
            << std::endl << std::endl << std::endl;
        }

    while (true) {
        
        // Book title
        std::string Title;
        std::cout << "What is the title of the book?\t";
        getline(std::cin, Title);
        getline(std::cin, Title);
        std::cout << std::endl << "The title entered is:\t" << Title << std::endl << std::endl;

        std::string Author;
        std::cout << "What is the author of the book?\t";
        getline(std::cin, Author);
        std::cout << std::endl << "The author entered is:\t" << Author << std::endl << std::endl;

        // Book genre
        std::string Genre;
        std::cout << "What is the genre of the book?\t";
        getline(std::cin, Genre);
        std::cout << std::endl << "The genre entered is:\t" << Genre << std::endl << std::endl;

        // Book release date
        int PublicationDate[3];     // [0] is month, [1] is day, [2] is year

        std::cout << "--- Publication date ---" << std::endl << std::endl;
        std::cout << "What is the publication month (number 1-12)?\t";
        while (true) {
            std::cin >> PublicationDate[0];     // Month
            if (PublicationDate[0] == 1 ||
            PublicationDate[0] == 2 ||
            PublicationDate[0] == 3 ||
            PublicationDate[0] == 4 ||
            PublicationDate[0] == 5 ||
            PublicationDate[0] == 6 ||
            PublicationDate[0] == 7 ||
            PublicationDate[0] == 8 ||
            PublicationDate[0] == 9 ||
            PublicationDate[0] == 10 ||
            PublicationDate[0] == 11 ||
            PublicationDate[0] == 12) {
            break;
            }
            else {
                std::cout << "Please enter a month number between 1-12:\t";
            }
        }
        
// ayayaya

        std::cout << "What is the publication day?\t";
        while (true) {
            std::cin >> PublicationDate[1];     // Day
            if (PublicationDate[1] == 1 ||
            PublicationDate[1] == 2 ||
            PublicationDate[1] == 3 ||
            PublicationDate[1] == 4 ||
            PublicationDate[1] == 5 ||
            PublicationDate[1] == 6 ||
            PublicationDate[1] == 7 ||
            PublicationDate[1] == 8 ||
            PublicationDate[1] == 9 ||
            PublicationDate[1] == 10 ||
            PublicationDate[1] == 11 ||
            PublicationDate[1] == 12 ||
            PublicationDate[1] == 13 ||
            PublicationDate[1] == 14 ||
            PublicationDate[1] == 15 ||
            PublicationDate[1] == 16 ||
            PublicationDate[1] == 17 ||
            PublicationDate[1] == 18 ||
            PublicationDate[1] == 19 ||
            PublicationDate[1] == 20 ||
            PublicationDate[1] == 21 ||
            PublicationDate[1] == 22 ||
            PublicationDate[1] == 23 ||
            PublicationDate[1] == 24 ||
            PublicationDate[1] == 25 ||
            PublicationDate[1] == 26 ||
            PublicationDate[1] == 27 ||
            PublicationDate[1] == 28 ||
            PublicationDate[1] == 29 ||
            PublicationDate[1] == 30 ||
            PublicationDate[1] == 31) {
            break;
            }
            else {
                std::cout << "Please enter a day (number) between 1-31:\t";
            }            
        }
        

        std::cout <<"What is the publication year?\t";
        std::cin >> PublicationDate[2];     // Year

        // Cyberpunk 2077 easter egg
        if (PublicationDate[2] == 2077) {
            std::cout << "Wake up, Samurai. There's no way any book has been announced that late." << std::endl;
        }


        std::cout << std::endl << "The publication date entered is:\t" 
        << numberToYear(PublicationDate[0]) << " " << PublicationDate[1] << " " << PublicationDate[2] << std::endl << std::endl;

        // Puts the information entered into the text file.
        // Eventually expand, make it so that you can add multiple genres
        ostream << "Title:\t        " << Title << std::endl <<
        "Author:\t        " << Author << std::endl <<
        "Genre:\t        " << Genre << std::endl <<
        "Release Date:\t" << numberToYear(PublicationDate[0]) << " " << 
        PublicationDate[1] << " " << PublicationDate[2] << std::endl << std::endl;


        // Repeat this program!
        char repeat;
        std::cout << "Would you like to add another book? (Enter y to restart program... Enter n to quit)\t";
        std::cin >> repeat;
        repeat = tolower(repeat);
        if (repeat == 'n') {
            break;
        }
    }
        
        
    ostream.close();
    std::cout << "Thank you for using my program! If you would like to use this program again,\nclose the program and open it again." << std::endl
    << std::endl << "P.S. this program will not add to existing text file in the future if directory or name of text file is changed." << std::endl <<
    std::endl;
            
    system("pause"); // So the terminal doesn't just quit out after the program's done

    std::cout << "tesitn git";
    return 0;
}

    // char released;       Another feature idea that requires some more knowledge, but I'd love to expand in the future...
    // If the book hasn't released, then create a separate text file for upcoming releases

    // std::cout << "Has this book been released? (y/n)\t";
    // std::cin >> released;
    // released = tolower(released);

    // if (released == 'y') {
    //     std::string releaseStatus = "This book has "
    // }