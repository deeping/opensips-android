#!/system/bin/sh
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
./opensips -f opensips_android.cfg
