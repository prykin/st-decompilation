
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::LoadImagSpr */

undefined4 __thiscall
STExplosionC::LoadImagSpr(STExplosionC *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STExplosionC *pSVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  STT3DSprC *pSVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar10;
  InternalExceptionFrame local_68;
  undefined4 local_24;
  int local_20;
  int local_1c;
  STExplosionC *local_18;
  int local_14;
  char *local_10;
  int local_c;
  char *local_8;
  
  local_c = this->field_01E9;
  local_10 = (&PTR_s_expl_bm0_007ced98)[local_c];
  local_8 = (&PTR_s_expl_bt0_007ced70)[local_c];
  local_24 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar9 = ReportDebugMessage(s_E____titans_nick_to_Expl_cpp_007cf630,0x38c,0,iVar5,&DAT_007a4ccc,
                               s_STExplosionC__LoadImagSpr_007cf6b0);
    if (iVar9 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_nick_to_Expl_cpp_007cf630,0x38e);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if ((param_3 != '\0') && (local_18->field_02AF != (STT3DSprC *)0x0)) {
    local_8 = (&PTR_s_expl_bbt0_007cedc0)[local_c];
    iVar5 = STT3DSprC::LoadSequence(local_18->field_02AF,0xf,DAT_00806774,local_8,0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    STT3DSprC::SetCurFase(pSVar4->field_02AF,'\x0f',pSVar4->field_029F);
    thunk_FUN_004ac610(pSVar4->field_02AF,'\x0f');
    STT3DSprC::StartShow(pSVar4->field_02AF,0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
    uVar6 = thunk_FUN_004acd30(pSVar4->field_02AF,'\x0f');
    pSVar4->field_02A3 = uVar6;
    g_currentExceptionFrame = local_68.previous;
    return local_24;
  }
  if (local_18->field_02AF == (STT3DSprC *)0x0) {
    puVar7 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (puVar7 == (undefined4 *)0x0) {
      pSVar8 = (STT3DSprC *)0x0;
    }
    else {
      pSVar8 = (STT3DSprC *)thunk_FUN_004ab810(puVar7);
    }
    pSVar4->field_02AF = pSVar8;
  }
  if ((&DAT_007cede8)[local_c] == '\0') {
    iVar5 = STT3DSprC::Init(pSVar4->field_02AF,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar5 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_Expl_cpp_007cf630,0x36a);
      return 0xffff;
    }
  }
  else {
    iVar5 = STT3DSprC::Init(pSVar4->field_02AF,DAT_008073cc,0x78,0x56,0,0xf0,0xbe,0x11);
    if (iVar5 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_nick_to_Expl_cpp_007cf630,0x370);
      return 0xffff;
    }
    FUN_006e9210(DAT_00807598,pSVar4->field_02AF->field_0018);
  }
  iVar5 = STT3DSprC::LoadSequence(pSVar4->field_02AF,0xd,DAT_00806774,local_8,0x1d);
  if (iVar5 == 0) {
    iVar5 = STT3DSprC::LoadSequence(pSVar4->field_02AF,0xe,DAT_00806774,local_10,0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    STT3DSprC::SetCurFase(pSVar4->field_02AF,'\r',*(uint *)&pSVar4->field_0x296);
    thunk_FUN_004ad3c0(pSVar4->field_02AF,
                       (float)*(int *)&pSVar4->field_0x28a * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&pSVar4->field_0x28e * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)&pSVar4->field_0x292 * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    thunk_FUN_004ac610(pSVar4->field_02AF,'\r');
    STT3DSprC::StartShow(pSVar4->field_02AF,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(undefined4 *)&pSVar4->field_0x286 = 1;
    pVVar3 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar5 = *(int *)&pSVar4->field_0x292;
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        local_14 = (short)(((short)(iVar5 / 200) + sVar2) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_14 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
      }
      iVar5 = *(int *)&pSVar4->field_0x28e;
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      iVar9 = *(int *)&pSVar4->field_0x28a;
      sVar2 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar2) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar2) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,
                              iVar5,&local_1c,&local_20), local_14 < 0)) || (4 < local_14)) {
        bVar10 = true;
      }
      else {
        if (((local_1c < 0) || ((int)pVVar3->field_0030 <= local_1c)) ||
           (((&DAT_0079aed0)[local_14] + local_20 < 0 ||
            ((int)pVVar3->field_0034 <= (&DAT_0079aed0)[local_14] + local_20)))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((bVar10) && (pVVar3->field_004C != 0)) {
          bVar10 = *(char *)(((&DAT_0079aed0)[local_14] + local_20) * pVVar3->field_0030 +
                             pVVar3->field_004C + local_1c) != '\0';
        }
        else {
          bVar10 = true;
        }
      }
      if (!bVar10) {
        thunk_FUN_004ad430((int)pSVar4->field_02AF);
        *(undefined4 *)&pSVar4->field_0x286 = 0;
      }
      g_currentExceptionFrame = local_68.previous;
      return local_24;
    }
    g_currentExceptionFrame = local_68.previous;
    return local_24;
  }
  return 0xffff;
}

