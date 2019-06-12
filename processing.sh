#!/bin/bash
cat ns.log* | cut -d ":" -f 8 | grep "Source" | sed 's/Source//g' | sort | uniq -c | sort -r -s -n -k 1,1 >> ips
