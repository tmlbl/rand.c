#include <stdio.h>
#include <curl/curl.h>

int main()
{
  CURL *req;
  CURLcode res;

  req = curl_easy_init();
  if (req) {
    curl_easy_setopt(req, CURLOPT_URL, "http://corporation.enterprises");
    res = curl_easy_perform(req);
    if (res == CURLE_OK) {
      printf("%s\n", req);
    } else {
      fprintf(stderr, "Request failed: %s\n", curl_easy_strerror(res));
    }
  }
  curl_easy_cleanup(req);
}

