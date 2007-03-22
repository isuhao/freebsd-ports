--- ./reedsolomon.cpp.orig	Tue May 27 02:01:31 2003
+++ ./reedsolomon.cpp	Fri Mar 23 00:49:59 2007
@@ -51,7 +51,7 @@
   }
 }
 
-bool ReedSolomon<Galois8>::SetInput(const vector<bool> &present)
+template<> bool ReedSolomon<Galois8>::SetInput(const vector<bool> &present)
 {
   inputcount = (u32)present.size();
 
@@ -80,7 +80,7 @@
   return true;
 }
 
-bool ReedSolomon<Galois8>::SetInput(u32 count)
+template<> bool ReedSolomon<Galois8>::SetInput(u32 count)
 {
   inputcount = count;
 
@@ -101,7 +101,7 @@
   return true;
 }
 
-bool ReedSolomon<Galois8>::Process(size_t size, u32 inputindex, const void *inputbuffer, u32 outputindex, void *outputbuffer)
+template<> bool ReedSolomon<Galois8>::Process(size_t size, u32 inputindex, const void *inputbuffer, u32 outputindex, void *outputbuffer)
 {
   // Look up the appropriate element in the RS matrix
   Galois8 factor = leftmatrix[outputindex * (datapresent + datamissing) + inputindex];
@@ -189,7 +189,7 @@
 
 // Set which of the source files are present and which are missing
 // and compute the base values to use for the vandermonde matrix.
-bool ReedSolomon<Galois16>::SetInput(const vector<bool> &present)
+template<> bool ReedSolomon<Galois16>::SetInput(const vector<bool> &present)
 {
   inputcount = (u32)present.size();
 
@@ -233,7 +233,7 @@
 
 // Record that the specified number of source files are all present
 // and compute the base values to use for the vandermonde matrix.
-bool ReedSolomon<Galois16>::SetInput(u32 count)
+template<> bool ReedSolomon<Galois16>::SetInput(u32 count)
 {
   inputcount = count;
 
@@ -267,7 +267,7 @@
   return true;
 }
 
-bool ReedSolomon<Galois16>::Process(size_t size, u32 inputindex, const void *inputbuffer, u32 outputindex, void *outputbuffer)
+template<> bool ReedSolomon<Galois16>::Process(size_t size, u32 inputindex, const void *inputbuffer, u32 outputindex, void *outputbuffer)
 {
   // Look up the appropriate element in the RS matrix
 
