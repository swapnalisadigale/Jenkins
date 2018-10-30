# Empty tuple
tuple = ()
print(tuple)

# Initialisation of a tuple with a single input
tuple = (50)                         # This initialisation considers input as an integer
print("tuple: ",tuple)
tuple = (50,)                        # This will take input as a tuple 
print("tuple: ",tuple)

# Initialising a tuple with different data types
tup1 = ('physics', 'chemistry', 1997, 2000)
print("tup1",tup1)

# Accessing values in tuples
print("tup1[0]: ", tup1[0])
print("tup1[1:5]: ", tup1[1:2])

# Length of tuple
print("Length of tuple is: ",len(tup1))

# Maximum and Minimum
#print("Maximum of tuple is: ",max(tup1))
#print("Minimum of tuple is: ",min(tup1))

# Concatenation of tuples
t1 = (0, 8, 9)
t2 =(7, 5, 2)
print("Concatenated tuple is: ",t1+t2)

# Delete a tuple
tup = (1, 2, 3)
print(tup)
del tup
#print("After deleting tup: ",tup)

# 
# Converting a list into tuple
list = [1,2,3,4]
print(list)
#print(tuple(1,2,3,4))
