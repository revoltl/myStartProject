public class Main {
    public static void main(String[] args) {

        //链式调用
        MyThread myThread_1 = new MyThread.Builder()
                .setName("myThread_1")
                .setNum(114)
                .build();

        myThread_1.start();
    }
}
