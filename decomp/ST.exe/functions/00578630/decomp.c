
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::GetMessage */

undefined4 __thiscall STCrabC::GetMessage(STCrabC *this,int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STSprGameObjC *this_00;
  bool bVar5;
  short sVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  byte *pbVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  byte *pbVar14;
  InternalExceptionFrame local_80;
  int local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  if ((this->field_0239 == 3) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar7 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x1b7,0,iVar7,&DAT_007a4ccc,
                               s_STCrabC__GetMessage_007cad9c);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Igor_to_crab_cpp_007cad4c,0x1b8);
    return 0xffff;
  }
  STSprGameObjC::GetMessage(local_1c,param_1);
  uVar10 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar10) {
    if (uVar10 != 0x128) {
      if (uVar10 != 0x440f) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar11 = &this_00->field_01D5;
      if (DAT_0080732c != 0) {
        thunk_FUN_004ad0e0(puVar11,0xe);
        thunk_FUN_004ad0e0(puVar11,0xd);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      thunk_FUN_004ad070(puVar11,0xe);
      thunk_FUN_004ad070(puVar11,0xd);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    uVar10 = thunk_FUN_004ad650((int)&this_00->field_01D5);
    FUN_006eab60((void *)this_00->field_0211,uVar10);
    goto LAB_00578ea2;
  }
  if (uVar10 == 0x10f) {
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x68 + local_8);
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar11 = &this_00->field_0259;
    pbVar12 = local_c;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pbVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      pbVar12 = pbVar12 + 4;
    }
    local_c[0xc] = 2;
    local_c[0xd] = 0;
    local_c[0xe] = 0;
    local_c[0xf] = 0;
    uVar2 = this_00->field_0x236;
    uVar3 = this_00->field_0x237;
    uVar4 = this_00->field_0x238;
    local_c[0x28] = this_00->field_0x235;
    local_c[0x29] = uVar2;
    local_c[0x2a] = uVar3;
    local_c[0x2b] = uVar4;
    uVar2 = this_00->field_0x23a;
    uVar3 = this_00->field_0x23b;
    uVar4 = this_00->field_0x23c;
    local_c[0x2c] = this_00->field_0x239;
    local_c[0x2d] = uVar2;
    local_c[0x2e] = uVar3;
    local_c[0x2f] = uVar4;
    uVar2 = this_00->field_0x42;
    local_c[0x50] = this_00->field_0x41;
    local_c[0x51] = uVar2;
    uVar2 = this_00->field_0x44;
    local_c[0x52] = this_00->field_0x43;
    local_c[0x53] = uVar2;
    uVar2 = this_00->field_0x46;
    local_c[0x54] = this_00->field_0x45;
    local_c[0x55] = uVar2;
    uVar2 = this_00->field_0x232;
    uVar3 = this_00->field_0x233;
    uVar4 = this_00->field_0x234;
    local_c[0x34] = this_00->field_0x231;
    local_c[0x35] = uVar2;
    local_c[0x36] = uVar3;
    local_c[0x37] = uVar4;
    uVar2 = this_00->field_0x246;
    uVar3 = this_00->field_0x247;
    uVar4 = this_00->field_0x248;
    local_c[0x48] = this_00->field_0x245;
    local_c[0x49] = uVar2;
    local_c[0x4a] = uVar3;
    local_c[0x4b] = uVar4;
    uVar2 = this_00->field_0x24e;
    uVar3 = this_00->field_0x24f;
    uVar4 = this_00->field_0x250;
    local_c[0x4c] = this_00->field_0x24d;
    local_c[0x4d] = uVar2;
    local_c[0x4e] = uVar3;
    local_c[0x4f] = uVar4;
    uVar2 = this_00->field_0x242;
    uVar3 = this_00->field_0x243;
    uVar4 = this_00->field_0x244;
    local_c[0x38] = this_00->field_0x241;
    local_c[0x39] = uVar2;
    local_c[0x3a] = uVar3;
    local_c[0x3b] = uVar4;
    uVar2 = this_00->field_0x24a;
    uVar3 = this_00->field_0x24b;
    uVar4 = this_00->field_0x24c;
    local_c[0x3c] = this_00->field_0x249;
    local_c[0x3d] = uVar2;
    local_c[0x3e] = uVar3;
    local_c[0x3f] = uVar4;
    uVar2 = this_00->field_0x252;
    uVar3 = this_00->field_0x253;
    uVar4 = this_00->field_0x254;
    local_c[0x40] = this_00->field_0x251;
    local_c[0x41] = uVar2;
    local_c[0x42] = uVar3;
    local_c[0x43] = uVar4;
    uVar2 = this_00->field_0x256;
    uVar3 = this_00->field_0x257;
    uVar4 = this_00->field_0x258;
    local_c[0x44] = this_00->field_0x255;
    local_c[0x45] = uVar2;
    local_c[0x46] = uVar3;
    local_c[0x47] = uVar4;
    uVar2 = this_00->field_0x4f;
    local_c[0x56] = this_00->field_0x4e;
    local_c[0x57] = uVar2;
    uVar2 = this_00->field_0x51;
    local_c[0x58] = this_00->field_0x50;
    local_c[0x59] = uVar2;
    uVar2 = this_00->field_0x6d;
    local_c[0x5a] = this_00->field_0x6c;
    local_c[0x5b] = uVar2;
    uVar2 = this_00->field_0x23e;
    uVar3 = this_00->field_0x23f;
    uVar4 = this_00->field_0x240;
    local_c[0x30] = this_00->field_0x23d;
    local_c[0x31] = uVar2;
    local_c[0x32] = uVar3;
    local_c[0x33] = uVar4;
    local_c[0x5c] = 0;
    local_c[0x5d] = 0;
    local_c[0x5e] = 0;
    local_c[0x5f] = 0;
    *(uint *)(local_c + 0x60) = local_8;
    pbVar12 = local_14;
    pbVar14 = local_c + 100;
    for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pbVar14 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pbVar14 = pbVar14 + 1;
    }
    *(uint *)(local_c + local_8 + 100) = local_10;
    pbVar12 = local_18;
    pbVar14 = local_c + local_8 + 0x68;
    for (uVar10 = local_10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar10 = local_10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pbVar14 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pbVar14 = pbVar14 + 1;
    }
    STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_c,local_10 + 0x68 + local_8);
    FUN_006ab060(&local_14);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar10 == 0) {
    if (*(int *)&this_00->field_0x239 == 2) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_00579350((int *)this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar10 != 2) {
    if (uVar10 != 3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_0058d080(this_00->field_0018);
    thunk_FUN_004ad310((int)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = *(undefined4 **)(param_1 + 0x14);
  if ((uint)local_20[3] < 2) {
    *(undefined4 *)&this_00->field_0x239 = 3;
    iVar7 = DAT_00802a38->field_00E4;
    *(undefined4 *)&this_00->field_0x23d = 0;
    *(undefined4 *)&this_00->field_0x231 = 0;
    *(int *)&this_00->field_0x235 = iVar7 + -3;
    puVar11 = *(undefined4 **)(param_1 + 0x14);
    puVar13 = &this_00->field_0259;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    Bad((STCrabC *)this_00,(int)unaff_EDI);
    if (((((*(int *)&this_00->field_0x26d < 0) ||
          ((int)DAT_007fb240 <= *(int *)&this_00->field_0x26d)) ||
         (*(int *)&this_00->field_0x271 < 0)) ||
        (((int)DAT_007fb242 <= *(int *)&this_00->field_0x271 ||
         (iVar7 = *(int *)&this_00->field_0x275, iVar7 < 0)))) ||
       ((DAT_007fb244 <= iVar7 ||
        (bVar5 = thunk_FUN_004961b0(*(short *)&this_00->field_0x26d,*(short *)&this_00->field_0x271,
                                    (short)iVar7), CONCAT31(extraout_var,bVar5) == 0)))) {
      thunk_FUN_005783f0(this_00);
      *(undefined4 *)&this_00->field_0x239 = 2;
    }
    else {
      switch(*(undefined4 *)&this_00->field_0x279) {
      case 0xf2:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                           (byte *)s_crab1l_007cacb0,0x1d);
        if (iVar7 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xd2);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,
                           (byte *)s_crab1l_m_007cacb8,0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xd5;
cf_error_exit_00578B5D:
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,iVar7);
        }
        break;
      case 0xf3:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                           (byte *)s_crab2l_007cacc4,0x1d);
        if (iVar7 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xda);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,
                           (byte *)s_crab2l_m_007caccc,0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xdd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf4:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                           (byte *)s_crab1b_007cacd8,0x1d);
        if (iVar7 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xe2);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,
                           (byte *)s_crab1b_m_007cace0,0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xe5;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf5:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                           (byte *)s_crab2b_007cacec,0x1d);
        if (iVar7 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xea);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,
                           (byte *)s_crab2b_m_007cacf4,0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xed;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf6:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                           (byte *)s_langus2_007cad14,0x1d);
        if (iVar7 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xfa);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,
                           (byte *)s_langus2m_007cad1c,0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xfd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf7:
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                           (byte *)s_langus1_007cad00,0x1d);
        if (iVar7 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xf2);
        }
        iVar7 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)&this_00->field_01D5,0xd,DAT_0080676c,
                           (byte *)s_langus1m_007cad08,0x1d);
        if (iVar7 != 0) {
          iVar7 = 0xf5;
          goto cf_error_exit_00578B5D;
        }
      }
      puVar11 = &this_00->field_01D5;
      thunk_FUN_004acf50(puVar11,'\r');
      thunk_FUN_004ac610(puVar11,'\x0e');
      thunk_FUN_004ac610(puVar11,'\r');
      STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,DAT_00802a38->field_00E4);
      STT3DSprC::StartShow((STT3DSprC *)puVar11,0xd,DAT_00802a38->field_00E4);
      sVar6 = *(short *)&this_00->field_0x275 * 200;
      *(short *)&this_00->field_0x41 = *(short *)&this_00->field_0x26d * 0xc9 + 100;
      *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x271 * 0xc9 + 100;
      *(short *)&this_00->field_0x45 = sVar6 + 100;
      if ((*(int *)&this_00->field_0x279 < 0xf6) || (0xf7 < *(int *)&this_00->field_0x279)) {
        sVar6 = sVar6 + 0x28;
      }
      else {
        sVar6 = sVar6 + 0x82;
      }
      *(short *)&this_00->field_0x45 = sVar6;
      *(short *)&this_00->field_0x6c =
           (short)(*(int *)&this_00->field_0x27d / 0x2d) -
           (short)(*(int *)&this_00->field_0x27d / -0x4c000000);
      uVar8 = thunk_FUN_005797b0(this_00,(undefined2 *)&this_00->field_0x4e,
                                 (undefined2 *)&this_00->field_0x50,
                                 (undefined2 *)&this_00->field_0x6c);
      *(undefined4 *)&this_00->field_0x239 = uVar8;
    }
  }
  else if (local_20[3] == 2) {
    puVar11 = local_20;
    puVar13 = &this_00->field_0259;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    local_8 = local_20[0x18];
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x68 + (int)local_20));
    puVar11 = local_20;
    *(undefined4 *)&this_00->field_0x239 = local_20[0xb];
    *(undefined4 *)&this_00->field_0x235 = local_20[10];
    *(undefined2 *)&this_00->field_0x41 = *(undefined2 *)(local_20 + 0x14);
    *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)((int)local_20 + 0x52);
    *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)(local_20 + 0x15);
    *(undefined4 *)&this_00->field_0x231 = local_20[0xd];
    *(undefined4 *)&this_00->field_0x245 = local_20[0x12];
    *(undefined4 *)&this_00->field_0x24d = local_20[0x13];
    *(undefined4 *)&this_00->field_0x241 = local_20[0xe];
    *(undefined4 *)&this_00->field_0x249 = local_20[0xf];
    *(undefined4 *)&this_00->field_0x251 = local_20[0x10];
    *(undefined4 *)&this_00->field_0x255 = local_20[0x11];
    *(undefined2 *)&this_00->field_0x4e = *(undefined2 *)((int)local_20 + 0x56);
    *(undefined2 *)&this_00->field_0x50 = *(undefined2 *)(local_20 + 0x16);
    *(undefined2 *)&this_00->field_0x6c = *(undefined2 *)((int)local_20 + 0x5a);
    *(undefined4 *)&this_00->field_0x23d = local_20[0xc];
    local_3c[0] = Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_3c[0] != 0) {
      iVar7 = 0;
      do {
        *(int **)(iVar7 + local_3c[0]) = DAT_0080676c;
        iVar7 = iVar7 + 4;
      } while (iVar7 < 0x44);
      local_3c[1] = 0;
      local_3c[2] = 0;
      local_3c[3] = DAT_008073cc;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      STT3DSprC::RestoreSpr((STT3DSprC *)&this_00->field_01D5,local_3c,puVar11 + 0x19);
      FUN_006ab060(local_3c);
    }
  }
  if (*(int *)&this_00->field_0x239 == 3) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  iVar7 = thunk_FUN_0058cfe0((int)this_00);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
LAB_00578ea2:
  thunk_FUN_005783f0(this_00);
  *(undefined4 *)&this_00->field_0x239 = 2;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

