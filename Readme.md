# Twilio Messaging Example (C++)

An example application that demonstrates how to send SMS text messages using C++ and libCurl.  Requires a POSIX compliant system.

Please read [our full article](https://www.twilio.com/docs/guides/how-to-send-sms-messages-in-cpp) for more information.

## Build example:

<pre>
git clone https://github.com/TwilioDevEd/twilio_cpp_demo.git
cd twilio_cpp_demo
make
</pre>

## Run example:

(You must have a [Twilio account](https://twilio.com) to run this example.)

Account SID and the Auth Token can be found in your Twilio console.  Change the from number to a number in your [Twilio Account](https://twilio.com/console), and change the to number to someone you'd like to get a message!

<pre>
account_sid=ACXXXXXXXXXXXXXXXXXXXXXX
auth_token=your_auth_token
bin/cpp_demo -a $account_sid -s $auth_token -t "+18005551212" -f "+18005551213" -m "Hello, World!"
# Optionally, add '-p' to send a MMS, example: '-p https://demo.twilio.com/logo.png'
</pre>

## Motivations

Hopefully you can use this as a base for a larger project, or incorporate it into your existing projects.

## Meta & Licensing

* [MIT License](http://www.opensource.org/licenses/mit-license.html)
* Lovingly crafted by Twilio Developer Education.
