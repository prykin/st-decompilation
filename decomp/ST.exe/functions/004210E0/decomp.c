
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STAllPlayersC::SaveGObjData */

undefined4 * __thiscall STAllPlayersC::SaveGObjData(STAllPlayersC *this,int *param_1)

{
  code *pcVar1;
  STAllPlayersC *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  void *unaff_EDI;
  InternalExceptionFrame local_6c;
  uint *local_28;
  int local_24;
  uint *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  STAllPlayersC *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xe46,0,iVar3,&DAT_007a4ccc,
                               s_STAllPlayersC__SaveGObjData_007a5058);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined4 *)(*pcVar1)();
      return puVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xe47);
    return local_c;
  }
  *param_1 = 0x281;
  iVar3 = local_14->field_009B * 8 + 0x281;
  *param_1 = iVar3;
  local_8 = local_14->field_00A3 * 0x48;
  iVar3 = local_8 + iVar3;
  *param_1 = iVar3;
  if (local_14->field_01CD == 1) {
    *param_1 = iVar3 + 0x124;
    iVar5 = local_14->field_0020;
    if (iVar5 == 0x14) {
      puVar4 = &local_14->field_0171;
      local_20 = (uint *)0x5;
      do {
        local_c = (undefined4 *)FUN_006b0020((uint *)puVar4[-5],(int *)&local_8);
        FUN_006ab060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (undefined4 *)FUN_006b0020((uint *)*puVar4,(int *)&local_8);
        FUN_006ab060(&local_c);
        iVar3 = *param_1;
        puVar4 = puVar4 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = iVar3 + local_8;
      } while (local_20 != (uint *)0x0);
      iVar3 = iVar3 + local_8 + 0x4bc;
      local_20 = (uint *)0x0;
    }
    else if (iVar5 == 0x1ae) {
      iVar3 = iVar3 + 0x146;
    }
    else {
      if (iVar5 != 1000) goto LAB_004212f3;
      puVar4 = &local_14->field_0135;
      local_20 = (uint *)0x2;
      do {
        local_c = (undefined4 *)FUN_006b0020((uint *)puVar4[-2],(int *)&local_8);
        FUN_006ab060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (undefined4 *)FUN_006b0020((uint *)*puVar4,(int *)&local_8);
        FUN_006ab060(&local_c);
        puVar4 = puVar4 + 1;
        local_20 = (uint *)((int)local_20 + -1);
        *param_1 = *param_1 + local_8;
      } while (local_20 != (uint *)0x0);
      puVar4 = &pSVar2->field_014D;
      local_20 = (uint *)0x4;
      do {
        local_c = (undefined4 *)FUN_006b0020((uint *)puVar4[-4],(int *)&local_8);
        FUN_006ab060(&local_c);
        *param_1 = *param_1 + local_8;
        local_c = (undefined4 *)FUN_006b0020((uint *)*puVar4,(int *)&local_8);
        FUN_006ab060(&local_c);
        iVar3 = *param_1;
        puVar4 = puVar4 + 1;
        *param_1 = iVar3 + local_8;
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != (uint *)0x0);
      *param_1 = iVar3 + local_8 + 0x272;
      local_c = (undefined4 *)FUN_006b0020((uint *)pSVar2->field_019D,(int *)&local_8);
      FUN_006ab060(&local_c);
      *param_1 = *param_1 + local_8;
      local_c = (undefined4 *)FUN_006b0020((uint *)pSVar2->field_01A1,(int *)&local_8);
      FUN_006ab060(&local_c);
      iVar3 = *param_1 + local_8 + 0x2e;
    }
    *param_1 = iVar3;
  }
LAB_004212f3:
  local_18 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(*param_1);
  *(int *)((int)local_18 + 0x111) = -1;
  *(undefined4 *)((int)local_18 + 0x115) = 0;
  *(undefined4 *)((int)local_18 + 0x119) = 0xffffffff;
  iVar3 = 2;
  *(undefined4 *)((int)local_18 + 0x11d) = 0;
  *(undefined4 *)((int)local_18 + 0x121) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x125) = 0;
  *(undefined4 *)((int)local_18 + 0x129) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x12d) = 0;
  local_20 = (uint *)((int)local_18 + 0x135);
  puVar9 = local_20;
  do {
    puVar9[-1] = 0xffffffff;
    *puVar9 = 0;
    puVar9[3] = 0xffffffff;
    puVar9[4] = 0;
    puVar9 = puVar9 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = (undefined4 *)((int)local_18 + 0x155);
  iVar3 = 4;
  do {
    puVar4[-1] = 0xffffffff;
    *puVar4 = 0;
    puVar4[7] = 0xffffffff;
    puVar4[8] = 0;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_28 = (uint *)((int)local_18 + 0x195);
  iVar3 = 5;
  puVar9 = local_28;
  do {
    puVar9[-1] = 0xffffffff;
    *puVar9 = 0;
    puVar9[9] = 0xffffffff;
    puVar9[10] = 0;
    puVar9 = puVar9 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)local_18 + 0x1e1) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x1e5) = 0;
  *(undefined4 *)((int)local_18 + 0x1e9) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x1ed) = 0;
  *(undefined4 *)((int)local_18 + 0x1f1) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x1f5) = 0;
  *(undefined4 *)((int)local_18 + 0x1f9) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x1fd) = 0;
  *(undefined4 *)((int)local_18 + 0x201) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x205) = 0;
  *(undefined4 *)((int)local_18 + 0x209) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x20d) = 0;
  *(undefined4 *)((int)local_18 + 0x211) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x215) = 0;
  *(undefined4 *)((int)local_18 + 0x219) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x21d) = 0;
  *(undefined4 *)((int)local_18 + 0x221) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x225) = 0;
  *(undefined4 *)((int)local_18 + 0x229) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x22d) = 0;
  *(undefined4 *)((int)local_18 + 0x231) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x235) = 0;
  *(undefined4 *)((int)local_18 + 0x239) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x23d) = 0;
  *(undefined4 *)((int)local_18 + 0x241) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x245) = 0;
  *(undefined4 *)((int)local_18 + 0x249) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x24d) = 0;
  *(undefined4 *)((int)local_18 + 0x251) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x259) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x255) = 0;
  *(undefined4 *)((int)local_18 + 0x25d) = 0;
  *(undefined4 *)((int)local_18 + 0x261) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x269) = 0xffffffff;
  *(undefined4 *)((int)local_18 + 0x265) = 0;
  *(undefined4 *)((int)local_18 + 0x26d) = 0;
  *local_18 = pSVar2->field_001C;
  *(undefined2 *)(local_18 + 1) = pSVar2->field_0030;
  *(undefined2 *)((int)local_18 + 6) = pSVar2->field_0032;
  puVar4 = (undefined4 *)&pSVar2->field_0x34;
  puVar11 = local_18 + 2;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
  *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar4 + 2);
  puVar4 = (undefined4 *)&pSVar2->field_0x93;
  puVar11 = (undefined4 *)((int)local_18 + 0x67);
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
  *(undefined4 *)((int)local_18 + 0xd5) = pSVar2->field_01CD;
  *(undefined4 *)((int)local_18 + 0xd9) = pSVar2->field_0101;
  *(undefined4 *)((int)local_18 + 0xdd) = pSVar2->field_0105;
  *(undefined4 *)((int)local_18 + 0xe1) = pSVar2->field_0109;
  *(undefined4 *)((int)local_18 + 0xe5) = pSVar2->field_010D;
  *(undefined4 *)((int)local_18 + 0xe9) = pSVar2->field_0111;
  *(undefined4 *)((int)local_18 + 0xed) = pSVar2->field_0115;
  *(undefined4 *)((int)local_18 + 0xf1) = pSVar2->field_0119;
  *(undefined4 *)((int)local_18 + 0xf5) = pSVar2->field_01D1;
  *(undefined4 *)((int)local_18 + 0xf9) = pSVar2->field_0215;
  *(undefined4 *)((int)local_18 + 0xfd) = pSVar2->field_0219;
  *(undefined4 *)((int)local_18 + 0x101) = pSVar2->field_021D;
  *(undefined4 *)((int)local_18 + 0x105) = pSVar2->field_0221;
  *(undefined4 *)((int)local_18 + 0x109) = pSVar2->field_0225;
  *(undefined4 *)((int)local_18 + 0x10d) = 0;
  iVar3 = pSVar2->field_009B * 8;
  puVar4 = (undefined4 *)pSVar2->field_0097;
  puVar11 = (undefined4 *)((int)local_18 + 0x281);
  for (iVar5 = (pSVar2->field_009B & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  *(undefined4 *)((int)local_18 + 0x271) = 0x281;
  *(int *)((int)local_18 + 0x275) = iVar3;
  iVar3 = iVar3 + 0x281;
  iVar5 = local_14->field_00A3 * 0x48;
  puVar4 = (undefined4 *)local_14->field_009F;
  puVar11 = (undefined4 *)(iVar3 + (int)local_18);
  for (iVar6 = (local_14->field_00A3 * 9 & 0x1fffffffU) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  *(int *)((int)local_18 + 0x279) = iVar3;
  *(int *)((int)local_18 + 0x27d) = iVar5;
  local_c = local_18;
  if (local_14->field_01CD == 1) {
    iVar3 = iVar3 + iVar5;
    puVar4 = (undefined4 *)local_14->field_011D;
    puVar11 = (undefined4 *)((int)local_18 + iVar3);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
    *(int *)((int)local_18 + 0x111) = iVar3;
    *(undefined4 *)((int)local_18 + 0x115) = 0x36;
    puVar4 = (undefined4 *)local_14->field_0121;
    puVar11 = (undefined4 *)((int)local_18 + iVar3 + 0x36);
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
    *(int *)((int)local_18 + 0x119) = iVar3 + 0x36;
    *(undefined4 *)((int)local_18 + 0x11d) = 0x36;
    puVar4 = (undefined4 *)local_14->field_0125;
    puVar11 = (undefined4 *)((int)local_18 + iVar3 + 0x6c);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(int *)((int)local_18 + 0x121) = iVar3 + 0x6c;
    *(undefined4 *)((int)local_18 + 0x125) = 0x5c;
    uVar10 = iVar3 + 200;
    local_8 = 0x5c;
    puVar4 = (undefined4 *)local_14->field_0129;
    puVar11 = (undefined4 *)((int)local_18 + uVar10);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar11 = puVar11 + 1;
    }
    *(uint *)((int)local_18 + 0x129) = uVar10;
    *(undefined4 *)((int)local_18 + 0x12d) = 0x5c;
    iVar5 = local_14->field_0020;
    if (iVar5 == 0x14) {
      local_1c = &local_14->field_0171;
      local_24 = 5;
      local_20 = local_28;
      do {
        uVar10 = uVar10 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-5],(int *)&local_8);
        puVar4 = local_10;
        puVar11 = (undefined4 *)(uVar10 + (int)local_c);
        for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        local_20[-1] = uVar10;
        *local_20 = local_8;
        FUN_006ab060(&local_10);
        uVar10 = uVar10 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
        puVar9 = local_20;
        puVar4 = local_10;
        puVar11 = (undefined4 *)(uVar10 + (int)local_c);
        for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        local_20[9] = uVar10;
        local_20[10] = local_8;
        FUN_006ab060(&local_10);
        local_1c = local_1c + 1;
        local_20 = puVar9 + 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar5 = uVar10 + local_8;
      puVar4 = (undefined4 *)local_14->field_0195;
      puVar11 = (undefined4 *)((int)local_c + iVar5);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      puVar11[2] = puVar4[2];
      puVar11[3] = puVar4[3];
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar4 + 4);
      *(undefined1 *)((int)puVar11 + 0x12) = *(undefined1 *)((int)puVar4 + 0x12);
      *(int *)((int)local_18 + 0x201) = iVar5;
      *(undefined4 *)((int)local_18 + 0x205) = 0x13;
      puVar4 = (undefined4 *)local_14->field_0199;
      puVar11 = (undefined4 *)((int)local_c + iVar5 + 0x13);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      puVar11[2] = puVar4[2];
      puVar11[3] = puVar4[3];
      *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar4 + 4);
      *(undefined1 *)((int)puVar11 + 0x12) = *(undefined1 *)((int)puVar4 + 0x12);
      *(int *)((int)local_18 + 0x209) = iVar5 + 0x13;
      *(undefined4 *)((int)local_18 + 0x20d) = 0x13;
      puVar4 = (undefined4 *)local_14->field_01AD;
      puVar11 = (undefined4 *)((int)local_c + iVar5 + 0x26);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
      *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
      *(int *)((int)local_18 + 0x231) = iVar5 + 0x26;
      *(undefined4 *)((int)local_18 + 0x235) = 0xb;
      puVar4 = (undefined4 *)local_14->field_01B1;
      puVar11 = (undefined4 *)((int)local_c + iVar5 + 0x31);
      *puVar11 = *puVar4;
      puVar11[1] = puVar4[1];
      *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
      *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
      *(int *)((int)local_18 + 0x239) = iVar5 + 0x31;
      *(undefined4 *)((int)local_18 + 0x23d) = 0xb;
      puVar4 = (undefined4 *)local_14->field_01BD;
      puVar11 = (undefined4 *)((int)local_c + iVar5 + 0x3c);
      for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      *(int *)((int)local_18 + 0x251) = iVar5 + 0x3c;
      *(undefined4 *)((int)local_18 + 0x255) = 0x240;
      puVar4 = (undefined4 *)local_14->field_01C1;
      puVar11 = (undefined4 *)(iVar5 + 0x27c + (int)local_c);
      for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      *(int *)((int)local_18 + 0x259) = iVar5 + 0x27c;
      *(undefined4 *)((int)local_18 + 0x25d) = 0x240;
    }
    else {
      if (iVar5 == 0x1ae) {
        puVar4 = (undefined4 *)local_14->field_01AD;
        puVar11 = (undefined4 *)((int)local_18 + iVar3 + 0x124);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
        *(int *)((int)local_18 + 0x231) = iVar3 + 0x124;
        *(undefined4 *)((int)local_18 + 0x235) = 0xb;
        puVar4 = (undefined4 *)local_14->field_01B1;
        puVar11 = (undefined4 *)((int)local_18 + iVar3 + 0x12f);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar4 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar4 + 10);
        *(int *)((int)local_18 + 0x239) = iVar3 + 0x12f;
        *(undefined4 *)((int)local_18 + 0x23d) = 0xb;
        puVar4 = (undefined4 *)local_14->field_01C5;
        puVar11 = (undefined4 *)((int)local_18 + iVar3 + 0x13a);
        *puVar11 = *puVar4;
        *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar4 + 1);
        *(int *)((int)local_18 + 0x261) = iVar3 + 0x13a;
        *(undefined4 *)((int)local_18 + 0x265) = 6;
        puVar4 = (undefined4 *)local_14->field_01C9;
        puVar11 = (undefined4 *)((int)local_18 + iVar3 + 0x140);
        *puVar11 = *puVar4;
        *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar4 + 1);
        *(int *)((int)local_18 + 0x269) = iVar3 + 0x140;
        *(undefined4 *)((int)local_18 + 0x26d) = 6;
        g_currentExceptionFrame = local_6c.previous;
        return local_18;
      }
      if (iVar5 == 1000) {
        local_1c = &local_14->field_0135;
        local_24 = 2;
        do {
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-2],(int *)&local_8);
          puVar4 = local_10;
          puVar11 = (undefined4 *)(uVar10 + (int)local_c);
          for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[-1] = uVar10;
          *local_20 = local_8;
          FUN_006ab060(&local_10);
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar9 = local_20;
          puVar4 = local_10;
          puVar11 = (undefined4 *)(uVar10 + (int)local_c);
          for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[3] = uVar10;
          local_20[4] = local_8;
          FUN_006ab060(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar9 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_1c = &local_14->field_014D;
        local_20 = (uint *)((int)local_18 + 0x155);
        local_24 = 4;
        do {
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)local_1c[-4],(int *)&local_8);
          puVar4 = local_10;
          puVar11 = (undefined4 *)(uVar10 + (int)local_c);
          for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[-1] = uVar10;
          *local_20 = local_8;
          FUN_006ab060(&local_10);
          uVar10 = uVar10 + local_8;
          local_10 = (undefined4 *)FUN_006b0020((uint *)*local_1c,(int *)&local_8);
          puVar9 = local_20;
          puVar4 = local_10;
          puVar11 = (undefined4 *)(uVar10 + (int)local_c);
          for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_20[7] = uVar10;
          local_20[8] = local_8;
          FUN_006ab060(&local_10);
          local_1c = local_1c + 1;
          local_20 = puVar9 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        iVar5 = uVar10 + local_8;
        puVar4 = (undefined4 *)local_14->field_0185;
        puVar11 = (undefined4 *)(iVar5 + (int)local_c);
        for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
        *(int *)((int)local_18 + 0x1e1) = iVar5;
        *(undefined4 *)((int)local_18 + 0x1e5) = 0x129;
        puVar4 = (undefined4 *)local_14->field_0189;
        puVar11 = (undefined4 *)((int)local_c + iVar5 + 0x129);
        for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
        *(int *)((int)local_18 + 0x1e9) = iVar5 + 0x129;
        *(undefined4 *)((int)local_18 + 0x1ed) = 0x129;
        puVar4 = (undefined4 *)local_14->field_018D;
        puVar11 = (undefined4 *)((int)local_c + iVar5 + 0x252);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        puVar11[2] = puVar4[2];
        puVar11[3] = puVar4[3];
        *(int *)((int)local_18 + 0x1f1) = iVar5 + 0x252;
        *(undefined4 *)((int)local_18 + 0x1f5) = 0x10;
        puVar4 = (undefined4 *)local_14->field_0191;
        local_8 = 0x10;
        puVar11 = (undefined4 *)((int)local_c + iVar5 + 0x262);
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        puVar11[2] = puVar4[2];
        puVar11[3] = puVar4[3];
        *(int *)((int)local_18 + 0x1f9) = iVar5 + 0x262;
        *(undefined4 *)((int)local_18 + 0x1fd) = 0x10;
        iVar5 = iVar5 + 0x272;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_019D,(int *)&local_8);
        puVar4 = local_10;
        puVar11 = (undefined4 *)(iVar5 + (int)local_c);
        for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(int *)((int)local_18 + 0x211) = iVar5;
        *(uint *)((int)local_18 + 0x215) = local_8;
        FUN_006ab060(&local_10);
        iVar5 = iVar5 + local_8;
        local_10 = (undefined4 *)FUN_006b0020((uint *)local_14->field_01A1,(int *)&local_8);
        puVar4 = local_18;
        puVar11 = local_10;
        puVar8 = (undefined4 *)(iVar5 + (int)local_c);
        for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(int *)((int)local_18 + 0x219) = iVar5;
        *(uint *)((int)local_18 + 0x21d) = local_8;
        FUN_006ab060(&local_10);
        iVar5 = iVar5 + local_8;
        puVar8 = (undefined4 *)((int)local_c + iVar5);
        puVar11 = (undefined4 *)local_14->field_01A5;
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        *(int *)((int)puVar4 + 0x221) = iVar5;
        *(undefined4 *)((int)puVar4 + 0x225) = 0xc;
        puVar11 = (undefined4 *)local_14->field_01A9;
        puVar8 = (undefined4 *)((int)local_c + iVar5 + 0xc);
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        *(int *)((int)puVar4 + 0x229) = iVar5 + 0xc;
        *(undefined4 *)((int)puVar4 + 0x22d) = 0xc;
        puVar11 = (undefined4 *)local_14->field_01B5;
        puVar8 = (undefined4 *)((int)local_c + iVar5 + 0x18);
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar11 + 2);
        *(undefined1 *)((int)puVar8 + 10) = *(undefined1 *)((int)puVar11 + 10);
        *(int *)((int)puVar4 + 0x241) = iVar5 + 0x18;
        *(undefined4 *)((int)puVar4 + 0x245) = 0xb;
        puVar8 = (undefined4 *)local_14->field_01B9;
        puVar11 = (undefined4 *)(iVar5 + 0x23 + (int)local_c);
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar8 + 2);
        *(undefined1 *)((int)puVar11 + 10) = *(undefined1 *)((int)puVar8 + 10);
        *(int *)((int)puVar4 + 0x249) = iVar5 + 0x23;
        *(undefined4 *)((int)puVar4 + 0x24d) = 0xb;
        g_currentExceptionFrame = local_6c.previous;
        return local_c;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_c;
}

