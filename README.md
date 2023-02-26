# TinyWebserver

本项目是为了学习Linux系统编程与网络编程而进行的一个项目。

参考了游双老师的《Linux高性能服务器编程》和 https://github.com/qinguoyi/TinyWebServer 大佬的源码，实现的一个轻量级webserver服务器项目。

项目设计：

1、使用 线程池 + 非阻塞socket + epoll(ET和LT均实现) + 事件处理(Reactor和模拟Proactor均实现) 的并发模型 

2、使用状态机解析HTTP请求报文，支持解析GET和POST请求

3、访问服务器数据库实现web端用户注册、登录功能，可以请求服务器图片和视频文件

4、实现同步/异步日志系统，记录服务器运行状态

5、经Webbench压力测试可以实现上万的并发连接数据交换
