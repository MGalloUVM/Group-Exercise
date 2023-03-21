// initialize variables
a, b = 0, 1
sum_even = 0
// loop while under 4000000
while b < 4000000:
    // if the number is even, add it to the sum
    if b % 2 == 0:
        sum_even += b
    // calculate the next fibonacci number
    a, b = b, a+b

// display the sum
print(sum_even)

// answer should be 4613732
