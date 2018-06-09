/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SL_TxPoolToAddModListV2X_r14_H_
#define	_SL_TxPoolToAddModListV2X_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-V2X-TxPoolIdentity-r14.h"
#include "SL-CommResourcePoolV2X-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-TxPoolToAddModListV2X-r14 */
typedef struct SL_TxPoolToAddModListV2X_r14 {
	SL_V2X_TxPoolIdentity_r14_t	 poolIdentity_r14;
	SL_CommResourcePoolV2X_r14_t	 pool_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TxPoolToAddModListV2X_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TxPoolToAddModListV2X_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_TxPoolToAddModListV2X_r14_H_ */
#include <asn_internal.h>