#include "InstagramApi.h"

InstagramApi::InstagramApi(Client &client, String accessToken, String appId = "", String appSecret = "")
{
    this->client = &client;
    _accesToken = accessToken;
    _appId = appId;
    _appSecret = appSecret
}

String InstagramApi::extendAccessToken() {
		extendAccessToken(_appId , _appSecret);
}
