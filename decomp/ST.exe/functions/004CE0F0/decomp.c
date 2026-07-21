#include "../../pseudocode_runtime.h"


void __thiscall FUN_004ce0f0(void *this,int *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_38 [2];
  undefined1 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  int local_8;

  if (*param_1 == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,0x30,5);
    *param_1 = (int)pDVar1;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  if (*(int *)((int)this + 0x5ac) == 0x53) {
    local_8 = 0x54;
    iVar4 = 0xfc;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = thunk_FUN_004e6010(*(int *)((int)this + 0x24),local_8 + -0x32);
      if (iVar2 != 0) {
        memset(local_38, 0, 0x30); /* compiler bulk-zero initialization */
        local_38[0] = local_8;
        local_30 = 1;
        uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        local_2a = *(undefined2 *)(&DAT_00854350 + ((uVar3 & 0xff) + iVar4) * 4);
        uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        local_2e = *(undefined2 *)(&DAT_007e19f4 + ((uVar3 & 0xff) + iVar4) * 4);
        uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        local_2c = *(undefined2 *)(&DAT_007e2f04 + ((uVar3 & 0xff) + iVar4) * 4);
        Library::DKW::TBL::FUN_006ae1c0((uint *)*param_1,local_38);
      }
      iVar4 = iVar4 + 3;
      local_8 = local_8 + 1;
    } while (iVar4 < 0x10f);
  }
  return;
}

