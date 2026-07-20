
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_GnBom.cpp
   STGenBombC::LoadImagSpr */

undefined4 __thiscall STGenBombC::LoadImagSpr(STGenBombC *this,int param_1,int param_2)

{
  code *pcVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STGenBombC *pSVar4;
  int iVar5;
  AnonShape_004AB810_8E5693D5 *pAVar6;
  STT3DSprC *this_00;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar9;
  char *text;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STGenBombC *local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_nick_to_GnBom_cpp_007d0018,0x54b,0,iVar5,&DAT_007a4ccc,
                               s_STGenBombC__LoadImagSpr___007d003c);
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_nick_to_GnBom_cpp_007d0018,0x54d);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return uVar10;
  }
  if (*(int *)(local_10 + 0x252) == 0) {
    pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar6 == (AnonShape_004AB810_8E5693D5 *)0x0) {
      this_00 = (STT3DSprC *)0x0;
    }
    else {
      this_00 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
    }
    *(STT3DSprC **)(pSVar4 + 0x252) = this_00;
    if (this_00 == (STT3DSprC *)0x0) {
      return 0xffffffff;
    }
    iVar5 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar5 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_GnBom_cpp_007d0018,0x509);
      return 0xffff;
    }
  }
  if (param_1 == 0) {
    if (param_2 != 0) goto LAB_0061364b;
    iVar5 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)(pSVar4 + 0x252),0xd,DAT_00806774,s_exptem_007cf8cc,0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    iVar5 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)(pSVar4 + 0x252),0xf,DAT_00806764,s_bulb_n5_007cf8c4,0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    iVar5 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)(pSVar4 + 0x252),0xe,DAT_00806774,s_expmask2_007cf8d4,0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    STT3DSprC::StartShow(*(STT3DSprC **)(pSVar4 + 0x252),0xe,PTR_00802a38->field_00E4);
    uVar12 = 0x53;
    uVar10 = 0x5a;
    iVar5 = 1;
    pSVar4[0x251] = (STGenBombC)0x1;
    uVar7 = thunk_FUN_004ad650(*(int *)(pSVar4 + 0x252));
    FUN_006ea4e0(PTR_00807598,uVar7,iVar5,uVar10,uVar12);
    thunk_FUN_004ac700(*(void **)(pSVar4 + 0x252),'\x0f');
    STT3DSprC::StartShow(*(STT3DSprC **)(pSVar4 + 0x252),0xd,PTR_00802a38->field_00E4);
    iVar5 = (int)*(short *)(DAT_00806724 + 0x2c);
    uVar11 = 0;
    uVar7 = thunk_FUN_004ad650(*(int *)(pSVar4 + 0x252));
    FUN_006e9350(PTR_00807598,uVar7,uVar11,iVar5);
    pSVar4[0x250] = (STGenBombC)0x1;
    thunk_FUN_004acf20(*(void **)(pSVar4 + 0x252),DAT_008032b8,0x10);
    *(undefined4 *)(pSVar4 + 0x237) = 0;
    STT3DSprC::SetCurFase(*(STT3DSprC **)(pSVar4 + 0x252),'\r',0);
    STT3DSprC::ShowCurFase(*(STT3DSprC **)(pSVar4 + 0x252),'\r');
    thunk_FUN_004acfe0(*(void **)(pSVar4 + 0x252),'\x0e');
    thunk_FUN_004ad3c0(*(void **)(pSVar4 + 0x252),
                       (float)*(int *)(pSVar4 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pSVar4 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pSVar4 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
  }
  else {
    iVar5 = *(int *)(pSVar4 + 0x1f7);
    if (iVar5 == 0) {
      iVar5 = STT3DSprC::LoadSequence
                        (*(STT3DSprC **)(pSVar4 + 0x252),0xd,DAT_00806774,s_den_bmb_007cf8b4,0x1d);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
    else {
      if (iVar5 == 1) {
        text = s_ionbomb_007cf8bc;
      }
      else {
        if (iVar5 != 2) goto LAB_00613424;
        text = s_den_bmb_007cf8b4;
      }
      iVar5 = STT3DSprC::LoadSequence(*(STT3DSprC **)(pSVar4 + 0x252),0xd,DAT_00806774,text,0x1d);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
LAB_00613424:
    STT3DSprC::SetCurFase(*(STT3DSprC **)(pSVar4 + 0x252),'\r',*(uint *)(pSVar4 + 0x237));
    thunk_FUN_004ad3c0(*(void **)(pSVar4 + 0x252),
                       (float)*(int *)(pSVar4 + 0x22b) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pSVar4 + 0x22f) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(pSVar4 + 0x233) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    STT3DSprC::StartShow(*(STT3DSprC **)(pSVar4 + 0x252),0xd,PTR_00802a38->field_00E4);
    pSVar4[0x250] = (STGenBombC)0x1;
  }
  local_8 = 1;
LAB_0061364b:
  pVVar3 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  iVar5 = *(int *)(pSVar4 + 0x233);
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    local_c = (short)(((short)(iVar5 / 200) + sVar2) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
  }
  iVar5 = *(int *)(pSVar4 + 0x22f);
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar8 = *(int *)(pSVar4 + 0x22b);
  sVar2 = (short)(iVar8 >> 0x1f);
  if (iVar8 < 0) {
    iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar2) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar2) -
                        (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
  }
  if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
      (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar5,
                          &local_14,&local_18), local_c < 0)) || (4 < local_c)) {
    bVar9 = true;
  }
  else {
    if (((local_14 < 0) || ((int)pVVar3->field_0030 <= local_14)) ||
       (((&DAT_0079aed0)[local_c] + local_18 < 0 ||
        ((int)pVVar3->field_0034 <= (&DAT_0079aed0)[local_c] + local_18)))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (pVVar3->field_004C != 0)) {
      bVar9 = *(char *)(((&DAT_0079aed0)[local_c] + local_18) * pVVar3->field_0030 +
                        pVVar3->field_004C + local_14) != '\0';
    }
    else {
      bVar9 = true;
    }
  }
  if (bVar9) {
    if (pSVar4[0x250] == (STGenBombC)0x0) {
      thunk_FUN_004ad460(*(void **)(pSVar4 + 0x252),0);
      pSVar4[0x250] = (STGenBombC)0x1;
      g_currentExceptionFrame = local_5c.previous;
      return local_8;
    }
  }
  else if (pSVar4[0x250] != (STGenBombC)0x0) {
    thunk_FUN_004ad430(*(int *)(pSVar4 + 0x252));
    pSVar4[0x250] = (STGenBombC)0x0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
}

