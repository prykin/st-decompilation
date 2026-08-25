#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PrepareToCmd */

uint __thiscall STAllPlayersC::PrepareToCmd(STAllPlayersC *this,undefined4 *param_1,uint *param_2)

{
  DArrayTy *array;
  dword dVar1;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  STGameObjC *pSVar6;
  byte *puVar7;
  byte *puVar9;
  uint local_10; /* split scalar lifetime from pointer-shaped SSA storage */
  int local_c;
  DArrayTy *local_8;

  puVar3 = param_2;
  local_c = 0xffff;
  local_10 = 0xffff;
  local_8 = nullptr;
  if (param_1 != nullptr) {
    *param_1 = 0;
  }
  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  uVar5 = (uint)DAT_0080874d;
  if (g_packedRecords_A62x8[uVar5].field200_0x203 == 0) {
    if (*(uint *)&g_packedRecords_A62x8[uVar5].field97_0x167 == uVar5) {
      if (g_packedRecords_A62x8[uVar5].field96_0x163 == 0x3c) {
        local_10 = thunk_FUN_0042d770(DAT_0080874d,(int *)&local_8);
        local_c = 0;
        if ((short)local_10 == 0x7fff) {
          uVar5 = local_8->count * local_8->elementSize;
          if (puVar3 != nullptr) {
            *puVar3 = uVar5;
          }
          if (param_1 != nullptr) {
            puVar7 = (byte *)(Library::DKW::LIB::MemAlloc(uVar5));
            *param_1 = puVar7;
            puVar9 = (byte *)(local_8->data);
            memmove(puVar7, puVar9, uVar5); /* compiler REP MOVS byte copy */
            uVar5 = 0;
          }
        }
        DArrayDestroy(local_8);
      }
      else if (g_packedRecords_A62x8[uVar5].field96_0x163 == 0x1ae) {
        local_c = 2;
        local_10 = (uint)(ushort)g_packedRecords_A62x8[uVar5].field101_0x16b;
      }
    }
  }
  else if (g_packedRecords_A62x8[uVar5].field200_0x203 == 1) {
    if ((*(uint *)&g_packedRecords_A62x8[uVar5].field150_0x1b7 == uVar5) &&
       (g_packedRecords_A62x8[uVar5].field149_0x1b3 == 0x19a)) {
      array = (DArrayTy *)g_packedRecords_A62x8[uVar5].field155_0x1bd;
      uVar5 = 0;
      dVar1 = array->count;
      if (0 < (int)dVar1) {
        do {
          DArrayGetElement(array,uVar5,&param_2);
          if (((ushort)param_2 != 0xffff) &&
             /* ST_CALLSITE[0042E0C6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
             (pSVar6 = GetObjPtr(this,DAT_0080874d,(ushort)param_2,CASE_1),
             (pSVar6->field_01D1 & 4) == 0)) {
            local_c = 1;
            local_10 = static_cast<uint>(STRawWord(param_2));
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
  return local_c << 0x10 | local_10 & 0xffff;
}

