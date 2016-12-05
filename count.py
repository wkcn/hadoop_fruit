fin = open("hdfs_out/part-00000")
bestFruit = ""
bestPeople = []
for line in fin.readlines():
    line = line.strip()
    fruit, ns = line.split(":")
    names = ns.split(",")
    if len(names) > len(bestPeople):
        bestPeople = names
        bestFruit = fruit

print bestFruit
print bestPeople
