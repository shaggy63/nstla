#!/bin/bash

#cat ns.log* | cut -d ":" -f 8,9,10 | grep "Source" | sed 's/Source//g' | sed 's/Vserver//g' | sed 's/NatIP//g' | sed 's/Destination//g' | sed 's/ //g' | sed $'s/:/\t/g' | sed $'s/-/\t/g' | sort | cut -d $'\t' -f 1,3,4 | uniq -c | sort -r -s -n -k 1,1 > ips


cat ns.log* | cut -d ":" -f 8,9,10 | cut -d "-" -f 1,2 | grep "Source" | sed 's/Source//g' | sed 's/Vserver//g' | sed 's/NatIP//g' | sed 's/Destination//g' | sed 's/ //g' | sed $'s/:/\t/g' | sed $'s/-/\t/g' | cut -d $'\t' -f 1,3,4 | sort | uniq -c | sort -r -s -n -k 1,1 > ips
