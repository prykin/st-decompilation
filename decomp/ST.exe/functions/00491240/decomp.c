#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::PrepareForLoading

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00491287 MOV DX,word ptr
   [EBP + 0x18]

   [STSwitchEnumApplier] Switch target field_05C4 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_05C4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STSwitchEnumApplier] Switch target field_05C4 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_05C4State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

void __thiscall
STBoatC::PrepareForLoading
          (STBoatC *this,int param_1,short param_2,short param_3,short param_4,ushort param_5)

{
  short sVar1;
  int iVar3;

  if ((AnonShape_005EFAE0_B406B78B *)param_1 == this->field_05A2) {
    sVar1 = this->field_005F;
    *(short *)&this->field_0x5ac = param_3;
    *(short *)&this->field_0x5ae = param_4;
    this->field_05B0 = param_5;
    this->field_05C0 = 1;
    this->field_05AA = param_2;
    switch((int)param_4 - (int)sVar1) {
    case 0:
      this->field_05B2 = -1;
      break;
    case 1:
      this->field_05B4 = -1;
      this->field_05B2 = sVar1 + 1;
      break;
    case 2:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = -1;
      break;
    case 3:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = sVar1 + 3;
      this->field_05B8 = -1;
      break;
    case 4:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = sVar1 + 3;
      this->field_05B8 = sVar1 + 4;
      this->field_05BA = 0xffff;
      break;
    case -4:
      this->field_05B2 = sVar1 + -1;
      this->field_05B4 = sVar1 + -2;
      this->field_05B6 = sVar1 + -3;
      this->field_05B8 = sVar1 + -4;
      this->field_05BA = 0xffff;
      break;
    case -3:
      this->field_05B2 = sVar1 + -1;
      this->field_05B4 = sVar1 + -2;
      this->field_05B6 = sVar1 + -3;
      this->field_05B8 = -1;
      break;
    case -2:
      this->field_05B2 = sVar1 + -1;
      this->field_05B4 = sVar1 + -2;
      this->field_05B6 = -1;
      break;
    case -1:
      this->field_05B4 = -1;
      this->field_05B2 = sVar1 + -1;
      break;
    default:
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4fe6,0,0,"%s",
                                 "STBoatC::PrepareForLoading too much");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                 0x4fe6);
    }
    if (this->field_05B2 != -1) {
      this->field_05C4 = CASE_0;
      this->field_05BC = 0;
      /* ST_CALLSITE[0049146E]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)param_2,(int)param_3,(int)this->field_05B2);
      /* ST_CALLSITE[00491476]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
      sub_00460260(this,0);
      return;
    }
    if ((this->field_0041 == (short)(this->field_05AA * 0xc9 + 100)) &&
       (this->field_0043 == (short)(*(short *)&this->field_0x5ac * 0xc9 + 100))) {
      if (this->field_0045 != (short)(*(short *)&this->field_0x5ae * 200 + 100)) {
        this->field_05C4 = CASE_3;
        return;
      }
      if (this->field_006C == this->field_05B0) {
        this->field_05C4 = CASE_6;
        return;
      }
      this->field_05C4 = CASE_5;
      return;
    }
    this->field_05C4 = CASE_1;
  }
  else {
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4fcb,0,0,"%s",
                               "STBoatC::PrepareForLoading name!=swli.lname");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return;
}

