--- ./bittorrent.py.orig	Thu Mar  1 22:12:53 2007
+++ ./bittorrent.py	Mon May  7 06:06:21 2007
@@ -14,6 +14,13 @@
 
 from __future__ import division
 
+try:
+  import psyco
+  assert psyco.__version__ >= 0x010300f0
+  psyco.full()
+except:
+  pass
+
 app_name = "BitTorrent"
 
 import os
