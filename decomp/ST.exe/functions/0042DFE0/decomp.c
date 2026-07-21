#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PrepareToCmd */

uint __thiscall STAllPlayersC::PrepareToCmd(STAllPlayersC *this,undefined4 *param_1,uint *param_2)

{
  DArrayTy *array;
  dword dVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  STGameObjC *pSVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *local_10;
  int local_c;
  DArrayTy *local_8;

  puVar3 = param_2;
  local_c = 0xffff;
  local_10 = (uint *)0xffff;
  local_8 = (DArrayTy *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  uVar5 = (uint)DAT_0080874d;
  if (g_playerRuntime[uVar5].field324_0x203 == 0) {
    if (g_playerRuntime[uVar5].tempSlots[0][0].playerId == uVar5) {
      iVar4 = g_playerRuntime[uVar5].tempSlots[0][0].objectType;
      if (iVar4 == 0x3c) {
        local_10 = (uint *)thunk_FUN_0042d770(DAT_0080874d,(int *)&local_8);
        local_c = 0;
        if ((short)local_10 == 0x7fff) {
          uVar5 = local_8->count * local_8->elementSize;
          if (puVar3 != (uint *)0x0) {
            *puVar3 = uVar5;
          }
          if (param_1 != (undefined4 *)0x0) {
            puVar7 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar5);
            *param_1 = puVar7;
            puVar9 = local_8->data;
            for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar7 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
        }
        DArrayDestroy(local_8);
      }
      else if (iVar4 == 0x1ae) {
        local_c = 2;
        local_10 = (uint *)(uint)(ushort)g_playerRuntime[uVar5].tempSlots[0][0].objectId;
      }
    }
  }
  else if (g_playerRuntime[uVar5].field324_0x203 == 1) {
    if ((g_playerRuntime[uVar5].tempSlots[1][0].playerId == uVar5) &&
       (g_playerRuntime[uVar5].tempSlots[1][0].objectType == 0x19a)) {
      array = g_playerRuntime[uVar5].tempSlots[1][0].objectIds;
      uVar5 = 0;
      dVar1 = array->count;
      if (0 < (int)dVar1) {
        do {
          DArrayGetElement(array,uVar5,&param_2);
          if (((short)param_2 != -1) &&
             (pSVar6 = GetObjPtr(this,DAT_0080874d,(uint)param_2,CASE_1),
             (*(byte *)&pSVar6->field_01D1 & 4) == 0)) {
            local_c = 1;
            local_10 = param_2;
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)dVar1);
      }
    }
  }
  else {
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x58f,0,0,"%s",
                               "STAllPlayersC::PrepareToCmd invalid panel number");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return local_c << 0x10 | (uint)local_10 & 0xffff;
}

