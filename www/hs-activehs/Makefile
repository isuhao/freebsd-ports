# $FreeBSD$

PORTNAME=	activehs
PORTVERSION=	0.3.2
PORTREVISION=	3
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell code presentation tool

LICENSE=	BSD3CLAUSE

BROKEN=		fails to build
DEPRECATED=	Doesn't build with recent dependencies
EXPIRATION_DATE=2018-09-02

USE_CABAL=	activehs-base blaze-html blaze-markup cmdargs data-pprint \
		dia-base dia-functions exceptions haskell-src-exts \
		highlighting-kate hint hoogle mtl pandoc pureMD5 \
		QuickCheck simple-reflect snap-core snap-server split syb \
		utf8-string

STANDALONE=	yes
EXECUTABLE=	activehs

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
