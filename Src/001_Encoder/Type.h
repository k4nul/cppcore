#pragma once

#include "../__Common/Type.h"
#include "../__Common/Define.h"
#include "../__Common/ErrorCode.h"

namespace core
{
	enum E_HASH_TYPE
	{
		HASH_TYPE_NONE				= 0,
		HASH_TYPE_MD5				,
		HASH_TYPE_SHA1				,
		HASH_TYPE_SHA256			,
		HASH_TYPE_HAS160			,
		HASH_TYPE_COUNT				,
		HASH_TYPE_UNDEFINED			,
	};

	enum E_SYM_CIPHER_TYPE
	{
		SYM_CIPHER_TYPE_PLAIN		= 0,
		SYM_CIPHER_TYPE_SEED128		,
		SYM_CIPHER_TYPE_SEED256		,
		SYM_CIPHER_TYPE_AES128		,
		SYM_CIPHER_TYPE_AES192		,
		SYM_CIPHER_TYPE_AES256		,
		SYM_CIPHER_TYPE_COUNT		,
		SYM_CIPHER_TYPE_UNDEFINED	,
	};

	enum E_SYM_CIPHER_MODE
	{
		SYM_CIPHER_MODE_PLAIN			= 0,
		SYM_CIPHER_MODE_ECB			,
		SYM_CIPHER_MODE_CBC			,
		SYM_CIPHER_MODE_PCBC		,
		SYM_CIPHER_MODE_CFB			,
		SYM_CIPHER_MODE_OFB			,
		SYM_CIPHER_MODE_CTR			,
		SYM_CIPHER_MODE_COUNT		,
		SYM_CIPHER_MODE_UNDEFINED	,
	};

	enum E_PUBKEY_CIPHER_TYPE
	{
		PUBKEY_CIPHER_TYPE_RSA		= 0,
		PUBKEY_CIPHER_TYPE_ELGAMAL	,
		PUBKEY_CIPHER_TYPE_ECC		,
		PUBKEY_CIPHER_TYPE_COUNT	,
		PUBKEY_CIPHER_TYPE_UNDEFINED,
	};

	enum E_CIPHER_METHOD
	{
		CIPHER_METHOD_UNDEFINED		= 0,
		CIPHER_METHOD_ENCRYPT		,
		CIPHER_METHOD_DECRYPT		,
	};

	struct ST_SYM_CIPHER_KEY
	{
		E_SYM_CIPHER_TYPE nType;
		E_SYM_CIPHER_MODE nMode;
		DWORD dwBlockSize;
		BYTE btInitialVector[16];
		BYTE btKey[32];
	};
}
