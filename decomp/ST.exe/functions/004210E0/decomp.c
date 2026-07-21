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
  AnonPointee_STAllPlayersC_0195 *pAVar9;
  AnonPointee_STAllPlayersC_0199 *pAVar10;
  code *pcVar11;
  uint *puVar12;
  AnonShape_004210E0_306A4C8B *pAVar13;
  STAllPlayersC *pSVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
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
  iVar15 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  pSVar14 = local_14;
  if (iVar15 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0xe46,0,iVar15,"%s"
                                ,"STAllPlayersC::SaveGObjData");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar15,0,"E:\\__titans\\wlad\\Tc_gobj.cpp",0xe47);
    return (undefined4 *)local_c;
  }
  *param_1 = 0x281;
  iVar15 = local_14->field_009B * 8 + 0x281;
  *param_1 = iVar15;
  local_8 = local_14->field_00A3 * 0x48;
  iVar15 = local_8 + iVar15;
  *param_1 = iVar15;
  if (local_14->field_01CD == 1) {
    *param_1 = iVar15 + 0x124;
    iVar17 = local_14->field_0020;
    if (iVar17 == 0x14) {
      puVar16 = &local_14->field_0171;
      local_20 = (uint *)0x5;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar16[-5],(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar16,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar15 = *param_1;
        puVar16 = puVar16 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = iVar15 + local_8;
      } while (local_20 != (uint *)0x0);
      iVar15 = iVar15 + local_8 + 0x4bc;
      local_20 = (uint *)0x0;
    }
    else if (iVar17 == 0x1ae) {
      iVar15 = iVar15 + 0x146;
    }
    else {
      if (iVar17 != 1000) goto LAB_004212f3;
      puVar16 = &local_14->field_0135;
      local_20 = (uint *)0x2;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar16[-2],(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar16,(int *)&local_8);
        FreeAndNull(&local_c);
        puVar16 = puVar16 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = *param_1 + local_8;
      } while (local_20 != (uint *)0x0);
      puVar16 = &pSVar14->field_014D;
      local_20 = (uint *)0x4;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar16[-4],(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar16,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar15 = *param_1;
        puVar16 = puVar16 + 1;
        *param_1 = iVar15 + local_8;
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != (uint *)0x0);
      *param_1 = iVar15 + local_8 + 0x272;
      local_c = (AnonShape_004210E0_306A4C8B *)
                FUN_006b0020((uint *)pSVar14->field_019D,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
      local_c = (AnonShape_004210E0_306A4C8B *)
                FUN_006b0020((uint *)pSVar14->field_01A1,(int *)&local_8);
      FreeAndNull(&local_c);
      iVar15 = *param_1 + local_8 + 0x2e;
    }
    *param_1 = iVar15;
  }
LAB_004212f3:
  local_18 = (AnonShape_004210E0_306A4C8B *)Library::DKW::LIB::FUN_006aac70(*param_1);
  local_18->field_0111 = -1;
  local_18->field_0115 = 0;
  local_18->field_0119 = 0xffffffff;
  iVar15 = 2;
  local_18->field_011D = 0;
  local_18->field_0121 = 0xffffffff;
  local_18->field_0125 = 0;
  local_18->field_0129 = 0xffffffff;
  local_18->field_012D = 0;
  local_20 = (uint *)&local_18->field_0x135;
  puVar16 = local_20;
  do {
    puVar16[-1] = 0xffffffff;
    *puVar16 = 0;
    puVar16[3] = 0xffffffff;
    puVar16[4] = 0;
    puVar16 = puVar16 + 2;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  puVar16 = (undefined4 *)&local_18->field_0x155;
  iVar15 = 4;
  do {
    puVar16[-1] = 0xffffffff;
    *puVar16 = 0;
    puVar16[7] = 0xffffffff;
    puVar16[8] = 0;
    puVar16 = puVar16 + 2;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  local_28 = &local_18->field_0x195;
  iVar15 = 5;
  puVar16 = (undefined4 *)local_28;
  do {
    puVar16[-1] = 0xffffffff;
    *puVar16 = 0;
    puVar16[9] = 0xffffffff;
    puVar16[10] = 0;
    puVar16 = puVar16 + 2;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
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
  *(undefined4 *)local_18 = pSVar14->field_001C;
  *(undefined2 *)&local_18->field_0x4 = pSVar14->field_0030;
  local_18->field_0006 = pSVar14->field_0032;
  puVar16 = (undefined4 *)&pSVar14->field_0x34;
  puVar21 = (undefined4 *)&local_18->field_0x8;
  for (iVar15 = 0x17; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined2 *)puVar21 = *(undefined2 *)puVar16;
  *(undefined1 *)((int)puVar21 + 2) = *(undefined1 *)((int)puVar16 + 2);
  puVar16 = (undefined4 *)&pSVar14->field_0x93;
  puVar21 = (undefined4 *)&local_18->field_0x67;
  for (iVar15 = 0x1b; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined2 *)puVar21 = *(undefined2 *)puVar16;
  local_18->field_00D5 = pSVar14->field_01CD;
  local_18->field_00D9 = pSVar14->field_0101;
  local_18->field_00DD = pSVar14->field_0105;
  local_18->field_00E1 = pSVar14->field_0109;
  local_18->field_00E5 = pSVar14->field_010D;
  local_18->field_00E9 = pSVar14->field_0111;
  local_18->field_00ED = pSVar14->field_0115;
  local_18->field_00F1 = pSVar14->field_0119;
  local_18->field_00F5 = pSVar14->field_01D1;
  local_18->field_00F9 = pSVar14->field_0215;
  local_18->field_00FD = pSVar14->field_0219;
  local_18->field_0101 = pSVar14->field_021D;
  local_18->field_0105 = pSVar14->field_0221;
  local_18->field_0109 = pSVar14->field_0225;
  local_18->field_010D = 0;
  iVar15 = pSVar14->field_009B * 8;
  puVar16 = (undefined4 *)pSVar14->field_0097;
  puVar21 = (undefined4 *)&local_18->field_0x281;
  for (iVar17 = (pSVar14->field_009B & 0x1fffffff) << 1; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar21 = puVar21 + 1;
  }
  for (iVar17 = 0; iVar17 != 0; iVar17 = iVar17 + -1) {
    *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
    puVar21 = (undefined4 *)((int)puVar21 + 1);
  }
  local_18->field_0271 = 0x281;
  local_18->field_0275 = iVar15;
  iVar17 = local_14->field_00A3 * 0x48;
  puVar16 = (undefined4 *)local_14->field_009F;
  puVar21 = (undefined4 *)(&local_18->field_0x281 + iVar15);
  for (iVar18 = (local_14->field_00A3 * 9 & 0x1fffffffU) << 1; iVar18 != 0; iVar18 = iVar18 + -1) {
    *puVar21 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar21 = puVar21 + 1;
  }
  for (iVar18 = 0; iVar18 != 0; iVar18 = iVar18 + -1) {
    *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
    puVar21 = (undefined4 *)((int)puVar21 + 1);
  }
  local_18->field_0279 = iVar15 + 0x281;
  local_18->field_027D = iVar17;
  local_c = local_18;
  if (local_14->field_01CD == 1) {
    iVar17 = iVar15 + 0x281 + iVar17;
    puVar16 = (undefined4 *)local_14->field_011D;
    puVar21 = (undefined4 *)(&local_18->field_0x281 + iVar17 + -0x281);
    for (iVar15 = 0xd; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar21 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar21 = puVar21 + 1;
    }
    *(undefined2 *)puVar21 = *(undefined2 *)puVar16;
    local_18->field_0111 = iVar17;
    local_18->field_0115 = 0x36;
    puVar16 = (undefined4 *)local_14->field_0121;
    puVar21 = (undefined4 *)(&local_18[1].field_0x33 + iVar17 + -0x281);
    for (iVar15 = 0xd; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar21 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar21 = puVar21 + 1;
    }
    *(undefined2 *)puVar21 = *(undefined2 *)puVar16;
    local_18->field_0119 = iVar17 + 0x36;
    local_18->field_011D = 0x36;
    puVar16 = (undefined4 *)local_14->field_0125;
    puVar21 = (undefined4 *)(&local_18[1].field_0x69 + iVar17 + -0x281);
    for (iVar15 = 0x17; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar21 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar21 = puVar21 + 1;
    }
    local_18->field_0121 = iVar17 + 0x6c;
    local_18->field_0125 = 0x5c;
    uVar20 = iVar17 + 200;
    local_8 = 0x5c;
    puVar16 = (undefined4 *)local_14->field_0129;
    puVar21 = (undefined4 *)(&local_18[1].field_0xc5 + iVar17 + -0x281);
    for (iVar15 = 0x17; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar21 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar21 = puVar21 + 1;
    }
    local_18->field_0129 = uVar20;
    local_18->field_012D = 0x5c;
    iVar15 = local_14->field_0020;
    if (iVar15 == 0x14) {
      local_1c = &local_14->field_0171;
      local_24 = 5;
      local_20 = (uint *)local_28;
      do {
        uVar20 = uVar20 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-5],(int *)&local_8);
        puVar16 = local_10;
        puVar21 = (undefined4 *)((int)&local_c->field_0x0 + uVar20);
        for (uVar19 = local_8 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar21 = puVar21 + 1;
        }
        for (uVar19 = local_8 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
          puVar16 = (undefined4 *)((int)puVar16 + 1);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
        }
        local_20[-1] = uVar20;
        *local_20 = local_8;
        FreeAndNull(&local_10);
        uVar20 = uVar20 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
        puVar12 = local_20;
        puVar16 = local_10;
        puVar21 = (undefined4 *)((int)&local_c->field_0x0 + uVar20);
        for (uVar19 = local_8 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar21 = puVar21 + 1;
        }
        for (uVar19 = local_8 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
          puVar16 = (undefined4 *)((int)puVar16 + 1);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
        }
        local_20[9] = uVar20;
        local_20[10] = local_8;
        FreeAndNull(&local_10);
        local_1c = local_1c + 1;
        local_20 = puVar12 + 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar17 = uVar20 + local_8;
      pAVar9 = local_14->field_0195;
      puVar16 = (undefined4 *)((int)&local_c->field_0x0 + iVar17);
      *puVar16 = pAVar9->field_0000;
      puVar16[1] = pAVar9->field_0004;
      puVar16[2] = pAVar9->field_0008;
      puVar16[3] = pAVar9->field_000C;
      *(undefined2 *)(puVar16 + 4) = pAVar9->field_0010;
      *(undefined1 *)((int)puVar16 + 0x12) = pAVar9->field_0012;
      local_18->field_0201 = iVar17;
      local_18->field_0205 = 0x13;
      pAVar10 = local_14->field_0199;
      puVar16 = (undefined4 *)(&local_c->field_0x13 + iVar17);
      *puVar16 = pAVar10->field_0000;
      puVar16[1] = pAVar10->field_0004;
      puVar16[2] = pAVar10->field_0008;
      puVar16[3] = pAVar10->field_000C;
      *(undefined2 *)(puVar16 + 4) = pAVar10->field_0010;
      *(undefined1 *)((int)puVar16 + 0x12) = pAVar10->field_0012;
      local_18->field_0209 = iVar17 + 0x13;
      local_18->field_020D = 0x13;
      pAVar7 = local_14->field_01AD;
      puVar16 = (undefined4 *)(&local_c->field_0x26 + iVar17);
      *puVar16 = pAVar7->field_0000;
      puVar16[1] = pAVar7->field_0004;
      *(undefined2 *)(puVar16 + 2) = pAVar7->field_0008;
      *(undefined1 *)((int)puVar16 + 10) = pAVar7->field_000A;
      local_18->field_0231 = iVar17 + 0x26;
      local_18->field_0235 = 0xb;
      pAVar8 = local_14->field_01B1;
      puVar16 = (undefined4 *)(&local_c->field_0x31 + iVar17);
      *puVar16 = pAVar8->field_0000;
      puVar16[1] = pAVar8->field_0004;
      *(undefined2 *)(puVar16 + 2) = pAVar8->field_0008;
      *(undefined1 *)((int)puVar16 + 10) = pAVar8->field_000A;
      local_18->field_0239 = iVar17 + 0x31;
      local_18->field_023D = 0xb;
      puVar16 = (undefined4 *)local_14->field_01BD;
      puVar21 = (undefined4 *)(&local_c->field_0x3c + iVar17);
      for (iVar15 = 0x90; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar21 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar21 = puVar21 + 1;
      }
      local_18->field_0251 = iVar17 + 0x3c;
      local_18->field_0255 = 0x240;
      puVar16 = (undefined4 *)local_14->field_01C1;
      puVar21 = (undefined4 *)((int)&local_c->field_0279 + iVar17 + 3);
      for (iVar15 = 0x90; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar21 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar21 = puVar21 + 1;
      }
      local_18->field_0259 = iVar17 + 0x27c;
      local_18->field_025D = 0x240;
    }
    else {
      if (iVar15 == 0x1ae) {
        pAVar7 = local_14->field_01AD;
        puVar16 = (undefined4 *)((int)&local_18[1].field_0121 + iVar17 + -0x281);
        *puVar16 = pAVar7->field_0000;
        puVar16[1] = pAVar7->field_0004;
        *(undefined2 *)(puVar16 + 2) = pAVar7->field_0008;
        *(undefined1 *)((int)puVar16 + 10) = pAVar7->field_000A;
        local_18->field_0231 = iVar17 + 0x124;
        local_18->field_0235 = 0xb;
        pAVar8 = local_14->field_01B1;
        puVar16 = (undefined4 *)((int)&local_18[1].field_0129 + iVar17 + -0x27e);
        *puVar16 = pAVar8->field_0000;
        puVar16[1] = pAVar8->field_0004;
        *(undefined2 *)(puVar16 + 2) = pAVar8->field_0008;
        *(undefined1 *)((int)puVar16 + 10) = pAVar8->field_000A;
        local_18->field_0239 = iVar17 + 0x12f;
        local_18->field_023D = 0xb;
        puVar16 = (undefined4 *)local_14->field_01C5;
        *(undefined4 *)(&local_18[1].field_0x137 + iVar17 + -0x281) = *puVar16;
        *(undefined2 *)((int)(&local_18[1].field_0x137 + iVar17 + -0x281) + 4) =
             *(undefined2 *)(puVar16 + 1);
        local_18->field_0261 = iVar17 + 0x13a;
        local_18->field_0265 = 6;
        puVar16 = (undefined4 *)local_14->field_01C9;
        *(undefined4 *)(&local_18[1].field_0x13d + iVar17 + -0x281) = *puVar16;
        *(undefined2 *)((int)(&local_18[1].field_0x13d + iVar17 + -0x281) + 4) =
             *(undefined2 *)(puVar16 + 1);
        local_18->field_0269 = iVar17 + 0x140;
        local_18->field_026D = 6;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_18;
      }
      if (iVar15 == 1000) {
        local_1c = &local_14->field_0135;
        local_24 = 2;
        do {
          uVar20 = uVar20 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-2],(int *)&local_8);
          puVar16 = local_10;
          puVar21 = (undefined4 *)((int)&local_c->field_0x0 + uVar20);
          for (uVar19 = local_8 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar21 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar21 = puVar21 + 1;
          }
          for (uVar19 = local_8 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
            puVar21 = (undefined4 *)((int)puVar21 + 1);
          }
          local_20[-1] = uVar20;
          *local_20 = local_8;
          FreeAndNull(&local_10);
          uVar20 = uVar20 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar12 = local_20;
          puVar16 = local_10;
          puVar21 = (undefined4 *)((int)&local_c->field_0x0 + uVar20);
          for (uVar19 = local_8 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar21 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar21 = puVar21 + 1;
          }
          for (uVar19 = local_8 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
            puVar21 = (undefined4 *)((int)puVar21 + 1);
          }
          local_20[3] = uVar20;
          local_20[4] = local_8;
          FreeAndNull(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar12 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_1c = &local_14->field_014D;
        local_20 = (uint *)&local_18->field_0x155;
        local_24 = 4;
        do {
          uVar20 = uVar20 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-4],(int *)&local_8);
          puVar16 = local_10;
          puVar21 = (undefined4 *)((int)&local_c->field_0x0 + uVar20);
          for (uVar19 = local_8 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar21 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar21 = puVar21 + 1;
          }
          for (uVar19 = local_8 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
            puVar21 = (undefined4 *)((int)puVar21 + 1);
          }
          local_20[-1] = uVar20;
          *local_20 = local_8;
          FreeAndNull(&local_10);
          uVar20 = uVar20 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar12 = local_20;
          puVar16 = local_10;
          puVar21 = (undefined4 *)((int)&local_c->field_0x0 + uVar20);
          for (uVar19 = local_8 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar21 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar21 = puVar21 + 1;
          }
          for (uVar19 = local_8 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
            puVar21 = (undefined4 *)((int)puVar21 + 1);
          }
          local_20[7] = uVar20;
          local_20[8] = local_8;
          FreeAndNull(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar12 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        iVar17 = uVar20 + local_8;
        puVar16 = (undefined4 *)local_14->field_0185;
        puVar21 = (undefined4 *)((int)&local_c->field_0x0 + iVar17);
        for (iVar15 = 0x4a; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar21 = puVar21 + 1;
        }
        *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
        local_18->field_01E1 = iVar17;
        local_18->field_01E5 = 0x129;
        puVar16 = (undefined4 *)local_14->field_0189;
        puVar21 = (undefined4 *)((int)&local_c->field_0129 + iVar17);
        for (iVar15 = 0x4a; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar21 = puVar21 + 1;
        }
        *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
        local_18->field_01E9 = iVar17 + 0x129;
        local_18->field_01ED = 0x129;
        pAVar1 = local_14->field_018D;
        puVar16 = (undefined4 *)((int)&local_c->field_0251 + iVar17 + 1);
        *puVar16 = pAVar1->field_0000;
        puVar16[1] = pAVar1->field_0004;
        puVar16[2] = pAVar1->field_0008;
        puVar16[3] = pAVar1->field_000C;
        local_18->field_01F1 = iVar17 + 0x252;
        local_18->field_01F5 = 0x10;
        pAVar2 = local_14->field_0191;
        local_8 = 0x10;
        puVar16 = (undefined4 *)((int)&local_c->field_0261 + iVar17 + 1);
        *puVar16 = pAVar2->field_0000;
        puVar16[1] = pAVar2->field_0004;
        puVar16[2] = pAVar2->field_0008;
        puVar16[3] = pAVar2->field_000C;
        local_18->field_01F9 = iVar17 + 0x262;
        local_18->field_01FD = 0x10;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_019D,(int *)&local_8);
        puVar16 = local_10;
        puVar21 = (undefined4 *)((int)&local_c->field_0271 + iVar17 + 1);
        for (uVar20 = local_8 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar21 = puVar21 + 1;
        }
        for (uVar20 = local_8 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
          puVar16 = (undefined4 *)((int)puVar16 + 1);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
        }
        local_18->field_0211 = iVar17 + 0x272;
        local_18->field_0215 = local_8;
        FreeAndNull(&local_10);
        iVar15 = iVar17 + 0x272 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_01A1,(int *)&local_8);
        pAVar13 = local_18;
        puVar16 = local_10;
        puVar21 = (undefined4 *)((int)&local_c->field_0271 + iVar15 + -0x271);
        for (uVar20 = local_8 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar21 = puVar21 + 1;
        }
        for (uVar20 = local_8 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined1 *)puVar21 = *(undefined1 *)puVar16;
          puVar16 = (undefined4 *)((int)puVar16 + 1);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
        }
        local_18->field_0219 = iVar15;
        local_18->field_021D = local_8;
        FreeAndNull(&local_10);
        iVar15 = iVar15 + local_8;
        puVar16 = (undefined4 *)((int)&local_c->field_0271 + iVar15 + -0x271);
        pAVar3 = local_14->field_01A5;
        *puVar16 = pAVar3->field_0000;
        puVar16[1] = pAVar3->field_0004;
        puVar16[2] = pAVar3->field_0008;
        pAVar13->field_0221 = iVar15;
        pAVar13->field_0225 = 0xc;
        pAVar4 = local_14->field_01A9;
        puVar16 = (undefined4 *)((int)&local_c->field_027D + iVar15 + -0x271);
        *puVar16 = pAVar4->field_0000;
        puVar16[1] = pAVar4->field_0004;
        puVar16[2] = pAVar4->field_0008;
        pAVar13->field_0229 = iVar15 + 0xc;
        pAVar13->field_022D = 0xc;
        pAVar5 = local_14->field_01B5;
        puVar16 = (undefined4 *)((int)&local_c[1].field_0006 + iVar15 + -0x272);
        *puVar16 = pAVar5->field_0000;
        puVar16[1] = pAVar5->field_0004;
        *(undefined2 *)(puVar16 + 2) = pAVar5->field_0008;
        *(undefined1 *)((int)puVar16 + 10) = pAVar5->field_000A;
        pAVar13->field_0241 = iVar15 + 0x18;
        pAVar13->field_0245 = 0xb;
        pAVar6 = local_14->field_01B9;
        puVar16 = (undefined4 *)(&local_c[1].field_0x11 + iVar15 + -0x272);
        *puVar16 = pAVar6->field_0000;
        puVar16[1] = pAVar6->field_0004;
        *(undefined2 *)(puVar16 + 2) = pAVar6->field_0008;
        *(undefined1 *)((int)puVar16 + 10) = pAVar6->field_000A;
        pAVar13->field_0249 = iVar15 + 0x23;
        pAVar13->field_024D = 0xb;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_c;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return (undefined4 *)local_c;
}

