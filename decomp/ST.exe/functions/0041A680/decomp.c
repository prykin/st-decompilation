#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::ResetSelfCheckFlag */

void __thiscall STGameObjC::ResetSelfCheckFlag(STGameObjC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;

  if (this->field_01CD != 1) {
    return;
  }
  this->field_01CD = 0;
  FreeAndNull((void **)&this->field_011D);
  FreeAndNull((void **)&this->field_0121);
  FreeAndNull((void **)&this->field_0125);
  FreeAndNull((void **)&this->field_0129);
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      FreeAndNull(&this->field_01AD);
      FreeAndNull(&this->field_01B1);
      FreeAndNull(&this->field_01C5);
      FreeAndNull(&this->field_01C9);
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        if ((DArrayTy *)this->field_0171 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0171);
        }
        if ((DArrayTy *)this->field_0175 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0175);
        }
        if ((DArrayTy *)this->field_0179 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0179);
        }
        if ((DArrayTy *)this->field_017D != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_017D);
        }
        if ((DArrayTy *)this->field_0181 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0181);
        }
        this->field_0171 = 0;
        this->field_0175 = 0;
        this->field_0179 = 0;
        this->field_017D = 0;
        this->field_0181 = 0;
        if ((DArrayTy *)this->field_015D != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_015D);
        }
        if ((DArrayTy *)this->field_0161 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0161);
        }
        if ((DArrayTy *)this->field_0165 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0165);
        }
        if ((DArrayTy *)this->field_0169 != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_0169);
        }
        if ((DArrayTy *)this->field_016D != (DArrayTy *)0x0) {
          DArrayDestroy((DArrayTy *)this->field_016D);
        }
        this->field_015D = 0;
        this->field_0161 = 0;
        this->field_0165 = 0;
        this->field_0169 = 0;
        this->field_016D = 0;
        FreeAndNull(&this->field_0195);
        FreeAndNull(&this->field_0199);
        FreeAndNull(&this->field_01AD);
        FreeAndNull(&this->field_01B1);
        FreeAndNull((void **)&this->field_01BD);
        FreeAndNull((void **)&this->field_01C1);
        return;
      }
      if (uVar1 == 0x5a) {
        return;
      }
    }
    else if (uVar1 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar1 == 0x1b8) {
      return;
    }
    if (uVar1 == 1000) {
      if ((DArrayTy *)this->field_0135 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0139);
      }
      this->field_0135 = 0;
      this->field_0139 = 0;
      if ((DArrayTy *)this->field_012D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_012D);
      }
      if ((DArrayTy *)this->field_0131 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0131);
      }
      this->field_012D = 0;
      this->field_0131 = 0;
      if ((DArrayTy *)this->field_014D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_014D);
      }
      if ((DArrayTy *)this->field_0151 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0151);
      }
      if ((DArrayTy *)this->field_0155 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0155);
      }
      if ((DArrayTy *)this->field_0159 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0159);
      }
      this->field_014D = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      if ((DArrayTy *)this->field_013D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_013D);
      }
      if ((DArrayTy *)this->field_0141 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0141);
      }
      if ((DArrayTy *)this->field_0145 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0145);
      }
      if ((DArrayTy *)this->field_0149 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_0149);
      }
      this->field_013D = 0;
      this->field_0141 = 0;
      this->field_0145 = 0;
      this->field_0149 = 0;
      FreeAndNull((void **)&this->field_0185);
      FreeAndNull((void **)&this->field_0189);
      FreeAndNull(&this->field_018D);
      FreeAndNull(&this->field_0191);
      if ((DArrayTy *)this->field_01A1 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_01A1);
        this->field_01A1 = 0;
      }
      if ((DArrayTy *)this->field_019D != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this->field_019D);
        this->field_019D = 0;
      }
      FreeAndNull(&this->field_01A5);
      FreeAndNull(&this->field_01A9);
      FreeAndNull(&this->field_01B5);
      FreeAndNull(&this->field_01B9);
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x5f5,0,0,"%s",
                             "STGameObjC::ResetSelfCheckFlag unknown game type");
  if (iVar3 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

