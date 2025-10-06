# Using pandas create a dataframe initialize it with the content such as your enrollment number and name and display them.
import pandas as pd
enrollment_number=[]
name=[]
for i in range(int(input("Enter number of entries: "))):
    enrollment_number.append(int(input("Enter your enrollment number: ")))
    name.append(input("Enter your name: "))
data={'Enrollment Number':enrollment_number,'Name':name}
df=pd.DataFrame(data)
print(df)