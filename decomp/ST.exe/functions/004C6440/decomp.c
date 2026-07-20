
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_BldMark.cpp
   Diagnostic line evidence: 119 | 130 | 152 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall
FUN_004c6440(void *this,float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_28 = 0;
  local_c = 3;
  local_20 = &DAT_0079aedc;
  while( true ) {
    piVar8 = local_20;
    FUN_006e1c20(DAT_00807598,param_1,param_2,(float)local_c * _DAT_00790504,&local_14,&local_18);
    if (local_14 < _DAT_0079034c) {
      lVar11 = Library::MSVCRT::__ftol();
      iVar9 = (short)lVar11 + -1;
    }
    else {
      lVar11 = Library::MSVCRT::__ftol();
      iVar9 = (int)(short)lVar11;
    }
    local_10 = iVar9;
    if (local_18 < _DAT_0079034c) {
      lVar11 = Library::MSVCRT::__ftol();
      local_8 = (short)lVar11 + -1;
    }
    else {
      lVar11 = Library::MSVCRT::__ftol();
      local_8 = (int)(short)lVar11;
    }
    pVVar4 = g_visibleClass_00802A88;
    if (((((-1 < iVar9) && (iVar9 < SHORT_007fb240)) && (-1 < local_8)) &&
        (local_8 < SHORT_007fb242)) &&
       ((((((g_visibleClass_00802A88 == (VisibleClassTy *)0x0 || (DAT_0080874d == 0xff)) ||
           ((g_visibleClass_00802A88->field_00F8 == 0 ||
            ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                 local_10,local_8,&local_30,&local_34), (int)piVar8 < 0x79aed0 ||
             (0x79aee3 < (int)piVar8)))))) ||
          ((local_30 < 0 ||
           ((((int)pVVar4->field_0030 <= local_30 ||
             (iVar9 = *piVar8 + local_34, piVar8 = local_20, iVar9 < 0)) ||
            ((int)pVVar4->field_0034 <= iVar9)))))) ||
         ((pVVar4->field_004C == 0 ||
          (*(char *)(iVar9 * pVVar4->field_0030 + pVVar4->field_004C + local_30) != '\0')))) &&
        (iVar9 = local_10,
        thunk_FUN_004ae0b0(local_10,local_8,local_c,
                           *(Global_sub_004AE0B0_param_4Enum *)((int)this + 0x1c),(uint)DAT_0080874d
                           ,&local_2c,&local_24,&local_1c,0,*(int **)((int)this + 0x20)),
        local_24 != 0)))) break;
    local_20 = piVar8 + -1;
    local_c = local_c + -1;
    if ((int)local_20 < 0x79aed0) {
cf_common_exit_004C6899:
      if (((*(int *)((int)this + 0x24) != 0) || (*(int *)((int)this + 0x28) != 0)) &&
         (local_28 == 0)) {
        thunk_FUN_004ad430(*(int *)((int)this + 0x2c));
        *(undefined4 *)((int)this + 0x24) = 0;
        *(undefined4 *)((int)this + 0x28) = 0;
      }
      return *(undefined4 *)((int)this + 0x24);
    }
  }
  local_28 = 1;
  if (local_1c == 0) {
    if (*(int *)((int)this + 0x28) == 0) {
      iVar9 = *(int *)((int)this + 0x1c);
      if ((((iVar9 != 0x39) && (iVar9 != 0x4f)) && ((iVar9 != 0x4d && (iVar9 != 0x5e)))) &&
         (((((iVar9 < 0x54 || (0x5a < iVar9)) && (iVar9 != 0x61)) &&
           ((iVar9 != 0x65 && (iVar9 != 0x43)))) && (iVar9 != 0x73)))) {
        local_28 = 0;
        goto cf_common_exit_004C6899;
      }
      iVar9 = STT3DSprC::LoadSequence
                        (*(STT3DSprC **)((int)this + 0x2c),0,DAT_0080678c,
                         (&PTR_s_tlo_bldmark_si_007ad25c)
                         [*(byte *)(*(int *)((int)this + 0x10) + 0x112e)],0x1d);
      if (iVar9 != 0) {
        RaiseInternalException
                  (iVar9,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,
                   0x82);
      }
      uVar10 = 0;
      cVar1 = *(char *)(*(int *)((int)this + 0x10) + 0x112e);
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        iVar9 = *(int *)((int)this + 0x1c);
        if (iVar9 == 0x4f) {
          uVar10 = 1;
        }
        else if (iVar9 == 0x4d) {
          uVar10 = 2;
        }
        else if (iVar9 == 0x43) {
          uVar10 = 3;
        }
      }
      else {
        uVar10 = *(uint *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4);
      }
      thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,uVar10,uVar10,'\0');
      STT3DSprC::SetCurFase(*(STT3DSprC **)((int)this + 0x2c),'\0',uVar10);
      DVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
      STT3DSprC::StartShow(*(STT3DSprC **)((int)this + 0x2c),0,DVar6);
      iVar9 = local_10;
    }
  }
  else if (*(int *)((int)this + 0x24) == 0) {
    iVar5 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)this + 0x2c),0,DAT_0080678c,
                       *(char **)(&DAT_007ad250 +
                                 (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112e) * 4),0x1d);
    if (iVar5 != 0) {
      RaiseInternalException
                (iVar5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x77)
      ;
    }
    thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,
                       *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),
                       *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),'\0');
    STT3DSprC::SetCurFase
              (*(STT3DSprC **)((int)this + 0x2c),'\0',
               *(uint *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4));
    DVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
    STT3DSprC::StartShow(*(STT3DSprC **)((int)this + 0x2c),0,DVar6);
  }
  thunk_FUN_004ad460(*(void **)((int)this + 0x2c),0);
  if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 0) {
    fVar12 = (float)local_8 * _DAT_007904f8 + _DAT_007904f4;
    fVar3 = (float)local_10 * _DAT_007904f8 + _DAT_007904f4;
LAB_004c6848:
    thunk_FUN_004ad3c0(*(void **)((int)this + 0x2c),fVar3,fVar12,
                       (float)local_c * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  }
  else {
    if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 1) {
      fVar12 = (float)(local_8 + 1) * _DAT_007904f8;
      fVar3 = (float)(iVar9 + 1) * _DAT_007904f8;
      goto LAB_004c6848;
    }
    iVar5 = ReportDebugMessage(s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x98,0,0,&DAT_007a4ccc,
                               s_error_007ad33c);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
  }
  *(int *)((int)this + 0x30) = iVar9;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar9;
  }
  *(int *)((int)this + 0x34) = local_8;
  if (param_3 != (int *)0x0) {
    *param_4 = local_8;
  }
  *(int *)((int)this + 0x38) = local_c;
  if (param_3 != (int *)0x0) {
    *param_5 = local_c;
  }
  if (local_1c == 0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x24) = 1;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  goto cf_common_exit_004C6899;
}

