#!/bin/bash
ldapsearch -Q "(uid=z*)" cn | sed -e '/^dn/d; /^$/d; /^#/d; /^search/d; /^result/d; s/^....//' | sort -f -r 
