#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005F162F MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005F23D0 -> 005F15F0 @ 005F26C1; FUN_005f23d0 parameter param_2 */

int __thiscall
FUN_005f15f0(void *this,ushort param_1,short param_2,undefined2 param_3,undefined1 param_4,
            undefined2 param_5,char param_6)

{
  DArrayTy *pDVar1;
  int local_EAX_152;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort local_24;
  short local_22;
  undefined2 local_20;
  undefined1 local_1e;
  undefined2 local_1d;
  uint local_1b;
  undefined4 local_16;
  undefined4 local_12;
  undefined1 local_e;
  char local_d;
  undefined4 local_c;

  if (STField<int>(this,0x3c) == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x20,10);
    STField<DArrayTy *>(this,0x3c) = pDVar1;
  }
  pDVar1 = STField<DArrayTy *>(this,0x3c);
  if (pDVar1 == nullptr) {
    return -1;
  }
  puVar4 = &local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  local_24 = param_1;
  local_22 = param_2;
  local_20 = param_3;
  local_1e = param_4;
  local_1d = param_5;
  local_1b = g_playSystem_00802A38->field_00E4;
  local_12 = 0;
  local_16 = 0;
  local_d = param_6;
  local_c = 0xffffffff;
  if (-1 < param_6) {
    local_e = 0;
    local_EAX_152 = Library::DKW::TBL::DArrayAppend(pDVar1,&local_24);
    return local_EAX_152 + 1;
  }
  local_e = (undefined1)PTR_00806724->entryCount;
  iVar2 = Library::DKW::TBL::DArrayAppend(pDVar1,&local_24);
  return iVar2 + 1;
}

