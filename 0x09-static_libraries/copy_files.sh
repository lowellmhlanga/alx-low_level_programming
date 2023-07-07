#!/bin/bash

destination_directory="/filtered"

while IFS= read -r file_name; do
    find / -name "$file_name" -exec cp {} "$destination_directory" \;
done < file_list.txt
