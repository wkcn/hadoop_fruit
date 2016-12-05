hadoop jar /usr/lib/hadoop/share/hadoop/tools/lib/hadoop-*streaming*.jar \
-file ./cpp/mapper     -mapper ./cpp/mapper \
-file ./cpp/reducer    -reducer ./cpp/reducer \
-input ./hdfs_in/*    -output ./hdfs_out
python2 count.py >> rec.txt
