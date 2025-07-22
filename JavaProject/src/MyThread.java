class MyThread implements Runnable {
    private String name;
    private int num;

    //私有构造器
    private MyThread() {}

    //内部静态构建器类
    public static class Builder {
        private final MyThread instance;

        public Builder() {
            instance = new MyThread();
        }

        public Builder setName(String name) {
            instance.name = name;
            return this;
        }

        public Builder setNum(int num) {
            instance.num = num;
            return this;
        }

        public MyThread build() {
            return instance;
        }
    }

    //启动函数
    public void start() {
        new Thread(this, name).start();
    }

    @Override
    public void run() {
        System.out.println("Thread [" + name + "] running with num = " + num);
    }
}
