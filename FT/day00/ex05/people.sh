ldapsearch "uid=z*" | grep "cn:" | sed 's/cn: //' | sort -r -f -d
