#/bin/sh
stat -s bomb.txt | cut -f 9 -d ' ' | sed 's/st_atime=*//' | sed 's/$/-1/' | bc | xargs date -r
