OBJ_FB=fs_fb.o
EXTRA=../p/grub/libgrubfs.a
CFLAGS+=-Igrub/include

STATIC_OBJ+=${OBJ_FB}
#STATIC_OBJ+=${EXTRA}
TARGET_FB=fs_fb.${EXT_SO}

ALL_TARGETS+=${TARGET_FB}

${TARGET_FB}: ${OBJ_FB}
	${CC} ${LDFLAGS} ${CFLAGS} -o ${TARGET_FB} ${OBJ_FB} ${EXTRA}