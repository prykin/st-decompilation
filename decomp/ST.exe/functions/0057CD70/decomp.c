#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::LifeFish

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

void __thiscall STFishC::LifeFish(STFishC *this,int *param_1)

{
  undefined4 *this_00;
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  uint local_8;

  iVar2 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this);
  this_00 = &this->field_01D5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar3,iVar2);
    iVar2 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar2 == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650((int)this_00);
    FUN_006eabf0((void *)this->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = thunk_FUN_004ad650((int)this_00);
  FUN_006e6870((void *)this->field_0211,iVar4,iVar2);
  iVar2 = this->field_023B;
  if (iVar2 == 4) {
    iVar2 = (*this->vtable->vfunc_20)();
    if (iVar2 == -1) {
      iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\To_fish.cpp",0x709,0,0,"%s",
                                 "stop move error");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (iVar2 == 1) {
      cVar6 = '\0';
      if (this->field_0267 == CASE_E7) {
        cVar6 = -2;
      }
      else if (this->field_0267 == CASE_E9) {
        cVar6 = -1;
      }
      thunk_FUN_00417ff0(this,cVar6 + '\a');
      thunk_FUN_00418010(this,cVar6 + '\x06');
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                ((AnonReceiver_004167A0 *)this,this->field_0235,this->field_0237,this->field_0239);
      this->field_023B = 1;
    }
  }
  else if (iVar2 == 1) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar2 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        uVar3 = 0;
      }
      else {
        if (iVar2 != 2) {
          iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\To_fish.cpp",0x72d,0,0,"%s"
                                     ,"STFishC::LifeFish Error Move");
          if (iVar2 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (this->field_023F < 0xf) goto LAB_0057cfe0;
        uVar3 = 1;
      }
      uVar5 = sub_0057D5F0(this,uVar3);
      this->field_023B = uVar5;
      this->field_023F = 0;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    if (iVar2 == 0) {
      this->field_023B = 0;
      this->field_023F = 7;
    }
    else if ((iVar2 != 2) && (iVar2 != 3)) {
      iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\To_fish.cpp",0x740,0,0,"%s",
                                 "STFishC::LifeFish Error Move");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else if (iVar2 == 5) {
    iVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,'\b');
    iVar4 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar4 == iVar2 + -1) {
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
      sub_0057BF20(this);
      this->field_023B = 3;
      return;
    }
  }
  else if ((0xf < this->field_023F) && (iVar2 = (*this->vtable->vfunc_20)(), iVar2 == 1)) {
    this->field_023F = 0;
    uVar5 = sub_0057D5F0(this,1);
    this->field_023B = uVar5;
  }
LAB_0057cfe0:
  switch(this->field_0267) {
  case CASE_E7:
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',g_playSystem_00802A38->field_00E4 % 0x78 >> 1)
    ;
    break;
  case CASE_E8:
    iVar2 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar3 = g_playSystem_00802A38->field_00E4 % 0x30 >> 2;
    local_8 = uVar3 + (iVar2 / 3) * 0xc;
    uVar3 = uVar3 + (((iVar2 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xc;
    goto LAB_0057d24b;
  case CASE_E9:
    iVar2 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar3 = g_playSystem_00802A38->field_00E4 % 0xc >> 1;
    local_8 = uVar3 + (iVar2 / 3) * 6;
    uVar3 = uVar3 + (((iVar2 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 6;
LAB_0057d24b:
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',uVar3);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',local_8);
    break;
  case CASE_EA:
    iVar2 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               (((iVar2 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xf +
               g_playSystem_00802A38->field_00E4 % 0xf);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',iVar2 / 3);
    break;
  case CASE_EB:
    iVar2 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar3 = g_playSystem_00802A38->field_00E4 % 0x14;
    STT3DSprC::SetCurFase
              ((STT3DSprC *)this_00,'\x0e',
               uVar3 + (((iVar2 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x14);
    STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',uVar3 + (iVar2 / 3) * 0x14);
    break;
  default:
    goto switchD_0057cff4_default;
  }
  STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
switchD_0057cff4_default:
  this->field_023F = this->field_023F + 1;
  (*this->vtable->vfunc_D8)();
  return;
}

