#ifndef TWILIO_HH
#define TWILIO_HH
#include <string>

namespace twilio {

class Twilio {
public:
        Twilio(
                const std::string& accound_sid_in, 
                const std::string& auth_token_in
        );
        // Nothing in destructor
        ~Twilio() { }; 

        void set_account_sid(const std::string& accound_sid_in);
        void set_auth_token(const std::string& auth_token_in);
        bool send_message(
                const std::string& to_number,
                const std::string& from_number,
                const std::string& message_body,
                std::string& response,
                const std::string& picture_url = "",
                bool verbose = false
        );

private:
        // Account SID and Auth Token come from the Twilio console.
        // See: https://twilio.com/console for more.

        // Used for the username of the auth header
        std::string account_sid;
        // Used for the password of the auth header
        std::string auth_token;

        // Portably ignore curl response
        static size_t _null_write(char *, size_t, size_t, void *);
        // Write curl response to a stringstream
        static size_t _stream_write(char *, size_t, size_t, void *);
};

} // end namespace twilio

#endif // TWILIO_HH
