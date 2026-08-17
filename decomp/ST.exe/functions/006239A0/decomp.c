#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

undefined4 __thiscall STMineSetC::sub_006239A0(STMineSetC *this)

{
  uint uVar1;
  VisibleClassTy *this_00;
  byte bVar2;
  AnonReceiver_00636260 *this_01;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
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
    /* ST_CALLSITE[006239DD]: CALL 0x004014b5; direct=004014B5 STMineSetC::sub_00624920 */
    iVar3 = sub_00624920(this,this->field_02EE,&local_c,&local_10,&local_14);
    if (0 < iVar3) {
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
      /* ST_CALLSITE[00623A6C]: CALL 0x00405637; direct=00405637 STMineSetC::sub_006226C0 */
      bVar2 = sub_006226C0(this,(int)this->field_0047,(int)this->field_0049);
      this->field_0353 = bVar2;
    }
    thunk_FUN_00624000(this);
    if (this->field_0353 != '\0') {
      /* ST_CALLSITE[00623A8C]: CALL 0x004012c6; direct=004012C6 STMineSetC::LoadImagMineSet */
      iVar3 = LoadImagMineSet(this,1);
      if (iVar3 == 0) {
        /* ST_CALLSITE[00623A97]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
        sub_00622670(this);
      }
      if (this->field_0363 == nullptr) {
        this_01 = (AnonReceiver_00636260 *)thunk_FUN_00636200();
        this->field_0363 = (HoloTy *)this_01;
        if (this_01 != nullptr) {
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
    /* ST_CALLSITE[00623B3B]: CALL 0x00405c5e; direct=00405C5E STMineSetC::sub_00625730 */
    sub_00625730(this);
    thunk_FUN_00627790(this);
    this->field_02AE = CASE_4;
    iVar3 = thunk_FUN_00627d90(1);
    uVar4 = thunk_FUN_00627db0(this,this->field_02C2,this->field_02C6,iVar3);
    /* ST_CALLSITE[00623B83]: CALL 0x00403a4e; direct=00403A4E STAllPlayersC::UnRegisterMine */
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterMine
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar4), (uint8_t)((char)this->field_0262)),
               CONCAT22(extraout_var,this->field_0032),this);
    /* ST_CALLSITE[00623B91]: CALL 0x0040216c; direct=0040216C STMineSetC::sub_0041D2B0 */
    sub_0041D2B0(this);
    iVar3 = thunk_FUN_00495ff0(this->field_0047,this->field_0049,this->field_004B,this->field_008E,
                               (AnonShape_00495FF0_59081BDD *)this);
    if (iVar3 == 0) {
      this->field_0314 = this->field_0314 + -1;
    }
    if (this->field_02BA < 0) {
      /* ST_CALLSITE[00623BD4]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
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
      /* ST_CALLSITE[00623BFC]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
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
      /* ST_CALLSITE[00623C50]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,'\t',this->field_02DB);
      /* ST_CALLSITE[00623C59]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase((STT3DSprC *)&this->field_01D5,'\t');
    }
    if (this->field_02DB < this->field_02D7) {
      this->field_02DB = this->field_02DB + 1;
    }
  }
  if (this->field_02E0 != '\0') {
    if (this->field_02E1 == this->field_02E5) {
      this->field_02E0 = 0;
      /* ST_CALLSITE[00623C9E]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
      STT3DSprC::sub_004AD070((STT3DSprC *)&this->field_01D5,10);
    }
    else {
      /* ST_CALLSITE[00623CB0]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,'\n',this->field_02E1);
      /* ST_CALLSITE[00623CB9]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase((STT3DSprC *)&this->field_01D5,'\n');
      this->field_02E1 = this->field_02E1 + 1;
    }
  }
  uVar1 = this->field_02CE;
  if ((int)uVar1 < this->field_02D2) {
    /* ST_CALLSITE[00623CDF]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)&this->field_01D5,'\x0e',uVar1);
    /* ST_CALLSITE[00623CE8]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase((STT3DSprC *)&this->field_01D5,'\x0e');
LAB_00623d08:
    this->field_02CE = this->field_02CE + 1;
  }
  else if (uVar1 == this->field_02D2) {
    if (-1 < this->field_02BA) {
      /* ST_CALLSITE[00623D03]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
      STT3DSprC::sub_004AD070((STT3DSprC *)&this->field_01D5,0xe);
    }
    goto LAB_00623d08;
  }
  /* ST_CALLSITE[00623D5C]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)&this->field_01D5,(float)this->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
             (float)this->field_02C6 * _DAT_007904f8 * _DAT_007904f0,
             (float)this->field_02CA * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  this_00 = g_visibleClass_00802A88;
  if (this->field_02DB == this->field_02D7) {
    /* ST_CALLSITE[00623D73]: CALL 0x00404147; direct=00404147 STMineSetC::sub_00622670 */
    sub_00622670(this);
    return local_8;
  }
  if (g_visibleClass_00802A88 != nullptr) {
    lVar6 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar6;
    if ((DAT_0080874d != -1) && (this_00->field_00F8 != 0)) {
      piVar8 = &local_1c;
      piVar7 = &local_18;
      lVar6 = Library::MSVCRT::__ftol();
      iVar5 = (int)lVar6;
      lVar6 = Library::MSVCRT::__ftol();
      /* ST_CALLSITE[00623E05]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
      VisibleClassTy::sub_00558C00(this_00,this_00->field_010C,(int)lVar6,iVar5,piVar7,piVar8);
      if ((((-1 < iVar3) &&
           (((iVar3 < 5 && (-1 < local_18)) && (local_18 < (int)this_00->field_0030)))) &&
          (((local_1c = g_centeredOffsets5[iVar3] + local_1c, -1 < local_1c &&
            (local_1c < this_00->field_0034)) && (this_00->field_004C != nullptr)))) &&
         (this_00->field_004C[local_18 + local_1c * this_00->field_0030] == 0)) {
        if (this->field_02E9 == '\0') {
          return local_8;
        }
        thunk_FUN_004ad430((STT3DSprC *)&this->field_01D5);
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

