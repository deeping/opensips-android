#opensips-android

##HOW TO BUILD
1.  Build a standalone android toolchain if you don't have one yet, platform
    version android-18 or newer is recommended.

2.  run ./build.sh
    
##HOW TO USE
1.  Install the following busybox applet on Android system: 
    awk basename dirname egrep expr mkfifo tail which;

2.  Customize these variable in file config-android.cfg: 
    listen,
    modparam of module mi_fifo,
    modparam of module aliasdb,
    modparam of module dialog;
    
    and in file opensipsctlrc:
    SIP_DOMAIN,
    DB_PATH;

3.  Use ./opensipsctl to add accounts,
    eg: ./opensipsctl add user pass;

