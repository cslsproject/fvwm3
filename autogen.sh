#!/bin/sh

die()
{
    echo "$1" >&2
    exit $2
}

#install packages
yum install bison flex

autoreconf -f -i -v || die "autoreconf failed" $?
./configure --prefix=/linux-lab/output/rootfs/usr/ --sysconfdir=/linux-lab/output/rootfs/usr/etc --enable-command-log --with-x  || die "configure failed" $?
