#include "../../pseudocode_runtime.h"


void __thiscall FUN_004cf640(void *this,int *param_1)

{
  bool bVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_fc [40];
  int local_5c [2];
  char local_54;
  undefined1 local_53;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  uint local_4a [7];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  undefined *local_10;
  undefined *local_c;
  int local_8;

  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_8 = 4;
  piVar4 = param_1;
  do {
    if (*piVar4 == 0) {
      pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,0x30,5);
      *piVar4 = (int)pDVar2;
    }
    iVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((*(int *)((int)this + 0x5ac) == 0x32) || (*(int *)((int)this + 0x5ac) == 0x5c)) {
    uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    local_10 = (undefined *)((uVar3 & 0xff) - 1);
    memset(local_fc, 0, 0xa0); /* compiler bulk-zero initialization */
    if (((*(int *)((int)this + 0x5ac) == 0x5c) &&
        (pDVar2 = g_playerRuntime[*(int *)((int)this + 0x24)].field2168_0x9de,
        pDVar2 != (DArrayTy *)0x0)) && (uVar3 = 0, 0 < (int)pDVar2->count)) {
      do {
        DArrayGetElement(pDVar2,uVar3,&local_28);
        piVar4 = local_fc;
        piVar7 = (int *)(local_28 + 0x4e0);
        iVar6 = 0x28;
        do {
          iVar5 = *piVar7;
          piVar7 = piVar7 + 1;
          *piVar4 = *piVar4 + iVar5;
          piVar4 = piVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        uVar3 = uVar3 + 1;
        pDVar2 = g_playerRuntime[*(int *)((int)this + 0x24)].field2168_0x9de;
      } while ((int)uVar3 < (int)pDVar2->count);
    }
    local_2c = (int)local_10 << 4;
    local_8 = 0;
    do {
      local_10 = &DAT_00801330 + local_2c;
      local_c = (undefined *)0x0;
      switch(local_8) {
      case 0:
        local_c = &DAT_00801450;
        break;
      case 1:
        local_c = &DAT_00801480;
        break;
      case 2:
        local_c = &DAT_00800f10;
        break;
      case 3:
        local_10 = &DAT_008013f0 + local_2c;
        local_c = local_10;
      }
      local_14 = local_fc;
      iVar6 = 1;
      do {
        if ((local_10 == (undefined *)0x0) || (iVar5 = FUN_006b0fd0((int)local_10), iVar5 != 0)) {
          iVar5 = FUN_006b0fd0((int)local_c);
          if ((iVar5 != 0) &&
             (iVar5 = thunk_FUN_004e6010(*(int *)((int)this + 0x24),iVar6 + 0x41), iVar5 != 0)) {
            memset(local_5c, 0, 0x30); /* compiler bulk-zero initialization */
            local_5c[0] = iVar6;
            local_5c[1] = thunk_FUN_004c9370(this,1,iVar6,-1);
            if ((*(int *)((int)this + 0x361) == 1) && (*(int *)((int)this + 0x369) == iVar6)) {
              local_5c[1] = local_5c[1] + *(int *)((int)this + 0x36d);
            }
            iVar5 = thunk_FUN_004e6a80(*(int *)((int)this + 0x24),iVar6);
            if ((iVar5 == 0) ||
               (local_54 = '\x01', g_worldGrid.sizeZ + -1 <= *(int *)((int)this + 0x5b8))) {
              local_54 = '\0';
            }
            thunk_FUN_004c7260(this,CASE_1,iVar6,&local_20,&local_18,&local_1c,&local_24);
            local_4e = (undefined2)local_20;
            local_52 = (undefined2)local_18;
            iVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24));
            if ((char)iVar5 == '\x03') {
              local_50 = (undefined2)local_24;
            }
            else {
              local_50 = (undefined2)local_1c;
            }
            local_4c = 0xffff;
            if (*local_14 != 0) {
              local_4c = (undefined2)*local_14;
            }
            iVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24));
            local_53 = (undefined1)iVar5;
            if (local_54 == '\0') {
              thunk_FUN_004e6b40(*(int *)((int)this + 0x24),iVar6,local_4a);
            }
            Library::DKW::TBL::FUN_006ae1c0((uint *)param_1[local_8],local_5c);
          }
        }
        local_14 = local_14 + 1;
        bVar1 = iVar6 < 0x28;
        iVar6 = iVar6 + 1;
      } while (bVar1);
      local_8 = local_8 + 1;
    } while (local_8 < 4);
  }
  return;
}

