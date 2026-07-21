#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691934 | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   006919FF | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691BFB | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691CC0 | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691E3E | 006A2D00 returns used as parameter 1 of Library::Ourlib::MFSTMAP::FUN_006f0cd0 @
   00691EED */

char * __cdecl FUN_006a2d00(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;

  memset(&DAT_0085428c, 0, 0x104); /* compiler bulk-zero initialization */
  uVar1 = thunk_FUN_006a2bf0(param_1,param_2,param_3,param_4,param_5);
  wsprintfA((LPSTR)&DAT_0085428c,"%s%03u","MAPMESH",uVar1 & 0x7fff);
  return (char *)&DAT_0085428c;
}

