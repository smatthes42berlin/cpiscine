#!/bin/sh

find . -type f -name "*.sh" | xargs -I{} basename {} | sed 's/\.sh$//g'
