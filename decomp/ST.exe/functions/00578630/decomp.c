
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::GetMessage */

undefined4 __thiscall STCrabC::GetMessage(STCrabC *this,int param_1)

{
  STT3DSprC *this_00;
  STSprGameObjC *pSVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  STSprGameObjC *pSVar10;
  byte *pbVar11;
  void *unaff_EDI;
  byte *pbVar12;
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
  
  if ((*(int *)(this + 0x239) == 3) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar1 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x1b7,0,iVar5,&DAT_007a4ccc,
                               s_STCrabC__GetMessage_007cad9c);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Igor_to_crab_cpp_007cad4c,0x1b8);
    return 0xffff;
  }
  STSprGameObjC::GetMessage(local_1c,param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar8) {
    if (uVar8 != 0x128) {
      if (uVar8 != 0x440f) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      pSVar1 = pSVar1 + 0x1d5;
      if (DAT_0080732c != 0) {
        thunk_FUN_004ad0e0(pSVar1,0xe);
        thunk_FUN_004ad0e0(pSVar1,0xd);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      thunk_FUN_004ad070(pSVar1,0xe);
      thunk_FUN_004ad070(pSVar1,0xd);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    uVar8 = thunk_FUN_004ad650((int)(pSVar1 + 0x1d5));
    FUN_006eab60(*(void **)(pSVar1 + 0x211),uVar8);
    goto LAB_00578ea2;
  }
  if (uVar8 == 0x10f) {
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(pSVar1 + 0x1d5),&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)pSVar1,(int *)&local_10);
    local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x68 + local_8);
    if (local_14 == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pSVar10 = pSVar1 + 0x259;
    pbVar11 = local_c;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pSVar10;
      pSVar10 = pSVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    local_c[0xc] = 2;
    local_c[0xd] = 0;
    local_c[0xe] = 0;
    local_c[0xf] = 0;
    *(undefined4 *)(local_c + 0x28) = *(undefined4 *)(pSVar1 + 0x235);
    *(undefined4 *)(local_c + 0x2c) = *(undefined4 *)(pSVar1 + 0x239);
    *(undefined2 *)(local_c + 0x50) = *(undefined2 *)(pSVar1 + 0x41);
    *(undefined2 *)(local_c + 0x52) = *(undefined2 *)(pSVar1 + 0x43);
    *(undefined2 *)(local_c + 0x54) = *(undefined2 *)(pSVar1 + 0x45);
    *(undefined4 *)(local_c + 0x34) = *(undefined4 *)(pSVar1 + 0x231);
    *(undefined4 *)(local_c + 0x48) = *(undefined4 *)(pSVar1 + 0x245);
    *(undefined4 *)(local_c + 0x4c) = *(undefined4 *)(pSVar1 + 0x24d);
    *(undefined4 *)(local_c + 0x38) = *(undefined4 *)(pSVar1 + 0x241);
    *(undefined4 *)(local_c + 0x3c) = *(undefined4 *)(pSVar1 + 0x249);
    *(undefined4 *)(local_c + 0x40) = *(undefined4 *)(pSVar1 + 0x251);
    *(undefined4 *)(local_c + 0x44) = *(undefined4 *)(pSVar1 + 0x255);
    *(undefined2 *)(local_c + 0x56) = *(undefined2 *)(pSVar1 + 0x4e);
    *(undefined2 *)(local_c + 0x58) = *(undefined2 *)(pSVar1 + 0x50);
    *(undefined2 *)(local_c + 0x5a) = *(undefined2 *)(pSVar1 + 0x6c);
    *(undefined4 *)(local_c + 0x30) = *(undefined4 *)(pSVar1 + 0x23d);
    local_c[0x5c] = 0;
    local_c[0x5d] = 0;
    local_c[0x5e] = 0;
    local_c[0x5f] = 0;
    *(uint *)(local_c + 0x60) = local_8;
    pbVar11 = local_14;
    pbVar12 = local_c + 100;
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar12 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar12 = pbVar12 + 1;
    }
    *(uint *)(local_c + local_8 + 100) = local_10;
    pbVar11 = local_18;
    pbVar12 = local_c + local_8 + 0x68;
    for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
      pbVar11 = pbVar11 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar12 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar12 = pbVar12 + 1;
    }
    STPlaySystemC::SaveObjData
              (DAT_00802a38,*(undefined4 *)(pSVar1 + 0x18),local_c,local_10 + 0x68 + local_8);
    FUN_006ab060(&local_14);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar8 == 0) {
    if (*(int *)(pSVar1 + 0x239) == 2) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_00579350((int *)pSVar1);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (uVar8 != 2) {
    if (uVar8 != 3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    thunk_FUN_0058d080(*(int *)(pSVar1 + 0x18));
    thunk_FUN_004ad310((int)(pSVar1 + 0x1d5));
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = *(undefined4 **)(param_1 + 0x14);
  if ((uint)local_20[3] < 2) {
    *(undefined4 *)(pSVar1 + 0x239) = 3;
    iVar5 = *(int *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)(pSVar1 + 0x23d) = 0;
    *(undefined4 *)(pSVar1 + 0x231) = 0;
    *(int *)(pSVar1 + 0x235) = iVar5 + -3;
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    pSVar10 = pSVar1 + 0x259;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pSVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      pSVar10 = pSVar10 + 4;
    }
    Bad((STCrabC *)pSVar1,(int)unaff_EDI);
    if (((((*(int *)(pSVar1 + 0x26d) < 0) || ((int)DAT_007fb240 <= *(int *)(pSVar1 + 0x26d))) ||
         (*(int *)(pSVar1 + 0x271) < 0)) ||
        (((int)DAT_007fb242 <= *(int *)(pSVar1 + 0x271) ||
         (iVar5 = *(int *)(pSVar1 + 0x275), iVar5 < 0)))) ||
       ((DAT_007fb244 <= iVar5 ||
        (bVar3 = thunk_FUN_004961b0(*(short *)(pSVar1 + 0x26d),*(short *)(pSVar1 + 0x271),
                                    (short)iVar5), CONCAT31(extraout_var,bVar3) == 0)))) {
      thunk_FUN_005783f0(pSVar1);
      *(undefined4 *)(pSVar1 + 0x239) = 2;
    }
    else {
      switch(*(undefined4 *)(pSVar1 + 0x279)) {
      case 0xf2:
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_crab1l_007cacb0,
                           0x1d);
        if (iVar5 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xd2);
        }
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xd,DAT_0080676c,
                           (byte *)s_crab1l_m_007cacb8,0x1d);
        if (iVar5 != 0) {
          iVar5 = 0xd5;
LAB_00578b5d:
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,iVar5);
        }
        break;
      case 0xf3:
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_crab2l_007cacc4,
                           0x1d);
        if (iVar5 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xda);
        }
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xd,DAT_0080676c,
                           (byte *)s_crab2l_m_007caccc,0x1d);
        if (iVar5 != 0) {
          iVar5 = 0xdd;
          goto LAB_00578b5d;
        }
        break;
      case 0xf4:
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_crab1b_007cacd8,
                           0x1d);
        if (iVar5 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xe2);
        }
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xd,DAT_0080676c,
                           (byte *)s_crab1b_m_007cace0,0x1d);
        if (iVar5 != 0) {
          iVar5 = 0xe5;
          goto LAB_00578b5d;
        }
        break;
      case 0xf5:
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_crab2b_007cacec,
                           0x1d);
        if (iVar5 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xea);
        }
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xd,DAT_0080676c,
                           (byte *)s_crab2b_m_007cacf4,0x1d);
        if (iVar5 != 0) {
          iVar5 = 0xed;
          goto LAB_00578b5d;
        }
        break;
      case 0xf6:
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_langus2_007cad14
                           ,0x1d);
        if (iVar5 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xfa);
        }
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xd,DAT_0080676c,
                           (byte *)s_langus2m_007cad1c,0x1d);
        if (iVar5 != 0) {
          iVar5 = 0xfd;
          goto LAB_00578b5d;
        }
        break;
      case 0xf7:
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_langus1_007cad00
                           ,0x1d);
        if (iVar5 != 0) {
          RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_crab_cpp_007cad4c,0xf2);
        }
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)(pSVar1 + 0x1d5),0xd,DAT_0080676c,
                           (byte *)s_langus1m_007cad08,0x1d);
        if (iVar5 != 0) {
          iVar5 = 0xf5;
          goto LAB_00578b5d;
        }
      }
      this_00 = (STT3DSprC *)(pSVar1 + 0x1d5);
      thunk_FUN_004acf50(this_00,'\r');
      thunk_FUN_004ac610(this_00,'\x0e');
      thunk_FUN_004ac610(this_00,'\r');
      STT3DSprC::StartShow(this_00,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      STT3DSprC::StartShow(this_00,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
      sVar4 = *(short *)(pSVar1 + 0x275) * 200;
      *(short *)(pSVar1 + 0x41) = *(short *)(pSVar1 + 0x26d) * 0xc9 + 100;
      *(short *)(pSVar1 + 0x43) = *(short *)(pSVar1 + 0x271) * 0xc9 + 100;
      *(short *)(pSVar1 + 0x45) = sVar4 + 100;
      if ((*(int *)(pSVar1 + 0x279) < 0xf6) || (0xf7 < *(int *)(pSVar1 + 0x279))) {
        sVar4 = sVar4 + 0x28;
      }
      else {
        sVar4 = sVar4 + 0x82;
      }
      *(short *)(pSVar1 + 0x45) = sVar4;
      *(short *)(pSVar1 + 0x6c) =
           (short)(*(int *)(pSVar1 + 0x27d) / 0x2d) -
           (short)(*(int *)(pSVar1 + 0x27d) / -0x4c000000);
      uVar6 = thunk_FUN_005797b0(pSVar1,(undefined2 *)(pSVar1 + 0x4e),(undefined2 *)(pSVar1 + 0x50),
                                 (undefined2 *)(pSVar1 + 0x6c));
      *(undefined4 *)(pSVar1 + 0x239) = uVar6;
    }
  }
  else if (local_20[3] == 2) {
    puVar9 = local_20;
    pSVar10 = pSVar1 + 0x259;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pSVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      pSVar10 = pSVar10 + 4;
    }
    local_8 = local_20[0x18];
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)pSVar1,(undefined4 *)(local_8 + 0x68 + (int)local_20));
    puVar9 = local_20;
    *(undefined4 *)(pSVar1 + 0x239) = local_20[0xb];
    *(undefined4 *)(pSVar1 + 0x235) = local_20[10];
    *(undefined2 *)(pSVar1 + 0x41) = *(undefined2 *)(local_20 + 0x14);
    *(undefined2 *)(pSVar1 + 0x43) = *(undefined2 *)((int)local_20 + 0x52);
    *(undefined2 *)(pSVar1 + 0x45) = *(undefined2 *)(local_20 + 0x15);
    *(undefined4 *)(pSVar1 + 0x231) = local_20[0xd];
    *(undefined4 *)(pSVar1 + 0x245) = local_20[0x12];
    *(undefined4 *)(pSVar1 + 0x24d) = local_20[0x13];
    *(undefined4 *)(pSVar1 + 0x241) = local_20[0xe];
    *(undefined4 *)(pSVar1 + 0x249) = local_20[0xf];
    *(undefined4 *)(pSVar1 + 0x251) = local_20[0x10];
    *(undefined4 *)(pSVar1 + 0x255) = local_20[0x11];
    *(undefined2 *)(pSVar1 + 0x4e) = *(undefined2 *)((int)local_20 + 0x56);
    *(undefined2 *)(pSVar1 + 0x50) = *(undefined2 *)(local_20 + 0x16);
    *(undefined2 *)(pSVar1 + 0x6c) = *(undefined2 *)((int)local_20 + 0x5a);
    *(undefined4 *)(pSVar1 + 0x23d) = local_20[0xc];
    local_3c[0] = Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_3c[0] != 0) {
      iVar5 = 0;
      do {
        *(int **)(iVar5 + local_3c[0]) = DAT_0080676c;
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x44);
      local_3c[1] = 0;
      local_3c[2] = 0;
      local_3c[3] = DAT_008073cc;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      STT3DSprC::RestoreSpr((STT3DSprC *)(pSVar1 + 0x1d5),local_3c,puVar9 + 0x19);
      FUN_006ab060(local_3c);
    }
  }
  if (*(int *)(pSVar1 + 0x239) == 3) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  iVar5 = thunk_FUN_0058cfe0((int)pSVar1);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
LAB_00578ea2:
  thunk_FUN_005783f0(pSVar1);
  *(undefined4 *)(pSVar1 + 0x239) = 2;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

