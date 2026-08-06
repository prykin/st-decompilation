#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::SaveObj */

undefined4 * __thiscall STExplosionC::SaveObj(STExplosionC *this,uint *param_1)

{
  int iVar1;
  undefined1 *puVar3;
  int iVar3;
  HoloTy **ppHVar4;
  uint *puVar5;
  int iVar7;
  byte *puVar6;
  int iVar8;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  AnonShape_00604A90_035626E6 *pAVar13;
  uint *puVar14;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
  local_1c = &stack0xffffff40;
  if (iVar3 == 0) {
    *param_1 = 0;
    local_1c = &stack0xffffff40;
    local_48 = Library::DKW::LIB::MemAlloc(0xe2);
    *param_1 = 0xe2;
    this->field_01E1 = 1;
    puVar6 = (byte *)&this->field_0x1d5;
    pAVar13 = local_48;
    memmove(pAVar13, puVar6, 0x40); /* compiler REP MOVS byte copy */
    iVar8 = 0;
    *(undefined4 *)&local_48->field_0x40 = this->field_0215;
    ppHVar4 = &this->field_0219;
    puVar6 = (byte *)&local_48->field_0x44;
    memmove(puVar6, ppHVar4, 0x50); /* compiler REP MOVS byte copy */
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
      local_3c[0] = (uint *)FUN_006b0020((uint *)this->field_0215,(int *)&local_20);
      uVar10 = *param_1 + local_20 + 4;
      *param_1 = uVar10;
      local_48 = Library::DKW::LIB::MemRealloc(local_48,uVar10);
      *(uint *)((*param_1 - local_20) + -4 + (int)local_48) = local_20;
      puVar5 = local_3c[0];
      puVar12 = (uint *)((*param_1 - local_20) + (int)local_48);
      memmove(puVar12, puVar5, local_20); /* compiler REP MOVS byte copy */
      FreeAndNull(local_3c);
    }
    puVar6 = (byte *)&stack0xffffff40;
    iVar8 = 0;
    iVar1 = this->field_0269;
    if (iVar1 != 0) {
      local_8 = 0;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_30 = 0;
      local_24 = &stack0xffffff40;
      local_1c = &stack0xffffff40;
      if (0 < iVar1) {
        ppHVar4 = &this->field_0219;
        local_24 = &stack0xffffff40;
        local_1c = &stack0xffffff40;
        do {
          if (*ppHVar4 != nullptr) {
            local_3c[0] = (uint *)thunk_FUN_0062af40(*ppHVar4,local_2c);
            iVar8 = iVar8 + 4 + local_2c[0];
            puVar6[1] = local_2c[0];
            *puVar6 = local_3c[0];
          }
          local_30 = local_30 + 1;
          ppHVar4 = ppHVar4 + 1;
          puVar6 = (byte *)(puVar6 + 2);
        } while (local_30 < this->field_0269);
      }
      uVar10 = *param_1;
      *param_1 = uVar10 + iVar8;
      local_48 = Library::DKW::LIB::MemRealloc(local_48,uVar10 + iVar8);
      local_44 = (uint *)((*param_1 - iVar8) + (int)local_48);
      local_30 = 0;
      if (0 < this->field_0269) {
        puVar5 = (uint *)(local_24 + 4);
        local_b4 = &this->field_0219;
        do {
          if (*local_b4 != nullptr) {
            *local_44 = *puVar5;
            puVar11 = local_44 + 1;
            local_3c[0] = (uint *)puVar5[-1];
            uVar10 = *puVar5;
            puVar12 = local_3c[0];
            puVar14 = puVar11;
            memmove(puVar14, puVar12, uVar10); /* compiler REP MOVS byte copy */
            FreeAndNull(local_3c);
            local_44 = (uint *)((int)puVar11 + *local_44);
          }
          local_30 = local_30 + 1;
          local_b4 = local_b4 + 1;
          puVar5 = puVar5 + 2;
        } while (local_30 < this->field_0269);
      }
    }
    g_currentExceptionFrame = local_8c.previous;
  }
  else {
    g_currentExceptionFrame = local_8c.previous;
    puVar3 = &stack0xffffff40;
    if (local_48 != nullptr) {
      FreeAndNull(&local_48);
      puVar3 = local_1c;
    }
    local_1c = puVar3;
    iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x2df,0,iVar3,"%s",
                               "STExplosionC::SaveObj(");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_Expl.cpp",0x2e1);
  }
  ExceptionList = local_14;
  return (undefined4 *)local_48;
}

