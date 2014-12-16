from __future__ import print_function
# imported modules aka files
import sys

# Gather our code in a main() function
def main():
  print ('Hello there')
  print ('Enter the numbers you want to add: 1. ')
  a = int(input('A='))
  b = int(input('B='))
  c=abs(a)+abs(b)
  print ('Sum=',c)
  f = open('./incorrect_output_py.txt','w')
  f.write(str(c))
  # Command line args are in sys.argv[1], sys.argv[2] ..
  # sys.argv[0] is the script name itself and can be ignored


# Standard boilerplate to call the main() function to begin
# the program.
if __name__ == '__main__':
  main()
