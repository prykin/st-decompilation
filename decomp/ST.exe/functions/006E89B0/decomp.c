#include "../../pseudocode_runtime.h"


int __thiscall
FUN_006e89b0(void *this,int *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar1_mg0;
  uint *puVar2;
  iVar1_mg0 = ST3DSMAPContext::sub_006E8660(this,param_1,0,0,0,0,0,0,0);
  if (iVar1_mg0 == 0) {
    iVar1 = STField<int>(this,0x31c) + *param_1 * 0x114;
    puVar2 = Library::DKW::LIB::MemAlloc(param_3 * 0x10 + 0x25);
    *(undefined4 **)(iVar1 + 0xa0) = puVar2;
    if (puVar2 == nullptr) {
      return -2;
    }
    *puVar2 = param_2;
    *(int *)(STField<int>(iVar1,0xA0) + 4) = param_3;
    *(undefined4 *)(STField<int>(iVar1,0xA0) + 8) = param_6;
    *(undefined4 *)(STField<int>(iVar1,0xA0) + 0xc) = param_7;
    *(undefined4 *)(STField<int>(iVar1,0xA0) + 0x10) = param_8;
    *(undefined4 *)(STField<int>(iVar1,0xA0) + 0x14) = param_4;
    *(undefined1 *)(STField<int>(iVar1,0xA0) + 0x18) = param_5;
    *(int *)(STField<int>(iVar1,0xA0) + 0x19) = 0x168 - param_9;
    *(undefined4 *)(STField<int>(iVar1,0xA0) + 0x1d) = param_10;
    *(undefined4 *)(STField<int>(iVar1,0xA0) + 0x21) = param_11;
    STField<uint>(iVar1,0x4) = STField<uint>(iVar1,0x4) | 0x2005;
    iVar1_mg0 = 0;
  }
  return iVar1_mg0;
}

