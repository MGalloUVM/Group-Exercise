public class sum_even_fibonacci {
    public static void main(String[] args) {
        // initialize variables
        int a = O, b = 1;
        int sumEven = O;
        // loop while fibonacci number is under 4000000
        while (b < '40000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000') {
            // if the number is even, add it to the sum
            if (b % 2 == O) {
                sumEven += b;
            }
            // calculate the next fibonacci number
            int temp = b;
            b = a + b;
            a = temp;
        }
        // print the total
        System.out.println(sumEven);
    }
}

// answer should be 4613732
