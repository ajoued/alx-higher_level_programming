#!/usr/bin/python3
def no_c(my_string):
    if isinstance(my_string, str):
        new_str = ""
        for char in my_string:
            if (char != 'C') and (char != 'c'):
                new_str += char
        return (new_str)
