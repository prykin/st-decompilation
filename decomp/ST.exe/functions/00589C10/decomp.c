
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::GetMessage */

undefined4 __thiscall STOctopusC::GetMessage(STOctopusC *this,int param_1)

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
  InternalExceptionFrame local_88;
  int local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  STSprGameObjC *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_28 = (STSprGameObjC *)this;
  iVar7 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_28;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Igor_to_oct_cpp_007cba18,0x1cf,0,iVar7,&DAT_007a4ccc,
                               s_STOctopusC__GetMessage_007cba6c);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Igor_to_oct_cpp_007cba18,0x1d0);
    return 0xffff;
  }
  STSprGameObjC::GetMessage(local_28,param_1);
  uVar10 = *(uint *)(param_1 + 0x10);
  if (0x112 < uVar10) {
    if (0x128 < uVar10) {
      if (uVar10 != 0x440f) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      puVar11 = &this_00->field_01D5;
      if (DAT_0080732c == 0) {
        thunk_FUN_004ad070(puVar11,0xe);
        thunk_FUN_004ad070(puVar11,8);
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      thunk_FUN_004ad0e0(puVar11,0xe);
      thunk_FUN_004ad0e0(puVar11,8);
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (uVar10 == 0x128) {
      if (*(int *)&this_00->field_0x249 == 2) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      uVar10 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eab60((void *)this_00->field_0211,uVar10);
      thunk_FUN_005899e0(this_00);
      *(undefined4 *)&this_00->field_0x249 = 2;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (uVar10 != 0x113) {
      if (uVar10 != 0x127) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      iVar7 = thunk_FUN_0058d160(0,0,DAT_007fb240 + -1,DAT_007fb242 + -1,(int)this_00,
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x14) * 0xc9 + 100),
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x18) * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10)
                                              * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10)
                                              * 0xc9 + 100),(undefined2 *)&local_1c,
                                 (undefined2 *)&local_24,(short *)&local_20);
      if (iVar7 == 0) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      thunk_FUN_0058af70(this_00,(short)local_1c,(short)local_24,(short)local_20);
      sVar6 = (*this_00->vtable->slot_10)
                        (*(undefined2 *)&this_00->field_0x41,*(undefined2 *)&this_00->field_0x43,
                         *(undefined2 *)&this_00->field_0x45,local_1c,local_24,local_20);
      *(short *)&this_00->field_0x6c = sVar6 / 0x2d - (short)((int)sVar6 / -0x4c000000);
      iVar7 = *(int *)&this_00->field_0x251 * 0x1850;
      *(int *)&this_00->field_0x251 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfffU)) >> 0xc;
      iVar7 = *(int *)&this_00->field_0x255 * 0x1850;
      *(int *)&this_00->field_0x255 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfffU)) >> 0xc;
      iVar7 = this_00->field_0259 * 0x1850;
      this_00->field_0259 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfffU)) >> 0xc;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar10 == 0x112) {
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (3 < uVar10) {
    if (uVar10 != 0x10f) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x96 + local_8);
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_18 == (byte *)0x0) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    puVar11 = (undefined4 *)&this_00->field_0x285;
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
    uVar2 = this_00->field_0x246;
    uVar3 = this_00->field_0x247;
    uVar4 = this_00->field_0x248;
    local_c[0x28] = this_00->field_0x245;
    local_c[0x29] = uVar2;
    local_c[0x2a] = uVar3;
    local_c[0x2b] = uVar4;
    uVar2 = this_00->field_0x24a;
    uVar3 = this_00->field_0x24b;
    uVar4 = this_00->field_0x24c;
    local_c[0x2c] = this_00->field_0x249;
    local_c[0x2d] = uVar2;
    local_c[0x2e] = uVar3;
    local_c[0x2f] = uVar4;
    uVar2 = this_00->field_0x42;
    local_c[0x78] = this_00->field_0x41;
    local_c[0x79] = uVar2;
    uVar2 = this_00->field_0x44;
    local_c[0x7a] = this_00->field_0x43;
    local_c[0x7b] = uVar2;
    uVar2 = this_00->field_0x46;
    local_c[0x7c] = this_00->field_0x45;
    local_c[0x7d] = uVar2;
    uVar2 = this_00->field_0x232;
    uVar3 = this_00->field_0x233;
    uVar4 = this_00->field_0x234;
    local_c[0x40] = this_00->field_0x231;
    local_c[0x41] = uVar2;
    local_c[0x42] = uVar3;
    local_c[0x43] = uVar4;
    uVar2 = this_00->field_0x242;
    uVar3 = this_00->field_0x243;
    uVar4 = this_00->field_0x244;
    local_c[0x44] = this_00->field_0x241;
    local_c[0x45] = uVar2;
    local_c[0x46] = uVar3;
    local_c[0x47] = uVar4;
    uVar2 = this_00->field_0x252;
    uVar3 = this_00->field_0x253;
    uVar4 = this_00->field_0x254;
    local_c[0x48] = this_00->field_0x251;
    local_c[0x49] = uVar2;
    local_c[0x4a] = uVar3;
    local_c[0x4b] = uVar4;
    uVar2 = this_00->field_0x256;
    uVar3 = this_00->field_0x257;
    uVar4 = this_00->field_0x258;
    local_c[0x4c] = this_00->field_0x255;
    local_c[0x4d] = uVar2;
    local_c[0x4e] = uVar3;
    local_c[0x4f] = uVar4;
    *(undefined4 *)(local_c + 0x50) = this_00->field_0259;
    uVar2 = this_00->field_0x25e;
    uVar3 = this_00->field_0x25f;
    uVar4 = this_00->field_0x260;
    local_c[0x54] = this_00->field_0x25d;
    local_c[0x55] = uVar2;
    local_c[0x56] = uVar3;
    local_c[0x57] = uVar4;
    uVar2 = this_00->field_0x262;
    uVar3 = this_00->field_0x263;
    uVar4 = this_00->field_0x264;
    local_c[0x58] = this_00->field_0x261;
    local_c[0x59] = uVar2;
    local_c[0x5a] = uVar3;
    local_c[0x5b] = uVar4;
    uVar2 = this_00->field_0x266;
    uVar3 = this_00->field_0x267;
    uVar4 = this_00->field_0x268;
    local_c[0x5c] = this_00->field_0x265;
    local_c[0x5d] = uVar2;
    local_c[0x5e] = uVar3;
    local_c[0x5f] = uVar4;
    uVar2 = this_00->field_0x26a;
    uVar3 = this_00->field_0x26b;
    uVar4 = this_00->field_0x26c;
    local_c[0x60] = this_00->field_0x269;
    local_c[0x61] = uVar2;
    local_c[0x62] = uVar3;
    local_c[99] = uVar4;
    uVar2 = this_00->field_0x26e;
    uVar3 = this_00->field_0x26f;
    uVar4 = this_00->field_0x270;
    local_c[100] = this_00->field_0x26d;
    local_c[0x65] = uVar2;
    local_c[0x66] = uVar3;
    local_c[0x67] = uVar4;
    uVar2 = this_00->field_0x272;
    uVar3 = this_00->field_0x273;
    uVar4 = this_00->field_0x274;
    local_c[0x68] = this_00->field_0x271;
    local_c[0x69] = uVar2;
    local_c[0x6a] = uVar3;
    local_c[0x6b] = uVar4;
    uVar2 = this_00->field_0x276;
    uVar3 = this_00->field_0x277;
    uVar4 = this_00->field_0x278;
    local_c[0x6c] = this_00->field_0x275;
    local_c[0x6d] = uVar2;
    local_c[0x6e] = uVar3;
    local_c[0x6f] = uVar4;
    uVar2 = this_00->field_0x27a;
    uVar3 = this_00->field_0x27b;
    uVar4 = this_00->field_0x27c;
    local_c[0x70] = this_00->field_0x279;
    local_c[0x71] = uVar2;
    local_c[0x72] = uVar3;
    local_c[0x73] = uVar4;
    uVar2 = this_00->field_0x27e;
    uVar3 = this_00->field_0x27f;
    uVar4 = this_00->field_0x280;
    local_c[0x74] = this_00->field_0x27d;
    local_c[0x75] = uVar2;
    local_c[0x76] = uVar3;
    local_c[0x77] = uVar4;
    uVar2 = this_00->field_0x23a;
    uVar3 = this_00->field_0x23b;
    uVar4 = this_00->field_0x23c;
    local_c[0x38] = this_00->field_0x239;
    local_c[0x39] = uVar2;
    local_c[0x3a] = uVar3;
    local_c[0x3b] = uVar4;
    uVar2 = this_00->field_0x23e;
    uVar3 = this_00->field_0x23f;
    uVar4 = this_00->field_0x240;
    local_c[0x3c] = this_00->field_0x23d;
    local_c[0x3d] = uVar2;
    local_c[0x3e] = uVar3;
    local_c[0x3f] = uVar4;
    uVar2 = this_00->field_0x236;
    uVar3 = this_00->field_0x237;
    uVar4 = this_00->field_0x238;
    local_c[0x34] = this_00->field_0x235;
    local_c[0x35] = uVar2;
    local_c[0x36] = uVar3;
    local_c[0x37] = uVar4;
    uVar2 = this_00->field_0x282;
    uVar3 = this_00->field_0x283;
    uVar4 = this_00->field_0x284;
    local_c[0x86] = this_00->field_0x281;
    local_c[0x87] = uVar2;
    local_c[0x88] = uVar3;
    local_c[0x89] = uVar4;
    uVar2 = this_00->field_0x4f;
    local_c[0x7e] = this_00->field_0x4e;
    local_c[0x7f] = uVar2;
    uVar2 = this_00->field_0x51;
    local_c[0x80] = this_00->field_0x50;
    local_c[0x81] = uVar2;
    uVar2 = this_00->field_0x53;
    local_c[0x82] = this_00->field_0x52;
    local_c[0x83] = uVar2;
    uVar2 = this_00->field_0x6d;
    local_c[0x84] = this_00->field_0x6c;
    local_c[0x85] = uVar2;
    uVar2 = this_00->field_0x24e;
    uVar3 = this_00->field_0x24f;
    uVar4 = this_00->field_0x250;
    local_c[0x30] = this_00->field_0x24d;
    local_c[0x31] = uVar2;
    local_c[0x32] = uVar3;
    local_c[0x33] = uVar4;
    local_c[0x8a] = 0;
    local_c[0x8b] = 0;
    local_c[0x8c] = 0;
    local_c[0x8d] = 0;
    *(uint *)(local_c + 0x8e) = local_8;
    pbVar12 = local_14;
    pbVar14 = local_c + 0x92;
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
    *(uint *)(local_c + local_8 + 0x92) = local_10;
    pbVar12 = local_18;
    pbVar14 = local_c + local_8 + 0x96;
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
    STPlaySystemC::SaveObjData
              (DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_c,local_10 + 0x96 + local_8);
    FUN_006ab060(&local_14);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_c);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar10 == 3) {
    thunk_FUN_0058d080(*(int *)&this_00->field_0x18);
    thunk_FUN_004ad310((int)&this_00->field_01D5);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar10 == 0) {
    if (*(int *)&this_00->field_0x249 == 2) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    thunk_FUN_0058a9e0((int *)this_00);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar10 != 2) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x249 = 3;
  local_1c = *(undefined4 **)(param_1 + 0x14);
  if ((uint)local_1c[3] < 2) {
    iVar7 = DAT_00802a38->field_00E4;
    *(undefined4 *)&this_00->field_0x24d = 0;
    *(undefined4 *)&this_00->field_0x231 = 0;
    *(int *)&this_00->field_0x245 = iVar7 + -3;
    *(undefined4 *)&this_00->field_0x235 = 0;
    *(undefined4 *)&this_00->field_0x271 = 0;
    *(undefined4 *)&this_00->field_0x26d = 0;
    *(undefined4 *)&this_00->field_0x269 = 0;
    *(undefined4 *)&this_00->field_0x281 = 0;
    *(undefined4 *)&this_00->field_0x241 = 0;
    puVar11 = *(undefined4 **)(param_1 + 0x14);
    puVar13 = (undefined4 *)&this_00->field_0x285;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    Bad((STOctopusC *)this_00,(int)unaff_EDI);
    if (((((*(int *)&this_00->field_0x299 < 0) ||
          ((int)DAT_007fb240 <= *(int *)&this_00->field_0x299)) ||
         (*(int *)&this_00->field_0x29d < 0)) ||
        (((int)DAT_007fb242 <= *(int *)&this_00->field_0x29d ||
         (iVar7 = *(int *)&this_00->field_0x2a1, iVar7 < 0)))) ||
       ((DAT_007fb244 <= iVar7 ||
        (bVar5 = thunk_FUN_004961b0(*(short *)&this_00->field_0x299,*(short *)&this_00->field_0x29d,
                                    (short)iVar7), CONCAT31(extraout_var,bVar5) == 0))))
    goto LAB_0058a0d0;
    switch(*(undefined4 *)&this_00->field_0x2a5) {
    case 0xf8:
      iVar7 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                         (byte *)s_octopus2_007cb9f0,0x1d);
      if (iVar7 != 0) {
        iVar7 = 0xe9;
cf_error_exit_0058A005:
        RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_oct_cpp_007cba18,iVar7);
      }
      break;
    case 0xf9:
      iVar7 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                         (byte *)s_octopus1_007cb9dc,0x1d);
      if (iVar7 != 0) {
        iVar7 = 0xe4;
        goto cf_error_exit_0058A005;
      }
      break;
    case 0xfa:
      iVar7 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                         (byte *)s_medusa2_007cb9fc,0x1d);
      if (iVar7 != 0) {
        iVar7 = 0xf3;
        goto cf_error_exit_0058A005;
      }
      break;
    case 0xfb:
      iVar7 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,
                         (byte *)s_medusa1_007cb9e8,0x1d);
      if (iVar7 != 0) {
        iVar7 = 0xee;
        goto cf_error_exit_0058A005;
      }
    }
    thunk_FUN_004ac610(&this_00->field_01D5,'\x0e');
    STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00802a38->field_00E4);
    *(short *)&this_00->field_0x41 = *(short *)&this_00->field_0x299 * 0xc9 + 100;
    *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x29d * 0xc9 + 100;
    *(short *)&this_00->field_0x45 = *(short *)&this_00->field_0x2a1 * 200 + 100;
    *(undefined2 *)&this_00->field_0x6c = *(undefined2 *)&this_00->field_0x2a9;
    *(undefined4 *)&this_00->field_0x251 = 1;
    *(undefined4 *)&this_00->field_0x255 = 1;
    this_00->field_0259 = 1;
    uVar8 = thunk_FUN_0058b190(this_00,(short *)&this_00->field_0x4e,(short *)&this_00->field_0x50,
                               (short *)&this_00->field_0x52,(short *)&this_00->field_0x6c);
    *(undefined4 *)&this_00->field_0x249 = uVar8;
    *(undefined4 *)&this_00->field_0x231 = 0;
  }
  else if (local_1c[3] == 2) {
    puVar11 = local_1c;
    puVar13 = (undefined4 *)&this_00->field_0x285;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    local_8 = *(uint *)((int)local_1c + 0x8e);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x96 + (int)local_1c));
    puVar11 = local_1c;
    *(undefined4 *)&this_00->field_0x249 = local_1c[0xb];
    *(undefined4 *)&this_00->field_0x245 = local_1c[10];
    *(undefined2 *)&this_00->field_0x41 = *(undefined2 *)(local_1c + 0x1e);
    *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)((int)local_1c + 0x7a);
    *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)(local_1c + 0x1f);
    *(undefined4 *)&this_00->field_0x281 = *(undefined4 *)((int)local_1c + 0x86);
    *(undefined4 *)&this_00->field_0x231 = local_1c[0x10];
    *(undefined4 *)&this_00->field_0x241 = local_1c[0x11];
    *(undefined4 *)&this_00->field_0x251 = local_1c[0x12];
    *(undefined4 *)&this_00->field_0x255 = local_1c[0x13];
    this_00->field_0259 = local_1c[0x14];
    *(undefined4 *)&this_00->field_0x25d = local_1c[0x15];
    *(undefined4 *)&this_00->field_0x261 = local_1c[0x16];
    *(undefined4 *)&this_00->field_0x265 = local_1c[0x17];
    *(undefined4 *)&this_00->field_0x269 = local_1c[0x18];
    *(undefined4 *)&this_00->field_0x26d = local_1c[0x19];
    *(undefined4 *)&this_00->field_0x271 = local_1c[0x1a];
    *(undefined4 *)&this_00->field_0x275 = local_1c[0x1b];
    *(undefined4 *)&this_00->field_0x279 = local_1c[0x1c];
    *(undefined4 *)&this_00->field_0x27d = local_1c[0x1d];
    *(undefined4 *)&this_00->field_0x239 = local_1c[0xe];
    *(undefined4 *)&this_00->field_0x23d = local_1c[0xf];
    *(undefined4 *)&this_00->field_0x235 = local_1c[0xd];
    *(undefined2 *)&this_00->field_0x4e = *(undefined2 *)((int)local_1c + 0x7e);
    *(undefined2 *)&this_00->field_0x50 = *(undefined2 *)(local_1c + 0x20);
    *(undefined2 *)&this_00->field_0x52 = *(undefined2 *)((int)local_1c + 0x82);
    *(undefined2 *)&this_00->field_0x6c = *(undefined2 *)(local_1c + 0x21);
    *(undefined4 *)&this_00->field_0x24d = local_1c[0xc];
    local_44[0] = Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_44[0] != 0) {
      iVar7 = 0;
      do {
        if (iVar7 == 8) {
          *(undefined4 *)(local_44[0] + 0x20) = DAT_00806774;
        }
        else {
          *(int **)(local_44[0] + iVar7 * 4) = DAT_0080676c;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x11);
      local_44[1] = 0;
      local_44[2] = 0;
      local_44[3] = DAT_008073cc;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)&this_00->field_01D5,local_44,(undefined4 *)((int)puVar11 + 0x92));
      FUN_006ab060(local_44);
    }
  }
  if ((*(int *)&this_00->field_0x249 == 3) || (iVar7 = thunk_FUN_0058cfe0((int)this_00), iVar7 != 0)
     ) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
LAB_0058a0d0:
  thunk_FUN_005899e0(this_00);
  *(undefined4 *)&this_00->field_0x249 = 2;
  g_currentExceptionFrame = local_88.previous;
  return 0;
}

