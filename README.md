# music-database

In this assignment, we will re-do our program that handled a music database. The objective here is to focus on providing quality code and to use better development methods.

### Database description
The music database contains 3 types of data:

* Artists (name, ...)
* Album (references to artists, title, release year, ...)
* Song (title, reference to albums, duration, edit version, ...)

**Note:** References should be real references, i.e. pointers and not a name duplication.

**Note:** You may add optional fields if you want (e.g. artist nationality, ...)

### Program functionalities
The program should provide an interface for:
* Manually entering new artists, albums, songs
* Searching in the database for an artist, an album, a song
* Importing & Exporting data from a file (you should specify the format)
* Printing out the catalogue of the database, organized (format to be defined)

### Requirements
* Your program should be organized in multiple classes => multiple CPP/H files
* The code should be up to the standards (comments, variables & methods names, indentation, …)
* Error must be handled : test values of variables & methods parameters
* Memory allocation should be dynamic (i.e. no empty objects, but you can have an array of pointers)
* Testing => Write some test functions that implement scenarios

### Turning in the assignment
* Be on time or lose 5 points per day
* Turn in only C++, H and your own data files (no project, no executable, ...) compressed in a ZIP archive
