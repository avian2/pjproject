#ifndef _CONFIG_SITE_H_
#define PJMEDIA_HAS_VIDEO	1

#define PJ_HAS_IPV6 1

/* Recommended in Asterisk, but changes a structure
 * #define PJ_MAX_HOSTNAME (256)
 */ 
#define PJSIP_MAX_URL_SIZE (512)

#define PJ_SCANNER_USE_BITWISE	0
#define PJ_OS_HAS_CHECK_STACK	0
#define PJ_LOG_MAX_LEVEL		6
#define PJ_ENABLE_EXTRA_CHECK	1
#define PJSIP_MAX_TSX_COUNT		((64*1024)-1)
#define PJSIP_MAX_DIALOG_COUNT	((64*1024)-1)
#define PJSIP_UDP_SO_SNDBUF_SIZE	(512*1024)
#define PJSIP_UDP_SO_RCVBUF_SIZE	(512*1024)
#define PJSIP_SAFE_MODULE		0
#define PJ_HAS_STRICMP_ALNUM		0

/*
 * Do not ever enable PJ_HASH_USE_OWN_TOLOWER because the algorithm is
 * inconsistently used when calculating the hash value and doesn't
 * convert the same characters as pj_tolower()/tolower().  Thus you
 * can get different hash values if the string hashed has certain
 * characters in it.  (ASCII '@', '[', '\\', ']', '^', and '_')
 */
#undef PJ_HASH_USE_OWN_TOLOWER

/*
  It is imperative that PJSIP_UNESCAPE_IN_PLACE remain 0 or undefined.
  Enabling it will result in SEGFAULTS when URIs containing escape sequences are encountered.
*/
#undef PJSIP_UNESCAPE_IN_PLACE
/* Recommended in Asterisk, but changes a structure
 * #define PJSIP_MAX_PKT_LEN			6000
 */

#undef PJ_TODO
#define PJ_TODO(x)

/* Defaults too low for WebRTC */
/* Recommended in Asterisk, but changes a structure
 * #define PJ_ICE_MAX_CAND 32
 * #define PJ_ICE_MAX_CHECKS (PJ_ICE_MAX_CAND * PJ_ICE_MAX_CAND)
 */

/* Increase limits to allow more formats */
/* Recommended in Asterisk, but changes a structure
 * #define	PJMEDIA_MAX_SDP_FMT   64
 * #define	PJMEDIA_MAX_SDP_BANDW   4
 * #define	PJMEDIA_MAX_SDP_ATTR   (PJMEDIA_MAX_SDP_FMT*2 + 4)
 * #define	PJMEDIA_MAX_SDP_MEDIA   16
 */


/* Disable assertions in production builds
 * https://trac.pjsip.org/repos/wiki/FAQ#assert
 * https://trac.pjsip.org/repos/wiki/FAQ#cpu
 */
#define NDEBUG 				1

#endif /* _CONFIG_SITE_H_ */
