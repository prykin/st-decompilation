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
  undefined4 *puVar6;

  if ((param_1 != 0) && (param_1 != 1)) {
    if (this->field_05F8 != 0) {
      if (this->field_05F8 == 1) {
        if (0xe < *(int *)&this->field_0x7be) {
          thunk_FUN_005fd750(*(uint *)&this->field_0x24,*(short *)&this->field_0x5ec * 0xc9 + 100,
                             this->field_05EE * 0xc9 + 100,100,(uint)(ushort)this->field_0032,0xf);
          *(int *)&this->field_0x7be = *(int *)&this->field_0x7be + -0xf;
          iVar5 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar5 != 0);
        }
        thunk_FUN_005fd750(*(uint *)&this->field_0x24,*(short *)&this->field_0x5ec * 0xc9 + 100,
                           this->field_05EE * 0xc9 + 100,100,(uint)(ushort)this->field_0032,
                           *(int *)&this->field_0x7be);
        *(undefined4 *)&this->field_0x7be = 0;
      }
      iVar5 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar5 != 0);
    }
    iVar5 = sub_0045FF50(this,2);
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3184,0,0,&DAT_007a4ccc,
                                 s_STBoatC__DCBomb__DCBOMB_MOVE_err_007ab10c);
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
      sVar1 = this->field_05F6;
      sVar2 = *(short *)&this->field_0x5f4;
      sVar3 = *(short *)&this->field_0x5f2;
      goto LAB_00476c07;
    }
    return 2;
  }
  puVar6 = &this->field_02CC;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  this->field_02C4 = 0;
  if (0 < *(int *)&this->field_0x7be) {
    *(undefined2 *)&this->field_0x5ec = *(undefined2 *)&this->field_0x3e2;
    this->field_05EE = *(undefined2 *)&this->field_0x3e4;
    *(undefined2 *)&this->field_0x5f0 = *(undefined2 *)&this->field_0x3e6;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar5 = sub_004926C0(this,unaff_ESI);
    if (iVar5 == 1) {
      sVar1 = this->field_05F6;
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

