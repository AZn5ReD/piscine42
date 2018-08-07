#!/bin/bash
ldapwhoami -Q | sed 's/^...//'
