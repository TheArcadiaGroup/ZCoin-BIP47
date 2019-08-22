#ifndef BIP47_PAYMENT_CODE_HPP
#define BIP47_PAYMENT_CODE_HPP

#include <string>
#include <bitcoin/bitcoin/math/elliptic_curve.hpp>
#include <bitcoin/bitcoin/chain/output_point.hpp>
#include <bitcoin/bitcoin/wallet/payment_address.hpp>
#include <bitcoin/bitcoin/formats/base_58.hpp>

namespace bip47 {
    using data = libbitcoin::data_chunk;
    using payment_code_version = uint8_t;
    using address_format = uint8_t;
    using address = libbitcoin::wallet::payment_address;
    using outpoint = libbitcoin::chain::output_point;

    const int payment_code_size = 80;
    const uint8_t bitmessage_notification_flag = 1;

    // namespace low is for low-level functions and constructs.
    namespace low {

        typedef libbitcoin::byte_array <payment_code_size> payment_code;

    } // low

    class payment_code : public low::payment_code {

        bool valid() const;

        payment_code_version version() const;

        const std::string base58() const;

        // constructors

        payment_code();

        payment_code(const low::payment_code code);

        static const payment_code base58_decode(std::string string);
    };

    // low contains low-level functions.
    namespace low {
        const payment_code null_payment_code {
                {0, 0,
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
        };

    }

}

#endif
