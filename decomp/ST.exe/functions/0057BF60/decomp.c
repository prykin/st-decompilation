
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::GetMessage */

undefined4 __thiscall STFishC::GetMessage(STFishC *this,int param_1)

{
  STT3DSprC *pSVar1;
  code *pcVar2;
  STSprGameObjC *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  short sVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  STSprGameObjC *pSVar9;
  byte *pbVar10;
  void *unaff_EDI;
  byte *pbVar11;
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
  
  if ((*(int *)(this + 0x23b) == 6) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar3 = __setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Igor_To_fish_cpp_007cb044,0x663,0,iVar3,&DAT_007a4ccc,
                               s_STFishC__GetMessage_007cb02c);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Igor_To_fish_cpp_007cb044,0x664);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  STSprGameObjC::GetMessage(local_1c,param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0x110 < uVar6) {
    switch(uVar6) {
    case 0x112:
      thunk_FUN_004ad5e0((int)(this_00 + 0x1d5));
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x113:
      (*(code *)**(undefined4 **)(this_00 + 0x1d5))();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x127:
      goto switchD_0057c669_caseD_127;
    case 0x128:
      if (*(int *)(this_00 + 0x23b) == 3) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      uVar6 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
      FUN_006eab60(*(void **)(this_00 + 0x211),uVar6);
      thunk_FUN_0057bf20(this_00);
      *(undefined4 *)(this_00 + 0x23b) = 3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
  }
  if (uVar6 == 0x110) {
    if (*(int *)(this_00 + 0x23b) == 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
    *(undefined4 *)(this_00 + 0x23b) = 5;
    STT3DSprC::StopShow(pSVar1,0xe);
    thunk_FUN_004ad5e0((int)pSVar1);
    STT3DSprC::LoadSequence(pSVar1,8,DAT_00806774,(byte *)s_explsna_007cb018,0x1d);
    STT3DSprC::StartShow(pSVar1,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (3 < uVar6) {
    if (uVar6 != 0x10f) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(this_00 + 0x1d5),&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = (byte *)FUN_006aac70(local_10 + 0x46 + local_8);
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pSVar9 = this_00 + 0x243;
    pbVar10 = local_c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pSVar9;
      pSVar9 = pSVar9 + 4;
      pbVar10 = pbVar10 + 4;
    }
    local_c[0xc] = 2;
    local_c[0xd] = 0;
    local_c[0xe] = 0;
    local_c[0xf] = 0;
    *(undefined4 *)(local_c + 0x28) = *(undefined4 *)(this_00 + 0x231);
    *(undefined4 *)(local_c + 0x2c) = *(undefined4 *)(this_00 + 0x23b);
    *(undefined4 *)(local_c + 0x36) = *(undefined4 *)(this_00 + 0x23f);
    *(undefined2 *)(local_c + 0x30) = *(undefined2 *)(this_00 + 0x235);
    *(undefined2 *)(local_c + 0x32) = *(undefined2 *)(this_00 + 0x237);
    *(undefined2 *)(local_c + 0x34) = *(undefined2 *)(this_00 + 0x239);
    local_c[0x3a] = 0;
    local_c[0x3b] = 0;
    local_c[0x3c] = 0;
    local_c[0x3d] = 0;
    *(uint *)(local_c + 0x3e) = local_8;
    pbVar10 = local_14;
    pbVar11 = local_c + 0x42;
    for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    *(uint *)(local_c + local_8 + 0x42) = local_10;
    pbVar10 = local_18;
    pbVar11 = local_c + local_8 + 0x46;
    for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    STPlaySystemC::SaveObjData
              (DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_c,local_10 + 0x46 + local_8);
    FUN_006ab060(&local_14);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar6 == 3) {
    thunk_FUN_004167a0((int)this_00);
    thunk_FUN_00495ff0(*(short *)(this_00 + 0x5b),*(short *)(this_00 + 0x5d),
                       *(short *)(this_00 + 0x5f),
                       CONCAT31((int3)((uint)extraout_ECX >> 8),this_00[0x8e]),(int)this_00);
    thunk_FUN_0058d080(*(int *)(this_00 + 0x18));
    thunk_FUN_004ad310((int)(this_00 + 0x1d5));
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar6 == 0) {
    if (*(int *)(this_00 + 0x23b) == 3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_0057cd70((int *)this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar6 != 2) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = *(undefined4 **)(param_1 + 0x14);
  if (1 < (uint)local_20[3]) {
    if (local_20[3] == 2) {
      puVar8 = local_20;
      pSVar9 = this_00 + 0x243;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        pSVar9 = pSVar9 + 4;
      }
      local_8 = *(uint *)((int)local_20 + 0x3e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x46 + (int)local_20));
      puVar8 = local_20;
      *(undefined4 *)(this_00 + 0x23b) = local_20[0xb];
      *(undefined4 *)(this_00 + 0x231) = local_20[10];
      *(undefined4 *)(this_00 + 0x23f) = *(undefined4 *)((int)local_20 + 0x36);
      *(undefined2 *)(this_00 + 0x235) = *(undefined2 *)(local_20 + 0xc);
      *(undefined2 *)(this_00 + 0x237) = *(undefined2 *)((int)local_20 + 0x32);
      *(undefined2 *)(this_00 + 0x239) = *(undefined2 *)(local_20 + 0xd);
      local_3c[0] = FUN_006aac70(0x44);
      if (local_3c[0] != 0) {
        iVar3 = 0;
        do {
          if (iVar3 == 8) {
            *(int **)(local_3c[0] + 0x20) = DAT_00806774;
          }
          else {
            *(int **)(local_3c[0] + iVar3 * 4) = DAT_0080676c;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x11);
        local_3c[1] = 0;
        local_3c[2] = 0;
        local_3c[3] = DAT_008073cc;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)(this_00 + 0x1d5),local_3c,(undefined4 *)((int)puVar8 + 0x42));
        FUN_006ab060(local_3c);
        DumpClassC::WritePtr
                  (*(short *)(this_00 + 0x5b),*(short *)(this_00 + 0x5d),*(short *)(this_00 + 0x5f),
                   1,(int)this_00);
        thunk_FUN_004abe40((STT3DSprC *)(this_00 + 0x1d5),'\x0e',0);
      }
    }
    goto LAB_0057c3e4;
  }
  *(undefined4 *)(this_00 + 0x23b) = 6;
  *(undefined4 *)(this_00 + 0x231) = 0;
  *(undefined4 *)(this_00 + 0x23f) = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x14);
  pSVar9 = this_00 + 0x243;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    pSVar9 = pSVar9 + 4;
  }
  thunk_FUN_0057cb30((int)this_00);
  thunk_FUN_00417a00(this_00,1);
  *(undefined2 *)(this_00 + 0x5f) = 0xffff;
  *(undefined2 *)(this_00 + 0x5d) = 0xffff;
  *(undefined2 *)(this_00 + 0x5b) = 0xffff;
  if ((((((*(int *)(this_00 + 599) < 0) || ((int)DAT_007fb240 <= *(int *)(this_00 + 599))) ||
        (*(int *)(this_00 + 0x25b) < 0)) ||
       (((int)DAT_007fb242 <= *(int *)(this_00 + 0x25b) ||
        (iVar3 = *(int *)(this_00 + 0x25f), iVar3 < 0)))) ||
      ((DAT_007fb244 <= iVar3 ||
       ((iVar3 = thunk_FUN_00417a20(this_00,*(short *)(this_00 + 599),*(short *)(this_00 + 0x25b),
                                    (short)iVar3,1), iVar3 != 0 ||
        (iVar3 = thunk_FUN_00417e70(this_00,8), iVar3 != 0)))))) ||
     (iVar3 = thunk_FUN_00417ee0(this_00,*(short *)(this_00 + 0x263)), iVar3 != 0)) {
    thunk_FUN_0057bf20(this_00);
    *(undefined4 *)(this_00 + 0x23b) = 3;
    goto LAB_0057c3e4;
  }
  switch(*(undefined4 *)(this_00 + 0x267)) {
  case 0xe7:
    pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
    iVar3 = STT3DSprC::LoadSequence(pSVar1,0xe,DAT_0080676c,(byte *)s_fish1_007caff0,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_To_fish_cpp_007cb044,0xf6);
    }
    thunk_FUN_004ac610(pSVar1,'\x0e');
    thunk_FUN_004abe40(pSVar1,'\x0e',0);
    goto switchD_0057c210_default;
  case 0xe8:
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)(this_00 + 0x1d5),0xe,DAT_0080676c,(byte *)s_fish_b_007caff8,
                       0x1d);
    if (iVar3 != 0) {
      iVar3 = 0xea;
LAB_0057c332:
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_To_fish_cpp_007cb044,iVar3);
    }
    break;
  case 0xe9:
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)(this_00 + 0x1d5),0xe,DAT_0080676c,(byte *)s_fish_gr_007cb000,
                       0x1d);
    if (iVar3 != 0) {
      iVar3 = 0xf0;
      goto LAB_0057c332;
    }
    break;
  case 0xea:
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)(this_00 + 0x1d5),0xe,DAT_0080676c,&DAT_007cb008,0x1d);
    if (iVar3 != 0) {
      iVar3 = 0xfd;
      goto LAB_0057c332;
    }
    break;
  case 0xeb:
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)(this_00 + 0x1d5),0xe,DAT_0080676c,&DAT_007cb010,0x1d);
    if (iVar3 != 0) {
      iVar3 = 0x104;
      goto LAB_0057c332;
    }
    break;
  default:
    goto switchD_0057c210_default;
  }
  thunk_FUN_004ac610(this_00 + 0x1d5,'\x0e');
switchD_0057c210_default:
  STT3DSprC::StartShow((STT3DSprC *)(this_00 + 0x1d5),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
  thunk_FUN_004ad3c0((STT3DSprC *)(this_00 + 0x1d5),
                     (float)*(int *)(this_00 + 599) * _DAT_007904f8 + _DAT_007904f4,
                     (float)*(int *)(this_00 + 0x25b) * _DAT_007904f8 + _DAT_007904f4,
                     (float)*(int *)(this_00 + 0x25f) * _DAT_00790504 + _DAT_00790500);
  *(undefined2 *)(this_00 + 0x235) = *(undefined2 *)(this_00 + 0x47);
  *(undefined2 *)(this_00 + 0x237) = *(undefined2 *)(this_00 + 0x49);
  *(undefined2 *)(this_00 + 0x239) = *(undefined2 *)(this_00 + 0x4b);
  *(undefined4 *)(this_00 + 0x23b) = 0;
LAB_0057c3e4:
  if ((*(int *)(this_00 + 0x23b) != 6) && (iVar3 = thunk_FUN_0058cfe0((int)this_00), iVar3 == 0)) {
    thunk_FUN_0057bf20(this_00);
    *(undefined4 *)(this_00 + 0x23b) = 3;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
switchD_0057c669_caseD_127:
  pSVar9 = this_00 + 0x235;
  local_20 = (undefined4 *)(int)(short)((short)*(undefined4 *)(param_1 + 0x18) * 0xc9 + 100);
  iVar3 = thunk_FUN_0058d160(0,0,DAT_007fb240 + -1,DAT_007fb242 + -1,(int)this_00,
                             (int)(short)((short)*(undefined4 *)(param_1 + 0x14) * 0xc9 + 100),
                             (int)local_20,
                             (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10) *
                                          0xc9 + 100),
                             (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10) *
                                          0xc9 + 100),(undefined2 *)pSVar9,(undefined2 *)pSVar9,
                             (short *)(this_00 + 0x239));
  if (iVar3 == 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  sVar7 = *(short *)pSVar9;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  *(short *)pSVar9 = sVar7;
  sVar7 = *(short *)(this_00 + 0x237);
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  *(short *)(this_00 + 0x237) = sVar7;
  sVar7 = *(short *)(this_00 + 0x239);
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f);
  }
  *(short *)(this_00 + 0x239) = sVar7;
  *(undefined4 *)(this_00 + 0x23b) = 4;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

