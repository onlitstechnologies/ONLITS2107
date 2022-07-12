package local.onlits.onlits2107.despat.singleton;

class Singleton {
    private int a;

    Singleton(int a) {      //Private constructor
        this.a = a;
    }

    public void displayA() {
        System.out.println("The value of a is " + a);
    }
}

class SingletonDriver {
    public static void main(String[] args) {
        Singleton s = new Singleton(10);
        s.displayA();
    }
}