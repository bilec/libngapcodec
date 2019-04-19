/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_DRBStatusDL_H_
#define	_Ngap_DRBStatusDL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_DRBStatusDL_PR {
	Ngap_DRBStatusDL_PR_NOTHING,	/* No components present */
	Ngap_DRBStatusDL_PR_dRBStatusDL12,
	Ngap_DRBStatusDL_PR_dRBStatusDL18,
	Ngap_DRBStatusDL_PR_choice_Extensions
} Ngap_DRBStatusDL_PR;

/* Forward declarations */
struct Ngap_DRBStatusDL12;
struct Ngap_DRBStatusDL18;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_DRBStatusDL */
typedef struct Ngap_DRBStatusDL {
	Ngap_DRBStatusDL_PR present;
	union Ngap_DRBStatusDL_u {
		struct Ngap_DRBStatusDL12	*dRBStatusDL12;
		struct Ngap_DRBStatusDL18	*dRBStatusDL18;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_DRBStatusDL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_DRBStatusDL;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_DRBStatusDL_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_DRBStatusDL_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_DRBStatusDL_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_DRBStatusDL_H_ */
#include <asn_internal.h>