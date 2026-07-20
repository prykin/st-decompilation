
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_mbomb.cpp
   STMBombC::GetMessage */

undefined4 __thiscall STMBombC::GetMessage(STMBombC *this,int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STSprGameObjC *this_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  byte *pbVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  byte *pbVar13;
  InternalExceptionFrame local_8c;
  undefined4 *local_48;
  STSprGameObjC *local_44;
  LPVOID local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  byte *local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_24 = (void *)0x0;
  if ((this->field_0231 == 3) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_44 = (STSprGameObjC *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x389,0,iVar5,&DAT_007a4ccc,
                               s_STMBombC__GetMessage_007cb978);
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x38a);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  STSprGameObjC::GetMessage(local_44,param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar8) {
    if (uVar8 == 0x112) {
      thunk_FUN_004ad5e0((int)&this_00->field_01D5);
    }
    else if (uVar8 == 0x113) {
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar8 == 0x10f) {
    local_20 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_10);
    local_1c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_18);
    local_14 = (byte *)Library::DKW::LIB::FUN_006aac70(local_18 + 0x87 + local_10);
    if (local_20 == (byte *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_1c == (byte *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    puVar10 = (undefined4 *)&this_00->field_0x27c;
    pbVar11 = local_14;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pbVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      pbVar11 = pbVar11 + 4;
    }
    *(undefined2 *)pbVar11 = *(undefined2 *)puVar10;
    local_14[0xc] = 2;
    local_14[0xd] = 0;
    local_14[0xe] = 0;
    local_14[0xf] = 0;
    uVar2 = this_00->field_0x232;
    uVar3 = this_00->field_0x233;
    uVar4 = this_00->field_0x234;
    local_14[0x2a] = this_00->field_0x231;
    local_14[0x2b] = uVar2;
    local_14[0x2c] = uVar3;
    local_14[0x2d] = uVar4;
    uVar2 = this_00->field_0x236;
    uVar3 = this_00->field_0x237;
    uVar4 = this_00->field_0x238;
    local_14[0x2e] = this_00->field_0x235;
    local_14[0x2f] = uVar2;
    local_14[0x30] = uVar3;
    local_14[0x31] = uVar4;
    uVar2 = this_00->field_0x23a;
    uVar3 = this_00->field_0x23b;
    uVar4 = this_00->field_0x23c;
    local_14[0x32] = this_00->field_0x239;
    local_14[0x33] = uVar2;
    local_14[0x34] = uVar3;
    local_14[0x35] = uVar4;
    uVar2 = this_00->field_0x23e;
    uVar3 = this_00->field_0x23f;
    uVar4 = this_00->field_0x240;
    local_14[0x36] = this_00->field_0x23d;
    local_14[0x37] = uVar2;
    local_14[0x38] = uVar3;
    local_14[0x39] = uVar4;
    uVar2 = this_00->field_0x242;
    local_14[0x3a] = this_00->field_0x241;
    local_14[0x3b] = uVar2;
    uVar2 = this_00->field_0x244;
    local_14[0x3c] = this_00->field_0x243;
    local_14[0x3d] = uVar2;
    uVar2 = this_00->field_0x246;
    local_14[0x3e] = this_00->field_0x245;
    local_14[0x3f] = uVar2;
    uVar2 = this_00->field_0x264;
    uVar3 = this_00->field_0x265;
    uVar4 = this_00->field_0x266;
    local_14[0x62] = this_00->field_0x263;
    local_14[99] = uVar2;
    local_14[100] = uVar3;
    local_14[0x65] = uVar4;
    uVar2 = this_00->field_0x268;
    uVar3 = this_00->field_0x269;
    uVar4 = this_00->field_0x26a;
    local_14[0x66] = this_00->field_0x267;
    local_14[0x67] = uVar2;
    local_14[0x68] = uVar3;
    local_14[0x69] = uVar4;
    uVar2 = this_00->field_0x26c;
    uVar3 = this_00->field_0x26d;
    uVar4 = this_00->field_0x26e;
    local_14[0x6a] = this_00->field_0x26b;
    local_14[0x6b] = uVar2;
    local_14[0x6c] = uVar3;
    local_14[0x6d] = uVar4;
    uVar2 = this_00->field_0x248;
    local_14[0x40] = this_00->field_0x247;
    local_14[0x41] = uVar2;
    uVar2 = this_00->field_0x24a;
    local_14[0x42] = this_00->field_0x249;
    local_14[0x43] = uVar2;
    uVar2 = this_00->field_0x24c;
    local_14[0x44] = this_00->field_0x24b;
    local_14[0x45] = uVar2;
    uVar2 = this_00->field_0x24e;
    local_14[0x46] = this_00->field_0x24d;
    local_14[0x47] = uVar2;
    uVar2 = this_00->field_0x250;
    local_14[0x48] = this_00->field_0x24f;
    local_14[0x49] = uVar2;
    uVar2 = this_00->field_0x252;
    local_14[0x4a] = this_00->field_0x251;
    local_14[0x4b] = uVar2;
    uVar2 = this_00->field_0x254;
    uVar3 = this_00->field_0x255;
    uVar4 = this_00->field_0x256;
    local_14[0x4c] = this_00->field_0x253;
    local_14[0x4d] = uVar2;
    local_14[0x4e] = uVar3;
    local_14[0x4f] = uVar4;
    *(undefined4 *)(local_14 + 0x50) = *(undefined4 *)&this_00->field_0x257;
    *(undefined4 *)(local_14 + 0x54) = *(undefined4 *)((int)&this_00->field_0259 + 2);
    uVar2 = this_00->field_0x260;
    uVar3 = this_00->field_0x261;
    uVar4 = this_00->field_0x262;
    local_14[0x58] = this_00->field_0x25f;
    local_14[0x59] = uVar2;
    local_14[0x5a] = uVar3;
    local_14[0x5b] = uVar4;
    uVar2 = this_00->field_0x270;
    uVar3 = this_00->field_0x271;
    uVar4 = this_00->field_0x272;
    local_14[0x5c] = this_00->field_0x26f;
    local_14[0x5d] = uVar2;
    local_14[0x5e] = uVar3;
    local_14[0x5f] = uVar4;
    uVar2 = this_00->field_0x274;
    local_14[0x60] = this_00->field_0x273;
    local_14[0x61] = uVar2;
    local_14[0x74] = 0;
    local_14[0x75] = 0;
    local_14[0x76] = 0;
    local_14[0x77] = 0;
    uVar2 = this_00->field_0x42;
    local_14[0x6e] = this_00->field_0x41;
    local_14[0x6f] = uVar2;
    uVar2 = this_00->field_0x44;
    local_14[0x70] = this_00->field_0x43;
    local_14[0x71] = uVar2;
    uVar2 = this_00->field_0x46;
    local_14[0x72] = this_00->field_0x45;
    local_14[0x73] = uVar2;
    local_14[0x78] = this_00->field_0x275;
    local_14[0x79] = this_00->field_0x276;
    local_14[0x7a] = this_00->field_0x277;
    uVar2 = this_00->field_0x279;
    uVar3 = this_00->field_0x27a;
    uVar4 = this_00->field_0x27b;
    local_14[0x7b] = this_00->field_0x278;
    local_14[0x7c] = uVar2;
    local_14[0x7d] = uVar3;
    local_14[0x7e] = uVar4;
    *(uint *)(local_14 + 0x7f) = local_10;
    pbVar11 = local_20;
    pbVar13 = local_14 + 0x83;
    for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar13 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar13 = pbVar13 + 1;
    }
    *(uint *)(local_14 + local_10 + 0x83) = local_18;
    pbVar11 = local_1c;
    pbVar13 = local_14 + local_10 + 0x87;
    for (uVar8 = local_18 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar8 = local_18 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar13 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar13 = pbVar13 + 1;
    }
    STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_14,local_18 + 0x87 + local_10)
    ;
    FUN_006ab060(&local_20);
    FUN_006ab060(&local_1c);
    FUN_006ab060(&local_14);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar8 == 0) {
    thunk_FUN_00586af0((int *)this_00);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar8 == 2) {
    DAT_0081170c = FUN_006acf0d(0,0,0,0x3ed,0x3ed,1000);
    iVar5 = *(int *)(param_1 + 0x14);
    *(undefined4 *)&this_00->field_0x231 = 3;
    uVar8 = *(uint *)(iVar5 + 0xc);
    if (uVar8 < 2) {
      *(undefined4 *)&this_00->field_0x257 = 0;
      *(undefined4 *)&this_00->field_0x253 = DAT_00802a38->field_00E4;
      *(undefined4 *)&this_00->field_0x26f = 0xff;
      puVar10 = *(undefined4 **)(param_1 + 0x14);
      puVar12 = (undefined4 *)&this_00->field_0x27c;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
      uVar8 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar8;
      *(uint *)((int)&this_00->field_0259 + 2) = (uVar8 >> 0x10) % 0x19 - 0xc;
      *(undefined4 *)&this_00->field_0x25f = 2;
      *(undefined4 *)&this_00->field_0x26b = 0;
      *(undefined4 *)&this_00->field_0x267 = 0;
      *(undefined4 *)&this_00->field_0x263 = 0;
      if ((*(int *)&this_00->field_0x290 < (int)(short)((short)_SHORT_007fb240 * 0xc9 + 100)) &&
         (-1 < *(int *)&this_00->field_0x290)) {
        if ((*(int *)&this_00->field_0x294 < (int)(short)(SHORT_007fb242 * 0xc9 + 100)) &&
           (((-1 < *(int *)&this_00->field_0x294 &&
             (iVar5 = *(int *)&this_00->field_0x298, iVar5 < (short)(_SHORT_007fb244 * 200 + 100)))
            && (-1 < iVar5)))) {
          thunk_FUN_00416240(this_00,*(undefined2 *)&this_00->field_0x290,
                             *(undefined2 *)&this_00->field_0x294,(short)iVar5);
          iVar5 = *(int *)&this_00->field_0x290;
          sVar9 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar9 = (((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
          }
          iVar5 = *(int *)&this_00->field_0x294;
          *(short *)&this_00->field_0x47 = sVar9;
          sVar9 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar9 = (((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
          }
          iVar5 = *(int *)&this_00->field_0x298;
          *(short *)&this_00->field_0x49 = sVar9;
          sVar9 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar9 = (((short)(iVar5 / 200) + sVar9) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar5 / 200) + sVar9) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
          }
          *(short *)&this_00->field_0x4b = sVar9;
          iVar5 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00806774,s_mmine_007cb934,
                             0x1d);
          if (iVar5 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x2c3
                      );
          }
          STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00802a38->field_00E4);
          if ((*(int *)&this_00->field_0x29c == 0) ||
             (iVar5 = FUN_006e62d0(DAT_00802a38,*(int *)&this_00->field_0x29c,(int *)&local_24),
             iVar5 != 0)) {
            *(undefined4 *)&this_00->field_0x231 = 1;
            *(undefined4 *)&this_00->field_0x235 = 0;
            *(undefined4 *)&this_00->field_0x239 = 0;
            *(undefined4 *)&this_00->field_0x23d = 0;
          }
          else {
            *(undefined4 *)&this_00->field_0x231 = 0;
            *(undefined2 *)&this_00->field_0x273 = *(undefined2 *)((int)local_24 + 0x32);
            *(undefined4 *)&this_00->field_0x26f = *(undefined4 *)((int)local_24 + 0x24);
            thunk_FUN_00416270(local_24,&local_6,(int *)&local_8,(int *)&local_a);
            local_a = local_a - *(short *)&this_00->field_0x45;
            local_8 = local_8 - *(short *)&this_00->field_0x43;
            local_6 = local_6 - *(short *)&this_00->field_0x41;
            iVar5 = FUN_006acf0d(0,0,0,(int)local_6,(int)local_8,(int)local_a);
            *(undefined4 *)&this_00->field_0x235 = 0;
            *(undefined4 *)&this_00->field_0x239 = 0;
            *(undefined4 *)&this_00->field_0x23d = 0;
            if (0 < iVar5) {
              *(int *)&this_00->field_0x235 = (local_6 * 0xc0000) / iVar5;
              *(int *)&this_00->field_0x239 = (local_8 * 0xc0000) / iVar5;
              *(int *)&this_00->field_0x23d = (local_a * 0xc0000) / iVar5;
            }
          }
          thunk_FUN_00589870(this_00,*(int *)&this_00->field_0x290,*(int *)&this_00->field_0x294,
                             0x45b);
          *(undefined2 *)&this_00->field_0x24f = *(undefined2 *)&this_00->field_0x43;
          *(undefined2 *)&this_00->field_0x24d = *(undefined2 *)&this_00->field_0x41;
          *(undefined2 *)&this_00->field_0x251 = *(undefined2 *)&this_00->field_0x45;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      iVar5 = ReportDebugMessage(s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x2ae,0,0,&DAT_007a4ccc,
                                 s_STMBombC_Bad_init_coordinates_007cb994);
      if (iVar5 == 0) {
        thunk_FUN_005862e0(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (uVar8 != 2) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_48 = *(undefined4 **)(param_1 + 0x14);
    puVar10 = local_48;
    puVar12 = (undefined4 *)&this_00->field_0x27c;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
    local_10 = *(uint *)((int)local_48 + 0x7f);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_10 + 0x87 + (int)local_48));
    puVar10 = local_48;
    *(undefined4 *)&this_00->field_0x231 = *(undefined4 *)((int)local_48 + 0x2a);
    *(undefined4 *)&this_00->field_0x235 = *(undefined4 *)((int)local_48 + 0x2e);
    *(undefined4 *)&this_00->field_0x239 = *(undefined4 *)((int)local_48 + 0x32);
    *(undefined4 *)&this_00->field_0x23d = *(undefined4 *)((int)local_48 + 0x36);
    *(undefined2 *)&this_00->field_0x241 = *(undefined2 *)((int)local_48 + 0x3a);
    *(undefined2 *)&this_00->field_0x243 = *(undefined2 *)(local_48 + 0xf);
    *(undefined2 *)&this_00->field_0x245 = *(undefined2 *)((int)local_48 + 0x3e);
    *(undefined4 *)&this_00->field_0x263 = *(undefined4 *)((int)local_48 + 0x62);
    *(undefined4 *)&this_00->field_0x267 = *(undefined4 *)((int)local_48 + 0x66);
    *(undefined4 *)&this_00->field_0x26b = *(undefined4 *)((int)local_48 + 0x6a);
    *(undefined2 *)&this_00->field_0x247 = *(undefined2 *)(local_48 + 0x10);
    *(undefined2 *)&this_00->field_0x249 = *(undefined2 *)((int)local_48 + 0x42);
    *(undefined2 *)&this_00->field_0x24b = *(undefined2 *)(local_48 + 0x11);
    *(undefined2 *)&this_00->field_0x24d = *(undefined2 *)((int)local_48 + 0x46);
    *(undefined2 *)&this_00->field_0x24f = *(undefined2 *)(local_48 + 0x12);
    *(undefined2 *)&this_00->field_0x251 = *(undefined2 *)((int)local_48 + 0x4a);
    *(undefined4 *)&this_00->field_0x253 = local_48[0x13];
    *(undefined4 *)&this_00->field_0x257 = local_48[0x14];
    *(undefined4 *)((int)&this_00->field_0259 + 2) = local_48[0x15];
    *(undefined4 *)&this_00->field_0x25f = local_48[0x16];
    *(undefined4 *)&this_00->field_0x26f = local_48[0x17];
    *(undefined2 *)&this_00->field_0x273 = *(undefined2 *)(local_48 + 0x18);
    *(undefined2 *)&this_00->field_0x41 = *(undefined2 *)((int)local_48 + 0x6e);
    *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)(local_48 + 0x1c);
    *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)((int)local_48 + 0x72);
    this_00->field_0x275 = *(undefined1 *)(local_48 + 0x1e);
    this_00->field_0x276 = *(undefined1 *)((int)local_48 + 0x79);
    this_00->field_0x277 = *(undefined1 *)((int)local_48 + 0x7a);
    *(undefined4 *)&this_00->field_0x278 = *(undefined4 *)((int)local_48 + 0x7b);
    local_40 = (LPVOID)Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_40 == (LPVOID)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    iVar5 = 0;
    do {
      *(int **)(iVar5 + (int)local_40) = DAT_00806774;
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x44);
    *(undefined4 *)((int)local_40 + 0x24) = DAT_00806764;
    local_3c = 0;
    local_38 = 0;
    local_34 = DAT_008073cc;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    STT3DSprC::RestoreSpr
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_40,
               (undefined4 *)((int)puVar10 + 0x83));
    FUN_006ab060(&local_40);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar8 != 3) {
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  thunk_FUN_004ad310((int)&this_00->field_01D5);
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

