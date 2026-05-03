#include <iostream>
using namespace std;

int main() {
    float price1, price2, price3;
    int qty1, qty2, qty3;

    // Step 1 - inputs
    cout << "Item 1 price: "; cin >> price1;
    cout << "Item 1 quantity: "; cin >> qty1;
    cout << "Item 2 price: "; cin >> price2;
    cout << "Item 2 quantity: "; cin >> qty2;
    cout << "Item 3 price: "; cin >> price3;
    cout << "Item 3 quantity: "; cin >> qty3;

    // Step 2 - item totals
    float item1_total = price1 * qty1;
    float item2_total = price2 * qty2;
    float item3_total = price3 * qty3;

    // Step 3 - bill total
    float bill_total = item1_total + item2_total + item3_total;

    // Step 4 - discount
    float final_amount;
    if (bill_total > 1000) {
        float discount = bill_total * 0.1;
        final_amount = bill_total - discount;
        cout << "Discount applied: Rs." << discount << endl;
    } else {
        final_amount = bill_total;
    }

    // Step 5 - print
    cout << "Total Bill: Rs." << bill_total << endl;
    cout << "Final Amount: Rs." << final_amount << endl;

    return 0;
}