import ctypes

TempArrayType = ctypes.c_int32 * 7
temp = TempArrayType(12, 15, 18, 21, 24, 27, 30)

total_bytes = ctypes.sizeof(temp)

# temp._type_ is the ctypes type used for each array element
element_bytes = ctypes.sizeof(temp._type_) 

count = total_bytes // element_bytes  # Output: 7

print(f"Total array size: {total_bytes}")
print(f"One element size: {element_bytes}")
print(f"Element count: {count}")

print(*temp)

for i, val in enumerate(temp):
    print(f"temp[{i}] = {val}")

