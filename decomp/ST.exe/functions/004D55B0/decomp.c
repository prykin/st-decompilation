
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::GetMessage */

int __thiscall TLOEmbryoTy::GetMessage(TLOEmbryoTy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  STSprGameObjC *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  char cVar14;
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
  local_c = (STSprGameObjC *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x4e5,0,iVar3,
                               &DAT_007a4ccc,s_TLOEmbryoTy__GetMessage_error_007bf51c);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x4e6);
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  STSprGameObjC::GetMessage(local_c,param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar6) {
    if (uVar6 < 0x129) {
      if (uVar6 == 0x128) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (*(int *)&this_00->field_0x2a0 != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_18 = *(undefined4 *)&this_00->field_0x8;
        *(undefined4 *)&this_00->field_0x2a0 = 1;
        local_24 = *(undefined4 *)(*(int *)&this_00->field_0xc + 0x14);
        local_20 = 0;
        local_1c = 10;
        FUN_006e60a0(this_00,local_2c);
        *(undefined4 *)&this_00[1].field_0x39 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *(undefined4 *)&this_00[1].field_0x3d = *(undefined4 *)(iVar3 + 8);
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (uVar6 == 0x110) {
        if (*(int *)&this_00->field_0x2ec == 3) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        if (*(int *)&this_00->field_0x2dc != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_8 = *(int **)(param_1 + 0x14);
        iVar9 = (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d) * 4;
        iVar3 = *local_8;
        if (*(int *)&this_00[1].field_0x29 != 0) {
          iVar3 = (*(int *)&this_00[1].field_0x2d * iVar3) / 100;
        }
        iVar3 = (*(int *)&this_00->field_0x2a8 * *(int *)(&DAT_007e417c + iVar9)) / 100 - iVar3;
        if (iVar3 < 1) {
          if (*(int *)&this_00->field_0x2a0 == 0) {
            STT3DSprC::StopShow(*(STT3DSprC **)&this_00[1].field_0x4d,0xe);
            thunk_FUN_004ad430(*(int *)&this_00[1].field_0x4d);
            puVar10 = &this_00->field_01D5;
            if (*(int *)&this_00->field_0x2c == 1) {
              pcVar13 = s_expl_bt1_007bf54c;
            }
            else {
              pcVar13 = s_expl_bt0_007bf540;
            }
            iVar3 = STT3DSprC::LoadSequence
                              ((STT3DSprC *)puVar10,6,DAT_00806774,(byte *)pcVar13,0x1d);
            if (iVar3 != 0) {
              return 0xffff;
            }
            thunk_FUN_004ac700(puVar10,'\x06');
            STT3DSprC::StartShow((STT3DSprC *)puVar10,6,*(undefined4 *)(DAT_00802a38 + 0xe4));
          }
          *(undefined4 *)&this_00->field_0x2a8 = 0;
          *(undefined4 *)&this_00->field_0x2a0 = 1;
        }
        else {
          iVar3 = (iVar3 * 100) / *(int *)(&DAT_007e417c + iVar9);
          *(int *)&this_00->field_0x2a8 = iVar3;
          *(int *)&this_00->field_0x2cc = (iVar3 * *(int *)(&DAT_008545ac + iVar9)) / 100;
          *(int *)&this_00->field_0x2d0 =
               (*(int *)(&DAT_007e1c50 + iVar9) * *(int *)&this_00->field_0x2a8) / 100;
          *(int *)&this_00->field_0x2d4 =
               (*(int *)(&DAT_007e24fc + iVar9) * *(int *)&this_00->field_0x2a8) / 100;
          iVar3 = (*(int *)(&DAT_007e3160 + iVar9) * *(int *)&this_00->field_0x2a8) / 100;
          *(int *)&this_00->field_0x2d8 = iVar3;
          iVar4 = *(int *)(&DAT_008545ac + iVar9) - *(int *)&this_00->field_0x2cc;
          iVar7 = *(int *)(&DAT_007e1c50 + iVar9) - *(int *)&this_00->field_0x2d0;
          iVar11 = *(int *)(&DAT_007e24fc + iVar9) - *(int *)&this_00->field_0x2d4;
          iVar3 = *(int *)(&DAT_007e3160 + iVar9) - iVar3;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          thunk_FUN_004d76e0(this_00->field_0x24,0,*(int *)&this_00->field_0x18,iVar4,iVar7,iVar11,
                             iVar3);
        }
        *(undefined4 *)&this_00[1].field_0x39 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *(int *)&this_00[1].field_0x3d = local_8[2];
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (uVar6 != 0x122) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      piVar12 = *(int **)(param_1 + 0x14);
      if (*piVar12 != *(int *)&this_00->field_0x24) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)&this_00[1].field_0x29 = 1;
      *(int *)&this_00[1].field_0x2d = piVar12[2];
      *(undefined4 *)&this_00[1].field_0x31 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(int *)&this_00[1].field_0x35 = piVar12[1];
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (uVar6 != 0x4401) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    cVar14 = *(char *)(*(int *)(param_1 + 0x14) + 0xe);
    if (cVar14 != '\t') {
      if (cVar14 != '\x17') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      pcVar13 = *(char **)(*(int *)(param_1 + 0x14) + 0x17);
      if (*(int *)&this_00->field_0x2a4 != 0) {
        if (*pcVar13 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        *(undefined4 *)&this_00->field_0x2a4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar13 != '\x1b') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (((*(int *)&this_00->field_0x2ec == 2) && (0 < *(int *)&this_00->field_0x2a8)) &&
         (*(int *)&this_00->field_0x2a8 < 0x65)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x2a4 = 1;
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (((*(int *)&this_00->field_0x2ec == 2) && (0 < *(int *)&this_00->field_0x2a8)) &&
       (*(int *)&this_00->field_0x2a8 < 0x65)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    iVar3 = *(int *)&this_00[1].field_0x61;
    iVar9 = 3;
    *(undefined4 *)&this_00->field_0x2ec = 3;
    *(undefined4 *)&this_00->field_0x2e8 = 1;
    if (iVar3 == 0) {
      (*this_00->vtable->slot_90)(3,0x361);
    }
    iVar3 = this_00->field_0259;
    if (((iVar3 != 0x6c) || (*(int *)&this_00->field_0x251 != 3)) &&
       ((iVar3 < 0x54 || (0x5a < iVar3)))) {
      puVar10 = &this_00->field_01D5;
      thunk_FUN_004ac6b0(puVar10,this_00->field_0x2f0);
      iVar3 = *(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4;
      thunk_FUN_004abce0(puVar10,this_00->field_0x2f0,
                         *(int *)(*(int *)&this_00[1].field_0x55 + iVar3 * 8),
                         *(int *)(*(int *)&this_00[1].field_0x55 + 4 + iVar3 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar10,this_00->field_0x2f0,
                 *(undefined4 *)
                  (*(int *)&this_00[1].field_0x55 +
                  (*(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4) * 8));
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar10,this_00->field_0x2f0,*(undefined4 *)(DAT_00802a38 + 0xe4));
      if (*(int *)&this_00[1].field_0x61 == 0) goto LAB_004d600f;
      thunk_FUN_004ac6b0(puVar10,this_00->field_0x2f0 + -1);
      iVar3 = *(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4;
      thunk_FUN_004abce0(puVar10,this_00->field_0x2f0 - 1,
                         *(int *)(*(int *)&this_00[1].field_0x55 + iVar3 * 8),
                         *(int *)(*(int *)&this_00[1].field_0x55 + 4 + iVar3 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar10,this_00->field_0x2f0 + -1,
                 *(undefined4 *)
                  (*(int *)&this_00[1].field_0x55 +
                  (*(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4) * 8));
      STT3DSprC::StartShow
                ((STT3DSprC *)puVar10,this_00->field_0x2f0 - 1,*(undefined4 *)(DAT_00802a38 + 0xe4))
      ;
    }
    if (*(int *)&this_00[1].field_0x61 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    piVar12 = (int *)&this_00[1].field_0x41;
    piVar8 = &this_00->field_0308;
    do {
      if (*piVar8 != 0) {
        *piVar8 = 0;
        thunk_FUN_004ad430(*piVar12);
      }
      piVar12 = piVar12 + 1;
      piVar8 = piVar8 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar6 == 0x10f) {
    thunk_FUN_004d2fd0((int)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar6 < 4) {
    if (uVar6 == 3) {
      thunk_FUN_004d2760((int *)this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (uVar6 != 0) {
      if (uVar6 != 2) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      Create((TLOEmbryoTy *)this_00,*(undefined4 **)(param_1 + 0x14));
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    thunk_FUN_004d32c0((int *)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar6 != 0x108) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  iVar9 = 0;
  iVar3 = 0;
  do {
    piVar12 = (int *)(*(int *)&this_00->field_0x1f5 + iVar3);
    auStack_17c[iVar9] = *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c + iVar3);
    aiStack_f4[iVar9] = piVar12[8];
    if (*piVar12 != 0) {
      cVar14 = (char)iVar9;
      iVar4 = thunk_FUN_004ac910(&this_00->field_01D5,cVar14);
      aiStack_138[iVar9] = iVar4;
      iVar4 = thunk_FUN_004ac910(&this_00->field_01D5,cVar14);
      uVar5 = thunk_FUN_004acdd0(&this_00->field_01D5,cVar14,iVar4);
      auStack_1c0[iVar9] = uVar5;
    }
    iVar3 = iVar3 + 0x24;
    iVar9 = iVar9 + 1;
  } while (iVar3 < 0x264);
  if (*(int *)&this_00->field_0x2ec == 0) {
    thunk_FUN_004d10a0(this_00,1);
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,this_00->field_0x2f0,
               *(undefined4 *)(DAT_00802a38 + 0xe4));
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,this_00->field_0x2f0 - 1,
               *(undefined4 *)(DAT_00802a38 + 0xe4));
  }
  if (*(int *)&this_00->field_0x2dc == 0) {
    if ((*(uint *)&this_00->field_0x1f1 & 0x4000) == 0) goto LAB_004d59e7;
    uVar6 = thunk_FUN_004ab050();
    uVar6 = uVar6 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    wsprintfA((LPSTR)local_b0,s__s_1i_007ac908,
              (&PTR_s_tlo_embws1_007bf3e8)[*(int *)&this_00[1].field_0x5d],uVar6);
    puVar10 = &this_00->field_01D5;
    iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)puVar10,0xe,DAT_0080678c,local_b0,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x43a);
    }
    thunk_FUN_004abce0(puVar10,0xe,*(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),
                       *(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar10,'\x0e',
               *(undefined4 *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4));
    STT3DSprC::StartShow((STT3DSprC *)puVar10,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar10,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&this_00[1].field_0x5d],0x1d);
    if (iVar3 != 0) {
      iVar9 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar3 = thunk_FUN_004ab050();
    puVar10 = &this_00->field_01D5;
    iVar3 = *(int *)(PTR_DAT_007b5170 +
                    (iVar3 + (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d) *
                             4) * 8);
    thunk_FUN_004abce0(puVar10,0xe,iVar3,iVar3,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar10,'\x0e',iVar3);
    STT3DSprC::StartShow((STT3DSprC *)puVar10,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    if (**(int **)(*(int *)&this_00->field_0x1f5 + 0x1d4) < iVar3) {
      iVar3 = 0;
    }
    thunk_FUN_004abce0(puVar10,0xd,iVar3,iVar3,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar10,'\r',iVar3);
    STT3DSprC::StartShow((STT3DSprC *)puVar10,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    if (*(int *)(PTR_PTR_007bb198 +
                (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d) * 0xc + 8) !=
        0) {
      iVar3 = thunk_FUN_004ab050();
      iVar3 = *(int *)(PTR_DAT_007b8310 +
                      (iVar3 + (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d)
                               * 4) * 8);
      thunk_FUN_004abce0(puVar10,0xc,iVar3,iVar3,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar10,'\f',iVar3);
      STT3DSprC::StartShow((STT3DSprC *)puVar10,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar10,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&this_00[1].field_0x5d],0x1d);
    if (iVar3 != 0) {
      iVar9 = 0x459;
LAB_004d5985:
      RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,iVar9);
    }
  }
  puVar10 = &this_00->field_01D5;
  thunk_FUN_004abce0(puVar10,0x10,*(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),
                     *(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),'\0');
  STT3DSprC::SetCurFase
            ((STT3DSprC *)puVar10,'\x10',
             *(undefined4 *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4));
  STT3DSprC::StartShow((STT3DSprC *)puVar10,0x10,*(undefined4 *)(DAT_00802a38 + 0xe4));
  thunk_FUN_004acf50(puVar10,'\x10');
LAB_004d59e7:
  iVar9 = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)(iVar3 + 0x1c + *(int *)&this_00->field_0x1f5) = auStack_17c[iVar9];
    *(int *)(iVar3 + 0x20 + *(int *)&this_00->field_0x1f5) = aiStack_f4[iVar9];
    iVar4 = *(int *)(iVar3 + *(int *)&this_00->field_0x1f5);
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)(iVar3 + *(int *)&this_00->field_0x1f5 + 4) + aiStack_138[iVar9] * 4)
           = *(undefined4 *)(aiStack_138[iVar9] * 4 + 0x31 + iVar4);
      uVar5 = auStack_1c0[iVar9];
      iVar4 = thunk_FUN_004ac910(&this_00->field_01D5,(char)iVar9);
      thunk_FUN_004ace00(&this_00->field_01D5,(char)iVar9,iVar4,uVar5);
    }
    iVar3 = iVar3 + 0x24;
    iVar9 = iVar9 + 1;
  } while (iVar3 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

