#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::DCBomb */

int __thiscall STBoatC::DCBomb(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar6;
  int iVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;

  if ((param_1 != 0) && (param_1 != 1)) {
    if (this->field_05F8 != 0) {
      if (this->field_05F8 == 1) {
        if (0xe < this->field_07BE) {
          thunk_FUN_005fd750(this->field_0024,this->field_05EC * 0xc9 + 100,
                             this->field_05EE * 0xc9 + 100,100,(uint)(ushort)this->field_0032,0xf);
          this->field_07BE = this->field_07BE + -0xf;
          iVar6 = this->vfunc_D8();
          return -(uint)(iVar6 != 0);
        }
        thunk_FUN_005fd750(this->field_0024,this->field_05EC * 0xc9 + 100,
                           this->field_05EE * 0xc9 + 100,100,(uint)(ushort)this->field_0032,
                           this->field_07BE);
        this->field_07BE = 0;
      }
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    iVar6 = sub_0045FF50(this,2);
    if (iVar6 == -1) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3184,0,0,"%s",
                                 "STBoatC::DCBomb, DCBOMB_MOVE error");
      if (iVar5 == 0) {
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (iVar6 == 0) {
      this->field_05F8 = 1;
    }
    else if (iVar6 == 3) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = sub_004926C0(this,unaff_ESI);
      if (iVar6 != 1) {
        return 0;
      }
      sVar1 = this->field_05F6;
      sVar2 = this->field_05F4;
      sVar3 = this->field_05F2;
      goto LAB_00476c07;
    }
    return 2;
  }
  memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
  this->field_02C4 = 0;
  if (0 < this->field_07BE) {
    this->field_05EC = this->field_03E2;
    this->field_05EE = this->field_03E4;
    this->field_05F0 = this->field_03E6;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar6 = sub_004926C0(this,unaff_ESI);
    if (iVar6 == 1) {
      sVar1 = this->field_05F6;
      sVar2 = this->field_05F4;
      sVar3 = this->field_05F2;
      this->field_05F8 = 0;
LAB_00476c07:
      sub_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
      iVar6 = sub_0045FF50(this,0);
      return (-(uint)(iVar6 != -1) & 3) - 1;
    }
  }
  return 0;
}

