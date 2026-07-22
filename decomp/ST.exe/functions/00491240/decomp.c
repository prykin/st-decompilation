#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::PrepareForLoading */

void __thiscall
STBoatC::PrepareForLoading
          (STBoatC *this,int param_1,short param_2,short param_3,short param_4,undefined2 param_5)

{
  short sVar1;
  code *pcVar2;
  int iVar3;

  if (param_1 == this->field_05A2) {
    sVar1 = this->field_005F;
    *(short *)&this->field_0x5ac = param_3;
    *(short *)&this->field_0x5ae = param_4;
    this->field_05B0 = param_5;
    this->field_05C0 = 1;
    this->field_05AA = param_2;
    switch((int)param_4 - (int)sVar1) {
    case 0:
      this->field_05B2 = 0xffff;
      break;
    case 1:
      this->field_05B4 = 0xffff;
      this->field_05B2 = sVar1 + 1;
      break;
    case 2:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = 0xffff;
      break;
    case 3:
      this->field_05B2 = sVar1 + 1;
      this->field_05B4 = sVar1 + 2;
      this->field_05B6 = sVar1 + 3;
      this->field_05B8 = 0xffff;
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
      this->field_05B8 = 0xffff;
      break;
    case -2:
      this->field_05B2 = sVar1 + -1;
      this->field_05B4 = sVar1 + -2;
      this->field_05B6 = 0xffff;
      break;
    case -1:
      this->field_05B4 = 0xffff;
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
      this->field_05C4 = 0;
      this->field_05BC = 0;
      sub_00481520(this,(int)param_2,(int)param_3,(int)(short)this->field_05B2);
      sub_00460260(this,0);
      return;
    }
    if ((this->field_0041 == (short)(this->field_05AA * 0xc9 + 100)) &&
       (this->field_0043 == (short)(*(short *)&this->field_0x5ac * 0xc9 + 100))) {
      if (this->field_0045 != (short)(*(short *)&this->field_0x5ae * 200 + 100)) {
        this->field_05C4 = 3;
        return;
      }
      if (this->field_006C == this->field_05B0) {
        this->field_05C4 = 6;
        return;
      }
      this->field_05C4 = 5;
      return;
    }
    this->field_05C4 = 1;
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

