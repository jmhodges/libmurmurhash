 #ifdef __cplusplus
 extern "C" {
 #endif 

   unsigned int MurmurHash2 ( const void * key, int len, unsigned int seed );

   unsigned int MurmurHashNeutral2 ( const void * key, int len, unsigned int seed );
   
   uint64_t MurmurHash64 ( const void * key, int len, unsigned int seed );
   
   // You want MurmurHash64(). Really. Don't use these unless you know
   // exactly why you want them. (Hint: you don't.)
   uint64_t MurmurHash64A ( const void * key, int len, unsigned int seed );
   uint64_t MurmurHash64B ( const void * key, int len, unsigned int seed );

 #ifdef __cplusplus
 }
 #endif 
