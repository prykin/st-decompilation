#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::LifeFish

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall LifeFish(STFishC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0057CFB3 RET | 0057D2AB RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType

   [STSwitchEnumApplier] Switch target field_023B uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_023BState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

void __thiscall STFishC::LifeFish(STFishC *this)

{
  undefined4 *this_00;
  STFishC_field_023BState SVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar4;
  int local_EAX_271;
  int local_EAX_344;
  STFishC_field_023BState SVar5_mg2;
  int local_EAX_471;
  int iVar5;
  STFishC_field_023BState SVar5_mg1;
  char cVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  uint local_8;

  iVar3 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this);
  this_00 = &this->field_01D5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((STT3DSprC *)this_00);
    Library::Ourlib::ST3DSMAP::SprSetVisible((void *)this->field_0211,uVar4,iVar3);
    iVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar2 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((STT3DSprC *)this_00);
    Library::Ourlib::ST3DSMAP::SprSetVisible((void *)this->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar4 = thunk_FUN_004ad650((STT3DSprC *)this_00);
  FUN_006e6870((void *)this->field_0211,iVar4,iVar3);
  SVar1 = this->field_023B;
  if (SVar1 == CASE_4) {
    iVar3 = this->vfunc_20();
    if (iVar3 == -1) {
      local_EAX_271 =
           ReportDebugMessage("E:\\__titans\\Igor\\To_fish.cpp",0x709,0,0,"%s",
                              "stop move error");
      if (local_EAX_271 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (iVar3 == 1) {
      cVar6 = '\0';
      if (this->field_0267 == CASE_E7) {
        cVar6 = -2;
      }
      else if (this->field_0267 == CASE_E9) {
        cVar6 = -1;
      }
      thunk_FUN_00417ff0(this,cVar6 + 7);
      thunk_FUN_00418010(this,cVar6 + 6);
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                ((AnonReceiver_004167A0 *)this,this->field_0235,this->field_0237,this->field_0239);
      this->field_023B = CASE_1;
    }
  }
  else if (SVar1 == CASE_1) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar3 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar4 = 0;
      }
      else {
        if (iVar3 != 2) {
          local_EAX_344 =
               ReportDebugMessage("E:\\__titans\\Igor\\To_fish.cpp",0x72d,0,0,"%s",
                                  "STFishC::LifeFish Error Move");
          if (local_EAX_344 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (this->field_023F < 0xf) goto LAB_0057cfe0;
        uVar4 = 1;
      }
      SVar5_mg2 = sub_0057D5F0(this,uVar4);
      this->field_023B = SVar5_mg2;
      this->field_023F = 0;
    }
  }
  else if (SVar1 == 2) {
    iVar3 = thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    if (iVar3 == 0) {
      this->field_023B = CASE_0;
      this->field_023F = 7;
    }
    else if ((iVar3 != 2) && (iVar3 != 3)) {
      local_EAX_471 =
           ReportDebugMessage("E:\\__titans\\Igor\\To_fish.cpp",0x740,0,0,"%s",
                              "STFishC::LifeFish Error Move");
      if (local_EAX_471 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else if (SVar1 == CASE_5) {
    iVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,'\b');
    iVar5 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar5 == iVar3 + -1) {
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
      sub_0057BF20(this);
      this->field_023B = CASE_3;
      return;
    }
  }
  else if ((0xf < this->field_023F) && (iVar3 = this->vfunc_20(), iVar3 == 1)) {
    this->field_023F = 0;
    SVar5_mg1 = sub_0057D5F0(this,1);
    this->field_023B = SVar5_mg1;
  }
LAB_0057cfe0:
  switch(this->field_0267) {
  case CASE_E7:
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',g_playSystem_00802A38->field_00E4 % 0x78 >> 1);
    break;
  case CASE_E8:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = g_playSystem_00802A38->field_00E4 % 0x30 >> 2;
    local_8 = uVar4 + (iVar3 / 3) * 0xc;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xc;
    goto LAB_0057d24b;
  case CASE_E9:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = g_playSystem_00802A38->field_00E4 % 0xc >> 1;
    local_8 = uVar4 + (iVar3 / 3) * 6;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 6;
LAB_0057d24b:
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',uVar4);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',local_8);
    break;
  case CASE_EA:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xf +
               g_playSystem_00802A38->field_00E4 % 0xf);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',iVar3 / 3);
    break;
  case CASE_EB:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = g_playSystem_00802A38->field_00E4 % 0x14;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x14);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',uVar4 + (iVar3 / 3) * 0x14);
    break;
  default:
    goto switchD_0057cff4_default;
  }
  STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
switchD_0057cff4_default:
  this->field_023F = this->field_023F + 1;
  this->vfunc_D8();
  return;
}

