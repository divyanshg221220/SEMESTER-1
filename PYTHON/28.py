import pandas as pd
import matplotlib.pyplot as plt

# Step 1: Create the data
data = {
    'Age': [18, 22, 25, 30, 35, 40, 45, 50, 55, 60],
    'Weight': [55, 60, 65, 70, 72, 75, 78, 80, 77, 74],
    'BMI': [19.5, 20.8, 21.6, 22.8, 23.4, 24.2, 25.0, 26.1, 25.5, 24.8]
}

# Step 2: Create a DataFrame
df = pd.DataFrame(data)

# Step 3: Save the DataFrame to a CSV file
csv_filename = "person_data.csv"
df.to_csv(csv_filename, index=False)

print(f"CSV file '{csv_filename}' created successfully!\n")
print(df)

# Step 4: Read the CSV file
df_read = pd.read_csv(csv_filename)

# Step 5: Plot the data using Matplotlib
plt.figure(figsize=(8, 5))

# Plot Age vs Weight
plt.plot(df_read['Age'], df_read['Weight'], marker='o', label='Weight (kg)')

# Plot Age vs BMI
plt.plot(df_read['Age'], df_read['BMI'], marker='s', label='BMI')

# Add graph details
plt.title('Age vs Weight and BMI')
plt.xlabel('Age (years)')
plt.ylabel('Value')
plt.legend()
plt.grid(True)
plt.show()
