#Compile the Record and PhoneBook implementation files
g++ -c Record.cpp -o Record.o
g++ -c Phonebook.cpp -o Phonebook.o

#Compile the main application
g++ Record.o Phonebook.o myphoneApp.cpp -o myphoneApp

#Print a success message
echo "Build complete. Run the application using ./myphoneApp"
