# Using Panda, create a DataFrame, initialize it with the contents such as : your  Enrollment Number and Name and display them.
import pandas as pd
enrollment_number=[]
name=[]
for i in range(int(input("Enter number of entries: "))):
    enrollment_number.append(int(input("Enter your enrollment number: ")))
    name.append(input("Enter your name: "))
data={'Enrollment Number':enrollment_number,'Name':name}
df=pd.DataFrame(data)
print(df)