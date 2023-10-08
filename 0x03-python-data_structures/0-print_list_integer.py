#!/usr/bin/python3
def print_list_integer(my_list=[]):
    if (type(my_list) == int):
        for i in my_list:
            print("{}".format(i))
