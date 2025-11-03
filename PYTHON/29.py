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

# Step 3: Save to a CSV file
csv_filename = "person_data_hist.csv"
df.to_csv(csv_filename, index=False)

print(f"CSV file '{csv_filename}' created successfully!\n")
print(df)

# Step 4: Read CSV file
df_read = pd.read_csv(csv_filename)

# Step 5: Plot histograms using Matplotlib
plt.figure(figsize=(10, 6))

# Histogram for Age
plt.subplot(3, 1, 1)
plt.hist(df_read['Age'], bins=5, color='skyblue', edgecolor='black')
plt.title('Histogram of Age')
plt.xlabel('Age')
plt.ylabel('Frequency')

# Histogram for Weight
plt.subplot(3, 1, 2)
plt.hist(df_read['Weight'], bins=5, color='lightgreen', edgecolor='black')
plt.title('Histogram of Weight')
plt.xlabel('Weight (kg)')
plt.ylabel('Frequency')

# Histogram for BMI
plt.subplot(3, 1, 3)
plt.hist(df_read['BMI'], bins=5, color='salmon', edgecolor='black')
plt.title('Histogram of BMI')
plt.xlabel('BMI')
plt.ylabel('Frequency')

plt.tight_layout()
plt.show()
