
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
    iVar2 = thunk_FUN_00624920(param_1,*(Global_sub_00624920_param_1Enum *)&param_1->field_0x2ee,
                               &local_c,&local_10,&local_14);
    if (0 < iVar2) {
      *(undefined2 *)&param_1->field_0x54 = *(undefined2 *)&param_1->field_0x2c2;
      *(undefined2 *)&param_1->field_0x56 = *(undefined2 *)&param_1->field_0x2c6;
      *(undefined2 *)&param_1->field_0x58 = *(undefined2 *)&param_1->field_0x2ca;
      *(int *)&param_1->field_0x2c2 = local_c;
      *(int *)&param_1->field_0x2c6 = local_10;
      *(int *)&param_1->field_0x2ca = local_14;
      return 1;
    }
    return local_8;
  case CASE_2:
    if ((uint)PTR_00802a38->field_00E4 < (uint)param_1->field_030F) {
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
      if (param_1->field_0363 == 0) {
        this_00 = (AnonReceiver_00636260 *)thunk_FUN_00636200();
        param_1->field_0363 = this_00;
        if (this_00 != (AnonReceiver_00636260 *)0x0) {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::thunk_FUN_00636260
                    (this_00,*(uint *)&param_1->field_0x2c2,*(int *)&param_1->field_0x2c6,
                     *(int *)&param_1->field_0x2ca + -0x28,0x82,0x14,5,1);
        }
      }
    }
    param_1->field_02AE = CASE_3;
    param_1->field_030F = PTR_00802a38->field_00E4 + 7;
    return local_8;
  case CASE_3:
    if ((uint)PTR_00802a38->field_00E4 < (uint)param_1->field_030F) goto switchD_006239c1_caseD_4;
    thunk_FUN_00625730(param_1);
    thunk_FUN_00627790((AnonShape_00627790_BD208A1C *)param_1);
    param_1->field_02AE = CASE_4;
    iVar2 = thunk_FUN_00627d90(1);
    uVar3 = thunk_FUN_00627db0(param_1,*(int *)&param_1->field_0x2c2,*(int *)&param_1->field_0x2c6,
                               iVar2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterMine
              (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)uVar3 >> 8),param_1->field_0x262),
               CONCAT22(extraout_var,*(undefined2 *)&param_1->field_0x32),
               (AnonShape_0044A150_E4FE1661 *)param_1);
    thunk_FUN_0041d2b0((AnonShape_0041D2B0_CE8C6BD3 *)param_1);
    iVar2 = thunk_FUN_00495ff0(param_1->field_0047,param_1->field_0049,param_1->field_004B,
                               (uint)(byte)param_1->field_0x8e,
                               (AnonShape_00495FF0_59081BDD *)param_1);
    if (iVar2 == 0) {
      param_1->field_0314 = param_1->field_0314 + -1;
    }
    if ((int)param_1->field_02BA < 0) {
      thunk_FUN_00622670(param_1);
      return local_8;
    }
    break;
  case CASE_4:
switchD_006239c1_caseD_4:
    if ((int)param_1->field_02BA < 0) {
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
  if (*(int *)(&DAT_007d04c0 + (uint)(byte)param_1->field_02AD * 4) <= *(int *)&param_1->field_0x2ce
     ) {
    if (param_1->field_0x2df != '\0') {
      if (*(int *)&param_1->field_0x2ce ==
          *(int *)(&DAT_007d04c0 + (uint)(byte)param_1->field_02AD * 4)) {
        thunk_FUN_004ad0e0(&param_1->field_01D5,9);
      }
      STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_01D5,'\t',*(uint *)&param_1->field_0x2db);
      STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_01D5,'\t');
    }
    if (*(int *)&param_1->field_0x2db < *(int *)&param_1->field_0x2d7) {
      *(int *)&param_1->field_0x2db = *(int *)&param_1->field_0x2db + 1;
    }
  }
  if (param_1->field_0x2e0 != '\0') {
    if (*(uint *)&param_1->field_0x2e1 == *(uint *)&param_1->field_0x2e5) {
      param_1->field_0x2e0 = 0;
      thunk_FUN_004ad070(&param_1->field_01D5,10);
    }
    else {
      STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_01D5,'\n',*(uint *)&param_1->field_0x2e1);
      STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_01D5,'\n');
      *(int *)&param_1->field_0x2e1 = *(int *)&param_1->field_0x2e1 + 1;
    }
  }
  uVar1 = *(uint *)&param_1->field_0x2ce;
  if ((int)uVar1 < (int)*(uint *)&param_1->field_0x2d2) {
    STT3DSprC::SetCurFase((STT3DSprC *)&param_1->field_01D5,'\x0e',uVar1);
    STT3DSprC::ShowCurFase((STT3DSprC *)&param_1->field_01D5,'\x0e');
LAB_00623d08:
    *(int *)&param_1->field_0x2ce = *(int *)&param_1->field_0x2ce + 1;
  }
  else if (uVar1 == *(uint *)&param_1->field_0x2d2) {
    if (-1 < (int)param_1->field_02BA) {
      thunk_FUN_004ad070(&param_1->field_01D5,0xe);
    }
    goto LAB_00623d08;
  }
  thunk_FUN_004ad3c0(&param_1->field_01D5,
                     (float)*(int *)&param_1->field_0x2c2 * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)&param_1->field_0x2c6 * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)&param_1->field_0x2ca * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
  this = g_visibleClass_00802A88;
  if (*(int *)&param_1->field_0x2db == *(int *)&param_1->field_0x2d7) {
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
      if ((((-1 < iVar2) && (((iVar2 < 5 && (-1 < local_18)) && (local_18 < (int)this->field_0030)))
           ) && (((local_1c = (&DAT_0079aed0)[iVar2] + local_1c, -1 < local_1c &&
                  (local_1c < (int)this->field_0034)) && (this->field_004C != 0)))) &&
         (*(char *)(local_1c * this->field_0030 + this->field_004C + local_18) == '\0')) {
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

