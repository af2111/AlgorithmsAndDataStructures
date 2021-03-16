def init_arr2d_square(x):

    if not x: x = 17

    arr2d = [] # Main array(actually list)
    z = []  # Z axis

    for i in range(1, x):
        z.append("") # Adding empty strings to z to define length

    for i in range(1, x):
        arr2d.append(z)  # Actual 2D, z is appended to main list

    return arr2d

def init_arr2d_rect(z, x):

    # Same as before, just that you can choose the lengths

    arr2d = [] # Main array(actually list)
    zaxis = []  # Z axis

    for i in range(1, z):
        z.append("") # Adding empty strings to z to define length

    for i in range(1, x):
        arr2d.append(zaxis) 

    return arr2d
