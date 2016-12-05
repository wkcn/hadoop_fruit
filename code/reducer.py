#!/usr/bin/env python
import sys
data = {}
for buf in sys.stdin:
    fruit, ns = buf.split(":") 
    names = ns.split(",")
    if fruit not in data:
        data[fruit] = set()
    for name in names:
        name = name.strip()
        data[fruit].add(name)
for fruit in data.keys():
    print ("%s:%s" % (fruit, ",".join(data[fruit])))
