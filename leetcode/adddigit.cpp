int addDigits(int num) {
        int sum = 0;
        while (num) {
            int ld = num % 10;
            sum += ld;
            num /= 10;
        }
        if (sum / 10 == 0) {
            return sum;
        } else {
            return addDigits(sum);
        }
    }