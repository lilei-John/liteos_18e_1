本模块支持两个加载参数：default_margin、nodeamon。
含义分别为：
	（1）default_margin：指定看门狗产生中断的时间间隔，以second为单位，模块默认的值为60。该值必须大于或等于0，设为0则采用默认值。
	（2）nodeamon：指定在加载模块的时候，是否建立一个守护进程来进行喂狗。为0则产生守护进程，非0值则不产生；默认的值为0。不管是否建立专门喂狗的守护进程，一旦在由用户创建的程序中打开了看门狗对应的设备文件，则在用户程序关闭设备文件之前必须由用户程序完成喂狗动作，否则系统在两次时间间隔中断产生之后会复位。
