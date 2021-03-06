# Created by: Jonathan Chen <jonc@chen.org.nz>
# $FreeBSD$

PORTNAME=	psi
DISTVERSION=	1.3
CATEGORIES=	net-im
MASTER_SITES=	SF/${PORTNAME}/Psi/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Qt based Jabber client

LICENSE=	GPLv2

LIB_DEPENDS=	libidn.so:dns/libidn \
		libminizip.so:archivers/minizip \
		libqca-qt5.so:devel/qca@qt5

USES=		cmake desktop-file-utils pkgconfig qt:5 tar:xz

CMAKE_ARGS=	-DIDN_LIBRARY=${LOCALBASE}/lib/libidn.so \
		-DIDN_INCLUDE_DIR=${LOCALBASE}/include \
		-DUSE_WEBENGINE:BOOL=FALSE

USE_QT=		concurrent core dbus gui multimedia network svg webkit widgets \
		x11extras xml \
		buildtools_build qmake_build imageformats_run
USE_XORG=	ice sm x11 xcb xext xscrnsaver

OPTIONS_RADIO=	SPELLCHECKER
OPTIONS_RADIO_SPELLCHECKER=	HUNSPELL ENCHANT
OPTIONS_DEFAULT=	ENCHANT

HUNSPELL_DESC=	Use hunspell for spell checking
HUNSPELL_LIB_DEPENDS=	libhunspell-1.6.so:textproc/hunspell
HUNSPELL_CMAKE_BOOL=	USE_HUNSPELL

ENCHANT_DESC=	Use Enchant for spell checking
ENCHANT_LIB_DEPENDS=	libenchant.so:textproc/enchant
ENCHANT_CMAKE_BOOL=	USE_ENCHANT

.include <bsd.port.mk>
