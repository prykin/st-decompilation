#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::DCBomb */

int __thiscall STBoatC::DCBomb(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;

  if ((param_1 != 0) && (param_1 != 1)) {
    if (this->field_05F8 != 0) {
      if (this->field_05F8 == 1) {
        if (0xe < this->field_07BE) {
          thunk_FUN_005fd750(this->field_0024,*(short *)&this->field_0x5ec * 0xc9 + 100,
                             *(short *)&this->field_0x5ee * 0xc9 + 100,100,
                             (uint)(ushort)this->field_0032,0xf);
          this->field_07BE = this->field_07BE + -0xf;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar5 = (*(code *)this->vtable->field_00D8)();
          return -(uint)(iVar5 != 0);
        }
        thunk_FUN_005fd750(this->field_0024,*(short *)&this->field_0x5ec * 0xc9 + 100,
                           *(short *)&this->field_0x5ee * 0xc9 + 100,100,
                           (uint)(ushort)this->field_0032,this->field_07BE);
        this->field_07BE = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (*(code *)this->vtable->field_00D8)();
      return -(uint)(iVar5 != 0);
    }
    iVar5 = sub_0045FF50(this,2);
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3184,0,0,"%s",
                                 "STBoatC::DCBomb, DCBOMB_MOVE error");
      if (iVar5 == 0) {
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (iVar5 == 0) {
      this->field_05F8 = 1;
    }
    else if (iVar5 == 3) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar5 = sub_004926C0(this,unaff_ESI);
      if (iVar5 != 1) {
        return 0;
      }
      sVar1 = *(short *)&this->field_0x5f6;
      sVar2 = *(short *)&this->field_0x5f4;
      sVar3 = *(short *)&this->field_0x5f2;
      goto LAB_00476c07;
    }
    return 2;
  }
  memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
  this->field_02C4 = 0;
  if (0 < this->field_07BE) {
    *(undefined2 *)&this->field_0x5ec = this->field_03E2;
    *(undefined2 *)&this->field_0x5ee = this->field_03E4;
    *(undefined2 *)&this->field_0x5f0 = this->field_03E6;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar5 = sub_004926C0(this,unaff_ESI);
    if (iVar5 == 1) {
      sVar1 = *(short *)&this->field_0x5f6;
      sVar2 = *(short *)&this->field_0x5f4;
      sVar3 = *(short *)&this->field_0x5f2;
      this->field_05F8 = 0;
LAB_00476c07:
      sub_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
      iVar5 = sub_0045FF50(this,0);
      return (-(uint)(iVar5 != -1) & 3) - 1;
    }
  }
  return 0;
}

