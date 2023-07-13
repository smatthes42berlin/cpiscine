#!/bin/sh

root_dir="$(git rev-parse --show-toplevel)"
cd "${root_dir}"
git ls-files --others --ignored --exclude-standard

