1. Create a .csv file(with contents like : Age, Weight and BMI). Read the content of the file and using Panda and MatPlotLib, plot the graph.
2. Create a .csv file(with contents like : Age, Weight and BMI). Read the
       content of the file and using Panda and MatPlotLib, plot the histogram
3.  Write a Program to create a class called ‘Student’ with fields such as :
  Enrollment Number, USS Name, Branch Name, Student Name etc. Instantiate a class and make a call to user defined function to display the
 details of students.
4 Define Employee Class with fields such as Employee ID and Employee
 Name. Instantiate the class, invoke the constructor and make a call to user
 defined function to display the information about employee.
# Define the Student class
class Student:
    # Constructor to initialize student details
    def __init__(self, enrollment_number, uss_name, branch_name, student_name):
        self.enrollment_number = enrollment_number
        self.uss_name = uss_name
        self.branch_name = branch_name
        self.student_name = student_name

    # User-defined function to display details
    def display_details(self):
        print("----- Student Details -----")
        print(f"Enrollment Number : {self.enrollment_number}")
        print(f"USS Name          : {self.uss_name}")
        print(f"Branch Name       : {self.branch_name}")
        print(f"Student Name      : {self.student_name}")


# Instantiate the Student class
student1 = Student("0234CS210", "University School of Studies", "Computer Science", "Neeraj Singh")

# Call the function to display student details
student1.display_details()






# Define the Employee class
class Employee:
    # Constructor to initialize employee details
    def __init__(self, emp_id, emp_name):
        self.emp_id = emp_id
        self.emp_name = emp_name

    # User-defined function to display employee information
    def display_info(self):
        print("----- Employee Information -----")
        print(f"Employee ID : {self.emp_id}")
        print(f"Employee Name : {self.emp_name}")


# Instantiate the Employee class
employee1 = Employee("E101", "Rahul Sharma")

# Call the function to display employee details
employee1.display_info()




import pandas as pd
import matplotlib.pyplot as plt

# Step 1: Create a CSV file
data = {
    "Age": [18, 22, 25, 30, 35, 40, 45, 50],
    "Weight": [55, 60, 65, 70, 75, 80, 78, 76],
    "BMI": [20.5, 21.8, 22.3, 23.0, 24.1, 25.3, 26.0, 25.5]
}

# Create a DataFrame
df = pd.DataFrame(data)

# Save the DataFrame to a CSV file
df.to_csv("student_bmi.csv", index=False)

print("CSV file 'student_bmi.csv' created successfully!")

# Step 2: Read the CSV file
df_read = pd.read_csv("student_bmi.csv")
print("\nContents of CSV file:")
print(df_read)

# Step 3: Plot the graph using Matplotlib
plt.figure(figsize=(8,5))
plt.plot(df_read["Age"], df_read["Weight"], marker='o', label="Weight (kg)")
plt.plot(df_read["Age"], df_read["BMI"], marker='s', label="BMI")

plt.title("Age vs Weight and BMI")
plt.xlabel("Age (years)")
plt.ylabel("Values")
plt.legend()
plt.grid(True)
plt.show()





import pandas as pd
import matplotlib.pyplot as plt

# Step 1: Create a CSV file with sample data
data = {
    "Age": [18, 22, 25, 30, 35, 40, 45, 50, 55, 60],
    "Weight": [50, 55, 60, 65, 70, 75, 78, 80, 82, 85],
    "BMI": [18.5, 19.8, 21.2, 22.0, 23.1, 24.5, 25.2, 25.8, 26.0, 26.5]
}

# Create a DataFrame
df = pd.DataFrame(data)

# Save DataFrame to a CSV file
df.to_csv("bmi_data.csv", index=False)
print("CSV file 'bmi_data.csv' created successfully!")

# Step 2: Read the CSV file using pandas
df_read = pd.read_csv("bmi_data.csv")
print("\nContents of CSV file:")
print(df_read)

# Step 3: Plot histogram for Age, Weight, and BMI
plt.figure(figsize=(10,6))
plt.hist(df_read["Age"], bins=5, alpha=0.6, label="Age")
plt.hist(df_read["Weight"], bins=5, alpha=0.6, label="Weight")
plt.hist(df_read["BMI"], bins=5, alpha=0.6, label="BMI")

plt.title("Histogram of Age, Weight, and BMI")
plt.xlabel("Values")
plt.ylabel("Frequency")
plt.legend()
plt.grid(True)
plt.show()