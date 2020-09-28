from cs50 import get_float

coins = 0

# Prompt user for input
while True:
    dollars = get_float("Change owed: ")
    if dollars > 0:
        break

# Converting dollars to cents
dollars *= 100
change = round(dollars)
quarters = 0
nickels = 0
dimes = 0
pennies = 0

while change > 0:
    # Calculating quarters
    if (change >= 25):
        coins += change // 25
        quarters = change // 25
        change = change % 25

    # Calculating dimes
    elif (change >= 10):
        coins += change // 10
        dimes = change // 10
        change = change % 10

    # Calculating nickels
    elif (change >= 5):
        coins += change // 5
        nickels = change // 5
        change = change % 5

    # Calculating pennies
    else:
        coins += change
        pennies = change
        change = 0

print(coins)
