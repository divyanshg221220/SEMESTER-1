# Write a Program to create and display the content of the tuple. Initialize the tuple with the name of the cities. Display content of the tuple along with name/index positions of the cities.
cities=eval(input("Enter the names of cities in tuple format : "))
for index,city in enumerate(cities): print(f"City at index {index} is {city}")