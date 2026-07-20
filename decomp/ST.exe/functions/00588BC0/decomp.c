
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_mbomb.cpp
   STMBombC::GetMessage */

undefined4 __thiscall STMBombC::GetMessage(STMBombC *this,AnonShape_00588BC0_F7B2CBED *param_1)

{
  code *pcVar1;
  STSprGameObjC *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  byte *pbVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  AnonShape_00588BC0_84BDD66C *pAVar10;
  byte *pbVar11;
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
  AnonShape_00588BC0_84BDD66C *local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_24 = (void *)0x0;
  if ((this->field_0231 == 3) && (param_1->field_0010 != 3)) {
    return 0;
  }
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_44 = (STSprGameObjC *)this;
  iVar2 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x389,0,iVar2,&DAT_007a4ccc,
                               s_STMBombC__GetMessage_007cb978);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x38a);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  STSprGameObjC::GetMessage(local_44,(AnonShape_0041AF40_F59F8577 *)param_1);
  uVar5 = param_1->field_0010;
  if (0x10f < uVar5) {
    if (uVar5 == 0x112) {
      thunk_FUN_004ad5e0((int)&this_00->field_01D5);
    }
    else if (uVar5 == 0x113) {
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar5 == 0x10f) {
    local_20 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_10);
    local_1c = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_18);
    local_14 = (AnonShape_00588BC0_84BDD66C *)
               Library::DKW::LIB::FUN_006aac70(local_18 + 0x87 + local_10);
    if (local_20 == (byte *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_1c == (byte *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_14 == (AnonShape_00588BC0_84BDD66C *)0x0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    puVar7 = (undefined4 *)&this_00->field_0x27c;
    pAVar10 = local_14;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      pAVar10 = (AnonShape_00588BC0_84BDD66C *)&pAVar10->field_0x4;
    }
    *(undefined2 *)pAVar10 = *(undefined2 *)puVar7;
    *(undefined4 *)&local_14->field_0xc = 2;
    *(undefined4 *)&local_14->field_0x2a = *(undefined4 *)&this_00->field_0x231;
    *(undefined4 *)&local_14->field_0x2e = *(undefined4 *)&this_00->field_0x235;
    *(undefined4 *)&local_14->field_0x32 = *(undefined4 *)&this_00->field_0x239;
    *(undefined4 *)&local_14->field_0x36 = *(undefined4 *)&this_00->field_0x23d;
    *(undefined2 *)&local_14->field_0x3a = *(undefined2 *)&this_00->field_0x241;
    *(undefined2 *)&local_14->field_0x3c = *(undefined2 *)&this_00->field_0x243;
    *(undefined2 *)&local_14->field_0x3e = *(undefined2 *)&this_00->field_0x245;
    *(undefined4 *)&local_14->field_0x62 = *(undefined4 *)&this_00->field_0x263;
    *(undefined4 *)&local_14->field_0x66 = *(undefined4 *)&this_00->field_0x267;
    *(undefined4 *)&local_14->field_0x6a = *(undefined4 *)&this_00->field_0x26b;
    *(undefined2 *)&local_14->field_0x40 = *(undefined2 *)&this_00->field_0x247;
    *(undefined2 *)&local_14->field_0x42 = *(undefined2 *)&this_00->field_0x249;
    *(undefined2 *)&local_14->field_0x44 = *(undefined2 *)&this_00->field_0x24b;
    *(undefined2 *)&local_14->field_0x46 = *(undefined2 *)&this_00->field_0x24d;
    *(undefined2 *)&local_14->field_0x48 = *(undefined2 *)&this_00->field_0x24f;
    *(undefined2 *)&local_14->field_0x4a = *(undefined2 *)&this_00->field_0x251;
    *(undefined4 *)&local_14->field_0x4c = *(undefined4 *)&this_00->field_0x253;
    local_14->field_0050 = *(undefined4 *)&this_00->field_0x257;
    local_14->field_0054 = *(undefined4 *)((int)&this_00->field_0259 + 2);
    *(undefined4 *)&local_14->field_0x58 = *(undefined4 *)&this_00->field_0x25f;
    *(undefined4 *)&local_14->field_0x5c = *(undefined4 *)&this_00->field_0x26f;
    *(undefined2 *)&local_14->field_0x60 = *(undefined2 *)&this_00->field_0x273;
    *(undefined4 *)&local_14->field_0x74 = 0;
    *(undefined2 *)&local_14->field_0x6e = *(undefined2 *)&this_00->field_0x41;
    *(undefined2 *)&local_14->field_0x70 = *(undefined2 *)&this_00->field_0x43;
    *(undefined2 *)&local_14->field_0x72 = *(undefined2 *)&this_00->field_0x45;
    local_14->field_0x78 = this_00->field_0x275;
    local_14->field_0x79 = this_00->field_0x276;
    local_14->field_0x7a = this_00->field_0x277;
    *(undefined4 *)&local_14->field_0x7b = *(undefined4 *)&this_00->field_0x278;
    local_14->field_007F = local_10;
    pbVar8 = local_20;
    pbVar11 = &local_14->field_0x83;
    for (uVar5 = local_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = local_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    *(uint *)(&local_14->field_0x83 + local_10) = local_18;
    pbVar8 = local_1c;
    pbVar11 = &local_14[1].field_0x3 + local_10;
    for (uVar5 = local_18 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar5 = local_18 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    STPlaySystemC::SaveObjData
              (PTR_00802a38,this_00->field_0018,(byte *)local_14,local_18 + 0x87 + local_10);
    FUN_006ab060(&local_20);
    FUN_006ab060(&local_1c);
    FUN_006ab060(&local_14);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar5 == 0) {
    thunk_FUN_00586af0((int *)this_00);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar5 == 2) {
    DAT_0081170c = FUN_006acf0d(0,0,0,0x3ed,0x3ed,1000);
    iVar2 = param_1->field_0014;
    *(undefined4 *)&this_00->field_0x231 = 3;
    uVar5 = *(uint *)(iVar2 + 0xc);
    if (uVar5 < 2) {
      *(undefined4 *)&this_00->field_0x257 = 0;
      *(undefined4 *)&this_00->field_0x253 = PTR_00802a38->field_00E4;
      *(undefined4 *)&this_00->field_0x26f = 0xff;
      puVar7 = (undefined4 *)param_1->field_0014;
      puVar9 = (undefined4 *)&this_00->field_0x27c;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
      uVar5 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar5;
      *(uint *)((int)&this_00->field_0259 + 2) = (uVar5 >> 0x10) % 0x19 - 0xc;
      *(undefined4 *)&this_00->field_0x25f = 2;
      *(undefined4 *)&this_00->field_0x26b = 0;
      *(undefined4 *)&this_00->field_0x267 = 0;
      *(undefined4 *)&this_00->field_0x263 = 0;
      if ((*(int *)&this_00->field_0x290 < (int)(short)((short)_SHORT_007fb240 * 0xc9 + 100)) &&
         (-1 < *(int *)&this_00->field_0x290)) {
        if ((*(int *)&this_00->field_0x294 < (int)(short)(SHORT_007fb242 * 0xc9 + 100)) &&
           (((-1 < *(int *)&this_00->field_0x294 &&
             (iVar2 = *(int *)&this_00->field_0x298, iVar2 < (short)(_SHORT_007fb244 * 200 + 100)))
            && (-1 < iVar2)))) {
          thunk_FUN_00416240(this_00,*(undefined2 *)&this_00->field_0x290,
                             *(undefined2 *)&this_00->field_0x294,(short)iVar2);
          iVar2 = *(int *)&this_00->field_0x290;
          sVar6 = (short)(iVar2 >> 0x1f);
          if (iVar2 < 0) {
            sVar6 = (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar6 = ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
          }
          iVar2 = *(int *)&this_00->field_0x294;
          *(short *)&this_00->field_0x47 = sVar6;
          sVar6 = (short)(iVar2 >> 0x1f);
          if (iVar2 < 0) {
            sVar6 = (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar6 = ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
          }
          iVar2 = *(int *)&this_00->field_0x298;
          *(short *)&this_00->field_0x49 = sVar6;
          sVar6 = (short)(iVar2 >> 0x1f);
          if (iVar2 < 0) {
            sVar6 = (((short)(iVar2 / 200) + sVar6) - (short)((longlong)iVar2 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar6 = ((short)(iVar2 / 200) + sVar6) - (short)((longlong)iVar2 * 0x51eb851f >> 0x3f);
          }
          *(short *)&this_00->field_0x4b = sVar6;
          iVar2 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00806774,s_mmine_007cb934,
                             0x1d);
          if (iVar2 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x2c3
                      );
          }
          STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,PTR_00802a38->field_00E4);
          if ((*(int *)&this_00->field_0x29c == 0) ||
             (iVar2 = FUN_006e62d0(PTR_00802a38,*(int *)&this_00->field_0x29c,(int *)&local_24),
             iVar2 != 0)) {
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
            iVar2 = FUN_006acf0d(0,0,0,(int)local_6,(int)local_8,(int)local_a);
            *(undefined4 *)&this_00->field_0x235 = 0;
            *(undefined4 *)&this_00->field_0x239 = 0;
            *(undefined4 *)&this_00->field_0x23d = 0;
            if (0 < iVar2) {
              *(int *)&this_00->field_0x235 = (local_6 * 0xc0000) / iVar2;
              *(int *)&this_00->field_0x239 = (local_8 * 0xc0000) / iVar2;
              *(int *)&this_00->field_0x23d = (local_a * 0xc0000) / iVar2;
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
      iVar2 = ReportDebugMessage(s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x2ae,0,0,&DAT_007a4ccc,
                                 s_STMBombC_Bad_init_coordinates_007cb994);
      if (iVar2 == 0) {
        thunk_FUN_005862e0((STJellyGunC *)this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (uVar5 != 2) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_48 = (undefined4 *)param_1->field_0014;
    puVar7 = local_48;
    puVar9 = (undefined4 *)&this_00->field_0x27c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
    local_10 = *(uint *)((int)local_48 + 0x7f);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)this_00,(undefined4 *)(local_10 + 0x87 + (int)local_48));
    puVar7 = local_48;
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
    iVar2 = 0;
    do {
      *(int **)(iVar2 + (int)local_40) = DAT_00806774;
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x44);
    *(undefined4 *)((int)local_40 + 0x24) = DAT_00806764;
    local_3c = 0;
    local_38 = 0;
    local_34 = DAT_008073cc;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    STT3DSprC::RestoreSpr
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_40,
               (AnonShape_004ADBA0_E7CEFF88 *)((int)puVar7 + 0x83));
    FUN_006ab060(&local_40);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (uVar5 != 3) {
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

