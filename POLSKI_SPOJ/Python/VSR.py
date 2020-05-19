number_of_cases = input()
for x in range(int(number_of_cases)):
    velocities_without_whitespaces = input()
    two_velocities = list(velocities_without_whitespaces.split(" "))
    print(int((2 * int(two_velocities[0]) * int(two_velocities[1])) / (int(two_velocities[0]) + int(two_velocities[1]))))
