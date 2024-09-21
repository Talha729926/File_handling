#include <iostream>   
#include <fstream>   
#include <string>     

void displayFileContent(const std::string & filename) {
  std::ifstream file(filename); 
  std::string line; 

  if (file.is_open()) { 
      std::cout << "File content:" << std::endl; 
    while (std::getline(file, line)) { 
      std::cout << line << std::endl; 
    }
    file.close(); 
  } else {
    std::cout << "Failed to open the file." << std::endl; 
  }
}

int main() {
  displayFileContent("ali.txt"); 
  std::cout << std::endl;

  std::ofstream outputFile; 
  outputFile.open("ali.txt", std::ios::app); 

  displayFileContent("ali.txt"); 
  std::cout << std::endl;

  if (outputFile.is_open()) { 
    std::string newData; 

    std::cout << "Enter the data to append: "; 
    // Read the new data from the user
    std::getline(std::cin, newData);

    // Append the new data to the file
    outputFile << newData << std::endl; 
    outputFile.close();

    std::cout << "Data appended successfully." << std::endl; 
    displayFileContent("ali.txt"); 
    std::cout << std::endl;
  } else {
    std::cout << "Failed to open the file." << std::endl; 
  }

  return 0; 
}
