#include "config.h"
#include <string>

int main(int argc, char *argv[])
{
    string user = "root";
    string passwd = "root";
    string databasename = "yjydb";

    Config config;
    config.parse_arg(argc, argv);

    WebServer server;
    //初始化
    server.init(config.PORT, user, passwd, databasename, config.LOGWrite, config.OPT_LINGER, config.TRIGMode, config.sql_num, config.thread_num, config.close_log, config.actor_model);

    server.log_write();   //日志
    server.sql_pool();    //数据库
    server.thread_pool(); //线程池
    server.trig_mode();   //触发模式
    server.eventListen(); //监听
    server.eventLoop();   //运行
    return 0;
}