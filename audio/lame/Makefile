# Created by: yoshiaki Uchikawa
# $FreeBSD$

PORTNAME=	lame
PORTVERSION=	3.100
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/3.100

MAINTAINER=	netchild@FreeBSD.org
COMMENT=	Fast MP3 encoder kit

LICENSE=		LGPL20+ PATENTS
LICENSE_COMB=		multi
LICENSE_FILE_LGPL20+ =	${WRKSRC}/COPYING
LICENSE_NAME_PATENTS=	Intellectual Property Precaution
LICENSE_PERMS_PATENTS=	dist-mirror dist-sell no-pkg-mirror no-pkg-sell auto-accept
LICENSE_TEXT_PATENTS=	http://www.mp3licensing.com/ only talks about the FhG and Technicolor patent portfolio \
			but there are also portfolios from Sisvel (from Philips) and \
			Nokia (from AT&T -> Lucent -> Alcatel). \
			Some "old" patents are now expired, but there are more recent MP3 patents. Some \
			of the more recent ones are multi-channel related, which is not implemented in LAME. \
			There was no investigation (in the LAME project) about which patent exists, which \
			one is implemented in LAME, and which one is not (yet) expired. As such it is not \
			known if LAME could now be distributed as a binary package or not. \
			Linux distributions seem to go the "let\'s see if get sued" way, FreeBSD does not \
			follow this.

USES=		gmake iconv libtool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-nasm --enable-mp3rtp --disable-gtktest

DOC_FILES=	API LICENSE README TODO USAGE

OPTIONS_DEFINE=	DOCS

.include <bsd.port.pre.mk>

.if ${ARCH} == "i386"
BUILD_DEPENDS+=	nasm:devel/nasm
.endif

post-patch:
# Fix parallel builds
	@${REINPLACE_CMD} -e 's,test -d \.libs || mkdir,mkdir -p,' \
		${WRKSRC}/libmp3lame/i386/Makefile.in

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmp3lame.so.0

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in ${DOC_FILES}
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.post.mk>
