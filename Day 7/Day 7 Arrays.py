#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    arr = list(map(int, input().rstrip().split()))
    #for i in range(n-1,-1,-1):
       # print(arr[i],end=" ")
    #or
    for i in reversed(range(n)):
        print(arr[i],end=" ")
