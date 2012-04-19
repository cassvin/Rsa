#ifndef _RSA
#define _RSA

typedef struct key
{
	long pkey;
	long ekey;
	long dkey;
} Key;

class Rsa
{
public:
	Rsa();
	virtual ~Rsa();

public:
	Key produce_keys();
	long endecrypt(const long msg, const long key, const long pkey);

private:
	long produce_pkey(const long prime1, const long prime2);
	long produce_ekey(const long orla);
	long produce_dkey(const long ekey, const long orla);
	long produce_prime();
	long produce_orla(const long prime1, const long prime2);
	long produce_gcd(const long a, const long b);
	bool is_prime(const long digit);
};

#endif
