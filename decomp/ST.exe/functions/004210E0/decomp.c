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
  uint *puVar13;
  AnonShape_004210E0_306A4C8B *pAVar14;
  STAllPlayersC *pSVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  DArrayTy **ppDVar23;
  byte *puVar24;
  InternalExceptionFrame local_6c;
  byte *local_28;
  int local_24;
  uint *local_20;
  DArrayTy **local_1c;
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
  iVar17 = local_14->field_009B * 8 + 0x281;
  *param_1 = iVar17;
  local_8 = local_14->field_00A3 * 0x48;
  iVar17 = local_8 + iVar17;
  *param_1 = iVar17;
  if (local_14->field_01CD == 1) {
    *param_1 = iVar17 + 0x124;
    iVar19 = local_14->field_0020;
    if (iVar19 == 0x14) {
      ppDVar23 = local_14->field_0171;
      local_20 = (uint *)0x5;
      do {
        local_c = FUN_006b0020(&ppDVar23[-5]->flags,(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = FUN_006b0020(&(*ppDVar23)->flags,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar17 = *param_1;
        ppDVar23 = ppDVar23 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = iVar17 + local_8;
      } while (local_20 != nullptr);
      iVar17 = iVar17 + local_8 + 0x4bc;
      local_20 = nullptr;
    }
    else if (iVar19 == 0x1ae) {
      iVar17 = iVar17 + 0x146;
    }
    else {
      if (iVar19 != 1000) goto LAB_004212f3;
      ppDVar23 = local_14->field_0135;
      local_20 = (uint *)0x2;
      do {
        local_c = FUN_006b0020(&ppDVar23[-2]->flags,(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = FUN_006b0020(&(*ppDVar23)->flags,(int *)&local_8);
        FreeAndNull(&local_c);
        ppDVar23 = ppDVar23 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = *param_1 + local_8;
      } while (local_20 != nullptr);
      ppDVar23 = pSVar15->field_014D;
      local_20 = (uint *)0x4;
      do {
        local_c = FUN_006b0020(&ppDVar23[-4]->flags,(int *)&local_8);
        FreeAndNull(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = FUN_006b0020(&(*ppDVar23)->flags,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar17 = *param_1;
        ppDVar23 = ppDVar23 + 1;
        *param_1 = iVar17 + local_8;
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != nullptr);
      *param_1 = iVar17 + local_8 + 0x272;
      local_c = FUN_006b0020(&pSVar15->field_019D->flags,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
      local_c = FUN_006b0020(&pSVar15->field_01A1->flags,(int *)&local_8);
      FreeAndNull(&local_c);
      iVar17 = *param_1 + local_8 + 0x2e;
    }
    *param_1 = iVar17;
  }
LAB_004212f3:
  local_18 = Library::DKW::LIB::MemAlloc(*param_1);
  local_18->field_0111 = -1;
  local_18->field_0115 = 0;
  local_18->field_0119 = 0xffffffff;
  iVar17 = 2;
  local_18->field_011D = 0;
  local_18->field_0121 = 0xffffffff;
  local_18->field_0125 = 0;
  local_18->field_0129 = 0xffffffff;
  local_18->field_012D = 0;
  local_20 = (uint *)&local_18->field_0x135;
  puVar18 = (byte *)(local_20);
  do {
    puVar18[-1] = 0xffffffff;
    *puVar18 = 0;
    puVar18[3] = 0xffffffff;
    puVar18[4] = 0;
    puVar18 = (byte *)(puVar18 + 2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  puVar18 = (byte *)&local_18->field_0x155;
  iVar17 = 4;
  do {
    puVar18[-1] = 0xffffffff;
    *puVar18 = 0;
    puVar18[7] = 0xffffffff;
    puVar18[8] = 0;
    puVar18 = (byte *)(puVar18 + 2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  local_28 = &local_18->field_0x195;
  iVar17 = 5;
  puVar18 = (byte *)local_28;
  do {
    puVar18[-1] = 0xffffffff;
    *puVar18 = 0;
    puVar18[9] = 0xffffffff;
    puVar18[10] = 0;
    puVar18 = (byte *)(puVar18 + 2);
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
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
  puVar18 = (byte *)&pSVar15->field_0x34;
  puVar24 = (byte *)&local_18->field_0x8;
  for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
  STField<undefined1>(puVar24,2) = STField<undefined1>(puVar18,2);
  puVar18 = (byte *)&pSVar15->field_0x93;
  puVar24 = (byte *)&local_18->field_0x67;
  for (iVar17 = 0x1b; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
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
  iVar17 = pSVar15->field_009B * 8;
  puVar18 = (byte *)(pSVar15->field_0097);
  puVar24 = (byte *)&local_18->field_0x281;
  for (iVar19 = (pSVar15->field_009B & 0x1fffffff) << 1; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  for (iVar19 = 0; iVar19 != 0; iVar19 = iVar19 + -1) {
    *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
    puVar18 = (byte *)((int)puVar18 + 1);
    puVar24 = (byte *)((int)puVar24 + 1);
  }
  local_18->field_0271 = 0x281;
  local_18->field_0275 = iVar17;
  iVar19 = local_14->field_00A3 * 0x48;
  puVar18 = (byte *)(local_14->field_009F);
  puVar24 = (byte *)(&local_18->field_0x281 + iVar17);
  for (iVar20 = (local_14->field_00A3 * 9 & 0x1fffffffU) << 1; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar24 = *puVar18;
    puVar18 = (byte *)(puVar18 + 1);
    puVar24 = (byte *)(puVar24 + 1);
  }
  for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
    *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
    puVar18 = (byte *)((int)puVar18 + 1);
    puVar24 = (byte *)((int)puVar24 + 1);
  }
  local_18->field_0279 = iVar17 + 0x281;
  local_18->field_027D = iVar19;
  local_c = local_18;
  if (local_14->field_01CD == 1) {
    iVar19 = iVar17 + 0x281 + iVar19;
    puVar18 = (byte *)(local_14->field_011D);
    puVar24 = (byte *)(&local_18->field_0x281 + iVar19 + -0x281);
    for (iVar17 = 0xd; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
    local_18->field_0111 = iVar19;
    local_18->field_0115 = 0x36;
    puVar18 = (byte *)(local_14->field_0121);
    puVar24 = (byte *)(&local_18->field_0x2b7 + iVar19 + -0x281);
    for (iVar17 = 0xd; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    *(undefined2 *)puVar24 = *(undefined2 *)puVar18;
    local_18->field_0119 = iVar19 + 0x36;
    local_18->field_011D = 0x36;
    puVar18 = (byte *)(local_14->field_0125);
    puVar24 = (byte *)(&local_18->field_0x2ed + iVar19 + -0x281);
    for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    local_18->field_0121 = iVar19 + 0x6c;
    local_18->field_0125 = 0x5c;
    uVar22 = iVar19 + 200;
    local_8 = 0x5c;
    puVar18 = (byte *)(local_14->field_0129);
    puVar24 = (byte *)(&local_18->field_0x349 + iVar19 + -0x281);
    for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar24 = *puVar18;
      puVar18 = (byte *)(puVar18 + 1);
      puVar24 = (byte *)(puVar24 + 1);
    }
    local_18->field_0129 = uVar22;
    local_18->field_012D = 0x5c;
    iVar17 = local_14->field_0020;
    if (iVar17 == 0x14) {
      local_1c = local_14->field_0171;
      local_24 = 5;
      local_20 = (uint *)local_28;
      do {
        uVar22 = uVar22 + local_8;
        local_10 = FUN_006b0020(&local_1c[-5]->flags,(int *)&local_8);
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        uVar21 = 0;
        local_20[-1] = uVar22;
        *local_20 = local_8;
        FreeAndNull(&local_10);
        uVar22 = uVar22 + local_8;
        local_10 = FUN_006b0020(&(*local_1c)->flags,(int *)&local_8);
        puVar13 = local_20;
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        local_20[9] = uVar22;
        local_20[10] = local_8;
        FreeAndNull(&local_10);
        local_1c = local_1c + 1;
        local_20 = puVar13 + 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar19 = uVar22 + local_8;
      pAVar10 = local_14->field_0195;
      puVar18 = (byte *)((int)&local_c->field_0x0 + iVar19);
      *puVar18 = pAVar10->field_0000;
      puVar18[1] = pAVar10->field_0004;
      puVar18[2] = pAVar10->field_0008;
      puVar18[3] = pAVar10->field_000C;
      *(undefined2 *)(puVar18 + 4) = pAVar10->field_0010;
      STField<undefined1>(puVar18,0x12) = pAVar10->field_0012;
      local_18->field_0201 = iVar19;
      local_18->field_0205 = 0x13;
      pAVar11 = local_14->field_0199;
      puVar18 = (byte *)(&local_c->field_0x13 + iVar19);
      *puVar18 = pAVar11->field_0000;
      puVar18[1] = pAVar11->field_0004;
      puVar18[2] = pAVar11->field_0008;
      puVar18[3] = pAVar11->field_000C;
      *(undefined2 *)(puVar18 + 4) = pAVar11->field_0010;
      STField<undefined1>(puVar18,0x12) = pAVar11->field_0012;
      local_18->field_0209 = iVar19 + 0x13;
      local_18->field_020D = 0x13;
      pAVar7 = local_14->field_01AD;
      puVar18 = (byte *)(&local_c->field_0x26 + iVar19);
      *puVar18 = pAVar7->field_0000;
      puVar18[1] = pAVar7->field_0004;
      *(undefined2 *)(puVar18 + 2) = pAVar7->field_0008;
      STField<undefined1>(puVar18,10) = pAVar7->field_000A;
      local_18->field_0231 = iVar19 + 0x26;
      local_18->field_0235 = 0xb;
      pAVar8 = local_14->field_01B1;
      puVar18 = (byte *)(&local_c->field_0x31 + iVar19);
      *puVar18 = pAVar8->field_0000;
      puVar18[1] = pAVar8->field_0004;
      *(undefined2 *)(puVar18 + 2) = pAVar8->field_0008;
      STField<undefined1>(puVar18,10) = pAVar8->field_000A;
      local_18->field_0239 = iVar19 + 0x31;
      local_18->field_023D = 0xb;
      puVar18 = (byte *)(local_14->field_01BD);
      puVar24 = (byte *)(&local_c->field_0x3c + iVar19);
      for (iVar17 = 0x90; iVar17 != 0; iVar17 = iVar17 + -1) {
        *puVar24 = *puVar18;
        puVar18 = (byte *)(puVar18 + 1);
        puVar24 = (byte *)(puVar24 + 1);
      }
      local_18->field_0251 = iVar19 + 0x3c;
      local_18->field_0255 = 0x240;
      puVar18 = (byte *)(local_14->field_01C1);
      puVar24 = (byte *)((int)&local_c->field_0279 + iVar19 + 3);
      for (iVar17 = 0x90; iVar17 != 0; iVar17 = iVar17 + -1) {
        *puVar24 = *puVar18;
        puVar18 = (byte *)(puVar18 + 1);
        puVar24 = (byte *)(puVar24 + 1);
      }
      local_18->field_0259 = iVar19 + 0x27c;
      local_18->field_025D = 0x240;
    }
    else {
      if (iVar17 == 0x1ae) {
        pAVar7 = local_14->field_01AD;
        puVar18 = (byte *)((int)&local_18->field_03A5 + iVar19 + -0x281);
        *puVar18 = pAVar7->field_0000;
        puVar18[1] = pAVar7->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar7->field_0008;
        STField<undefined1>(puVar18,10) = pAVar7->field_000A;
        local_18->field_0231 = iVar19 + 0x124;
        local_18->field_0235 = 0xb;
        pAVar8 = local_14->field_01B1;
        puVar18 = (byte *)((int)&local_18->field_03AD + iVar19 + -0x27e);
        *puVar18 = pAVar8->field_0000;
        puVar18[1] = pAVar8->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar8->field_0008;
        STField<undefined1>(puVar18,10) = pAVar8->field_000A;
        local_18->field_0239 = iVar19 + 0x12f;
        local_18->field_023D = 0xb;
        puVar9 = local_14->field_01C5;
        *(undefined4 *)(&local_18[1].field_0xa + iVar19 + -0x281) = *(undefined4 *)puVar9;
        *(ushort *)((int)(&local_18[1].field_0xa + iVar19 + -0x281) + 4) = puVar9[2];
        local_18->field_0261 = iVar19 + 0x13a;
        local_18->field_0265 = 6;
        puVar9 = local_14->field_01C9;
        *(undefined4 *)(&local_18[1].field_0x10 + iVar19 + -0x281) = *(undefined4 *)puVar9;
        *(ushort *)((int)(&local_18[1].field_0x10 + iVar19 + -0x281) + 4) = puVar9[2];
        local_18->field_0269 = iVar19 + 0x140;
        local_18->field_026D = 6;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_18;
      }
      if (iVar17 == 1000) {
        local_1c = local_14->field_0135;
        local_24 = 2;
        do {
          uVar22 = uVar22 + local_8;
          local_10 = FUN_006b0020(&local_1c[-2]->flags,(int *)&local_8);
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          uVar21 = 0;
          local_20[-1] = uVar22;
          *local_20 = local_8;
          FreeAndNull(&local_10);
          uVar22 = uVar22 + local_8;
          local_10 = FUN_006b0020(&(*local_1c)->flags,(int *)&local_8);
          puVar13 = local_20;
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          uVar21 = 0;
          local_20[3] = uVar22;
          local_20[4] = local_8;
          FreeAndNull(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar13 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_1c = local_14->field_014D;
        local_20 = (uint *)&local_18->field_0x155;
        local_24 = 4;
        do {
          uVar22 = uVar22 + local_8;
          local_10 = FUN_006b0020(&local_1c[-4]->flags,(int *)&local_8);
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          uVar21 = 0;
          local_20[-1] = uVar22;
          *local_20 = local_8;
          FreeAndNull(&local_10);
          uVar22 = uVar22 + local_8;
          local_10 = FUN_006b0020(&(*local_1c)->flags,(int *)&local_8);
          puVar13 = local_20;
          puVar18 = (byte *)(local_10);
          puVar24 = (byte *)((int)&local_c->field_0x0 + uVar22);
          memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
          local_20[7] = uVar22;
          local_20[8] = local_8;
          FreeAndNull(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar13 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        iVar19 = uVar22 + local_8;
        puVar18 = (byte *)(local_14->field_0185);
        puVar24 = (byte *)((int)&local_c->field_0x0 + iVar19);
        for (iVar17 = 0x4a; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar24 = *puVar18;
          puVar18 = (byte *)(puVar18 + 1);
          puVar24 = (byte *)(puVar24 + 1);
        }
        *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
        local_18->field_01E1 = iVar19;
        local_18->field_01E5 = 0x129;
        puVar18 = (byte *)(local_14->field_0189);
        puVar24 = (byte *)((int)&local_c->field_0129 + iVar19);
        for (iVar17 = 0x4a; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar24 = *puVar18;
          puVar18 = (byte *)(puVar18 + 1);
          puVar24 = (byte *)(puVar24 + 1);
        }
        *(undefined1 *)puVar24 = *(undefined1 *)puVar18;
        local_18->field_01E9 = iVar19 + 0x129;
        local_18->field_01ED = 0x129;
        pAVar1 = local_14->field_018D;
        puVar18 = (byte *)((int)&local_c->field_0251 + iVar19 + 1);
        *puVar18 = pAVar1->field_0000;
        puVar18[1] = pAVar1->field_0004;
        puVar18[2] = pAVar1->field_0008;
        puVar18[3] = pAVar1->field_000C;
        local_18->field_01F1 = iVar19 + 0x252;
        local_18->field_01F5 = 0x10;
        pAVar2 = local_14->field_0191;
        local_8 = 0x10;
        puVar18 = (byte *)((int)&local_c->field_0261 + iVar19 + 1);
        *puVar18 = pAVar2->field_0000;
        puVar18[1] = pAVar2->field_0004;
        puVar18[2] = pAVar2->field_0008;
        puVar18[3] = pAVar2->field_000C;
        local_18->field_01F9 = iVar19 + 0x262;
        local_18->field_01FD = 0x10;
        local_10 = FUN_006b0020(&local_14->field_019D->flags,(int *)&local_8);
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0271 + iVar19 + 1);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        uVar22 = 0;
        local_18->field_0211 = iVar19 + 0x272;
        local_18->field_0215 = local_8;
        FreeAndNull(&local_10);
        iVar17 = iVar19 + 0x272 + local_8;
        local_10 = FUN_006b0020(&local_14->field_01A1->flags,(int *)&local_8);
        pAVar14 = local_18;
        puVar18 = (byte *)(local_10);
        puVar24 = (byte *)((int)&local_c->field_0271 + iVar17 + -0x271);
        memmove(puVar24, puVar18, local_8); /* compiler REP MOVS byte copy */
        local_18->field_0219 = iVar17;
        local_18->field_021D = local_8;
        FreeAndNull(&local_10);
        iVar17 = iVar17 + local_8;
        puVar18 = (byte *)((int)&local_c->field_0271 + iVar17 + -0x271);
        pAVar3 = local_14->field_01A5;
        *puVar18 = pAVar3->field_0000;
        puVar18[1] = pAVar3->field_0004;
        puVar18[2] = pAVar3->field_0008;
        pAVar14->field_0221 = iVar17;
        pAVar14->field_0225 = 0xc;
        pAVar4 = local_14->field_01A9;
        puVar18 = (byte *)((int)&local_c->field_027D + iVar17 + -0x271);
        *puVar18 = pAVar4->field_0000;
        puVar18[1] = pAVar4->field_0004;
        puVar18[2] = pAVar4->field_0008;
        pAVar14->field_0229 = iVar17 + 0xc;
        pAVar14->field_022D = 0xc;
        pAVar5 = local_14->field_01B5;
        puVar18 = (byte *)(&local_c->field_0x28a + iVar17 + -0x272);
        *puVar18 = pAVar5->field_0000;
        puVar18[1] = pAVar5->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar5->field_0008;
        STField<undefined1>(puVar18,10) = pAVar5->field_000A;
        pAVar14->field_0241 = iVar17 + 0x18;
        pAVar14->field_0245 = 0xb;
        pAVar6 = local_14->field_01B9;
        puVar18 = (byte *)(&local_c->field_0x295 + iVar17 + -0x272);
        *puVar18 = pAVar6->field_0000;
        puVar18[1] = pAVar6->field_0004;
        *(undefined2 *)(puVar18 + 2) = pAVar6->field_0008;
        STField<undefined1>(puVar18,10) = pAVar6->field_000A;
        pAVar14->field_0249 = iVar17 + 0x23;
        pAVar14->field_024D = 0xb;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_c;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return (undefined4 *)local_c;
}

