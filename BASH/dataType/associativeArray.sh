#!/bin/bash

declare -A colors
## associatice array is like sets in other prog lang

colors[apple]="red"
colors[banana]="yellow"
colors[grapes]="green"
colors[orange]="orange"

unset colors[banana]
echo "${colors[apple]}"

