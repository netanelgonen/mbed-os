#include "mbed.h"
#include "crypto.h"
#include "default_random_seed.h"
#include "psa_prot_internal_storage.h"

int mbed_default_seed_read(unsigned char *buf, size_t buf_len)
{
    psa_its_status_t rc = psa_its_get(PSA_CRYPTO_ITS_RANDOM_SEED_UID, 0, buf_len, buf);
    return (-1 * rc);
}

int mbed_default_seed_write(unsigned char *buf, size_t buf_len)
{
    psa_its_status_t rc = psa_its_set(PSA_CRYPTO_ITS_RANDOM_SEED_UID, buf_len, buf, 0);
    return (-1 * rc);
}

