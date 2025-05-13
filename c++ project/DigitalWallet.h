#ifndef DIGITALWALLET_H
#define DIGITALWALLET_H //structure defination of digitalwallet.cpp

#include <iostream>
#include <fstream>
#include <string>

class DigitalWallet {
private:
    std::string ownerName;
    double balance;

public:
    // Constructor
    DigitalWallet(std::string name, double initialBalance);

    // Inline function to get the balance
    inline double getBalance() const { return balance; }

    //polymorphism
    // Function to add money if value is double
    void addMoney(double amount);

    // Function to add money if value is int
    void addMoney(int amount);

    // Function to spend money
    void spendMoney(double amount);

    // Function to save wallet data to a file
    void saveToFile(const std::string& filename);

    // Friend function to display wallet details
    friend void displayWalletDetails(const DigitalWallet& wallet);
};

#endif // DIGITALWALLET_H