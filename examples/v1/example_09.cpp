// Copyright 2019 Glyn Matthews.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt of copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <iostream>
#include <skyr/url.hpp>



#if defined(BUILD_MONOLITHIC)
#define main(void)      url_example_v1_09_main(void)
#endif

int main(void)
{
  auto url = skyr::url("https://example.org/");
  url.search_parameters().append(
      "q", "\xf0\x9f\x8f\xb3\xef\xb8\x8f\xe2\x80\x8d\xf0\x9f\x8c\x88");
  std::cout << url << std::endl;
}
