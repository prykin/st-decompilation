
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004c6440(void *this,float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
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
    piVar7 = local_20;
    FUN_006e1c20(DAT_00807598,param_1,param_2,(float)local_c * _DAT_00790504,&local_14,&local_18);
    if (local_14 < _DAT_0079034c) {
      lVar9 = Library::MSVCRT::__ftol();
      iVar8 = (short)lVar9 + -1;
    }
    else {
      lVar9 = Library::MSVCRT::__ftol();
      iVar8 = (int)(short)lVar9;
    }
    local_10 = iVar8;
    if (local_18 < _DAT_0079034c) {
      lVar9 = Library::MSVCRT::__ftol();
      local_8 = (short)lVar9 + -1;
    }
    else {
      lVar9 = Library::MSVCRT::__ftol();
      local_8 = (int)(short)lVar9;
    }
    pvVar4 = DAT_00802a88;
    if (((((-1 < iVar8) && (iVar8 < DAT_007fb240)) && (-1 < local_8)) && (local_8 < DAT_007fb242))
       && ((((((DAT_00802a88 == (void *)0x0 || (DAT_0080874d == 0xff)) ||
              ((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
               ((thunk_FUN_00558c00(DAT_00802a88,
                                    *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                                    local_10,local_8,&local_30,&local_34), (int)piVar7 < 0x79aed0 ||
                (0x79aee3 < (int)piVar7)))))) ||
             ((local_30 < 0 ||
              (((*(int *)((int)pvVar4 + 0x30) <= local_30 ||
                (iVar8 = *piVar7 + local_34, piVar7 = local_20, iVar8 < 0)) ||
               (*(int *)((int)pvVar4 + 0x34) <= iVar8)))))) ||
            ((*(int *)((int)pvVar4 + 0x4c) == 0 ||
             (*(char *)(iVar8 * *(int *)((int)pvVar4 + 0x30) + *(int *)((int)pvVar4 + 0x4c) +
                       local_30) != '\0')))) &&
           (iVar8 = local_10,
           thunk_FUN_004ae0b0(local_10,local_8,local_c,
                              *(Global_sub_004AE0B0_param_4Enum *)((int)this + 0x1c),
                              (uint)DAT_0080874d,&local_2c,&local_24,&local_1c,0,
                              *(int **)((int)this + 0x20)), local_24 != 0)))) break;
    local_20 = piVar7 + -1;
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
      iVar8 = *(int *)((int)this + 0x1c);
      if ((((iVar8 != 0x39) && (iVar8 != 0x4f)) && ((iVar8 != 0x4d && (iVar8 != 0x5e)))) &&
         (((((iVar8 < 0x54 || (0x5a < iVar8)) && (iVar8 != 0x61)) &&
           ((iVar8 != 0x65 && (iVar8 != 0x43)))) && (iVar8 != 0x73)))) {
        local_28 = 0;
        goto cf_common_exit_004C6899;
      }
      iVar8 = STT3DSprC::LoadSequence
                        (*(STT3DSprC **)((int)this + 0x2c),0,DAT_0080678c,
                         (&PTR_s_tlo_bldmark_si_007ad25c)
                         [*(byte *)(*(int *)((int)this + 0x10) + 0x112e)],0x1d);
      if (iVar8 != 0) {
        RaiseInternalException(iVar8,DAT_007ed77c,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x82);
      }
      iVar8 = 0;
      cVar1 = *(char *)(*(int *)((int)this + 0x10) + 0x112e);
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        iVar5 = *(int *)((int)this + 0x1c);
        if (iVar5 == 0x4f) {
          iVar8 = 1;
        }
        else if (iVar5 == 0x4d) {
          iVar8 = 2;
        }
        else if (iVar5 == 0x43) {
          iVar8 = 3;
        }
      }
      else {
        iVar8 = *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4);
      }
      thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,iVar8,iVar8,'\0');
      STT3DSprC::SetCurFase(*(STT3DSprC **)((int)this + 0x2c),'\0',iVar8);
      uVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
      STT3DSprC::StartShow(*(STT3DSprC **)((int)this + 0x2c),0,uVar6);
      iVar8 = local_10;
    }
  }
  else if (*(int *)((int)this + 0x24) == 0) {
    iVar5 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)this + 0x2c),0,DAT_0080678c,
                       *(byte **)(&DAT_007ad250 +
                                 (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112e) * 4),0x1d);
    if (iVar5 != 0) {
      RaiseInternalException(iVar5,DAT_007ed77c,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x77);
    }
    thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,
                       *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),
                       *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),'\0');
    STT3DSprC::SetCurFase
              (*(STT3DSprC **)((int)this + 0x2c),'\0',
               *(undefined4 *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4));
    uVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
    STT3DSprC::StartShow(*(STT3DSprC **)((int)this + 0x2c),0,uVar6);
  }
  thunk_FUN_004ad460(*(void **)((int)this + 0x2c),0);
  if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 0) {
    fVar10 = (float)local_8 * _DAT_007904f8 + _DAT_007904f4;
    fVar3 = (float)local_10 * _DAT_007904f8 + _DAT_007904f4;
LAB_004c6848:
    thunk_FUN_004ad3c0(*(void **)((int)this + 0x2c),fVar3,fVar10,
                       (float)local_c * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  }
  else {
    if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 1) {
      fVar10 = (float)(local_8 + 1) * _DAT_007904f8;
      fVar3 = (float)(iVar8 + 1) * _DAT_007904f8;
      goto LAB_004c6848;
    }
    iVar5 = ReportDebugMessage(s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x98,0,0,&DAT_007a4ccc,
                               s_error_007ad33c);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
  }
  *(int *)((int)this + 0x30) = iVar8;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar8;
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

