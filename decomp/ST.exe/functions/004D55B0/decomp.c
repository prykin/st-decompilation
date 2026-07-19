
int FUN_004d55b0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  STSprGameObjC *pSVar9;
  void *unaff_EDI;
  int iVar10;
  STT3DSprC *pSVar11;
  int iVar12;
  STSprGameObjC *pSVar13;
  char *pcVar14;
  char cVar15;
  undefined4 auStack_1c0 [17];
  undefined4 auStack_17c [17];
  int aiStack_138 [17];
  int aiStack_f4 [17];
  byte local_b0 [64];
  InternalExceptionFrame local_70;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  STSprGameObjC *local_c;
  int *local_8;
  
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar4 = __setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x4e5,0,iVar4,
                                &DAT_007a4ccc,s_TLOEmbryoTy__GetMessage_error_007bf51c);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x4e6);
      return iVar4;
    }
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  STSprGameObjC::GetMessage(local_c,param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar7) {
    if (uVar7 < 0x129) {
      if (uVar7 == 0x128) {
        iVar4 = *(int *)(param_1 + 0x14);
        if (*(int *)(local_c + 0x2a0) != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_18 = *(undefined4 *)(local_c + 8);
        *(undefined4 *)(local_c + 0x2a0) = 1;
        local_24 = *(undefined4 *)(*(int *)(local_c + 0xc) + 0x14);
        local_20 = 0;
        local_1c = 10;
        FUN_006e60a0(local_c,local_2c);
        *(undefined4 *)(local_c + 0x348) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *(undefined4 *)(local_c + 0x34c) = *(undefined4 *)(iVar4 + 8);
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (uVar7 == 0x110) {
        if (*(int *)(local_c + 0x2ec) == 3) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        if (*(int *)(local_c + 0x2dc) != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_8 = *(int **)(param_1 + 0x14);
        iVar10 = (*(int *)(local_c + 0x368) * 3 + *(int *)(local_c + 0x36c)) * 4;
        iVar4 = *local_8;
        if (*(int *)(local_c + 0x338) != 0) {
          iVar4 = (*(int *)(local_c + 0x33c) * iVar4) / 100;
        }
        iVar4 = (*(int *)(local_c + 0x2a8) * *(int *)(&DAT_007e417c + iVar10)) / 100 - iVar4;
        if (iVar4 < 1) {
          if (*(int *)(local_c + 0x2a0) == 0) {
            STT3DSprC::StopShow(*(STT3DSprC **)(local_c + 0x35c),0xe);
            thunk_FUN_004ad430(*(int *)(local_c + 0x35c));
            pSVar11 = (STT3DSprC *)(local_c + 0x1d5);
            if (*(int *)(local_c + 0x2c) == 1) {
              pcVar14 = s_expl_bt1_007bf54c;
            }
            else {
              pcVar14 = s_expl_bt0_007bf540;
            }
            iVar4 = STT3DSprC::LoadSequence(pSVar11,6,DAT_00806774,(byte *)pcVar14,0x1d);
            if (iVar4 != 0) {
              return 0xffff;
            }
            thunk_FUN_004ac700(pSVar11,'\x06');
            STT3DSprC::StartShow(pSVar11,6,*(undefined4 *)(DAT_00802a38 + 0xe4));
          }
          *(undefined4 *)(local_c + 0x2a8) = 0;
          *(undefined4 *)(local_c + 0x2a0) = 1;
        }
        else {
          iVar4 = (iVar4 * 100) / *(int *)(&DAT_007e417c + iVar10);
          *(int *)(local_c + 0x2a8) = iVar4;
          *(int *)(local_c + 0x2cc) = (iVar4 * *(int *)(&DAT_008545ac + iVar10)) / 100;
          *(int *)(local_c + 0x2d0) =
               (*(int *)(&DAT_007e1c50 + iVar10) * *(int *)(local_c + 0x2a8)) / 100;
          *(int *)(local_c + 0x2d4) =
               (*(int *)(&DAT_007e24fc + iVar10) * *(int *)(local_c + 0x2a8)) / 100;
          iVar4 = (*(int *)(&DAT_007e3160 + iVar10) * *(int *)(local_c + 0x2a8)) / 100;
          *(int *)(local_c + 0x2d8) = iVar4;
          iVar5 = *(int *)(&DAT_008545ac + iVar10) - *(int *)(local_c + 0x2cc);
          iVar8 = *(int *)(&DAT_007e1c50 + iVar10) - *(int *)(local_c + 0x2d0);
          iVar12 = *(int *)(&DAT_007e24fc + iVar10) - *(int *)(local_c + 0x2d4);
          iVar4 = *(int *)(&DAT_007e3160 + iVar10) - iVar4;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          thunk_FUN_004d76e0((char)local_c[0x24],0,*(int *)(local_c + 0x18),iVar5,iVar8,iVar12,iVar4
                            );
        }
        *(undefined4 *)(local_c + 0x348) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *(int *)(local_c + 0x34c) = local_8[2];
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (uVar7 != 0x122) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      piVar1 = *(int **)(param_1 + 0x14);
      if (*piVar1 != *(int *)(local_c + 0x24)) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)(local_c + 0x338) = 1;
      *(int *)(local_c + 0x33c) = piVar1[2];
      *(undefined4 *)(local_c + 0x340) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(int *)(local_c + 0x344) = piVar1[1];
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (uVar7 != 0x4401) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    cVar15 = *(char *)(*(int *)(param_1 + 0x14) + 0xe);
    if (cVar15 != '\t') {
      if (cVar15 != '\x17') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      pcVar14 = *(char **)(*(int *)(param_1 + 0x14) + 0x17);
      if (*(int *)(local_c + 0x2a4) != 0) {
        if (*pcVar14 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        *(undefined4 *)(local_c + 0x2a4) = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar14 != '\x1b') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (((*(int *)(local_c + 0x2ec) == 2) && (0 < *(int *)(local_c + 0x2a8))) &&
         (*(int *)(local_c + 0x2a8) < 0x65)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)(local_c + 0x2a4) = 1;
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (((*(int *)(local_c + 0x2ec) == 2) && (0 < *(int *)(local_c + 0x2a8))) &&
       (*(int *)(local_c + 0x2a8) < 0x65)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    iVar4 = 3;
    *(undefined4 *)(local_c + 0x2ec) = 3;
    *(undefined4 *)(local_c + 0x2e8) = 1;
    if (*(int *)(local_c + 0x370) == 0) {
      (**(code **)(*(int *)local_c + 0x90))(3,0x361);
    }
    iVar10 = *(int *)(local_c + 0x259);
    if (((iVar10 != 0x6c) || (*(int *)(local_c + 0x251) != 3)) &&
       ((iVar10 < 0x54 || (0x5a < iVar10)))) {
      pSVar11 = (STT3DSprC *)(local_c + 0x1d5);
      thunk_FUN_004ac6b0(pSVar11,(char)local_c[0x2f0]);
      iVar10 = *(int *)(local_c + 0x2ec) + *(int *)(local_c + 0x241) * 4;
      thunk_FUN_004abce0(pSVar11,(byte)local_c[0x2f0],
                         *(int *)(*(int *)(local_c + 0x364) + iVar10 * 8),
                         *(int *)(*(int *)(local_c + 0x364) + 4 + iVar10 * 8),'\0');
      thunk_FUN_004abe40(pSVar11,(char)local_c[0x2f0],
                         *(undefined4 *)
                          (*(int *)(local_c + 0x364) +
                          (*(int *)(local_c + 0x2ec) + *(int *)(local_c + 0x241) * 4) * 8));
      STT3DSprC::StartShow(pSVar11,(byte)local_c[0x2f0],*(undefined4 *)(DAT_00802a38 + 0xe4));
      if (*(int *)(local_c + 0x370) == 0) goto LAB_004d600f;
      thunk_FUN_004ac6b0(pSVar11,(char)local_c[0x2f0] + -1);
      iVar10 = *(int *)(local_c + 0x2ec) + *(int *)(local_c + 0x241) * 4;
      thunk_FUN_004abce0(pSVar11,(char)local_c[0x2f0] - 1,
                         *(int *)(*(int *)(local_c + 0x364) + iVar10 * 8),
                         *(int *)(*(int *)(local_c + 0x364) + 4 + iVar10 * 8),'\0');
      thunk_FUN_004abe40(pSVar11,(char)local_c[0x2f0] + -1,
                         *(undefined4 *)
                          (*(int *)(local_c + 0x364) +
                          (*(int *)(local_c + 0x2ec) + *(int *)(local_c + 0x241) * 4) * 8));
      STT3DSprC::StartShow(pSVar11,(char)local_c[0x2f0] - 1,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    if (*(int *)(local_c + 0x370) != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    pSVar13 = local_c + 0x350;
    pSVar9 = local_c + 0x308;
    do {
      if (*(int *)pSVar9 != 0) {
        *(int *)pSVar9 = 0;
        thunk_FUN_004ad430(*(int *)pSVar13);
      }
      pSVar13 = pSVar13 + 4;
      pSVar9 = pSVar9 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar7 == 0x10f) {
    thunk_FUN_004d2fd0((int)local_c);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar7 < 4) {
    if (uVar7 == 3) {
      thunk_FUN_004d2760((int *)local_c);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (uVar7 != 0) {
      if (uVar7 != 2) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      thunk_FUN_004d11d0(*(undefined4 **)(param_1 + 0x14));
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    thunk_FUN_004d32c0((int *)local_c);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar7 != 0x108) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  iVar10 = 0;
  iVar4 = 0;
  do {
    piVar1 = (int *)(*(int *)(local_c + 0x1f5) + iVar4);
    auStack_17c[iVar10] = *(undefined4 *)(*(int *)(local_c + 0x1f5) + 0x1c + iVar4);
    aiStack_f4[iVar10] = piVar1[8];
    if (*piVar1 != 0) {
      cVar15 = (char)iVar10;
      iVar5 = thunk_FUN_004ac910(local_c + 0x1d5,cVar15);
      aiStack_138[iVar10] = iVar5;
      iVar5 = thunk_FUN_004ac910(local_c + 0x1d5,cVar15);
      uVar6 = thunk_FUN_004acdd0(local_c + 0x1d5,cVar15,iVar5);
      auStack_1c0[iVar10] = uVar6;
    }
    iVar4 = iVar4 + 0x24;
    iVar10 = iVar10 + 1;
  } while (iVar4 < 0x264);
  if (*(int *)(local_c + 0x2ec) == 0) {
    thunk_FUN_004d10a0(local_c,1);
    STT3DSprC::StartShow
              ((STT3DSprC *)(local_c + 0x1d5),(byte)local_c[0x2f0],
               *(undefined4 *)(DAT_00802a38 + 0xe4));
    STT3DSprC::StartShow
              ((STT3DSprC *)(local_c + 0x1d5),(char)local_c[0x2f0] - 1,
               *(undefined4 *)(DAT_00802a38 + 0xe4));
  }
  if (*(int *)(local_c + 0x2dc) == 0) {
    if ((*(uint *)(local_c + 0x1f1) & 0x4000) == 0) goto LAB_004d59e7;
    uVar7 = thunk_FUN_004ab050();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    wsprintfA((LPSTR)local_b0,s__s_1i_007ac908,
              (&PTR_s_tlo_embws1_007bf3e8)[*(int *)(local_c + 0x36c)],uVar7);
    pSVar11 = (STT3DSprC *)(local_c + 0x1d5);
    iVar4 = STT3DSprC::LoadSequence(pSVar11,0xe,DAT_0080678c,local_b0,0x1d);
    if (iVar4 != 0) {
      RaiseInternalException(iVar4,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x43a);
    }
    thunk_FUN_004abce0(pSVar11,0xe,*(int *)(&DAT_0079104c + *(int *)(local_c + 0x368) * 4),
                       *(int *)(&DAT_0079104c + *(int *)(local_c + 0x368) * 4),'\0');
    thunk_FUN_004abe40(pSVar11,'\x0e',*(undefined4 *)(&DAT_0079104c + *(int *)(local_c + 0x368) * 4)
                      );
    STT3DSprC::StartShow(pSVar11,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar4 = STT3DSprC::LoadSequence
                      (pSVar11,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)(local_c + 0x36c)],0x1d);
    if (iVar4 != 0) {
      iVar10 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar4 = thunk_FUN_004ab050();
    pSVar11 = (STT3DSprC *)(local_c + 0x1d5);
    iVar4 = *(int *)(PTR_DAT_007b5170 +
                    (iVar4 + (*(int *)(local_c + 0x368) * 3 + *(int *)(local_c + 0x36c)) * 4) * 8);
    thunk_FUN_004abce0(pSVar11,0xe,iVar4,iVar4,'\0');
    thunk_FUN_004abe40(pSVar11,'\x0e',iVar4);
    STT3DSprC::StartShow(pSVar11,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    if (**(int **)(*(int *)(local_c + 0x1f5) + 0x1d4) < iVar4) {
      iVar4 = 0;
    }
    thunk_FUN_004abce0(pSVar11,0xd,iVar4,iVar4,'\0');
    thunk_FUN_004abe40(pSVar11,'\r',iVar4);
    STT3DSprC::StartShow(pSVar11,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    if (*(int *)(PTR_PTR_007bb198 +
                (*(int *)(local_c + 0x368) * 3 + *(int *)(local_c + 0x36c)) * 0xc + 8) != 0) {
      iVar4 = thunk_FUN_004ab050();
      iVar4 = *(int *)(PTR_DAT_007b8310 +
                      (iVar4 + (*(int *)(local_c + 0x368) * 3 + *(int *)(local_c + 0x36c)) * 4) * 8)
      ;
      thunk_FUN_004abce0(pSVar11,0xc,iVar4,iVar4,'\0');
      thunk_FUN_004abe40(pSVar11,'\f',iVar4);
      STT3DSprC::StartShow(pSVar11,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    iVar4 = STT3DSprC::LoadSequence
                      (pSVar11,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)(local_c + 0x36c)],0x1d);
    if (iVar4 != 0) {
      iVar10 = 0x459;
LAB_004d5985:
      RaiseInternalException(iVar4,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar10);
    }
  }
  pSVar11 = (STT3DSprC *)(local_c + 0x1d5);
  thunk_FUN_004abce0(pSVar11,0x10,*(int *)(&DAT_0079104c + *(int *)(local_c + 0x368) * 4),
                     *(int *)(&DAT_0079104c + *(int *)(local_c + 0x368) * 4),'\0');
  thunk_FUN_004abe40(pSVar11,'\x10',*(undefined4 *)(&DAT_0079104c + *(int *)(local_c + 0x368) * 4));
  STT3DSprC::StartShow(pSVar11,0x10,*(undefined4 *)(DAT_00802a38 + 0xe4));
  thunk_FUN_004acf50(pSVar11,'\x10');
LAB_004d59e7:
  iVar10 = 0;
  iVar4 = 0;
  do {
    *(undefined4 *)(iVar4 + 0x1c + *(int *)(local_c + 0x1f5)) = auStack_17c[iVar10];
    *(int *)(iVar4 + 0x20 + *(int *)(local_c + 0x1f5)) = aiStack_f4[iVar10];
    iVar5 = *(int *)(iVar4 + *(int *)(local_c + 0x1f5));
    if (iVar5 != 0) {
      *(undefined4 *)(*(int *)(iVar4 + *(int *)(local_c + 0x1f5) + 4) + aiStack_138[iVar10] * 4) =
           *(undefined4 *)(aiStack_138[iVar10] * 4 + 0x31 + iVar5);
      uVar6 = auStack_1c0[iVar10];
      iVar5 = thunk_FUN_004ac910(local_c + 0x1d5,(char)iVar10);
      thunk_FUN_004ace00(local_c + 0x1d5,(char)iVar10,iVar5,uVar6);
    }
    iVar4 = iVar4 + 0x24;
    iVar10 = iVar10 + 1;
  } while (iVar4 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

