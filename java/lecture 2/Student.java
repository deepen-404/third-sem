public class Student {
    public int add(int x, int y) {
        return x + y;
    }

    public int subtract(int x, int y) {
        return x - y;
    }

    public int multiply(int x, int y) {
        return x * y;
    }

    public int divide(int x, int y) {
        return x / y;
    }

    public static void main(String[] args) {
        Student std = new Student();

        System.out.println("The sum is "+ std.add(1, 5));
        System.out.println("The difference is "+ std.subtract(1, 5));
        System.out.println("The multilication is "+ std.multiply(100, 5));
        System.out.println("The division is "+ std.divide(10, 5));

    }

}
// new keyword creates an instance of a object

// two types : value type and reference type