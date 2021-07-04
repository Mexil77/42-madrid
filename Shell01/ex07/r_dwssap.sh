#!/bin/bash
export FT_LINE1=7
export FT_LINE2=15
cat /etc/passwd | egrep -o '.*\*' | awk 'NR % 2 == 0' | cut -d: -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/..$/ ./'
