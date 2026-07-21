
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

undefined4 __fastcall FUN_006239a0(STMineSetC *param_1)

{
  VisibleClassTy *this;
  uint uVar1;
  AnonReceiver_00636260 *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  switch(param_1->field_02AE) {
  case CASE_0:
    return 1;
  case CASE_1:
    iVar2 = thunk_FUN_00624920(param_1,param_1->field_02EE,&local_c,&local_10,&local_14);
    if (0 < iVar2) {
      param_1->field_0054 = (short)param_1->field_02C2;
      param_1->field_0056 = (short)param_1->field_02C6;
      param_1->field_0058 = (short)param_1->field_02CA;
      param_1->field_02C2 = local_c;
      param_1->field_02C6 = local_10;
      param_1->field_02CA = local_14;
      return 1;
    }
    return local_8;
  case CASE_2:
    if (PTR_00802a38->field_00E4 < param_1->field_030F) {
      return 0;
    }
    if (param_1->field_0353 == '\0') {
      uVar1 = thunk_FUN_006226c0(param_1,(int)param_1->field_0047,(int)param_1->field_0049);
      param_1->field_0353 = (char)uVar1;
    }
    thunk_FUN_00624000((AnonShape_00624000_A9481D8E *)param_1);
    if (param_1->field_0353 != '\0') {
      iVar2 = STMineSetC::LoadImagMineSet(param_1,1);
      if (iVar2 == 0) {
        thunk_FUN_00622670(param_1);
      }
      if (param_1->field_0363 == (void *)0x0) {
        this_00 = (AnonReceiver_00636260 *)thunk_FUN_00636200();
        param_1->field_0363 = this_00;
        if (this_00 != (AnonReceiver_00636260 *)0x0) {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::thunk_FUN_00636260
                    (this_00,param_1->field_02C2,param_1->field_02C6,param_1->field_02CA + -0x28,
                     0x82,0x14,5,1);
        }
      }
    }
    param_1->field_02AE = CASE_3;
    param_1->field_030F = PTR_00802a38->field_00E4 + 7;
    return local_8;
  case CASE_3:
    if (PTR_00802a38->field_00E4 < param_1->field_030F) goto switchD_006239c1_caseD_4;
    thunk_FUN_00625730(param_1);
    thunk_FUN_00627790((AnonShape_00627790_BD208A1C *)param_1);
    param_1->field_02AE = CASE_4;
    iVar2 = thunk_FUN_00627d90(1);
    uVar3 = thunk_FUN_00627db0(param_1,param_1->field_02C2,param_1->field_02C6,iVar2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterMine
              (g_sTAllPlayers_007FA174,
               CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)&param_1->field_0262),
               CONCAT22(extraout_var,param_1->field_0032),(AnonShape_0044A150_E4FE1661 *)param_1);
    thunk_FUN_0041d2b0((AnonShape_0041D2B0_CE8C6BD3 *)param_1);
    iVar2 = thunk_FUN_00495ff0(param_1->field_0047,param_1->field_0049,param_1->field_004B,
                               (uint)(byte)param_1->field_008E,
                               (AnonShape_00495FF0_59081BDD *)param_1);
    if (iVar2 == 0) {
      param_1->field_0314 = param_1->field_0314 + -1;
    }
    if (param_1->field_02BA < 0) {
      thunk_FUN_00622670(param_1);
      return local_8;
    }
    break;
  case CASE_4:
switchD_006239c1_caseD_4:
    if (param_1->field_02BA < 0) {
      if (param_1->field_02AE != CASE_4) {
        return 0;
      }
      thunk_FUN_00622670(param_1);
      return local_8;
    }
    break;
  default:
    goto switchD_006239c1_default;
  }
  if (*(int *)(&DAT_007d04c0 + (uint)(byte)param_1->field_02AD * 4) <= param_1->field_02CE) {
    if (param_1->field_02DF != '\0') {
      if (param_1->field_02CE == *(int *)(&DAT_007d04c0 + (uint)(byte)param_1->field_02AD * 4)) {
        thunk_FUN_004ad0e0(&param_1->field_01D5,9);
      }
      STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_01D5,'\t',param_1->field_02DB);
      STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_01D5,'\t');
    }
    if (param_1->field_02DB < param_1->field_02D7) {
      param_1->field_02DB = param_1->field_02DB + 1;
    }
  }
  if (param_1->field_02E0 != '\0') {
    if (param_1->field_02E1 == param_1->field_02E5) {
      param_1->field_02E0 = 0;
      thunk_FUN_004ad070(&param_1->field_01D5,10);
    }
    else {
      STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_01D5,'\n',param_1->field_02E1);
      STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_01D5,'\n');
      param_1->field_02E1 = param_1->field_02E1 + 1;
    }
  }
  uVar1 = param_1->field_02CE;
  if ((int)uVar1 < param_1->field_02D2) {
    STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_01D5,'\x0e',uVar1);
    STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_01D5,'\x0e');
LAB_00623d08:
    param_1->field_02CE = param_1->field_02CE + 1;
  }
  else if (uVar1 == param_1->field_02D2) {
    if (-1 < param_1->field_02BA) {
      thunk_FUN_004ad070(&param_1->field_01D5,0xe);
    }
    goto LAB_00623d08;
  }
  thunk_FUN_004ad3c0(&param_1->field_01D5,(float)param_1->field_02C2 * _DAT_007904f8 * _DAT_007904f0
                     ,(float)param_1->field_02C6 * _DAT_007904f8 * _DAT_007904f0,
                     (float)param_1->field_02CA * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  this = g_visibleClass_00802A88;
  if (param_1->field_02DB == param_1->field_02D7) {
    thunk_FUN_00622670(param_1);
    return local_8;
  }
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    lVar5 = Library::MSVCRT::__ftol();
    iVar2 = (int)lVar5;
    if ((DAT_0080874d != -1) && (this->field_00F8 != 0)) {
      piVar7 = &local_1c;
      piVar6 = &local_18;
      lVar5 = Library::MSVCRT::__ftol();
      iVar4 = (int)lVar5;
      lVar5 = Library::MSVCRT::__ftol();
      thunk_FUN_00558c00(this,this->field_010C,(int)lVar5,iVar4,piVar6,piVar7);
      if ((((-1 < iVar2) && (((iVar2 < 5 && (-1 < local_18)) && (local_18 < this->field_0030)))) &&
          (((local_1c = g_centeredOffsets5[iVar2] + local_1c, -1 < local_1c &&
            (local_1c < this->field_0034)) && (this->field_004C != (byte *)0x0)))) &&
         (this->field_004C[local_18 + local_1c * this->field_0030] == 0)) {
        if (param_1->field_02E9 == '\0') {
          return local_8;
        }
        thunk_FUN_004ad430((int)&param_1->field_01D5);
        param_1->field_02E9 = 0;
        return local_8;
      }
    }
    if (param_1->field_02E9 == '\0') {
      thunk_FUN_004ad460(&param_1->field_01D5,0);
      param_1->field_02E9 = 1;
      return local_8;
    }
  }
switchD_006239c1_default:
  return local_8;
}

