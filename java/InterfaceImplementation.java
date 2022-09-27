interface MyInterface {
    public void print();
    public void print2();
}

class InterfaceImplementation implements MyInterface {
    public void print() {
        System.out.println("This is print 1 from main class");
    }
    
    public void print2() {
        System.out.println("This is print 2 from main class");        
    }

    public static void main(String[] args) {
        MyInterface obj = new InterfaceImplementation();
        obj.print();
        obj.print2();
    }
}