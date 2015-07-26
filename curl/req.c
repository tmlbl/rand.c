#include <stdio.h>
#include <curl/curl.h>

int main()
{
  CURL *req;
  CURLcode res;

  req = curl_easy_init();
  curl_easy_setopt(req, CURLOPT_URL, "http://corporation.enterprises");
  res = curl_easy_perform(req);
  printf("%s\n", req);
}

