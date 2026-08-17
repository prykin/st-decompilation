#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0068f8f0(void *this,short param_1)

{
  AiFltClassTy *this_00;
  short sVar1;
  int iVar2;
  uint uVar3;
  bool bVar5;
  uint local_38 [2];
  char local_30;

  if (param_1 == 1) {
    if (STField<short>(this,0x39) != 3) {
      return 1;
    }
    if ((g_allPlayers_007FA174 != nullptr) &&
       (sVar1 = thunk_FUN_0043e640(STField<char>(this,0x24),0x62,0,-1), sVar1 != 0)) {
      return 1;
    }
  }
  else {
    iVar2 = STField<int>(this,0xa5);
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar5 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar5) {
          iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
        }
        else {
          iVar2 = 0;
        }
        this_00 = *(AiFltClassTy **)(iVar2 + 4);
        if ((this_00 != nullptr) && (this_00->field_007B == -0x8000)) {
          memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
          local_38[1] = STField<undefined4>(this,300);
          local_38[0] = 0x75;
          /* ST_CALLSITE[0068F990]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
          AiFltClassTy::GetAiMess(this_00,local_38);
          if ('\0' < local_30) {
            return 1;
          }
        }
        iVar2 = STField<int>(this,0xa5);
        uVar3 = uVar3 + 1;
        bVar5 = uVar3 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
    }
  }
  return 0;
}

