# Define Employee Class with fields such as Employee ID and Employee Name. Instantiate the class, invoke the constructor and make a call to user defined function to display the information about employee.
# Define a class called Employee
class Employee:
    # Constructor to initialize employee details
    def __init__(self, emp_id, emp_name):
        self.emp_id = emp_id
        self.emp_name = emp_name

    # User-defined function to display employee details
    def display_info(self):
        print("----- Employee Information -----")
        print(f"Employee ID   : {self.emp_id}")
        print(f"Employee Name : {self.emp_name}")
        print("--------------------------------")


# Main Program
# Taking user input for employee details
emp_id = input("Enter Employee ID: ")
emp_name = input("Enter Employee Name: ")

# Instantiate (create an object of) the Employee class
employee1 = Employee(emp_id, emp_name)

# Call the user-defined function to display employee info
employee1.display_info()
