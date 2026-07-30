#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::SaveGObjData */

undefined4 * __thiscall STAllPlayersC::SaveGObjData(STAllPlayersC *this,int *param_1)

{
  AnonPointee_STAllPlayersC_018D *pAVar1;
  AnonPointee_STAllPlayersC_0191 *pAVar2;
  AnonPointee_STAllPlayersC_01A5 *pAVar3;
  AnonPointee_STAllPlayersC_01A9 *pAVar4;
  AnonPointee_STAllPlayersC_01B5 *pAVar5;
  AnonPointee_STAllPlayersC_01B9 *pAVar6;
  AnonPointee_STAllPlayersC_01AD *pAVar7;
  AnonPointee_STAllPlayersC_01B1 *pAVar8;
  ushort *puVar9;
  AnonPointee_STAllPlayersC_0195 *pAVar10;
  AnonPointee_STAllPlayersC_0199 *pAVar11;
  code *pcVar12;
  uint *puVar13;
  AnonShape_004210E0_306A4C8B *pAVar14;
  STAllPlayersC *pSVar15;
  int iVar16;
  byte *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  byte *puVar22;
  InternalExceptionFrame local_6c;
  undefined1 *local_28;
  int local_24;
  uint *local_20;
  undefined4 *local_1c;
  AnonShape_004210E0_306A4C8B *local_18;
  STAllPlayersC *local_14;
  undefined4 *local_10;
  AnonShape_004210E0_306A4C8B *local_c;
  uint local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar16 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  pSVar15 = local_14;
  if (iVar16 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar18 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xe46,0,iVar16,"%s"
                                ,"STAllPlayersC::SaveGObjData");
    if (iVar18 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar16,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0xe47);
    return (undefined4 *)local_c;
  }
  *param_1 = 0x281;
  iVar16 = local_14->field_009B * 8 + 0x281;
  *param_1 = iVar16;
  local_8 = local_14->field_00A3 * 0x48;
  iVar16 = local_8 + iVar16;
  *param_1 = iVar16;
  if (local_14->field_01CD == 1) {
    *param_1 = iVar16 + 0x124;
    iVar18 = local_14->field_0020;
    if (iVar18 == 0x14) {
      puVar17 = (byte *)(&local_14->field_0171);
      local_20 = (uint *)0x5;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar17[-5],(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar17,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar16 = *param_1;
        puVar17 = (byte *)(puVar17 + 1);
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = iVar16 + local_8;
      } while (local_20 != (uint *)0x0);
      iVar16 = iVar16 + local_8 + 0x4bc;
      local_20 = (uint *)0x0;
    }
    else if (iVar18 == 0x1ae) {
      iVar16 = iVar16 + 0x146;
    }
    else {
      if (iVar18 != 1000) goto LAB_004212f3;
      puVar17 = (byte *)(&local_14->field_0135);
      local_20 = (uint *)0x2;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar17[-2],(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar17,(int *)&local_8);
        FreeAndNull(&local_c);
        puVar17 = (byte *)(puVar17 + 1);
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = *param_1 + local_8;
      } while (local_20 != (uint *)0x0);
      puVar17 = (byte *)(&pSVar15->field_014D);
      local_20 = (uint *)0x4;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar17[-4],(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar17,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar16 = *param_1;
        puVar17 = (byte *)(puVar17 + 1);
        *param_1 = iVar16 + local_8;
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != (uint *)0x0);
      *param_1 = iVar16 + local_8 + 0x272;
      local_c = (AnonShape_004210E0_306A4C8B *)
                FUN_006b0020((uint *)pSVar15->field_019D,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
      local_c = (AnonShape_004210E0_306A4C8B *)
                FUN_006b0020((uint *)pSVar15->field_01A1,(int *)&local_8);
      FreeAndNull(&local_c);
      iVar16 = *param_1 + local_8 + 0x2e;
    }
    *param_1 = iVar16;
  }
LAB_004212f3:
  local_18 = Library::DKW::LIB::MemAlloc(*param_1);
  local_18->field_0111 = -1;
  local_18->field_0115 = 0;
  local_18->field_0119 = 0xffffffff;
  iVar16 = 2;
  local_18->field_011D = 0;
  local_18->field_0121 = 0xffffffff;
  local_18->field_0125 = 0;
  local_18->field_0129 = 0xffffffff;
  local_18->field_012D = 0;
  local_20 = (uint *)&local_18->field_0x135;
  puVar17 = (byte *)(local_20);
  do {
    puVar17[-1] = 0xffffffff;
    *puVar17 = 0;
    puVar17[3] = 0xffffffff;
    puVar17[4] = 0;
    puVar17 = (byte *)(puVar17 + 2);
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  puVar17 = (byte *)&local_18->field_0x155;
  iVar16 = 4;
  do {
    puVar17[-1] = 0xffffffff;
    *puVar17 = 0;
    puVar17[7] = 0xffffffff;
    puVar17[8] = 0;
    puVar17 = (byte *)(puVar17 + 2);
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  local_28 = &local_18->field_0x195;
  iVar16 = 5;
  puVar17 = (byte *)local_28;
  do {
    puVar17[-1] = 0xffffffff;
    *puVar17 = 0;
    puVar17[9] = 0xffffffff;
    puVar17[10] = 0;
    puVar17 = (byte *)(puVar17 + 2);
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  local_18->field_01E1 = 0xffffffff;
  local_18->field_01E5 = 0;
  local_18->field_01E9 = 0xffffffff;
  local_18->field_01ED = 0;
  local_18->field_01F1 = 0xffffffff;
  local_18->field_01F5 = 0;
  local_18->field_01F9 = 0xffffffff;
  local_18->field_01FD = 0;
  local_18->field_0201 = 0xffffffff;
  local_18->field_0205 = 0;
  local_18->field_0209 = 0xffffffff;
  local_18->field_020D = 0;
  local_18->field_0211 = 0xffffffff;
  local_18->field_0215 = 0;
  local_18->field_0219 = 0xffffffff;
  local_18->field_021D = 0;
  local_18->field_0221 = 0xffffffff;
  local_18->field_0225 = 0;
  local_18->field_0229 = 0xffffffff;
  local_18->field_022D = 0;
  local_18->field_0231 = 0xffffffff;
  local_18->field_0235 = 0;
  local_18->field_0239 = 0xffffffff;
  local_18->field_023D = 0;
  local_18->field_0241 = 0xffffffff;
  local_18->field_0245 = 0;
  local_18->field_0249 = 0xffffffff;
  local_18->field_024D = 0;
  local_18->field_0251 = 0xffffffff;
  local_18->field_0259 = 0xffffffff;
  local_18->field_0255 = 0;
  local_18->field_025D = 0;
  local_18->field_0261 = 0xffffffff;
  local_18->field_0269 = 0xffffffff;
  local_18->field_0265 = 0;
  local_18->field_026D = 0;
  *(undefined4 *)local_18 = pSVar15->field_001C;
  *(undefined2 *)&local_18->field_0x4 = pSVar15->field_0030;
  local_18->field_0006 = pSVar15->field_0032;
  puVar17 = (byte *)&pSVar15->field_0x34;
  puVar22 = (byte *)&local_18->field_0x8;
  for (iVar16 = 0x17; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar22 = *puVar17;
    puVar17 = (byte *)(puVar17 + 1);
    puVar22 = (byte *)(puVar22 + 1);
  }
  *(undefined2 *)puVar22 = *(undefined2 *)puVar17;
  *(undefined1 *)((int)puVar22 + 2) = *(undefined1 *)((int)puVar17 + 2);
  puVar17 = (byte *)&pSVar15->field_0x93;
  puVar22 = (byte *)&local_18->field_0x67;
  for (iVar16 = 0x1b; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar22 = *puVar17;
    puVar17 = (byte *)(puVar17 + 1);
    puVar22 = (byte *)(puVar22 + 1);
  }
  *(undefined2 *)puVar22 = *(undefined2 *)puVar17;
  local_18->field_00D5 = pSVar15->field_01CD;
  local_18->field_00D9 = pSVar15->field_0101;
  local_18->field_00DD = pSVar15->field_0105;
  local_18->field_00E1 = pSVar15->field_0109;
  local_18->field_00E5 = pSVar15->field_010D;
  local_18->field_00E9 = pSVar15->field_0111;
  local_18->field_00ED = pSVar15->field_0115;
  local_18->field_00F1 = pSVar15->field_0119;
  local_18->field_00F5 = pSVar15->field_01D1;
  local_18->field_00F9 = pSVar15->field_0215;
  local_18->field_00FD = pSVar15->field_0219;
  local_18->field_0101 = pSVar15->field_021D;
  local_18->field_0105 = pSVar15->field_0221;
  local_18->field_0109 = pSVar15->field_0225;
  local_18->field_010D = 0;
  iVar16 = pSVar15->field_009B * 8;
  puVar17 = (byte *)(pSVar15->field_0097);
  puVar22 = (byte *)&local_18->field_0x281;
  for (iVar18 = (pSVar15->field_009B & 0x1fffffff) << 1; iVar18 != 0; iVar18 = iVar18 + -1) {
    *puVar22 = *puVar17;
    puVar17 = (byte *)(puVar17 + 1);
    puVar22 = (byte *)(puVar22 + 1);
  }
  for (iVar18 = 0; iVar18 != 0; iVar18 = iVar18 + -1) {
    *(undefined1 *)puVar22 = *(undefined1 *)puVar17;
    puVar17 = (byte *)((int)puVar17 + 1);
    puVar22 = (byte *)((int)puVar22 + 1);
  }
  local_18->field_0271 = 0x281;
  local_18->field_0275 = iVar16;
  iVar18 = local_14->field_00A3 * 0x48;
  puVar17 = (byte *)(local_14->field_009F);
  puVar22 = (byte *)(&local_18->field_0x281 + iVar16);
  for (iVar19 = (local_14->field_00A3 * 9 & 0x1fffffffU) << 1; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar22 = *puVar17;
    puVar17 = (byte *)(puVar17 + 1);
    puVar22 = (byte *)(puVar22 + 1);
  }
  for (iVar19 = 0; iVar19 != 0; iVar19 = iVar19 + -1) {
    *(undefined1 *)puVar22 = *(undefined1 *)puVar17;
    puVar17 = (byte *)((int)puVar17 + 1);
    puVar22 = (byte *)((int)puVar22 + 1);
  }
  local_18->field_0279 = iVar16 + 0x281;
  local_18->field_027D = iVar18;
  local_c = local_18;
  if (local_14->field_01CD == 1) {
    iVar18 = iVar16 + 0x281 + iVar18;
    puVar17 = (byte *)(local_14->field_011D);
    puVar22 = (byte *)(&local_18->field_0x281 + iVar18 + -0x281);
    for (iVar16 = 0xd; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar22 = *puVar17;
      puVar17 = (byte *)(puVar17 + 1);
      puVar22 = (byte *)(puVar22 + 1);
    }
    *(undefined2 *)puVar22 = *(undefined2 *)puVar17;
    local_18->field_0111 = iVar18;
    local_18->field_0115 = 0x36;
    puVar17 = (byte *)(local_14->field_0121);
    puVar22 = (byte *)(&local_18[1].field_0x33 + iVar18 + -0x281);
    for (iVar16 = 0xd; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar22 = *puVar17;
      puVar17 = (byte *)(puVar17 + 1);
      puVar22 = (byte *)(puVar22 + 1);
    }
    *(undefined2 *)puVar22 = *(undefined2 *)puVar17;
    local_18->field_0119 = iVar18 + 0x36;
    local_18->field_011D = 0x36;
    puVar17 = (byte *)(local_14->field_0125);
    puVar22 = (byte *)(&local_18[1].field_0x69 + iVar18 + -0x281);
    for (iVar16 = 0x17; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar22 = *puVar17;
      puVar17 = (byte *)(puVar17 + 1);
      puVar22 = (byte *)(puVar22 + 1);
    }
    local_18->field_0121 = iVar18 + 0x6c;
    local_18->field_0125 = 0x5c;
    uVar21 = iVar18 + 200;
    local_8 = 0x5c;
    puVar17 = (byte *)(local_14->field_0129);
    puVar22 = (byte *)(&local_18[1].field_0xc5 + iVar18 + -0x281);
    for (iVar16 = 0x17; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar22 = *puVar17;
      puVar17 = (byte *)(puVar17 + 1);
      puVar22 = (byte *)(puVar22 + 1);
    }
    local_18->field_0129 = uVar21;
    local_18->field_012D = 0x5c;
    iVar16 = local_14->field_0020;
    if (iVar16 == 0x14) {
      local_1c = &local_14->field_0171;
      local_24 = 5;
      local_20 = (uint *)local_28;
      do {
        uVar21 = uVar21 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-5],(int *)&local_8);
        puVar17 = (byte *)(local_10);
        puVar22 = (byte *)((int)&local_c->field_0x0 + uVar21);
        memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        local_20[-1] = uVar21;
        *local_20 = local_8;
        FreeAndNull(&local_10);
        uVar21 = uVar21 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
        puVar13 = local_20;
        puVar17 = (byte *)(local_10);
        puVar22 = (byte *)((int)&local_c->field_0x0 + uVar21);
        memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
        local_20[9] = uVar21;
        local_20[10] = local_8;
        FreeAndNull(&local_10);
        local_1c = local_1c + 1;
        local_20 = puVar13 + 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar18 = uVar21 + local_8;
      pAVar10 = local_14->field_0195;
      puVar17 = (byte *)((int)&local_c->field_0x0 + iVar18);
      *puVar17 = pAVar10->field_0000;
      puVar17[1] = pAVar10->field_0004;
      puVar17[2] = pAVar10->field_0008;
      puVar17[3] = pAVar10->field_000C;
      *(undefined2 *)(puVar17 + 4) = pAVar10->field_0010;
      *(undefined1 *)((int)puVar17 + 0x12) = pAVar10->field_0012;
      local_18->field_0201 = iVar18;
      local_18->field_0205 = 0x13;
      pAVar11 = local_14->field_0199;
      puVar17 = (byte *)(&local_c->field_0x13 + iVar18);
      *puVar17 = pAVar11->field_0000;
      puVar17[1] = pAVar11->field_0004;
      puVar17[2] = pAVar11->field_0008;
      puVar17[3] = pAVar11->field_000C;
      *(undefined2 *)(puVar17 + 4) = pAVar11->field_0010;
      *(undefined1 *)((int)puVar17 + 0x12) = pAVar11->field_0012;
      local_18->field_0209 = iVar18 + 0x13;
      local_18->field_020D = 0x13;
      pAVar7 = local_14->field_01AD;
      puVar17 = (byte *)(&local_c->field_0x26 + iVar18);
      *puVar17 = pAVar7->field_0000;
      puVar17[1] = pAVar7->field_0004;
      *(undefined2 *)(puVar17 + 2) = pAVar7->field_0008;
      *(undefined1 *)((int)puVar17 + 10) = pAVar7->field_000A;
      local_18->field_0231 = iVar18 + 0x26;
      local_18->field_0235 = 0xb;
      pAVar8 = local_14->field_01B1;
      puVar17 = (byte *)(&local_c->field_0x31 + iVar18);
      *puVar17 = pAVar8->field_0000;
      puVar17[1] = pAVar8->field_0004;
      *(undefined2 *)(puVar17 + 2) = pAVar8->field_0008;
      *(undefined1 *)((int)puVar17 + 10) = pAVar8->field_000A;
      local_18->field_0239 = iVar18 + 0x31;
      local_18->field_023D = 0xb;
      puVar17 = (byte *)(local_14->field_01BD);
      puVar22 = (byte *)(&local_c->field_0x3c + iVar18);
      for (iVar16 = 0x90; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar22 = *puVar17;
        puVar17 = (byte *)(puVar17 + 1);
        puVar22 = (byte *)(puVar22 + 1);
      }
      local_18->field_0251 = iVar18 + 0x3c;
      local_18->field_0255 = 0x240;
      puVar17 = (byte *)(local_14->field_01C1);
      puVar22 = (byte *)((int)&local_c->field_0279 + iVar18 + 3);
      for (iVar16 = 0x90; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar22 = *puVar17;
        puVar17 = (byte *)(puVar17 + 1);
        puVar22 = (byte *)(puVar22 + 1);
      }
      local_18->field_0259 = iVar18 + 0x27c;
      local_18->field_025D = 0x240;
    }
    else {
      if (iVar16 == 0x1ae) {
        pAVar7 = local_14->field_01AD;
        puVar17 = (byte *)((int)&local_18[1].field_0121 + iVar18 + -0x281);
        *puVar17 = pAVar7->field_0000;
        puVar17[1] = pAVar7->field_0004;
        *(undefined2 *)(puVar17 + 2) = pAVar7->field_0008;
        *(undefined1 *)((int)puVar17 + 10) = pAVar7->field_000A;
        local_18->field_0231 = iVar18 + 0x124;
        local_18->field_0235 = 0xb;
        pAVar8 = local_14->field_01B1;
        puVar17 = (byte *)((int)&local_18[1].field_0129 + iVar18 + -0x27e);
        *puVar17 = pAVar8->field_0000;
        puVar17[1] = pAVar8->field_0004;
        *(undefined2 *)(puVar17 + 2) = pAVar8->field_0008;
        *(undefined1 *)((int)puVar17 + 10) = pAVar8->field_000A;
        local_18->field_0239 = iVar18 + 0x12f;
        local_18->field_023D = 0xb;
        puVar9 = local_14->field_01C5;
        *(undefined4 *)(&local_18[1].field_0x137 + iVar18 + -0x281) = *(undefined4 *)puVar9;
        *(ushort *)((int)(&local_18[1].field_0x137 + iVar18 + -0x281) + 4) = puVar9[2];
        local_18->field_0261 = iVar18 + 0x13a;
        local_18->field_0265 = 6;
        puVar9 = local_14->field_01C9;
        *(undefined4 *)(&local_18[1].field_0x13d + iVar18 + -0x281) = *(undefined4 *)puVar9;
        *(ushort *)((int)(&local_18[1].field_0x13d + iVar18 + -0x281) + 4) = puVar9[2];
        local_18->field_0269 = iVar18 + 0x140;
        local_18->field_026D = 6;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_18;
      }
      if (iVar16 == 1000) {
        local_1c = &local_14->field_0135;
        local_24 = 2;
        do {
          uVar21 = uVar21 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-2],(int *)&local_8);
          puVar17 = (byte *)(local_10);
          puVar22 = (byte *)((int)&local_c->field_0x0 + uVar21);
          memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
          uVar20 = 0;
          local_20[-1] = uVar21;
          *local_20 = local_8;
          FreeAndNull(&local_10);
          uVar21 = uVar21 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar13 = local_20;
          puVar17 = (byte *)(local_10);
          puVar22 = (byte *)((int)&local_c->field_0x0 + uVar21);
          memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
          uVar20 = 0;
          local_20[3] = uVar21;
          local_20[4] = local_8;
          FreeAndNull(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar13 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_1c = &local_14->field_014D;
        local_20 = (uint *)&local_18->field_0x155;
        local_24 = 4;
        do {
          uVar21 = uVar21 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-4],(int *)&local_8);
          puVar17 = (byte *)(local_10);
          puVar22 = (byte *)((int)&local_c->field_0x0 + uVar21);
          memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
          uVar20 = 0;
          local_20[-1] = uVar21;
          *local_20 = local_8;
          FreeAndNull(&local_10);
          uVar21 = uVar21 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar13 = local_20;
          puVar17 = (byte *)(local_10);
          puVar22 = (byte *)((int)&local_c->field_0x0 + uVar21);
          memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
          local_20[7] = uVar21;
          local_20[8] = local_8;
          FreeAndNull(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar13 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        iVar18 = uVar21 + local_8;
        puVar17 = (byte *)(local_14->field_0185);
        puVar22 = (byte *)((int)&local_c->field_0x0 + iVar18);
        for (iVar16 = 0x4a; iVar16 != 0; iVar16 = iVar16 + -1) {
          *puVar22 = *puVar17;
          puVar17 = (byte *)(puVar17 + 1);
          puVar22 = (byte *)(puVar22 + 1);
        }
        *(undefined1 *)puVar22 = *(undefined1 *)puVar17;
        local_18->field_01E1 = iVar18;
        local_18->field_01E5 = 0x129;
        puVar17 = (byte *)(local_14->field_0189);
        puVar22 = (byte *)((int)&local_c->field_0129 + iVar18);
        for (iVar16 = 0x4a; iVar16 != 0; iVar16 = iVar16 + -1) {
          *puVar22 = *puVar17;
          puVar17 = (byte *)(puVar17 + 1);
          puVar22 = (byte *)(puVar22 + 1);
        }
        *(undefined1 *)puVar22 = *(undefined1 *)puVar17;
        local_18->field_01E9 = iVar18 + 0x129;
        local_18->field_01ED = 0x129;
        pAVar1 = local_14->field_018D;
        puVar17 = (byte *)((int)&local_c->field_0251 + iVar18 + 1);
        *puVar17 = pAVar1->field_0000;
        puVar17[1] = pAVar1->field_0004;
        puVar17[2] = pAVar1->field_0008;
        puVar17[3] = pAVar1->field_000C;
        local_18->field_01F1 = iVar18 + 0x252;
        local_18->field_01F5 = 0x10;
        pAVar2 = local_14->field_0191;
        local_8 = 0x10;
        puVar17 = (byte *)((int)&local_c->field_0261 + iVar18 + 1);
        *puVar17 = pAVar2->field_0000;
        puVar17[1] = pAVar2->field_0004;
        puVar17[2] = pAVar2->field_0008;
        puVar17[3] = pAVar2->field_000C;
        local_18->field_01F9 = iVar18 + 0x262;
        local_18->field_01FD = 0x10;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_019D,(int *)&local_8);
        puVar17 = (byte *)(local_10);
        puVar22 = (byte *)((int)&local_c->field_0271 + iVar18 + 1);
        memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
        uVar21 = 0;
        local_18->field_0211 = iVar18 + 0x272;
        local_18->field_0215 = local_8;
        FreeAndNull(&local_10);
        iVar16 = iVar18 + 0x272 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_01A1,(int *)&local_8);
        pAVar14 = local_18;
        puVar17 = (byte *)(local_10);
        puVar22 = (byte *)((int)&local_c->field_0271 + iVar16 + -0x271);
        memmove(puVar22, puVar17, local_8); /* compiler REP MOVS byte copy */
        local_18->field_0219 = iVar16;
        local_18->field_021D = local_8;
        FreeAndNull(&local_10);
        iVar16 = iVar16 + local_8;
        puVar17 = (byte *)((int)&local_c->field_0271 + iVar16 + -0x271);
        pAVar3 = local_14->field_01A5;
        *puVar17 = pAVar3->field_0000;
        puVar17[1] = pAVar3->field_0004;
        puVar17[2] = pAVar3->field_0008;
        pAVar14->field_0221 = iVar16;
        pAVar14->field_0225 = 0xc;
        pAVar4 = local_14->field_01A9;
        puVar17 = (byte *)((int)&local_c->field_027D + iVar16 + -0x271);
        *puVar17 = pAVar4->field_0000;
        puVar17[1] = pAVar4->field_0004;
        puVar17[2] = pAVar4->field_0008;
        pAVar14->field_0229 = iVar16 + 0xc;
        pAVar14->field_022D = 0xc;
        pAVar5 = local_14->field_01B5;
        puVar17 = (byte *)((int)&local_c[1].field_0006 + iVar16 + -0x272);
        *puVar17 = pAVar5->field_0000;
        puVar17[1] = pAVar5->field_0004;
        *(undefined2 *)(puVar17 + 2) = pAVar5->field_0008;
        *(undefined1 *)((int)puVar17 + 10) = pAVar5->field_000A;
        pAVar14->field_0241 = iVar16 + 0x18;
        pAVar14->field_0245 = 0xb;
        pAVar6 = local_14->field_01B9;
        puVar17 = (byte *)(&local_c[1].field_0x11 + iVar16 + -0x272);
        *puVar17 = pAVar6->field_0000;
        puVar17[1] = pAVar6->field_0004;
        *(undefined2 *)(puVar17 + 2) = pAVar6->field_0008;
        *(undefined1 *)((int)puVar17 + 10) = pAVar6->field_000A;
        pAVar14->field_0249 = iVar16 + 0x23;
        pAVar14->field_024D = 0xb;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_c;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return (undefined4 *)local_c;
}

