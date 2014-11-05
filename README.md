#HOW TO BUILD
1.  Build a standalone android toolchain if you don't have one yet, platform
    version android-18 or newer is recommended.

2.  run ./build.sh
    
#HOW TO USE
1.  Install the following busybox applet on Android system: 
    awk basename dirname egrep expr mkfifo tail which;

2.  Customize these variable in file config_M1.cfg: 
    listen,
    modparam of module mi_fifo,
    modparam of module aliasdb,
    modparam of module dialog;
    
    and in file opensipsctlrc:
    SIP_DOMAIN,
    DB_PATH;

3.  Use ./opensipsctl to add accounts,
    eg: ./opensipctl add user pass;

4.  start server by running ./start.sh;

5.  Run a sip client app on your smart phone, and config your test account.
    We recommend using Linphone as it's a most popular and famous open source
    project.
