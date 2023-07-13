#!/bin/bash

touch "test"
touch "#test#"
touch "test#"
touch "#test"
touch "~test"
touch "test~"
mkdir testdir
touch "testdir/testInsideDir#"
touch "testdir/#testInsideDir"
touch "testdir/#testInsideDir#"
touch "testdir/~testInsideDir"
touch "testdir/testInsideDir~"
