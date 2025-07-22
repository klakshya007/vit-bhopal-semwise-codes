# Given data
time = [0,2, 4, 6, 8, 10, 12, 14,16, 18, 20]  # in minutes
velocity = [0,10,18,25,29,32,20,11,5,2,0]  # in km/min

# Function to calculate the distance using Trapezoidal Rule
def calculate_distance(time, velocity):
    distance = 0
    for i in range(len(time) - 1):
        # Calculate the time interval
        h = time[i + 1] - time[i]
        # Apply the Trapezoidal rule
        distance += (velocity[i] + velocity[i + 1]) * h / 2
    return distance

# Calculate the total distance
total_distance = calculate_distance(time, velocity)

print(f"The approximate distance covered in 20 minutes is {total_distance} km.")
