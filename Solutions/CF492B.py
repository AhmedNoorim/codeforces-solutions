# Vanya and Lanterns

# we have to calculate the biggest distance between lanterns, try to light it
# if distance from edge and lantern is bigger then before, then we this distance = answer

input_string1 = input().split(" ")

# assigning respective indices values to variables
lanterns, length = [int(num) for num in input_string1]

input_string2 = input().split(" ")
light_indices = [int(num) for num in input_string2]
light_indices.sort()

# distance from 0 to 1st lantern
max_distance = light_indices[0]

# distance from last lantern to length
distance_back = length - light_indices[len(light_indices) - 1]
if distance_back > max_distance:
    max_distance = distance_back

for i in range(len(light_indices) - 1):
    # distance between 2 consecutive lantern
    distance_between = light_indices[i + 1] - light_indices[i]
    if distance_between / 2 > max_distance:
        max_distance = distance_between / 2

print(max_distance)
