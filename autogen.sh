#!/bin/sh

run ()
{
    echo "running: $*"
    eval $*

    if test $? != 0 ; then
	echo "error: while running '$*'"
	exit 1
    fi
}

LIBTOOL_CMD=`which libtoolize`

if [ -z $LIBTOOL_CMD ]; then
  LIBTOOL_CMD="glibtoolize"
fi

run $LIBTOOL_CMD --copy --force
run aclocal -I m4
run automake
run autoconf