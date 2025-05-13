#include <iostream>
#include "DigitalWallet.h"

int main() {
    // Create a digital wallet
    DigitalWallet myWallet("John Doe", 100.0);

    // Display wallet details
    displayWalletDetails(myWallet);

    // Add money to the wallet
    myWallet.addMoney(50.0);

    // Add money to the wallet
    myWallet.addMoney(70);

    // Spend money from the wallet
    myWallet.spendMoney(30.0);

    myWallet.addMoney(70);

    // Save wallet data to a file
    myWallet.saveToFile("wallet_data.txt");

    DigitalWallet myWallet1("nishant dhall", 1200.0);

    // Display wallet details
    displayWalletDetails(myWallet);

    // Add money to the wallet
    myWallet.addMoney(50.0);

    // Add money to the wallet
    myWallet.addMoney(70);

    // Spend money from the wallet
    myWallet.spendMoney(30.0);

    myWallet.addMoney(70);

    // Save wallet data to a file
    myWallet.saveToFile("wallet_data.txt");
    return 0;
}