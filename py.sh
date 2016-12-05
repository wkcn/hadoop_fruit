hadoop jar /usr/lib/hadoop/share/hadoop/tools/lib/hadoop-*streaming*.jar \
-file ./code/mapper.py     -mapper ./code/mapper.py \
-file ./code/reducer.py    -reducer ./code/reducer.py \
-input ./hdfs_in/*    -output ./hdfs_out
python2 count.py >> rec.txt
