# libnet80211-freedom
NONOSDK precompiled library with patched ieee80211_freedom_output function

(from NONOSDK22x_190703)

Things patched:
  - Minimum/Maximum buffer size (24/1400)
  - No frame control restriction (was allowed to send only management frames with beacon or probe subtypes and no flags)

Usage for arduino ide:
  -Replace original libnet80211.a in ~/.ardinoXX/packages/esp8266/hardware/esp8266/3.1.2/tools/sdk/lib/NONOSDKXXX_XXXXXX
