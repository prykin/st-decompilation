#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::SaveObj */

undefined4 * __thiscall STExplosionC::SaveObj(STExplosionC *this,uint *param_1)

{
  int iVar1;
  HoloTy *this_00;
  int iVar4;
  undefined1 *puVar5;
  int iVar3;
  HoloTy **ppHVar6;
  uint *puVar7;
  int iVar7;
  byte *puVar8;
  int iVar9;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  AnonShape_00604A90_035626E6 *pAVar14;
  uint *puVar15;
  HoloTy **local_b4;
  InternalExceptionFrame local_8c;
  AnonShape_00604A90_035626E6 *local_48;
  uint *local_44;
  uint *local_3c [3];
  int local_30;
  int local_2c [2];
  undefined1 *local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079cc18;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff40;
  local_48 = nullptr;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  ExceptionList = &local_14;
  iVar3 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,2);
  local_1c = &stack0xffffff40;
  if (iVar3 == 0) {
    *param_1 = 0;
    local_1c = &stack0xffffff40;
    local_48 = Library::DKW::LIB::MemAlloc(0xe2);
    *param_1 = 0xe2;
    this->field_01E1 = 1;
    puVar8 = (byte *)&this->field_0x1d5;
    pAVar14 = local_48;
    memmove(pAVar14, puVar8, 0x40); /* compiler REP MOVS byte copy */
    iVar9 = 0;
    *(undefined4 *)&local_48->field_0x40 = this->field_0215;
    ppHVar6 = &this->field_0219;
    puVar8 = (byte *)&local_48->field_0x44;
    memmove(puVar8, ppHVar6, 0x50); /* compiler REP MOVS byte copy */
    *(int *)&local_48->field_0x94 = this->field_0269;
    local_48->field_0x98 = this->field_026D;
    local_48->field_0099 = this->field_026E;
    local_48->field_00DE = this->field_02B7;
    local_48->field_009D = this->field_0272;
    local_48->field_00A1 = this->field_0276;
    local_48->field_00A5 = this->field_027A;
    local_48->field_00A9 = this->field_027E;
    if ((uint *)this->field_0215 != nullptr) {
      local_3c[0] = nullptr;
      local_3c[0] = FUN_006b0020((uint *)this->field_0215,(int *)&local_20);
      uVar11 = *param_1 + local_20 + 4;
      *param_1 = uVar11;
      local_48 = Library::DKW::LIB::MemRealloc(local_48,uVar11);
      *(uint *)((*param_1 - local_20) + -4 + (int)local_48) = local_20;
      puVar12 = local_3c[0];
      puVar7 = (uint *)((*param_1 - local_20) + (int)local_48);
      memmove(puVar7, puVar12, local_20); /* compiler REP MOVS byte copy */
      FreeAndNull(local_3c);
    }
    iVar9 = 0;
    iVar1 = this->field_0269;
    if (iVar1 != 0) {
      iVar4 = iVar1 * -8;
      puVar8 = (byte *)(&stack0xffffff40 + iVar4);
      local_1c = &stack0xffffff40 + iVar4;
      local_24 = &stack0xffffff40 + iVar4;
      local_8 = 0xffffffff;
      local_30 = 0;
      if (0 < iVar1) {
        ppHVar6 = &this->field_0219;
        do {
          this_00 = *ppHVar6;
          if (this_00 != nullptr) {
            *(int **)(&stack0xffffff3c + iVar4) = local_2c;
            *(undefined4 *)(&stack0xffffff38 + iVar4) = 0x604c70;
            local_3c[0] = (uint *)thunk_FUN_0062af40(this_00,*(undefined4 **)
                                                              (&stack0xffffff3c + iVar4));
            iVar9 = iVar9 + 4 + local_2c[0];
            puVar8[1] = local_2c[0];
            *puVar8 = local_3c[0];
          }
          local_30 = local_30 + 1;
          ppHVar6 = ppHVar6 + 1;
          puVar8 = (byte *)(puVar8 + 2);
        } while (local_30 < this->field_0269);
      }
      uVar11 = *param_1;
      *param_1 = uVar11 + iVar9;
      *(uint *)(&stack0xffffff3c + iVar4) = uVar11 + iVar9;
      *(AnonShape_00604A90_035626E6 **)(&stack0xffffff38 + iVar4) = local_48;
      *(undefined4 *)(&stack0xffffff34 + iVar4) = 0x604cbb;
      local_48 = Library::DKW::LIB::MemRealloc
                           (*(void **)(&stack0xffffff38 + iVar4),*(uint *)(&stack0xffffff3c + iVar4)
                           );
      puVar12 = (uint *)((*param_1 - iVar9) + (int)local_48);
      local_30 = 0;
      if (0 < this->field_0269) {
        puVar7 = (uint *)(local_24 + 4);
        local_b4 = &this->field_0219;
        do {
          if (*local_b4 != nullptr) {
            local_44 = puVar12;
            *puVar12 = *puVar7;
            local_3c[0] = (uint *)puVar7[-1];
            uVar11 = *puVar7;
            puVar13 = (uint *)puVar7[-1];
            puVar15 = puVar12 + 1;
            memmove(puVar15, puVar13, uVar11); /* compiler REP MOVS byte copy */
            *(uint ***)(&stack0xffffff3c + iVar4) = local_3c;
            *(undefined4 *)(&stack0xffffff38 + iVar4) = 0x604d29;
            FreeAndNull(*(void **)(&stack0xffffff3c + iVar4));
            puVar12 = (uint *)((int)(puVar12 + 1) + *local_44);
          }
          local_30 = local_30 + 1;
          local_b4 = local_b4 + 1;
          puVar7 = puVar7 + 2;
        } while (local_30 < this->field_0269);
      }
    }
    g_currentExceptionFrame = local_8c.previous;
  }
  else {
    g_currentExceptionFrame = local_8c.previous;
    puVar5 = &stack0xffffff40;
    if (local_48 != nullptr) {
      FreeAndNull(&local_48);
      puVar5 = local_1c;
    }
    local_1c = puVar5;
    iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x2df,0,iVar3,"%s");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_Expl.cpp",0x2e1);
  }
  ExceptionList = local_14;
  return (undefined4 *)local_48;
}

