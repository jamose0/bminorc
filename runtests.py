import os
from os import listdir

files = [f for f in listdir("tests/")]

print("-- Welcome to the bminorc test suite --")
print(" Running tests for files:")

for n, f in enumerate(files):
    print("\t" + str(n + 1) + " " + f)
    print(" - stdout")
    os.system("./build/src/bminorc " + "tests/" + f)
    print(" - end")
