import matplotlib.pyplot as plt
import pandas as pd

# Load in the data with read_csv()
# TODO #1: change the file name to your data file name
temp_data = pd.read_csv("temperature_data.csv", header=0)   # identify the header row
plt.plot(temp_data['Year'], temp_data['Anomaly'], color='gray')
plt.ylabel('Temprature')
plt.xlabel('Year')
plt.title('Temprature a Year')
plt.show()