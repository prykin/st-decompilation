
int FUN_004d0b90(int param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  int exceptionCode;
  uint uVar4;
  undefined4 unaff_ESI;
  byte *pbVar5;
  int iVar6;
  void *unaff_EDI;
  STSprGameObjC *pSVar7;
  byte *pbVar8;
  InternalExceptionFrame local_50;
  STSprGameObjC *local_c;
  byte *local_8;
  
  pSVar7 = (STSprGameObjC *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x341,0,iVar3,&DAT_007a4ccc
                               ,s_TLOFakeTy__GetMessage_error_007bf3c4);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x342);
    return iVar3;
  }
  STSprGameObjC::GetMessage(local_c,param_1);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    DAT_00800bcc = local_c;
    *(undefined4 *)(local_c + 0x20) = 0x3ea;
    *(undefined4 *)(local_c + 0x28) = 2;
    local_8 = *(byte **)(param_1 + 0x14);
    if (local_c != (STSprGameObjC *)0x0) {
      pSVar7 = local_c + 0x231;
    }
    pbVar5 = local_8;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar7 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pSVar7 = pSVar7 + 4;
    }
    if (*(int *)(local_c + 0x23d) == 2) {
      if (*(int *)(local_c + 0x249) != 0) {
        iVar3 = FUN_006aac70(*(int *)(local_c + 0x249) * 0xc);
        *(int *)(local_c + 0x24d) = iVar3;
      }
      if (*(int *)(local_c + 0x245) != 0) {
        pbVar5 = local_8 + 0x1c;
        pbVar8 = *(byte **)(local_c + 0x24d);
        for (uVar4 = *(int *)(local_c + 0x245) * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar8 = pbVar8 + 4;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pbVar8 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar8 = pbVar8 + 1;
        }
        iVar3 = 0;
        if (0 < *(int *)(local_c + 0x245)) {
          iVar6 = 0;
          do {
            psVar1 = (short *)(*(int *)(local_c + 0x24d) + iVar6);
            exceptionCode =
                 DumpClassC::WritePtr
                           (*psVar1,*(short *)(*(int *)(local_c + 0x24d) + 4 + iVar6),psVar1[4],0,
                            (int)local_c);
            if (exceptionCode != 0) {
              RaiseInternalException
                        (exceptionCode,DAT_007ed77c,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x326)
              ;
            }
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 0xc;
          } while (iVar3 < *(int *)(local_c + 0x245));
        }
      }
    }
  }
  else if (iVar3 == 3) {
    DAT_00800bcc = (STSprGameObjC *)0x0;
    thunk_FUN_004ad310((int)(local_c + 0x1d5));
    if (*(int *)(local_c + 0x24d) != 0) {
      FUN_006ab060((undefined4 *)(local_c + 0x24d));
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (iVar3 == 0x10f) {
    local_8 = (byte *)FUN_006aac70(*(int *)(local_c + 0x245) * 0xc + 0x1c);
    if (local_c == (STSprGameObjC *)0x0) {
      pSVar7 = (STSprGameObjC *)0x0;
    }
    else {
      pSVar7 = local_c + 0x231;
    }
    pbVar5 = local_8;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)pSVar7;
      pSVar7 = pSVar7 + 4;
      pbVar5 = pbVar5 + 4;
    }
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    if (*(int *)(local_c + 0x245) != 0) {
      pbVar5 = *(byte **)(local_c + 0x24d);
      pbVar8 = local_8 + 0x1c;
      for (uVar4 = *(int *)(local_c + 0x245) * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar8 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar8 = pbVar8 + 1;
      }
    }
    STPlaySystemC::SaveObjData
              (DAT_00802a38,*(undefined4 *)(local_c + 0x18),local_8,
               *(int *)(local_c + 0x245) * 0xc + 0x1c);
    FUN_006ab060(&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

