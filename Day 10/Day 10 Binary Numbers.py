#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    su=0
    ma=0
    while n>0:
        if n%2==1:
            su+=1
            if su>ma:
                ma=su
        else:
            su=0
        n//=2
        
    print(ma)
