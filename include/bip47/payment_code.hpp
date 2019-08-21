#ifndef BIP47_PAYMENT_CODE_HPP
#define BIP47_PAYMENT_CODE_HPP

#include <string>
#include <bitcoin/bitcoin/math/elliptic_curve.hpp>
#include <bitcoin/bitcoin/chain/output_point.hpp>
#include <bitcoin/bitcoin/wallet/payment_address.hpp>
#include <bitcoin/bitcoin/formats/base_58.hpp>

namespace bip47
{
    using data = libbitcoin::data_chunk;
    using payment_code_version = uint8_t;
    using address_format = uint8_t;
    using address = libbitcoin::wallet::payment_address;
    using outpoint = libbitcoin::chain::output_point;

    const int payment_code_size = 80;
}

#endif
