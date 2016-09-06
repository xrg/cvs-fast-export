#!/usr/bin/env python
## simplest possible linear repository with multiple commits

import sys, testlifter

testlifter.verbose += sys.argv[1:].count("-v")
repo = testlifter.CVSRepository("linear.repo")
repo.init()
repo.module("module")
co = repo.checkout("module", "linear.checkout")

co.write("README", "The quick brown fox jumped over the lazy dog.\n")
co.add("README")
co.commit("This is a sample commit")

co.write("README", "And now for something completely different.\n")
co.commit("This is a second sample commit")

repo.cleanup()

# end
