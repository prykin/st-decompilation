
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::GetMessage */

undefined4 __thiscall STFishC::GetMessage(STFishC *this,AnonShape_004B9FA0_DF027633 *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  STSprGameObjC *this_00;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  uint uVar9;
  short sVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  byte *pbVar12;
  int *unaff_EDI;
  undefined4 *puVar13;
  byte *pbVar14;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
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
  
  if ((this->field_023B == 6) && (param_1->field_0010 != 3)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Igor_To_fish_cpp_007cb044,0x663,0,iVar6,&DAT_007a4ccc,
                               s_STFishC__GetMessage_007cb02c);
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Igor_To_fish_cpp_007cb044,0x664);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return uVar8;
  }
  STSprGameObjC::GetMessage(local_1c,(AnonShape_0041AF40_F59F8577 *)param_1);
  uVar9 = param_1->field_0010;
  if (0x110 < uVar9) {
    switch(uVar9) {
    case 0x112:
      thunk_FUN_004ad5e0((int)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x113:
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x127:
      goto switchD_0057c669_caseD_127;
    case 0x128:
      if (*(int *)&this_00->field_0x23b == 3) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      uVar9 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eab60((void *)this_00->field_0211,uVar9);
      thunk_FUN_0057bf20((STJellyGunC *)this_00);
      *(undefined4 *)&this_00->field_0x23b = 3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
  }
  if (uVar9 == 0x110) {
    if (*(int *)&this_00->field_0x23b == 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar11 = &this_00->field_01D5;
    *(undefined4 *)&this_00->field_0x23b = 5;
    STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
    thunk_FUN_004ad5e0((int)puVar11);
    STT3DSprC::LoadSequence((STT3DSprC *)puVar11,8,DAT_00806774,s_explsna_007cb018,0x1d);
    STT3DSprC::StartShow((STT3DSprC *)puVar11,8,PTR_00802a38->field_00E4);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (3 < uVar9) {
    if (uVar9 != 0x10f) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x46 + local_8);
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar11 = (undefined4 *)&this_00->field_0x243;
    pbVar12 = local_c;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pbVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      pbVar12 = pbVar12 + 4;
    }
    local_c[0xc] = 2;
    local_c[0xd] = 0;
    local_c[0xe] = 0;
    local_c[0xf] = 0;
    uVar3 = this_00->field_0x232;
    uVar4 = this_00->field_0x233;
    uVar5 = this_00->field_0x234;
    local_c[0x28] = this_00->field_0x231;
    local_c[0x29] = uVar3;
    local_c[0x2a] = uVar4;
    local_c[0x2b] = uVar5;
    uVar3 = this_00->field_0x23c;
    uVar4 = this_00->field_0x23d;
    uVar5 = this_00->field_0x23e;
    local_c[0x2c] = this_00->field_0x23b;
    local_c[0x2d] = uVar3;
    local_c[0x2e] = uVar4;
    local_c[0x2f] = uVar5;
    uVar3 = this_00->field_0x240;
    uVar4 = this_00->field_0x241;
    uVar5 = this_00->field_0x242;
    local_c[0x36] = this_00->field_0x23f;
    local_c[0x37] = uVar3;
    local_c[0x38] = uVar4;
    local_c[0x39] = uVar5;
    uVar3 = this_00->field_0x236;
    local_c[0x30] = this_00->field_0x235;
    local_c[0x31] = uVar3;
    uVar3 = this_00->field_0x238;
    local_c[0x32] = this_00->field_0x237;
    local_c[0x33] = uVar3;
    uVar3 = this_00->field_0x23a;
    local_c[0x34] = this_00->field_0x239;
    local_c[0x35] = uVar3;
    local_c[0x3a] = 0;
    local_c[0x3b] = 0;
    local_c[0x3c] = 0;
    local_c[0x3d] = 0;
    *(uint *)(local_c + 0x3e) = local_8;
    pbVar12 = local_14;
    pbVar14 = local_c + 0x42;
    for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar14 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pbVar14 = pbVar14 + 1;
    }
    *(uint *)(local_c + local_8 + 0x42) = local_10;
    pbVar12 = local_18;
    pbVar14 = local_c + local_8 + 0x46;
    for (uVar9 = local_10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar9 = local_10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar14 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pbVar14 = pbVar14 + 1;
    }
    STPlaySystemC::SaveObjData
              (PTR_00802a38,this_00->field_0018,local_c,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x46 + local_8));
    FreeAndNull(&local_14);
    FreeAndNull(&local_18);
    FreeAndNull(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar9 == 3) {
    thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)this_00);
    thunk_FUN_00495ff0(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                       *(short *)&this_00->field_0x5f,
                       CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0x8e),
                       (AnonShape_00495FF0_59081BDD *)this_00);
    thunk_FUN_0058d080(this_00->field_0018);
    thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar9 == 0) {
    if (*(int *)&this_00->field_0x23b == 3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    LifeFish((STFishC *)this_00,unaff_EDI);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar9 != 2) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = (undefined4 *)param_1->field_0014;
  if (1 < (uint)local_20[3]) {
    if (local_20[3] == 2) {
      puVar11 = local_20;
      puVar13 = (undefined4 *)&this_00->field_0x243;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      local_8 = *(uint *)((int)local_20 + 0x3e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x46 + (int)local_20));
      puVar11 = local_20;
      *(undefined4 *)&this_00->field_0x23b = local_20[0xb];
      *(undefined4 *)&this_00->field_0x231 = local_20[10];
      *(undefined4 *)&this_00->field_0x23f = *(undefined4 *)((int)local_20 + 0x36);
      *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)(local_20 + 0xc);
      *(undefined2 *)&this_00->field_0x237 = *(undefined2 *)((int)local_20 + 0x32);
      *(undefined2 *)&this_00->field_0x239 = *(undefined2 *)(local_20 + 0xd);
      local_3c = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
      if (local_3c != (void *)0x0) {
        iVar6 = 0;
        do {
          if (iVar6 == 8) {
            *(int **)((int)local_3c + 0x20) = DAT_00806774;
          }
          else {
            *(int **)((int)local_3c + iVar6 * 4) = DAT_0080676c;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x11);
        local_38 = 0;
        local_34 = 0;
        local_30 = DAT_008073cc;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar11 + 0x42));
        FreeAndNull(&local_3c);
        DumpClassC::WritePtr
                  (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                   *(short *)&this_00->field_0x5f,1,(AnonShape_00495EC0_95A268C6 *)this_00);
        STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\x0e',0);
      }
    }
    goto cf_common_exit_0057C3E4;
  }
  *(undefined4 *)&this_00->field_0x23b = 6;
  *(undefined4 *)&this_00->field_0x231 = 0;
  *(undefined4 *)&this_00->field_0x23f = 0;
  puVar11 = (undefined4 *)param_1->field_0014;
  puVar13 = (undefined4 *)&this_00->field_0x243;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  thunk_FUN_0057cb30((int)this_00);
  thunk_FUN_00417a00(this_00,1);
  *(undefined2 *)&this_00->field_0x5f = 0xffff;
  *(undefined2 *)&this_00->field_0x5d = 0xffff;
  *(undefined2 *)&this_00->field_0x5b = 0xffff;
  if ((((((*(int *)&this_00->field_0x257 < 0) ||
         ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x257)) ||
        (iVar6 = *(int *)((int)&this_00->field_0259 + 2), iVar6 < 0)) ||
       ((g_worldGrid.sizeY <= iVar6 || (iVar6 = *(int *)&this_00->field_0x25f, iVar6 < 0)))) ||
      ((g_worldGrid.sizeZ <= iVar6 ||
       ((iVar6 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x257,
                                    *(undefined2 *)((int)&this_00->field_0259 + 2),(short)iVar6,1),
        iVar6 != 0 || (iVar6 = thunk_FUN_00417e70(this_00,8), iVar6 != 0)))))) ||
     (iVar6 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x263), iVar6 != 0)) {
    thunk_FUN_0057bf20((STJellyGunC *)this_00);
    *(undefined4 *)&this_00->field_0x23b = 3;
    goto cf_common_exit_0057C3E4;
  }
  switch(*(undefined4 *)&this_00->field_0x267) {
  case 0xe7:
    puVar11 = &this_00->field_01D5;
    iVar6 = STT3DSprC::LoadSequence((STT3DSprC *)puVar11,0xe,DAT_0080676c,s_fish1_007caff0,0x1d);
    if (iVar6 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_To_fish_cpp_007cb044,0xf6);
    }
    thunk_FUN_004ac610(puVar11,'\x0e');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar11,'\x0e',0);
    goto switchD_0057c210_default;
  case 0xe8:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,s_fish_b_007caff8,0x1d);
    if (iVar6 != 0) {
      iVar6 = 0xea;
cf_error_exit_0057C332:
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_To_fish_cpp_007cb044,iVar6);
    }
    break;
  case 0xe9:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,s_fish_gr_007cb000,0x1d);
    if (iVar6 != 0) {
      iVar6 = 0xf0;
      goto cf_error_exit_0057C332;
    }
    break;
  case 0xea:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,&DAT_007cb008,0x1d);
    if (iVar6 != 0) {
      iVar6 = 0xfd;
      goto cf_error_exit_0057C332;
    }
    break;
  case 0xeb:
    iVar6 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_0080676c,&DAT_007cb010,0x1d);
    if (iVar6 != 0) {
      iVar6 = 0x104;
      goto cf_error_exit_0057C332;
    }
    break;
  default:
    goto switchD_0057c210_default;
  }
  thunk_FUN_004ac610(&this_00->field_01D5,'\x0e');
switchD_0057c210_default:
  STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,PTR_00802a38->field_00E4);
  thunk_FUN_004ad3c0(&this_00->field_01D5,
                     (float)*(int *)&this_00->field_0x257 * _DAT_007904f8 + _DAT_007904f4,
                     (float)*(int *)((int)&this_00->field_0259 + 2) * _DAT_007904f8 + _DAT_007904f4,
                     (float)*(int *)&this_00->field_0x25f * _DAT_00790504 + _DAT_00790500);
  *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)&this_00->field_0x47;
  *(undefined2 *)&this_00->field_0x237 = *(undefined2 *)&this_00->field_0x49;
  *(undefined2 *)&this_00->field_0x239 = *(undefined2 *)&this_00->field_0x4b;
  *(undefined4 *)&this_00->field_0x23b = 0;
cf_common_exit_0057C3E4:
  if ((*(int *)&this_00->field_0x23b != 6) && (iVar6 = thunk_FUN_0058cfe0((int)this_00), iVar6 == 0)
     ) {
    thunk_FUN_0057bf20((STJellyGunC *)this_00);
    *(undefined4 *)&this_00->field_0x23b = 3;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
switchD_0057c669_caseD_127:
  puVar1 = &this_00->field_0x235;
  local_20 = (undefined4 *)(int)(short)((short)param_1->field_0018 * 0xc9 + 100);
  iVar6 = thunk_FUN_0058d160(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,(int)this_00,
                             (int)(short)((short)param_1->field_0014 * 0xc9 + 100),(int)local_20,
                             (int)(short)((short)((uint)param_1->field_0014 >> 0x10) * 0xc9 + 100),
                             (int)(short)((short)((uint)param_1->field_0018 >> 0x10) * 0xc9 + 100),
                             (undefined2 *)puVar1,(undefined2 *)puVar1,
                             (short *)&this_00->field_0x239);
  if (iVar6 == 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  sVar10 = *(short *)puVar1;
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
  }
  *(short *)puVar1 = sVar10;
  sVar10 = *(short *)&this_00->field_0x237;
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
  }
  *(short *)&this_00->field_0x237 = sVar10;
  sVar10 = *(short *)&this_00->field_0x239;
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 200 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 200 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f);
  }
  *(short *)&this_00->field_0x239 = sVar10;
  *(undefined4 *)&this_00->field_0x23b = 4;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

