#ifndef InstagramApi_h
#define InstagramApi_h

#include <Arduino.h>
#include <ArduinoJson.h>
#include <Client.h>

#define HOST "api.instagram.com"
#define SSL_PORT 443
#define TIMEOUT 1500

class InstagramApi
{
    public:
        InstagramApi(Client &client, String accessToken, String appId, String appSecret);
        String sendGetCommand(String command);
    private:
        Client *client;
        String _appId;
        String _appSecret;
        String _accesToken;
        const int maxMessageLength = 10000;
}

#endif