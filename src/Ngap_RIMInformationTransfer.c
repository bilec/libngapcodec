/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_RIMInformationTransfer.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_RIMInformationTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_RIMInformationTransfer, targetRANNodeID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TargetRANNodeID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRANNodeID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_RIMInformationTransfer, sourceRANNodeID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_SourceRANNodeID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceRANNodeID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_RIMInformationTransfer, rIMInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_RIMInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rIMInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_RIMInformationTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P222,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_RIMInformationTransfer_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_Ngap_RIMInformationTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_RIMInformationTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetRANNodeID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceRANNodeID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rIMInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_RIMInformationTransfer_specs_1 = {
	sizeof(struct Ngap_RIMInformationTransfer),
	offsetof(struct Ngap_RIMInformationTransfer, _asn_ctx),
	asn_MAP_Ngap_RIMInformationTransfer_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Ngap_RIMInformationTransfer_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_RIMInformationTransfer = {
	"RIMInformationTransfer",
	"RIMInformationTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_RIMInformationTransfer_tags_1,
	sizeof(asn_DEF_Ngap_RIMInformationTransfer_tags_1)
		/sizeof(asn_DEF_Ngap_RIMInformationTransfer_tags_1[0]), /* 1 */
	asn_DEF_Ngap_RIMInformationTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_RIMInformationTransfer_tags_1)
		/sizeof(asn_DEF_Ngap_RIMInformationTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_RIMInformationTransfer_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_RIMInformationTransfer_specs_1	/* Additional specs */
};

