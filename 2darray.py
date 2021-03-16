def init_arr2d_square(x):

    if not x: x = 17

    arr2d = [] # Main array(actually list)
    z = []  # Z axis

    for i in range(1, x):
        z.append("") # Adding empty strings to z to define length

    for i in range(1, x):
        arr2d.append(z)  # Actual 2D, z is appended to main list

    return arr2d
