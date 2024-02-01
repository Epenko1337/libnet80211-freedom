# libnet80211-freedom
NONOSDK precompiled library with patched ieee80211_freedom_output function

(from NONOSDK22x_190703)

Things patched:
  - Minimum/Maximum buffer size (24/1400)
  - No frame control restriction (was allowed to send only management frames with beacon or probe subtypes and no flags)

Usage for arduino ide:
  -Replace original libnet80211.a in ~/.ardinoXX/packages/esp8266/hardware/esp8266/3.1.2/tools/sdk/lib/NONOSDKXXX_XXXXXX

ORIGINAL

![image](https://github.com/Epenko1337/libnet80211-freedom/assets/43629089/14416aa9-8f9e-421c-807f-3f5e6f27403f)

PATCHED

![image](https://github.com/Epenko1337/libnet80211-freedom/assets/43629089/4665ab08-9915-4861-b16f-2a4d2b830d39)
