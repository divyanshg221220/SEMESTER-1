# Define a class called Student
class Student:
    # Constructor to initialize student details
    def __init__(self, enrollment_no, usn, branch, name):
        self.enrollment_no = enrollment_no
        self.usn = usn
        self.branch = branch
        self.name = name

    # User-defined function to display student details
    def display_details(self):
        print("----- Student Details -----")
        print(f"Enrollment Number : {self.enrollment_no}")
        print(f"USN               : {self.usn}")
        print(f"Branch            : {self.branch}")
        print(f"Student Name      : {self.name}")
        print("---------------------------")


# Main program starts here
# Taking user input for student details
enrollment_no = input("Enter Enrollment Number: ")
usn = input("Enter USN: ")
branch = input("Enter Branch Name: ")
name = input("Enter Student Name: ")

# Create (instantiate) an object of the Student class
student1 = Student(enrollment_no, usn, branch, name)

# Call the user-defined function to display details
student1.display_details()
