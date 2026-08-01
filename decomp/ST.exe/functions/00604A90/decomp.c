#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::SaveObj */

undefined4 * __thiscall STExplosionC::SaveObj(STExplosionC *this,uint *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  HoloTy **ppHVar4;
  uint *puVar5;
  int iVar6;
  byte *puVar7;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  AnonShape_00604A90_035626E6 *pAVar12;
  uint *puVar13;
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
  local_48 = (AnonShape_00604A90_035626E6 *)0x0;
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
    puVar7 = (byte *)&this->field_0x1d5;
    pAVar12 = local_48;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar12 = *puVar7;
      puVar7 = (byte *)(puVar7 + 1);
      pAVar12 = (AnonShape_00604A90_035626E6 *)&pAVar12->field_0x4;
    }
    *(undefined4 *)&local_48->field_0x40 = this->field_0215;
    ppHVar4 = &this->field_0219;
    puVar7 = (byte *)&local_48->field_0x44;
    memmove(puVar7, ppHVar4, 0x50); /* compiler REP MOVS byte copy */
    *(int *)&local_48->field_0x94 = this->field_0269;
    local_48->field_0x98 = this->field_026D;
    local_48->field_0099 = this->field_026E;
    local_48->field_00DE = this->field_02B7;
    local_48->field_009D = this->field_0272;
    local_48->field_00A1 = this->field_0276;
    local_48->field_00A5 = this->field_027A;
    local_48->field_00A9 = this->field_027E;
    if ((uint *)this->field_0215 != (uint *)0x0) {
      local_3c[0] = (uint *)0x0;
      local_3c[0] = (uint *)FUN_006b0020((uint *)this->field_0215,(int *)&local_20);
      uVar9 = *param_1 + local_20 + 4;
      *param_1 = uVar9;
      local_48 = Library::DKW::LIB::MemRealloc((AnonPointee_TLOBaseTy_0607 *)local_48,uVar9);
      *(uint *)((*param_1 - local_20) + -4 + (int)local_48) = local_20;
      puVar5 = local_3c[0];
      puVar11 = (uint *)((*param_1 - local_20) + (int)local_48);
      memmove(puVar11, puVar5, local_20); /* compiler REP MOVS byte copy */
      FreeAndNull(local_3c);
    }
    puVar7 = (byte *)&stack0xffffff40;
    iVar3 = 0;
    iVar6 = this->field_0269;
    if (iVar6 != 0) {
      local_8 = 0;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_30 = 0;
      local_24 = &stack0xffffff40;
      local_1c = &stack0xffffff40;
      if (0 < iVar6) {
        ppHVar4 = &this->field_0219;
        local_24 = &stack0xffffff40;
        local_1c = &stack0xffffff40;
        do {
          if (*ppHVar4 != (HoloTy *)0x0) {
            local_3c[0] = (uint *)thunk_FUN_0062af40(*ppHVar4,local_2c);
            iVar3 = iVar3 + 4 + local_2c[0];
            puVar7[1] = local_2c[0];
            *puVar7 = local_3c[0];
          }
          local_30 = local_30 + 1;
          ppHVar4 = ppHVar4 + 1;
          puVar7 = (byte *)(puVar7 + 2);
        } while (local_30 < this->field_0269);
      }
      uVar9 = *param_1;
      *param_1 = uVar9 + iVar3;
      local_48 = Library::DKW::LIB::MemRealloc((AnonPointee_TLOBaseTy_0607 *)local_48,uVar9 + iVar3);
      local_44 = (uint *)((*param_1 - iVar3) + (int)local_48);
      local_30 = 0;
      if (0 < this->field_0269) {
        puVar5 = (uint *)(local_24 + 4);
        local_b4 = &this->field_0219;
        do {
          if (*local_b4 != (HoloTy *)0x0) {
            *local_44 = *puVar5;
            puVar10 = local_44 + 1;
            local_3c[0] = (uint *)puVar5[-1];
            uVar9 = *puVar5;
            puVar11 = local_3c[0];
            puVar13 = puVar10;
            memmove(puVar13, puVar11, uVar9); /* compiler REP MOVS byte copy */
            FreeAndNull(local_3c);
            local_44 = (uint *)((int)puVar10 + *local_44);
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
    puVar2 = &stack0xffffff40;
    if (local_48 != (AnonShape_00604A90_035626E6 *)0x0) {
      FreeAndNull(&local_48);
      puVar2 = local_1c;
    }
    local_1c = puVar2;
    iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x2df,0,iVar3,"%s",
                               "STExplosionC::SaveObj(");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_Expl.cpp",0x2e1);
  }
  ExceptionList = local_14;
  return (undefined4 *)local_48;
}

