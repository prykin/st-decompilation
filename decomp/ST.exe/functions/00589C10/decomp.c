
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::GetMessage */

undefined4 __thiscall STOctopusC::GetMessage(STOctopusC *this,int param_1)

{
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
  iVar5 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar1 = local_28;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Igor_to_oct_cpp_007cba18,0x1cf,0,iVar5,&DAT_007a4ccc,
                               s_STOctopusC__GetMessage_007cba6c);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Igor_to_oct_cpp_007cba18,0x1d0);
    return 0xffff;
  }
  STSprGameObjC::GetMessage(local_28,param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (0x112 < uVar8) {
    if (0x128 < uVar8) {
      if (uVar8 != 0x440f) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      pSVar1 = pSVar1 + 0x1d5;
      if (DAT_0080732c == 0) {
        thunk_FUN_004ad070(pSVar1,0xe);
        thunk_FUN_004ad070(pSVar1,8);
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      thunk_FUN_004ad0e0(pSVar1,0xe);
      thunk_FUN_004ad0e0(pSVar1,8);
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (uVar8 == 0x128) {
      if (*(int *)(pSVar1 + 0x249) == 2) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      uVar8 = thunk_FUN_004ad650((int)(pSVar1 + 0x1d5));
      FUN_006eab60(*(void **)(pSVar1 + 0x211),uVar8);
      thunk_FUN_005899e0(pSVar1);
      *(undefined4 *)(pSVar1 + 0x249) = 2;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (uVar8 != 0x113) {
      if (uVar8 != 0x127) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      iVar5 = thunk_FUN_0058d160(0,0,DAT_007fb240 + -1,DAT_007fb242 + -1,(int)pSVar1,
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x14) * 0xc9 + 100),
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x18) * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10)
                                              * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10)
                                              * 0xc9 + 100),(undefined2 *)&local_1c,
                                 (undefined2 *)&local_24,(short *)&local_20);
      if (iVar5 == 0) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      thunk_FUN_0058af70(pSVar1,(short)local_1c,(short)local_24,(short)local_20);
      sVar4 = (**(code **)(*(int *)pSVar1 + 0x10))
                        (*(undefined2 *)(pSVar1 + 0x41),*(undefined2 *)(pSVar1 + 0x43),
                         *(undefined2 *)(pSVar1 + 0x45),local_1c,local_24,local_20);
      *(short *)(pSVar1 + 0x6c) = sVar4 / 0x2d - (short)((int)sVar4 / -0x4c000000);
      *(int *)(pSVar1 + 0x251) =
           (int)(*(int *)(pSVar1 + 0x251) * 0x1850 +
                (*(int *)(pSVar1 + 0x251) * 0x1850 >> 0x1f & 0xfffU)) >> 0xc;
      *(int *)(pSVar1 + 0x255) =
           (int)(*(int *)(pSVar1 + 0x255) * 0x1850 +
                (*(int *)(pSVar1 + 0x255) * 0x1850 >> 0x1f & 0xfffU)) >> 0xc;
      *(int *)(pSVar1 + 0x259) =
           (int)(*(int *)(pSVar1 + 0x259) * 0x1850 +
                (*(int *)(pSVar1 + 0x259) * 0x1850 >> 0x1f & 0xfffU)) >> 0xc;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    (*(code *)**(undefined4 **)(pSVar1 + 0x1d5))();
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar8 == 0x112) {
    thunk_FUN_004ad5e0((int)(pSVar1 + 0x1d5));
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (3 < uVar8) {
    if (uVar8 != 0x10f) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(pSVar1 + 0x1d5),&local_8);
    local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)pSVar1,(int *)&local_10);
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
    pSVar10 = pSVar1 + 0x285;
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
    *(undefined4 *)(local_c + 0x28) = *(undefined4 *)(pSVar1 + 0x245);
    *(undefined4 *)(local_c + 0x2c) = *(undefined4 *)(pSVar1 + 0x249);
    *(undefined2 *)(local_c + 0x78) = *(undefined2 *)(pSVar1 + 0x41);
    *(undefined2 *)(local_c + 0x7a) = *(undefined2 *)(pSVar1 + 0x43);
    *(undefined2 *)(local_c + 0x7c) = *(undefined2 *)(pSVar1 + 0x45);
    *(undefined4 *)(local_c + 0x40) = *(undefined4 *)(pSVar1 + 0x231);
    *(undefined4 *)(local_c + 0x44) = *(undefined4 *)(pSVar1 + 0x241);
    *(undefined4 *)(local_c + 0x48) = *(undefined4 *)(pSVar1 + 0x251);
    *(undefined4 *)(local_c + 0x4c) = *(undefined4 *)(pSVar1 + 0x255);
    *(undefined4 *)(local_c + 0x50) = *(undefined4 *)(pSVar1 + 0x259);
    *(undefined4 *)(local_c + 0x54) = *(undefined4 *)(pSVar1 + 0x25d);
    *(undefined4 *)(local_c + 0x58) = *(undefined4 *)(pSVar1 + 0x261);
    *(undefined4 *)(local_c + 0x5c) = *(undefined4 *)(pSVar1 + 0x265);
    *(undefined4 *)(local_c + 0x60) = *(undefined4 *)(pSVar1 + 0x269);
    *(undefined4 *)(local_c + 100) = *(undefined4 *)(pSVar1 + 0x26d);
    *(undefined4 *)(local_c + 0x68) = *(undefined4 *)(pSVar1 + 0x271);
    *(undefined4 *)(local_c + 0x6c) = *(undefined4 *)(pSVar1 + 0x275);
    *(undefined4 *)(local_c + 0x70) = *(undefined4 *)(pSVar1 + 0x279);
    *(undefined4 *)(local_c + 0x74) = *(undefined4 *)(pSVar1 + 0x27d);
    *(undefined4 *)(local_c + 0x38) = *(undefined4 *)(pSVar1 + 0x239);
    *(undefined4 *)(local_c + 0x3c) = *(undefined4 *)(pSVar1 + 0x23d);
    *(undefined4 *)(local_c + 0x34) = *(undefined4 *)(pSVar1 + 0x235);
    *(undefined4 *)(local_c + 0x86) = *(undefined4 *)(pSVar1 + 0x281);
    *(undefined2 *)(local_c + 0x7e) = *(undefined2 *)(pSVar1 + 0x4e);
    *(undefined2 *)(local_c + 0x80) = *(undefined2 *)(pSVar1 + 0x50);
    *(undefined2 *)(local_c + 0x82) = *(undefined2 *)(pSVar1 + 0x52);
    *(undefined2 *)(local_c + 0x84) = *(undefined2 *)(pSVar1 + 0x6c);
    *(undefined4 *)(local_c + 0x30) = *(undefined4 *)(pSVar1 + 0x24d);
    local_c[0x8a] = 0;
    local_c[0x8b] = 0;
    local_c[0x8c] = 0;
    local_c[0x8d] = 0;
    *(uint *)(local_c + 0x8e) = local_8;
    pbVar11 = local_14;
    pbVar12 = local_c + 0x92;
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
    *(uint *)(local_c + local_8 + 0x92) = local_10;
    pbVar11 = local_18;
    pbVar12 = local_c + local_8 + 0x96;
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
              (DAT_00802a38,*(undefined4 *)(pSVar1 + 0x18),local_c,local_10 + 0x96 + local_8);
    FUN_006ab060(&local_14);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_c);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar8 == 3) {
    thunk_FUN_0058d080(*(int *)(pSVar1 + 0x18));
    thunk_FUN_004ad310((int)(pSVar1 + 0x1d5));
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar8 == 0) {
    if (*(int *)(pSVar1 + 0x249) == 2) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    thunk_FUN_0058a9e0((int *)pSVar1);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (uVar8 != 2) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  *(undefined4 *)(pSVar1 + 0x249) = 3;
  local_1c = *(undefined4 **)(param_1 + 0x14);
  if ((uint)local_1c[3] < 2) {
    iVar5 = *(int *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)(pSVar1 + 0x24d) = 0;
    *(undefined4 *)(pSVar1 + 0x231) = 0;
    *(int *)(pSVar1 + 0x245) = iVar5 + -3;
    *(undefined4 *)(pSVar1 + 0x235) = 0;
    *(undefined4 *)(pSVar1 + 0x271) = 0;
    *(undefined4 *)(pSVar1 + 0x26d) = 0;
    *(undefined4 *)(pSVar1 + 0x269) = 0;
    *(undefined4 *)(pSVar1 + 0x281) = 0;
    *(undefined4 *)(pSVar1 + 0x241) = 0;
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    pSVar10 = pSVar1 + 0x285;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pSVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      pSVar10 = pSVar10 + 4;
    }
    Bad((STOctopusC *)pSVar1,(int)unaff_EDI);
    if (((((*(int *)(pSVar1 + 0x299) < 0) || ((int)DAT_007fb240 <= *(int *)(pSVar1 + 0x299))) ||
         (*(int *)(pSVar1 + 0x29d) < 0)) ||
        (((int)DAT_007fb242 <= *(int *)(pSVar1 + 0x29d) ||
         (iVar5 = *(int *)(pSVar1 + 0x2a1), iVar5 < 0)))) ||
       ((DAT_007fb244 <= iVar5 ||
        (bVar3 = thunk_FUN_004961b0(*(short *)(pSVar1 + 0x299),*(short *)(pSVar1 + 0x29d),
                                    (short)iVar5), CONCAT31(extraout_var,bVar3) == 0))))
    goto LAB_0058a0d0;
    switch(*(undefined4 *)(pSVar1 + 0x2a5)) {
    case 0xf8:
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_octopus2_007cb9f0,
                         0x1d);
      if (iVar5 != 0) {
        iVar5 = 0xe9;
LAB_0058a005:
        RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_oct_cpp_007cba18,iVar5);
      }
      break;
    case 0xf9:
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_octopus1_007cb9dc,
                         0x1d);
      if (iVar5 != 0) {
        iVar5 = 0xe4;
        goto LAB_0058a005;
      }
      break;
    case 0xfa:
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_medusa2_007cb9fc,
                         0x1d);
      if (iVar5 != 0) {
        iVar5 = 0xf3;
        goto LAB_0058a005;
      }
      break;
    case 0xfb:
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)(pSVar1 + 0x1d5),0xe,DAT_0080676c,(byte *)s_medusa1_007cb9e8,
                         0x1d);
      if (iVar5 != 0) {
        iVar5 = 0xee;
        goto LAB_0058a005;
      }
    }
    thunk_FUN_004ac610((STT3DSprC *)(pSVar1 + 0x1d5),'\x0e');
    STT3DSprC::StartShow((STT3DSprC *)(pSVar1 + 0x1d5),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(short *)(pSVar1 + 0x41) = *(short *)(pSVar1 + 0x299) * 0xc9 + 100;
    *(short *)(pSVar1 + 0x43) = *(short *)(pSVar1 + 0x29d) * 0xc9 + 100;
    *(short *)(pSVar1 + 0x45) = *(short *)(pSVar1 + 0x2a1) * 200 + 100;
    *(short *)(pSVar1 + 0x6c) = *(short *)(pSVar1 + 0x2a9);
    *(undefined4 *)(pSVar1 + 0x251) = 1;
    *(undefined4 *)(pSVar1 + 0x255) = 1;
    *(undefined4 *)(pSVar1 + 0x259) = 1;
    uVar6 = thunk_FUN_0058b190(pSVar1,(short *)(pSVar1 + 0x4e),(short *)(pSVar1 + 0x50),
                               (short *)(pSVar1 + 0x52),(short *)(pSVar1 + 0x6c));
    *(undefined4 *)(pSVar1 + 0x249) = uVar6;
    *(undefined4 *)(pSVar1 + 0x231) = 0;
  }
  else if (local_1c[3] == 2) {
    puVar9 = local_1c;
    pSVar10 = pSVar1 + 0x285;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pSVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      pSVar10 = pSVar10 + 4;
    }
    local_8 = *(uint *)((int)local_1c + 0x8e);
    STAllPlayersC::RestoreGObjData
              ((STAllPlayersC *)pSVar1,(undefined4 *)(local_8 + 0x96 + (int)local_1c));
    puVar9 = local_1c;
    *(undefined4 *)(pSVar1 + 0x249) = local_1c[0xb];
    *(undefined4 *)(pSVar1 + 0x245) = local_1c[10];
    *(undefined2 *)(pSVar1 + 0x41) = *(undefined2 *)(local_1c + 0x1e);
    *(undefined2 *)(pSVar1 + 0x43) = *(undefined2 *)((int)local_1c + 0x7a);
    *(undefined2 *)(pSVar1 + 0x45) = *(undefined2 *)(local_1c + 0x1f);
    *(undefined4 *)(pSVar1 + 0x281) = *(undefined4 *)((int)local_1c + 0x86);
    *(undefined4 *)(pSVar1 + 0x231) = local_1c[0x10];
    *(undefined4 *)(pSVar1 + 0x241) = local_1c[0x11];
    *(undefined4 *)(pSVar1 + 0x251) = local_1c[0x12];
    *(undefined4 *)(pSVar1 + 0x255) = local_1c[0x13];
    *(undefined4 *)(pSVar1 + 0x259) = local_1c[0x14];
    *(undefined4 *)(pSVar1 + 0x25d) = local_1c[0x15];
    *(undefined4 *)(pSVar1 + 0x261) = local_1c[0x16];
    *(undefined4 *)(pSVar1 + 0x265) = local_1c[0x17];
    *(undefined4 *)(pSVar1 + 0x269) = local_1c[0x18];
    *(undefined4 *)(pSVar1 + 0x26d) = local_1c[0x19];
    *(undefined4 *)(pSVar1 + 0x271) = local_1c[0x1a];
    *(undefined4 *)(pSVar1 + 0x275) = local_1c[0x1b];
    *(undefined4 *)(pSVar1 + 0x279) = local_1c[0x1c];
    *(undefined4 *)(pSVar1 + 0x27d) = local_1c[0x1d];
    *(undefined4 *)(pSVar1 + 0x239) = local_1c[0xe];
    *(undefined4 *)(pSVar1 + 0x23d) = local_1c[0xf];
    *(undefined4 *)(pSVar1 + 0x235) = local_1c[0xd];
    *(undefined2 *)(pSVar1 + 0x4e) = *(undefined2 *)((int)local_1c + 0x7e);
    *(undefined2 *)(pSVar1 + 0x50) = *(undefined2 *)(local_1c + 0x20);
    *(undefined2 *)(pSVar1 + 0x52) = *(undefined2 *)((int)local_1c + 0x82);
    *(undefined2 *)(pSVar1 + 0x6c) = *(undefined2 *)(local_1c + 0x21);
    *(undefined4 *)(pSVar1 + 0x24d) = local_1c[0xc];
    local_44[0] = Library::DKW::LIB::FUN_006aac70(0x44);
    if (local_44[0] != 0) {
      iVar5 = 0;
      do {
        if (iVar5 == 8) {
          *(undefined4 *)(local_44[0] + 0x20) = DAT_00806774;
        }
        else {
          *(int **)(local_44[0] + iVar5 * 4) = DAT_0080676c;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x11);
      local_44[1] = 0;
      local_44[2] = 0;
      local_44[3] = DAT_008073cc;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      STT3DSprC::RestoreSpr
                ((STT3DSprC *)(pSVar1 + 0x1d5),local_44,(undefined4 *)((int)puVar9 + 0x92));
      FUN_006ab060(local_44);
    }
  }
  if ((*(int *)(pSVar1 + 0x249) == 3) || (iVar5 = thunk_FUN_0058cfe0((int)pSVar1), iVar5 != 0)) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
LAB_0058a0d0:
  thunk_FUN_005899e0(pSVar1);
  *(undefined4 *)(pSVar1 + 0x249) = 2;
  g_currentExceptionFrame = local_88.previous;
  return 0;
}

