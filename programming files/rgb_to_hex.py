def rgb_to_hex(r, g, b):
    # Insert the r,g, and b values into the function
    # For each, take the max of 0 and the min value between white and the value
    r = max(0, min(255, r))
    g = max(0, min(255, g))
    b = max(0, min(255, b))
    return '{:02X}{:02X}{:02X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
