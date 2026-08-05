#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::ResetSelfCheckFlag
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall ResetSelfCheckFlag(STGameObjC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0041A82B RET | 0041A86A RET | 0041AA54 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall STGameObjC::ResetSelfCheckFlag(STGameObjC *this)

{
  uint uVar1;
  int iVar3;

  if (this->field_01CD != 1) {
    return;
  }
  this->field_01CD = 0;
  FreeAndNull(&this->field_011D);
  FreeAndNull(&this->field_0121);
  FreeAndNull(&this->field_0125);
  FreeAndNull(&this->field_0129);
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
        if (this->field_0171 != nullptr) {
          DArrayDestroy(this->field_0171);
        }
        if (this->field_0175 != nullptr) {
          DArrayDestroy(this->field_0175);
        }
        if (this->field_0179 != nullptr) {
          DArrayDestroy(this->field_0179);
        }
        if (this->field_017D != nullptr) {
          DArrayDestroy(this->field_017D);
        }
        if (this->field_0181 != nullptr) {
          DArrayDestroy(this->field_0181);
        }
        this->field_0171 = nullptr;
        this->field_0175 = nullptr;
        this->field_0179 = nullptr;
        this->field_017D = nullptr;
        this->field_0181 = nullptr;
        if (this->field_015D != nullptr) {
          DArrayDestroy(this->field_015D);
        }
        if (this->field_0161 != nullptr) {
          DArrayDestroy(this->field_0161);
        }
        if (this->field_0165 != nullptr) {
          DArrayDestroy(this->field_0165);
        }
        if (this->field_0169 != nullptr) {
          DArrayDestroy(this->field_0169);
        }
        if (this->field_016D != nullptr) {
          DArrayDestroy(this->field_016D);
        }
        this->field_015D = nullptr;
        this->field_0161 = nullptr;
        this->field_0165 = nullptr;
        this->field_0169 = nullptr;
        this->field_016D = nullptr;
        FreeAndNull(&this->field_0195);
        FreeAndNull(&this->field_0199);
        FreeAndNull(&this->field_01AD);
        FreeAndNull(&this->field_01B1);
        FreeAndNull(&this->field_01BD);
        FreeAndNull(&this->field_01C1);
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
      if ((DArrayTy *)this->field_0135 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0135);
      }
      if ((DArrayTy *)this->field_0139 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0139);
      }
      this->field_0135 = 0;
      this->field_0139 = 0;
      if ((DArrayTy *)this->field_012D != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_012D);
      }
      if ((DArrayTy *)this->field_0131 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0131);
      }
      this->field_012D = 0;
      this->field_0131 = 0;
      if ((DArrayTy *)this->field_014D != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_014D);
      }
      if ((DArrayTy *)this->field_0151 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0151);
      }
      if ((DArrayTy *)this->field_0155 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0155);
      }
      if ((DArrayTy *)this->field_0159 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0159);
      }
      this->field_014D = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      if ((DArrayTy *)this->field_013D != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_013D);
      }
      if ((DArrayTy *)this->field_0141 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0141);
      }
      if ((DArrayTy *)this->field_0145 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0145);
      }
      if ((DArrayTy *)this->field_0149 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_0149);
      }
      this->field_013D = 0;
      this->field_0141 = 0;
      this->field_0145 = 0;
      this->field_0149 = 0;
      FreeAndNull(&this->field_0185);
      FreeAndNull(&this->field_0189);
      FreeAndNull(&this->field_018D);
      FreeAndNull(&this->field_0191);
      if ((DArrayTy *)this->field_01A1 != nullptr) {
        DArrayDestroy((DArrayTy *)this->field_01A1);
        this->field_01A1 = 0;
      }
      if ((DArrayTy *)this->field_019D != nullptr) {
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

