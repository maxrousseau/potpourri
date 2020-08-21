#!/usr/bin/env python3
import random
import time

long_list = random.sample(range(10000), 100)

for i in long_list:
    print(i)

print("Finished")
