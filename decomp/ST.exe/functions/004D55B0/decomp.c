
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOEmbryoTy::GetMessage */

int __thiscall TLOEmbryoTy::GetMessage(TLOEmbryoTy *this,AnonShape_004D55B0_31219D03 *param_1)

{
  STSprGameObjC_field_0259State SVar1;
  code *pcVar2;
  bool bVar3;
  STSprGameObjC *this_00;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  void *unaff_EDI;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  char cVar15;
  undefined4 auStack_1c0 [17];
  undefined4 auStack_17c [17];
  int aiStack_138 [17];
  int aiStack_f4 [17];
  CHAR local_b0 [64];
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
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
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
  STSprGameObjC::GetMessage(local_c,(AnonShape_0041AF40_F59F8577 *)param_1);
  uVar7 = param_1->field_0010;
  if (0x10f < uVar7) {
    if (uVar7 < 0x129) {
      if (uVar7 == 0x128) {
        iVar4 = param_1->field_0014;
        if (*(int *)&this_00->field_0x2a0 != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_18 = *(undefined4 *)&this_00->field_0x8;
        *(undefined4 *)&this_00->field_0x2a0 = 1;
        local_24 = *(undefined4 *)(*(int *)&this_00->field_0xc + 0x14);
        local_20 = 0;
        local_1c = 10;
        STJellyGunC::sub_006E60A0((STJellyGunC *)this_00,local_2c);
        *(undefined4 *)&this_00[1].field_0x39 = PTR_00802a38->field_00E4;
        *(undefined4 *)&this_00[1].field_0x3d = *(undefined4 *)(iVar4 + 8);
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (uVar7 == 0x110) {
        if (*(int *)&this_00->field_0x2ec == 3) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        if (*(int *)&this_00->field_0x2dc != 0) {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        local_8 = (int *)param_1->field_0014;
        iVar10 = (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d) * 4;
        iVar4 = *local_8;
        if (*(int *)&this_00[1].field_0x29 != 0) {
          iVar4 = (*(int *)&this_00[1].field_0x2d * iVar4) / 100;
        }
        iVar4 = (*(int *)&this_00->field_0x2a8 * *(int *)(&DAT_007e417c + iVar10)) / 100 - iVar4;
        if (iVar4 < 1) {
          if (*(int *)&this_00->field_0x2a0 == 0) {
            STT3DSprC::StopShow(*(STT3DSprC **)&this_00[1].field_0x4d,0xe);
            thunk_FUN_004ad430(*(int *)&this_00[1].field_0x4d);
            puVar11 = &this_00->field_01D5;
            if (*(int *)&this_00->field_0x2c == 1) {
              pcVar14 = s_expl_bt1_007bf54c;
            }
            else {
              pcVar14 = s_expl_bt0_007bf540;
            }
            iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar11,6,DAT_00806774,pcVar14,0x1d);
            if (iVar4 != 0) {
              return 0xffff;
            }
            thunk_FUN_004ac700(puVar11,'\x06');
            STT3DSprC::StartShow((STT3DSprC *)puVar11,6,PTR_00802a38->field_00E4);
          }
          *(undefined4 *)&this_00->field_0x2a8 = 0;
          *(undefined4 *)&this_00->field_0x2a0 = 1;
        }
        else {
          iVar4 = (iVar4 * 100) / *(int *)(&DAT_007e417c + iVar10);
          *(int *)&this_00->field_0x2a8 = iVar4;
          *(int *)&this_00->field_0x2cc = (iVar4 * *(int *)(&DAT_008545ac + iVar10)) / 100;
          *(int *)&this_00->field_0x2d0 =
               (*(int *)(&DAT_007e1c50 + iVar10) * *(int *)&this_00->field_0x2a8) / 100;
          *(int *)&this_00->field_0x2d4 =
               (*(int *)(&DAT_007e24fc + iVar10) * *(int *)&this_00->field_0x2a8) / 100;
          iVar4 = (*(int *)(&DAT_007e3160 + iVar10) * *(int *)&this_00->field_0x2a8) / 100;
          *(int *)&this_00->field_0x2d8 = iVar4;
          iVar5 = *(int *)(&DAT_008545ac + iVar10) - *(int *)&this_00->field_0x2cc;
          iVar8 = *(int *)(&DAT_007e1c50 + iVar10) - *(int *)&this_00->field_0x2d0;
          iVar12 = *(int *)(&DAT_007e24fc + iVar10) - *(int *)&this_00->field_0x2d4;
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
          thunk_FUN_004d76e0(this_00->field_0024,0,this_00->field_0018,iVar5,iVar8,iVar12,iVar4);
        }
        *(undefined4 *)&this_00[1].field_0x39 = PTR_00802a38->field_00E4;
        *(int *)&this_00[1].field_0x3d = local_8[2];
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (uVar7 != 0x122) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      piVar13 = (int *)param_1->field_0014;
      if (*piVar13 != *(int *)&this_00->field_0024) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)&this_00[1].field_0x29 = 1;
      *(int *)&this_00[1].field_0x2d = piVar13[2];
      *(undefined4 *)&this_00[1].field_0x31 = PTR_00802a38->field_00E4;
      *(int *)&this_00[1].field_0x35 = piVar13[1];
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (uVar7 != 0x4401) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    cVar15 = *(char *)(param_1->field_0014 + 0xe);
    if (cVar15 != '\t') {
      if (cVar15 != '\x17') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      pcVar14 = *(char **)(param_1->field_0014 + 0x17);
      if (*(int *)&this_00->field_0x2a4 != 0) {
        if (*pcVar14 != '\x1c') {
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
        *(undefined4 *)&this_00->field_0x2a4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (*pcVar14 != '\x1b') {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      if (((*(int *)&this_00->field_0x2ec == 2) && (0 < *(int *)&this_00->field_0x2a8)) &&
         (*(int *)&this_00->field_0x2a8 < 0x65)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x2a4 = 1;
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (((*(int *)&this_00->field_0x2ec == 2) && (0 < *(int *)&this_00->field_0x2a8)) &&
       (*(int *)&this_00->field_0x2a8 < 0x65)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    iVar4 = *(int *)&this_00[1].field_0x61;
    iVar10 = 3;
    *(undefined4 *)&this_00->field_0x2ec = 3;
    *(undefined4 *)&this_00->field_0x2e8 = 1;
    if (iVar4 == 0) {
      (*this_00->vtable->vfunc_90)(3,0x361);
    }
    SVar1 = this_00->field_0259;
    if (((SVar1 != 0x6c) || (*(int *)&this_00->field_0x251 != 3)) &&
       (((int)SVar1 < 0x54 || (0x5a < (int)SVar1)))) {
      puVar11 = &this_00->field_01D5;
      thunk_FUN_004ac6b0(puVar11,this_00->field_0x2f0);
      iVar4 = *(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4;
      thunk_FUN_004abce0(puVar11,this_00->field_0x2f0,
                         *(int *)(*(int *)&this_00[1].field_0x55 + iVar4 * 8),
                         *(int *)(*(int *)&this_00[1].field_0x55 + 4 + iVar4 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar11,this_00->field_0x2f0,
                 *(uint *)(*(int *)&this_00[1].field_0x55 +
                          (*(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4) * 8));
      STT3DSprC::StartShow((STT3DSprC *)puVar11,this_00->field_0x2f0,PTR_00802a38->field_00E4);
      if (*(int *)&this_00[1].field_0x61 == 0) goto LAB_004d600f;
      thunk_FUN_004ac6b0(puVar11,this_00->field_0x2f0 + -1);
      iVar4 = *(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4;
      thunk_FUN_004abce0(puVar11,this_00->field_0x2f0 - 1,
                         *(int *)(*(int *)&this_00[1].field_0x55 + iVar4 * 8),
                         *(int *)(*(int *)&this_00[1].field_0x55 + 4 + iVar4 * 8),'\0');
      STT3DSprC::SetCurFase
                ((STT3DSprC *)puVar11,this_00->field_0x2f0 + -1,
                 *(uint *)(*(int *)&this_00[1].field_0x55 +
                          (*(int *)&this_00->field_0x2ec + *(int *)&this_00->field_0x241 * 4) * 8));
      STT3DSprC::StartShow((STT3DSprC *)puVar11,this_00->field_0x2f0 - 1,PTR_00802a38->field_00E4);
    }
    if (*(int *)&this_00[1].field_0x61 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
LAB_004d600f:
    piVar13 = (int *)&this_00[1].field_0x41;
    piVar9 = &this_00->field_0308;
    do {
      if (*piVar9 != 0) {
        *piVar9 = 0;
        thunk_FUN_004ad430(*piVar13);
      }
      piVar13 = piVar13 + 1;
      piVar9 = piVar9 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar7 == 0x10f) {
    thunk_FUN_004d2fd0((int)this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  if (uVar7 < 4) {
    if (uVar7 == 3) {
      thunk_FUN_004d2760((AnonShape_004D2760_CB2BA53E *)this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (uVar7 != 0) {
      if (uVar7 != 2) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      Create((TLOEmbryoTy *)this_00,(AnonShape_004D11D0_880D99AA *)param_1->field_0014);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    thunk_FUN_004d32c0((STJellyGunC *)this_00);
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
    piVar13 = (int *)(*(int *)&this_00->field_0x1f5 + iVar4);
    auStack_17c[iVar10] = *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c + iVar4);
    aiStack_f4[iVar10] = piVar13[8];
    if (*piVar13 != 0) {
      cVar15 = (char)iVar10;
      iVar5 = thunk_FUN_004ac910(&this_00->field_01D5,cVar15);
      aiStack_138[iVar10] = iVar5;
      iVar5 = thunk_FUN_004ac910(&this_00->field_01D5,cVar15);
      uVar6 = thunk_FUN_004acdd0(&this_00->field_01D5,cVar15,iVar5);
      auStack_1c0[iVar10] = uVar6;
    }
    iVar4 = iVar4 + 0x24;
    iVar10 = iVar10 + 1;
  } while (iVar4 < 0x264);
  if (*(int *)&this_00->field_0x2ec == 0) {
    thunk_FUN_004d10a0(this_00,1);
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,this_00->field_0x2f0,PTR_00802a38->field_00E4);
    STT3DSprC::StartShow
              ((STT3DSprC *)&this_00->field_01D5,this_00->field_0x2f0 - 1,PTR_00802a38->field_00E4);
  }
  if (*(int *)&this_00->field_0x2dc == 0) {
    if ((*(uint *)&this_00->field_0x1f1 & 0x4000) == 0) goto LAB_004d59e7;
    uVar7 = thunk_FUN_004ab050();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    wsprintfA(local_b0,s__s_1i_007ac908,(&PTR_s_tlo_embws1_007bf3e8)[*(int *)&this_00[1].field_0x5d]
              ,uVar7);
    puVar11 = &this_00->field_01D5;
    iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)puVar11,0xe,DAT_0080678c,local_b0,0x1d);
    if (iVar4 != 0) {
      RaiseInternalException
                (iVar4,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x43a
                );
    }
    thunk_FUN_004abce0(puVar11,0xe,*(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),
                       *(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),'\0');
    STT3DSprC::SetCurFase
              ((STT3DSprC *)puVar11,'\x0e',
               *(uint *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4));
    STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,PTR_00802a38->field_00E4);
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar11,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&this_00[1].field_0x5d],0x1d);
    if (iVar4 != 0) {
      iVar10 = 0x441;
      goto LAB_004d5985;
    }
  }
  else {
    iVar4 = thunk_FUN_004ab050();
    puVar11 = &this_00->field_01D5;
    uVar7 = *(uint *)(PTR_DAT_007b5170 +
                     (iVar4 + (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d)
                              * 4) * 8);
    thunk_FUN_004abce0(puVar11,0xe,uVar7,uVar7,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar11,'\x0e',uVar7);
    STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,PTR_00802a38->field_00E4);
    if (**(int **)(*(int *)&this_00->field_0x1f5 + 0x1d4) < (int)uVar7) {
      uVar7 = 0;
    }
    thunk_FUN_004abce0(puVar11,0xd,uVar7,uVar7,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)puVar11,'\r',uVar7);
    STT3DSprC::StartShow((STT3DSprC *)puVar11,0xd,PTR_00802a38->field_00E4);
    if (*(int *)(PTR_PTR_007bb198 +
                (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d) * 0xc + 8) !=
        0) {
      iVar4 = thunk_FUN_004ab050();
      uVar7 = *(uint *)(PTR_DAT_007b8310 +
                       (iVar4 + (*(int *)&this_00[1].field_0x59 * 3 + *(int *)&this_00[1].field_0x5d
                                ) * 4) * 8);
      thunk_FUN_004abce0(puVar11,0xc,uVar7,uVar7,'\0');
      STT3DSprC::SetCurFase((STT3DSprC *)puVar11,'\f',uVar7);
      STT3DSprC::StartShow((STT3DSprC *)puVar11,0xc,PTR_00802a38->field_00E4);
    }
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar11,0x10,DAT_0080678c,
                       (&PTR_s_tlo_sha_ws_007bb1b4)[*(int *)&this_00[1].field_0x5d],0x1d);
    if (iVar4 != 0) {
      iVar10 = 0x459;
LAB_004d5985:
      RaiseInternalException
                (iVar4,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,
                 iVar10);
    }
  }
  puVar11 = &this_00->field_01D5;
  thunk_FUN_004abce0(puVar11,0x10,*(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),
                     *(int *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4),'\0');
  STT3DSprC::SetCurFase
            ((STT3DSprC *)puVar11,'\x10',
             *(uint *)(&DAT_0079104c + *(int *)&this_00[1].field_0x59 * 4));
  STT3DSprC::StartShow((STT3DSprC *)puVar11,0x10,PTR_00802a38->field_00E4);
  thunk_FUN_004acf50(puVar11,'\x10');
LAB_004d59e7:
  iVar10 = 0;
  iVar4 = 0;
  do {
    *(undefined4 *)(iVar4 + 0x1c + *(int *)&this_00->field_0x1f5) = auStack_17c[iVar10];
    *(int *)(iVar4 + 0x20 + *(int *)&this_00->field_0x1f5) = aiStack_f4[iVar10];
    iVar5 = *(int *)(iVar4 + *(int *)&this_00->field_0x1f5);
    if (iVar5 != 0) {
      *(undefined4 *)(*(int *)(iVar4 + *(int *)&this_00->field_0x1f5 + 4) + aiStack_138[iVar10] * 4)
           = *(undefined4 *)(aiStack_138[iVar10] * 4 + 0x31 + iVar5);
      uVar6 = auStack_1c0[iVar10];
      iVar5 = thunk_FUN_004ac910(&this_00->field_01D5,(char)iVar10);
      thunk_FUN_004ace00(&this_00->field_01D5,(char)iVar10,iVar5,uVar6);
    }
    iVar4 = iVar4 + 0x24;
    iVar10 = iVar10 + 1;
  } while (iVar4 < 0x264);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

