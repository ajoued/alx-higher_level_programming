#!/usr/bin/python3
if __name__ == '__main__':
    from sys import argv
    leng = len(argv) - 1
    if (leng == 0):
        print("{} arguments.".format(leng))
    elif (leng == 1):
        print("{} argument:".format(leng))
    elif (leng > 1):
        print("{} arguments:".format(leng))
    if (leng > 0):
        for i in range (1,leng + 1):
            print("{}: {}".format(i, argv[i]))
