/* nping_config.h.  Generated from nping_config.h.in by configure.  */
/***************************************************************************
 * nping_config.h.in -- Autoconf uses this template, combined with the     *
 * configure script knowledge about system capabilities, to build this     *
 * include file that lets nmap better understand system particulars.       *
 *                                                                         *
 ***********************IMPORTANT NMAP LICENSE TERMS************************
 *                                                                         *
 * The Nmap Security Scanner is (C) 1996-2021 Nmap Software LLC ("The Nmap  *
 * Project"). Nmap is also a registered trademark of the Nmap Project.     *
 *                                                                         *
 * This program is distributed under the terms of the Nmap Public Source   *
 * License (NPSL). The exact license text applying to a particular Nmap    *
 * release or source code control revision is contained in the LICENSE     *
 * file distributed with that version of Nmap or source code control       *
 * revision. More Nmap copyright/legal information is available from       *
 * https://nmap.org/book/man-legal.html, and further information on the    *
 * NPSL license itself can be found at https://nmap.org/npsl. This header  *
 * summarizes some key points from the Nmap license, but is no substitute  *
 * for the actual license text.                                            *
 *                                                                         *
 * Nmap is generally free for end users to download and use themselves,    *
 * including commercial use. It is available from https://nmap.org.        *
 *                                                                         *
 * The Nmap license generally prohibits companies from using and           *
 * redistributing Nmap in commercial products, but we sell a special Nmap  *
 * OEM Edition with a more permissive license and special features for     *
 * this purpose. See https://nmap.org/oem                                  *
 *                                                                         *
 * If you have received a written Nmap license agreement or contract       *
 * stating terms other than these (such as an Nmap OEM license), you may   *
 * choose to use and redistribute Nmap under those terms instead.          *
 *                                                                         *
 * The official Nmap Windows builds include the Npcap software             *
 * (https://npcap.org) for packet capture and transmission. It is under    *
 * separate license terms which forbid redistribution without special      *
 * permission. So the official Nmap Windows builds may not be              *
 * redistributed without special permission (such as an Nmap OEM           *
 * license).                                                               *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes.          *
 *                                                                         *
 * Source code also allows you to port Nmap to new platforms, fix bugs,    *
 * and add new features.  You are highly encouraged to submit your         *
 * changes as a Github PR or by email to the dev@nmap.org mailing list     *
 * for possible incorporation into the main distribution. Unless you       *
 * specify otherwise, it is understood that you are offering us very       *
 * broad rights to use your submissions as described in the Nmap Public    *
 * Source License Contributor Agreement. This is important because we      *
 * fund the project by selling licenses with various terms, and also       *
 * because the inability to relicense code has caused devastating          *
 * problems for other Free Software projects (such as KDE and NASM).       *
 *                                                                         *
 * The free version of Nmap is distributed in the hope that it will be     *
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of  *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. Warranties,        *
 * indemnification and commercial support are all available through the    *
 * Npcap OEM program--see https://nmap.org/oem.                            *
 *                                                                         *
 ***************************************************************************/

/* $Id: $ */

#ifndef CONFIG_H
#define CONFIG_H

/* #undef PCAP_TIMEOUT_IGNORED */

/* #undef HAVE_STRUCT_IP */

/* #undef HAVE_STRUCT_ICMP */

#define HAVE_IP_IP_SUM 1

#define HAVE_SIGNAL 1

/* #undef inline */

#define STDC_HEADERS 1

#define HAVE_UNISTD_H 1

#define HAVE_STRING_H 1

#define HAVE_STRINGS_H 1

#define HAVE_PWD_H 1

/* #undef HAVE_BSTRING_H */

/* #undef WORDS_BIGENDIAN */

#define HAVE_MEMORY_H 1

#define HAVE_STRERROR 1

/* #undef HAVE_SYS_SOCKIO_H */

#define HAVE_SYS_STAT_H 1

/* #undef HAVE_FCNTL_H */

#define HAVE_TERMIOS_H 1

/* #undef HAVE_PCRE_PCRE_H */

/* #undef BSD_NETWORKING */

/* #undef IN_ADDR_DEEPSTRUCT */

/* #undef HAVE_SOCKADDR_SA_LEN */

/* #undef HAVE_SOCKADDR_IN_SIN_LEN */

/* #undef HAVE_SOCKADDR_IN6_SIN6_LEN */

/* #undef HAVE_NETINET_IF_ETHER_H */

#define HAVE_OPENSSL 1

/* #undef STUPID_SOLARIS_CHECKSUM_BUG */

/* #undef SPRINTF_RETURNS_STRING */

/* #undef TIME_WITH_SYS_TIME */
#define HAVE_SYS_TIME_H 1

/* #undef recvfrom6_t */

/* #undef NEED_USLEEP_PROTO */
/* #undef NEED_GETHOSTNAME_PROTO */

#ifdef NEED_USLEEP_PROTO
#ifdef __cplusplus
extern "C" int usleep (unsigned int);
#endif
#endif

#ifdef NEED_GETHOSTNAME_PROTO
#ifdef __cplusplus
extern "C" int gethostname (char *, unsigned int);
#endif
#endif

/* #undef DEC */
#define LINUX 1
/* #undef FREEBSD */
/* #undef OPENBSD */
/* #undef SOLARIS */
/* #undef SUNOS */
/* #undef BSDI */
/* #undef IRIX */
/* #undef HPUX */
/* #undef NETBSD */
/* #undef MACOSX */

#endif /* CONFIG_H */
