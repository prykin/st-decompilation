#include "../../pseudocode_runtime.h"


void __thiscall FUN_004ad460(void *this,int param_1)

{
  int iVar1;

  iVar1 = Library::Ourlib::ST3DSMAP::SprShow
                    (STField<void *>(this,0x3c),STField<uint>(this,0x18),param_1);
  if (iVar1 == 1) {
    STField<undefined1>(this,0x12) = 0;
  }
  return;
}

