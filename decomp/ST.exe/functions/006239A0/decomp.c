
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STMineSetC::sub_006239A0(STMineSetC *this)

{
  VisibleClassTy *this_00;
  uint uVar1;
  AnonReceiver_00636260 *this_01;
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
  switch(this->field_02AE) {
  case CASE_0:
    return 1;
  case CASE_1:
    iVar2 = sub_00624920(this,this->field_02EE,&local_c,&local_10,&local_14);
    if (0 < iVar2) {
      this->field_0054 = (short)this->field_02C2;
      this->field_0056 = (short)this->field_02C6;
      this->field_0058 = (short)this->field_02CA;
      this->field_02C2 = local_c;
      this->field_02C6 = local_10;
      this->field_02CA = local_14;
      return 1;
    }
    return local_8;
  case CASE_2:
    if (g_playSystem_00802A38->field_00E4 < this->field_030F) {
      return 0;
    }
    if (this->field_0353 == '\0') {
      uVar1 = sub_006226C0(this,(int)this->field_0047,(int)this->field_0049);
      this->field_0353 = (char)uVar1;
    }
    thunk_FUN_00624000((AnonShape_00624000_A9481D8E *)this);
    if (this->field_0353 != '\0') {
      iVar2 = LoadImagMineSet(this,1);
      if (iVar2 == 0) {
        sub_00622670(this);
      }
      if (this->field_0363 == (void *)0x0) {
        this_01 = (AnonReceiver_00636260 *)thunk_FUN_00636200();
        this->field_0363 = this_01;
        if (this_01 != (AnonReceiver_00636260 *)0x0) {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::thunk_FUN_00636260
                    (this_01,this->field_02C2,this->field_02C6,this->field_02CA + -0x28,0x82,0x14,5,
                     1);
        }
      }
    }
    this->field_02AE = CASE_3;
    this->field_030F = g_playSystem_00802A38->field_00E4 + 7;
    return local_8;
  case CASE_3:
    if (g_playSystem_00802A38->field_00E4 < this->field_030F) goto switchD_006239c1_caseD_4;
    sub_00625730(this);
    thunk_FUN_00627790((AnonShape_00627790_BD208A1C *)this);
    this->field_02AE = CASE_4;
    iVar2 = thunk_FUN_00627d90(1);
    uVar3 = thunk_FUN_00627db0(this,this->field_02C2,this->field_02C6,iVar2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterMine
              (g_allPlayers_007FA174,
               CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)&this->field_0262),
               CONCAT22(extraout_var,this->field_0032),(AnonShape_0044A150_E4FE1661 *)this);
    sub_0041D2B0(this);
    iVar2 = thunk_FUN_00495ff0(this->field_0047,this->field_0049,this->field_004B,
                               (uint)(byte)this->field_008E,(AnonShape_00495FF0_59081BDD *)this);
    if (iVar2 == 0) {
      this->field_0314 = this->field_0314 + -1;
    }
    if (this->field_02BA < 0) {
      sub_00622670(this);
      return local_8;
    }
    break;
  case CASE_4:
switchD_006239c1_caseD_4:
    if (this->field_02BA < 0) {
      if (this->field_02AE != CASE_4) {
        return 0;
      }
      sub_00622670(this);
      return local_8;
    }
    break;
  default:
    goto switchD_006239c1_default;
  }
  if (*(int *)(&DAT_007d04c0 + (uint)this->field_02AD * 4) <= this->field_02CE) {
    if (this->field_02DF != '\0') {
      if (this->field_02CE == *(int *)(&DAT_007d04c0 + (uint)this->field_02AD * 4)) {
        thunk_FUN_004ad0e0(&this->field_01D5,9);
      }
      STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,'\t',this->field_02DB);
      STT3DSprC::ShowCurFase((STT3DSprC *)&this->field_01D5,'\t');
    }
    if (this->field_02DB < this->field_02D7) {
      this->field_02DB = this->field_02DB + 1;
    }
  }
  if (this->field_02E0 != '\0') {
    if (this->field_02E1 == this->field_02E5) {
      this->field_02E0 = 0;
      STT3DSprC::sub_004AD070((STT3DSprC *)&this->field_01D5,10);
    }
    else {
      STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,'\n',this->field_02E1);
      STT3DSprC::ShowCurFase((STT3DSprC *)&this->field_01D5,'\n');
      this->field_02E1 = this->field_02E1 + 1;
    }
  }
  uVar1 = this->field_02CE;
  if ((int)uVar1 < this->field_02D2) {
    STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,'\x0e',uVar1);
    STT3DSprC::ShowCurFase((STT3DSprC *)&this->field_01D5,'\x0e');
LAB_00623d08:
    this->field_02CE = this->field_02CE + 1;
  }
  else if (uVar1 == this->field_02D2) {
    if (-1 < this->field_02BA) {
      STT3DSprC::sub_004AD070((STT3DSprC *)&this->field_01D5,0xe);
    }
    goto LAB_00623d08;
  }
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)&this->field_01D5,(float)this->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
             (float)this->field_02C6 * _DAT_007904f8 * _DAT_007904f0,
             (float)this->field_02CA * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  this_00 = g_visibleClass_00802A88;
  if (this->field_02DB == this->field_02D7) {
    sub_00622670(this);
    return local_8;
  }
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    lVar5 = Library::MSVCRT::__ftol();
    iVar2 = (int)lVar5;
    if ((DAT_0080874d != -1) && (this_00->field_00F8 != 0)) {
      piVar7 = &local_1c;
      piVar6 = &local_18;
      lVar5 = Library::MSVCRT::__ftol();
      iVar4 = (int)lVar5;
      lVar5 = Library::MSVCRT::__ftol();
      VisibleClassTy::sub_00558C00(this_00,this_00->field_010C,(int)lVar5,iVar4,piVar6,piVar7);
      if ((((-1 < iVar2) && (((iVar2 < 5 && (-1 < local_18)) && (local_18 < this_00->field_0030))))
          && (((local_1c = g_centeredOffsets5[iVar2] + local_1c, -1 < local_1c &&
               (local_1c < this_00->field_0034)) && (this_00->field_004C != (byte *)0x0)))) &&
         (this_00->field_004C[local_18 + local_1c * this_00->field_0030] == 0)) {
        if (this->field_02E9 == '\0') {
          return local_8;
        }
        thunk_FUN_004ad430((int)&this->field_01D5);
        this->field_02E9 = 0;
        return local_8;
      }
    }
    if (this->field_02E9 == '\0') {
      thunk_FUN_004ad460(&this->field_01D5,0);
      this->field_02E9 = 1;
      return local_8;
    }
  }
switchD_006239c1_default:
  return local_8;
}

