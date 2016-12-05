#!/usr/bin/env python
import sys
for line in sys.stdin:
    line = line.strip()
    bufs = line.split()
    for buf in bufs:
        buf = buf.strip()
        try:
            name, fru = buf.split(":") 
        except:
            continue
        name = name.strip()
        fruits = fru.split(",")
        for fruit in fruits:
            print ("%s:%s" % (fruit, name))
