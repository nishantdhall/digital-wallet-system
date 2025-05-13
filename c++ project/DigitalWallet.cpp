#include "DigitalWallet.h"

// Constructor implementation
DigitalWallet::DigitalWallet(std::string name, double initialBalance) {
    ownerName = name;
    balance = initialBalance >= 0 ? initialBalance : 0; // Ensure balance is non-negative
}

// Function to add money if value is double---polymorphism
void DigitalWallet::addMoney(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Added " << amount << " to wallet. New balance: " << balance << std::endl;
    } else {
        std::cout << "Amount must be positive!" << std::endl;
    }
}

// Function to add money if value is int---polymorphism
void DigitalWallet::addMoney(int amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Added " << amount << " to wallet. New balance: " << balance << std::endl;
    } else {
        std::cout << "Amount must be positive!" << std::endl;
    }
}

// Function to spend money
void DigitalWallet::spendMoney(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Spent " << amount << " from wallet. New balance: " << balance << std::endl;
    } else {
        std::cout << "Insufficient balance or invalid amount!" << std::endl;
    }
}

// // Function to save wallet data to a file
void DigitalWallet::saveToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "Owner: " << ownerName << std::endl;
        outFile << "Balance: " << balance << std::endl;
        outFile.close();
        std::cout << "Wallet data saved to " << filename << std::endl;
    } else {
        std::cout << "Unable to open file!" << std::endl;
    }
}

// Friend function to display wallet details
void displayWalletDetails(const DigitalWallet& wallet) {
    std::cout << "Wallet Owner: " << wallet.ownerName << std::endl;
    std::cout << "Current Balance: " << wallet.getBalance() << std::endl;
}