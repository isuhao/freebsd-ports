# Created by: Pawel Worach
# $FreeBSD$

PORTNAME=	mkfontscale
PORTVERSION=	1.1.3
PORTREVISION=	1
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Creates an index of scalable font files for X

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfreetype.so:print/freetype2

XORG_CAT=	app
USE_XORG=	xorgproto fontenc

CONFIGURE_ARGS+=--disable-maintainer-mode

PLIST_FILES=	bin/mkfontscale man/man1/mkfontscale.1.gz

.include <bsd.port.mk>
