# Created by: ijliao
# $FreeBSD$

PORTNAME=	jftp
PORTVERSION=	1.56
CATEGORIES=	ftp java
MASTER_SITES=	SF/j-ftp/${PORTNAME}/${PORTVERSION}
DISTNAME=	j-ftp-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java Network Browser

LICENSE=	GPLv2

JAVA_VERSION=	1.6+
NO_BUILD=	yes
USE_JAVA=	yes
WRKSRC=		${WRKDIR}/j-ftp

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
PLIST_FILES=	bin/jftp %%DATADIR%%/jftp.jar
SUB_FILES=	jftp.sh

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKDIR}/jftp.sh ${STAGEDIR}${PREFIX}/bin/jftp
	${INSTALL_DATA} ${WRKSRC}/build/jars/jftp.jar ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
