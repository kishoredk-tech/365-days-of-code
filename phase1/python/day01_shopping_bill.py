# Step 1 - take inputs for 3 items
price1, qty1 = float(input("Item 1 price: ")), int(input("Item 1 quantity: "))
price2, qty2 = float(input("Item 2 price: ")), int(input("Item 2 quantity: "))
price3, qty3 = float(input("Item 3 price: ")), int(input("Item 3 quantity: "))

# Step 2 - calculate each item total
item1_total = price1 * qty1
item2_total = price2 * qty2
item3_total = price3 * qty3

# Step 3 - add them all
bill_total = item1_total + item2_total + item3_total

# Step 4 - check if total > 1000, apply 10% discount
if bill_total > 1000:
    discount = bill_total * 0.1
    final = bill_total - discount
    print(f"Discount applied: ₹{discount:.2f}")
else:
    final = bill_total

# Step 5 - print final amount
print(f"Total Bill: ₹{bill_total:.2f}")
print(f"Final Amount: ₹{final:.2f}")