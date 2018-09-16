import re
import sys

dec_digit = '[0-9]'
hex_digit = f'{dec_digit}|[a-f]|[A-F]'
exp = 'p|P'
suff = '(f|F|l|L)?' 
sign = '(\\+|-)?'
hexa = f'({hex_digit})+' 
hex_floating_point = f'^(0x|0X)({hexa}|{hexa}.{hexa}|.{hexa})({exp})({sign})({dec_digit}+)({suff})$'

reg = re.compile(hex_floating_point)

filepath = sys.argv[1]

fp = open(filepath)
#print (f'Regular expression for a hexadecimal floating point: {hex_floating_point}')
for line in fp.readlines():
    line = line.strip()
    print(f'{"Matched:" if reg.search(line) else "Not Matched:"} {line}')