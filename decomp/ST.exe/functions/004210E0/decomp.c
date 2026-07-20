
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::SaveGObjData */

undefined4 * __thiscall STAllPlayersC::SaveGObjData(STAllPlayersC *this,int *param_1)

{
  code *pcVar1;
  uint *puVar2;
  AnonShape_004210E0_306A4C8B *pAVar3;
  STAllPlayersC *pSVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xe46,0,iVar5,&DAT_007a4ccc,
                               s_STAllPlayersC__SaveGObjData_007a5058);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (undefined4 *)(*pcVar1)();
      return puVar6;
    }
    RaiseInternalException(iVar5,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xe47);
    return (undefined4 *)local_c;
  }
  *param_1 = 0x281;
  iVar5 = local_14->field_009B * 8 + 0x281;
  *param_1 = iVar5;
  local_8 = local_14->field_00A3 * 0x48;
  iVar5 = local_8 + iVar5;
  *param_1 = iVar5;
  if (local_14->field_01CD == 1) {
    *param_1 = iVar5 + 0x124;
    iVar7 = local_14->field_0020;
    if (iVar7 == 0x14) {
      puVar6 = &local_14->field_0171;
      local_20 = (uint *)0x5;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar6[-5],(int *)&local_8);
        FUN_006ab060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar6,(int *)&local_8);
        FUN_006ab060(&local_c);
        iVar5 = *param_1;
        puVar6 = puVar6 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = iVar5 + local_8;
      } while (local_20 != (uint *)0x0);
      iVar5 = iVar5 + local_8 + 0x4bc;
      local_20 = (uint *)0x0;
    }
    else if (iVar7 == 0x1ae) {
      iVar5 = iVar5 + 0x146;
    }
    else {
      if (iVar7 != 1000) goto LAB_004212f3;
      puVar6 = &local_14->field_0135;
      local_20 = (uint *)0x2;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar6[-2],(int *)&local_8);
        FUN_006ab060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar6,(int *)&local_8);
        FUN_006ab060(&local_c);
        puVar6 = puVar6 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = *param_1 + local_8;
      } while (local_20 != (uint *)0x0);
      puVar6 = &pSVar4->field_014D;
      local_20 = (uint *)0x4;
      do {
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)puVar6[-4],(int *)&local_8);
        FUN_006ab060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (AnonShape_004210E0_306A4C8B *)FUN_006b0020((uint *)*puVar6,(int *)&local_8);
        FUN_006ab060(&local_c);
        iVar5 = *param_1;
        puVar6 = puVar6 + 1;
        *param_1 = iVar5 + local_8;
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != (uint *)0x0);
      *param_1 = iVar5 + local_8 + 0x272;
      local_c = (AnonShape_004210E0_306A4C8B *)
                FUN_006b0020((uint *)pSVar4->field_019D,(int *)&local_8);
      FUN_006ab060(&local_c);
      *param_1 = *param_1 + local_8;
      local_c = (AnonShape_004210E0_306A4C8B *)
                FUN_006b0020((uint *)pSVar4->field_01A1,(int *)&local_8);
      FUN_006ab060(&local_c);
      iVar5 = *param_1 + local_8 + 0x2e;
    }
    *param_1 = iVar5;
  }
LAB_004212f3:
  local_18 = (AnonShape_004210E0_306A4C8B *)Library::DKW::LIB::FUN_006aac70(*param_1);
  local_18->field_0111 = -1;
  local_18->field_0115 = 0;
  local_18->field_0119 = 0xffffffff;
  iVar5 = 2;
  local_18->field_011D = 0;
  local_18->field_0121 = 0xffffffff;
  local_18->field_0125 = 0;
  local_18->field_0129 = 0xffffffff;
  local_18->field_012D = 0;
  local_20 = (uint *)&local_18->field_0x135;
  puVar6 = local_20;
  do {
    puVar6[-1] = 0xffffffff;
    *puVar6 = 0;
    puVar6[3] = 0xffffffff;
    puVar6[4] = 0;
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar6 = (undefined4 *)&local_18->field_0x155;
  iVar5 = 4;
  do {
    puVar6[-1] = 0xffffffff;
    *puVar6 = 0;
    puVar6[7] = 0xffffffff;
    puVar6[8] = 0;
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_28 = &local_18->field_0x195;
  iVar5 = 5;
  puVar6 = (undefined4 *)local_28;
  do {
    puVar6[-1] = 0xffffffff;
    *puVar6 = 0;
    puVar6[9] = 0xffffffff;
    puVar6[10] = 0;
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
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
  *(undefined4 *)local_18 = pSVar4->field_001C;
  *(undefined2 *)&local_18->field_0x4 = pSVar4->field_0030;
  local_18->field_0006 = pSVar4->field_0032;
  puVar6 = (undefined4 *)&pSVar4->field_0x34;
  puVar11 = (undefined4 *)&local_18->field_0x8;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar6 + 2);
  puVar6 = (undefined4 *)&pSVar4->field_0x93;
  puVar11 = (undefined4 *)&local_18->field_0x67;
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
  local_18->field_00D5 = pSVar4->field_01CD;
  local_18->field_00D9 = pSVar4->field_0101;
  local_18->field_00DD = pSVar4->field_0105;
  local_18->field_00E1 = pSVar4->field_0109;
  local_18->field_00E5 = pSVar4->field_010D;
  local_18->field_00E9 = pSVar4->field_0111;
  local_18->field_00ED = pSVar4->field_0115;
  local_18->field_00F1 = pSVar4->field_0119;
  local_18->field_00F5 = pSVar4->field_01D1;
  local_18->field_00F9 = pSVar4->field_0215;
  local_18->field_00FD = pSVar4->field_0219;
  local_18->field_0101 = pSVar4->field_021D;
  local_18->field_0105 = pSVar4->field_0221;
  local_18->field_0109 = pSVar4->field_0225;
  local_18->field_010D = 0;
  iVar5 = pSVar4->field_009B * 8;
  puVar6 = (undefined4 *)pSVar4->field_0097;
  puVar11 = (undefined4 *)&local_18->field_0x281;
  for (iVar7 = (pSVar4->field_009B & 0x1fffffff) << 1; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  local_18->field_0271 = 0x281;
  local_18->field_0275 = iVar5;
  iVar7 = local_14->field_00A3 * 0x48;
  puVar6 = (undefined4 *)local_14->field_009F;
  puVar11 = (undefined4 *)(&local_18->field_0x281 + iVar5);
  for (iVar8 = (local_14->field_00A3 * 9 & 0x1fffffffU) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  local_18->field_0279 = iVar5 + 0x281;
  local_18->field_027D = iVar7;
  local_c = local_18;
  if (local_14->field_01CD == 1) {
    iVar7 = iVar5 + 0x281 + iVar7;
    puVar6 = (undefined4 *)local_14->field_011D;
    puVar11 = (undefined4 *)(&local_18->field_0x281 + iVar7 + -0x281);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
    local_18->field_0111 = iVar7;
    local_18->field_0115 = 0x36;
    puVar6 = (undefined4 *)local_14->field_0121;
    puVar11 = (undefined4 *)(&local_18[1].field_0x33 + iVar7 + -0x281);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
    local_18->field_0119 = iVar7 + 0x36;
    local_18->field_011D = 0x36;
    puVar6 = (undefined4 *)local_14->field_0125;
    puVar11 = (undefined4 *)(&local_18[1].field_0x69 + iVar7 + -0x281);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
    local_18->field_0121 = iVar7 + 0x6c;
    local_18->field_0125 = 0x5c;
    uVar10 = iVar7 + 200;
    local_8 = 0x5c;
    puVar6 = (undefined4 *)local_14->field_0129;
    puVar11 = (undefined4 *)(&local_18[1].field_0xc5 + iVar7 + -0x281);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 1;
    }
    local_18->field_0129 = uVar10;
    local_18->field_012D = 0x5c;
    iVar5 = local_14->field_0020;
    if (iVar5 == 0x14) {
      local_1c = &local_14->field_0171;
      local_24 = 5;
      local_20 = (uint *)local_28;
      do {
        uVar10 = uVar10 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-5],(int *)&local_8);
        puVar6 = local_10;
        puVar11 = (undefined4 *)((int)&local_c->field_0x0 + uVar10);
        for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        local_20[-1] = uVar10;
        *local_20 = local_8;
        FUN_006ab060(&local_10);
        uVar10 = uVar10 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
        puVar2 = local_20;
        puVar6 = local_10;
        puVar11 = (undefined4 *)((int)&local_c->field_0x0 + uVar10);
        for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        local_20[9] = uVar10;
        local_20[10] = local_8;
        FUN_006ab060(&local_10);
        local_1c = local_1c + 1;
        local_20 = puVar2 + 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar7 = uVar10 + local_8;
      puVar6 = (undefined4 *)local_14->field_0195;
      puVar11 = (undefined4 *)((int)&local_c->field_0x0 + iVar7);
      *puVar11 = *puVar6;
      puVar11[1] = puVar6[1];
      puVar11[2] = puVar6[2];
      puVar11[3] = puVar6[3];
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar6 + 4);
      *(undefined1 *)((int)puVar11 + 0x12) = *(undefined1 *)((int)puVar6 + 0x12);
      local_18->field_0201 = iVar7;
      local_18->field_0205 = 0x13;
      puVar6 = (undefined4 *)local_14->field_0199;
      puVar11 = (undefined4 *)(&local_c->field_0x13 + iVar7);
      *puVar11 = *puVar6;
      puVar11[1] = puVar6[1];
      puVar11[2] = puVar6[2];
      puVar11[3] = puVar6[3];
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar6 + 4);
      *(undefined1 *)((int)puVar11 + 0x12) = *(undefined1 *)((int)puVar6 + 0x12);
      local_18->field_0209 = iVar7 + 0x13;
      local_18->field_020D = 0x13;
      puVar6 = (undefined4 *)local_14->field_01AD;
      puVar11 = (undefined4 *)(&local_c->field_0x26 + iVar7);
      *puVar11 = *puVar6;
      puVar11[1] = puVar6[1];
      *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar6 + 2);
      *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar6 + 10);
      local_18->field_0231 = iVar7 + 0x26;
      local_18->field_0235 = 0xb;
      puVar6 = (undefined4 *)local_14->field_01B1;
      puVar11 = (undefined4 *)(&local_c->field_0x31 + iVar7);
      *puVar11 = *puVar6;
      puVar11[1] = puVar6[1];
      *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar6 + 2);
      *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar6 + 10);
      local_18->field_0239 = iVar7 + 0x31;
      local_18->field_023D = 0xb;
      puVar6 = (undefined4 *)local_14->field_01BD;
      puVar11 = (undefined4 *)(&local_c->field_0x3c + iVar7);
      for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      local_18->field_0251 = iVar7 + 0x3c;
      local_18->field_0255 = 0x240;
      puVar6 = (undefined4 *)local_14->field_01C1;
      puVar11 = (undefined4 *)((int)&local_c->field_0279 + iVar7 + 3);
      for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      local_18->field_0259 = iVar7 + 0x27c;
      local_18->field_025D = 0x240;
    }
    else {
      if (iVar5 == 0x1ae) {
        puVar6 = (undefined4 *)local_14->field_01AD;
        puVar11 = (undefined4 *)((int)&local_18[1].field_0121 + iVar7 + -0x281);
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar6 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar6 + 10);
        local_18->field_0231 = iVar7 + 0x124;
        local_18->field_0235 = 0xb;
        puVar6 = (undefined4 *)local_14->field_01B1;
        puVar11 = (undefined4 *)((int)&local_18[1].field_0129 + iVar7 + -0x27e);
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar6 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar6 + 10);
        local_18->field_0239 = iVar7 + 0x12f;
        local_18->field_023D = 0xb;
        puVar6 = (undefined4 *)local_14->field_01C5;
        *(undefined4 *)(&local_18[1].field_0x137 + iVar7 + -0x281) = *puVar6;
        *(undefined2 *)((int)(&local_18[1].field_0x137 + iVar7 + -0x281) + 4) =
             *(undefined2 *)(puVar6 + 1);
        local_18->field_0261 = iVar7 + 0x13a;
        local_18->field_0265 = 6;
        puVar6 = (undefined4 *)local_14->field_01C9;
        *(undefined4 *)(&local_18[1].field_0x13d + iVar7 + -0x281) = *puVar6;
        *(undefined2 *)((int)(&local_18[1].field_0x13d + iVar7 + -0x281) + 4) =
             *(undefined2 *)(puVar6 + 1);
        local_18->field_0269 = iVar7 + 0x140;
        local_18->field_026D = 6;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_18;
      }
      if (iVar5 == 1000) {
        local_1c = &local_14->field_0135;
        local_24 = 2;
        do {
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-2],(int *)&local_8);
          puVar6 = local_10;
          puVar11 = (undefined4 *)((int)&local_c->field_0x0 + uVar10);
          for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[-1] = uVar10;
          *local_20 = local_8;
          FUN_006ab060(&local_10);
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar2 = local_20;
          puVar6 = local_10;
          puVar11 = (undefined4 *)((int)&local_c->field_0x0 + uVar10);
          for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[3] = uVar10;
          local_20[4] = local_8;
          FUN_006ab060(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar2 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_1c = &local_14->field_014D;
        local_20 = (uint *)&local_18->field_0x155;
        local_24 = 4;
        do {
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-4],(int *)&local_8);
          puVar6 = local_10;
          puVar11 = (undefined4 *)((int)&local_c->field_0x0 + uVar10);
          for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[-1] = uVar10;
          *local_20 = local_8;
          FUN_006ab060(&local_10);
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar2 = local_20;
          puVar6 = local_10;
          puVar11 = (undefined4 *)((int)&local_c->field_0x0 + uVar10);
          for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[7] = uVar10;
          local_20[8] = local_8;
          FUN_006ab060(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar2 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        iVar7 = uVar10 + local_8;
        puVar6 = (undefined4 *)local_14->field_0185;
        puVar11 = (undefined4 *)((int)&local_c->field_0x0 + iVar7);
        for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
        local_18->field_01E1 = iVar7;
        local_18->field_01E5 = 0x129;
        puVar6 = (undefined4 *)local_14->field_0189;
        puVar11 = (undefined4 *)((int)&local_c->field_0129 + iVar7);
        for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
        local_18->field_01E9 = iVar7 + 0x129;
        local_18->field_01ED = 0x129;
        puVar6 = (undefined4 *)local_14->field_018D;
        puVar11 = (undefined4 *)((int)&local_c->field_0251 + iVar7 + 1);
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        puVar11[2] = puVar6[2];
        puVar11[3] = puVar6[3];
        local_18->field_01F1 = iVar7 + 0x252;
        local_18->field_01F5 = 0x10;
        puVar6 = (undefined4 *)local_14->field_0191;
        local_8 = 0x10;
        puVar11 = (undefined4 *)((int)&local_c->field_0261 + iVar7 + 1);
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        puVar11[2] = puVar6[2];
        puVar11[3] = puVar6[3];
        local_18->field_01F9 = iVar7 + 0x262;
        local_18->field_01FD = 0x10;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_019D,(int *)&local_8);
        puVar6 = local_10;
        puVar11 = (undefined4 *)((int)&local_c->field_0271 + iVar7 + 1);
        for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        local_18->field_0211 = iVar7 + 0x272;
        local_18->field_0215 = local_8;
        FUN_006ab060(&local_10);
        iVar5 = iVar7 + 0x272 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_01A1,(int *)&local_8);
        pAVar3 = local_18;
        puVar6 = local_10;
        puVar11 = (undefined4 *)((int)&local_c->field_0271 + iVar5 + -0x271);
        for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        local_18->field_0219 = iVar5;
        local_18->field_021D = local_8;
        FUN_006ab060(&local_10);
        iVar5 = iVar5 + local_8;
        puVar11 = (undefined4 *)((int)&local_c->field_0271 + iVar5 + -0x271);
        puVar6 = (undefined4 *)local_14->field_01A5;
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        puVar11[2] = puVar6[2];
        pAVar3->field_0221 = iVar5;
        pAVar3->field_0225 = 0xc;
        puVar6 = (undefined4 *)local_14->field_01A9;
        puVar11 = (undefined4 *)((int)&local_c->field_027D + iVar5 + -0x271);
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        puVar11[2] = puVar6[2];
        pAVar3->field_0229 = iVar5 + 0xc;
        pAVar3->field_022D = 0xc;
        puVar6 = (undefined4 *)local_14->field_01B5;
        puVar11 = (undefined4 *)((int)&local_c[1].field_0006 + iVar5 + -0x272);
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar6 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar6 + 10);
        pAVar3->field_0241 = iVar5 + 0x18;
        pAVar3->field_0245 = 0xb;
        puVar11 = (undefined4 *)local_14->field_01B9;
        puVar6 = (undefined4 *)(&local_c[1].field_0x11 + iVar5 + -0x272);
        *puVar6 = *puVar11;
        puVar6[1] = puVar11[1];
        *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar11 + 2);
        *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar11 + 10);
        pAVar3->field_0249 = iVar5 + 0x23;
        pAVar3->field_024D = 0xb;
        g_currentExceptionFrame = local_6c.previous;
        return (undefined4 *)local_c;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return (undefined4 *)local_c;
}

