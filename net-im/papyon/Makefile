# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD$

PORTNAME=	papyon
PORTVERSION=	0.5.4
PORTREVISION=	1
CATEGORIES=	net-im
MASTER_SITES=	http://www.freedesktop.org/software/${PORTNAME}/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Fork of pymsn to support the telepathy MSN connection manager

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>0:security/py-openssl@${PY_FLAVOR} \
		${PY_ENUM34} \
		${PYTHON_SITELIBDIR}/Crypto/Hash/SHA.py:security/py-pycrypto@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gstreamer>0:multimedia/py-gstreamer@${PY_FLAVOR} \
		${PYTHON_SITELIBDIR}/farsight.so:net-im/farsight2
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}openssl>0:security/py-openssl@${PY_FLAVOR} \
		${PY_ENUM34} \
		${PYTHON_SITELIBDIR}/Crypto/Hash/SHA.py:security/py-pycrypto@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gstreamer>0:multimedia/py-gstreamer@${PY_FLAVOR} \
		${PYTHON_SITELIBDIR}/farsight.so:net-im/farsight2

USE_GNOME=	pygobject
USES=		python:2.7
USE_PYTHON=	distutils

.include <bsd.port.mk>
