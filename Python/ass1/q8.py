temperature = float(input("Enter temperature: "))
unit = input("Enter unit (C for Celsius or F for Fahrenheit): ")

if unit.upper() == "C":
    fahrenheit = (temperature * 9 / 5) + 32
    print("Temperature in Fahrenheit:", fahrenheit)

elif unit.upper() == "F":
    celsius = (temperature - 32) * 5 / 9
    print("Temperature in Celsius:", celsius)

else:
    print("Invalid unit.")