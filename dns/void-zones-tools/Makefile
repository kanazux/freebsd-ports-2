# $FreeBSD$

PORTNAME=	void-zones-tools
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.2
PORTREVISION=	3
CATEGORIES=	dns

MAINTAINER=	vidar@karlsen.tech
COMMENT=	Prepare a list of void zones that can be readily fed into Unbound

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c11
USE_GITHUB=	yes
GH_ACCOUNT=	cyclaero

SUB_FILES=	pkg-message

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hosts2zones ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/void-zones
	${INSTALL_SCRIPT} ${WRKSRC}/void-zones-update.sh ${STAGEDIR}${PREFIX}/bin

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
