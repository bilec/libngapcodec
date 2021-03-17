/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_UL-NGU-UP-TNLModifyItem.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_UL_NGU_UP_TNLModifyItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UL_NGU_UP_TNLModifyItem, uL_NGU_UP_TNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-NGU-UP-TNLInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UL_NGU_UP_TNLModifyItem, dL_NGU_UP_TNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-NGU-UP-TNLInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_UL_NGU_UP_TNLModifyItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P274,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_UL_NGU_UP_TNLModifyItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_UL_NGU_UP_TNLModifyItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uL-NGU-UP-TNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dL-NGU-UP-TNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_UL_NGU_UP_TNLModifyItem_specs_1 = {
	sizeof(struct Ngap_UL_NGU_UP_TNLModifyItem),
	offsetof(struct Ngap_UL_NGU_UP_TNLModifyItem, _asn_ctx),
	asn_MAP_Ngap_UL_NGU_UP_TNLModifyItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_UL_NGU_UP_TNLModifyItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem = {
	"UL-NGU-UP-TNLModifyItem",
	"UL-NGU-UP-TNLModifyItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem_tags_1,
	sizeof(asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem_tags_1)
		/sizeof(asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem_tags_1)
		/sizeof(asn_DEF_Ngap_UL_NGU_UP_TNLModifyItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_UL_NGU_UP_TNLModifyItem_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_UL_NGU_UP_TNLModifyItem_specs_1	/* Additional specs */
};

