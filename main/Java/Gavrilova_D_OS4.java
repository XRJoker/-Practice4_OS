public class Main {
    public static void main(String[] args) {
        long sum = 0L;
        int b = 3, c = 3;
        long start = System.nanoTime();
        for (int i = 0; i < 100000000; ++i) {
            sum += b*2 + c - i;
        }
        long finish = System.nanoTime();
        System.out.println("Сумма: " + sum);
        System.out.println("Прошло времени: " + (finish-start) / 1000000000.0 + "s");
    }
}