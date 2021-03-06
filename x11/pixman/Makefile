# $FreeBSD$

PORTNAME=	pixman
PORTVERSION=	0.34.0
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Low-level pixel manipulation library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

USES=		cpe perl5
USE_PERL5=	build
XORG_CAT=	lib
CONFIGURE_ARGS=	--disable-gtk
INSTALL_TARGET=	install-strip

# Build the library exclusively, thus disabling the demos and the tests (which
# do not get installed anyway).  This is to workaround a problem in powerpc64
# where the build of the tests crashes ld; see PR bin/202284.
MAKE_ARGS=      SUBDIRS=pixman

.include <bsd.port.pre.mk>

.if ${ARCH} == "armv6" || ${ARCH} == "armv7"
BUILD_DEPENDS+=	${LOCALBASE}/bin/as:devel/binutils
CONFIGURE_ENV+=	CCASFLAGS="${CFLAGS} -no-integrated-as"
.endif

.if ${ARCH} == "powerpc64" || ${ARCH} == "powerpc"
CONFIGURE_ARGS+=	--disable-vmx
.endif

.include <bsd.port.post.mk>
