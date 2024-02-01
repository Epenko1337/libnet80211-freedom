# libnet80211-freedom
NONOSDK precompiled library with patched ieee80211_freedom_output function

(from NONOSDK22x_190703)

Things patched:
  - Minimum/Maximum buffer size (24/1400)
  - No frame control restriction (allowed to send only management frames with beacon or probe subtypes and no flags)
