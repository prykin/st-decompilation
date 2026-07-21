#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Scout */

int __thiscall STBoatC::Scout(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  STGroupBoatC *pSVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  undefined4 *puVar7;

  if ((param_1 == 0) || (param_1 == 1)) {
    puVar7 = &this->field_02CC;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    this->field_06CF = *(short *)&this->field_0x43f;
    this->field_06CD = *(short *)&this->field_0x43d;
    this->field_06D1 = *(short *)&this->field_0x441;
    this->field_06D3 = *(short *)&this->field_0x443;
    this->field_02C4 = 0;
    this->field_06E3 = 0;
    this->field_06CB = *(short *)&this->field_0x43b;
    this->field_06D5 = *(short *)&this->field_0x445;
    this->field_06E7 = 0;
    sub_00481520(this,(int)*(short *)&this->field_0x43b,(int)*(short *)&this->field_0x43d,
                 (int)*(short *)&this->field_0x43f);
    iVar5 = sub_0045FF50(this,0);
    return (-(uint)(iVar5 != -1) & 3) - 1;
  }
  iVar5 = this->field_06E7;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar5 = (*this->vtable->StopMove)(this,unaff_EDI);
      if (iVar5 == -1) {
        return -1;
      }
      if (iVar5 == 1) {
        this->field_06E7 = 2;
        this->field_06E3 = 0;
        sub_00481520(this,(int)this->field_06D1,(int)this->field_06D3,(int)this->field_06D5);
        iVar5 = sub_0045FF50(this,0);
        if (iVar5 == -1) {
          return -1;
        }
      }
      iVar5 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    if (iVar5 != 2) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3bbf,0,0,"%s",
                                 "STBoatC::Scout incorrect entry");
      if (iVar5 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar5 = sub_0045FF50(this,2);
    if (iVar5 == -1) {
      return -1;
    }
    if (iVar5 == 0) {
      return 0;
    }
    if (iVar5 != 3) {
      return 2;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar6 = thunk_FUN_0042b760(*(char *)&this->field_0024,CONCAT22(extraout_var,this->field_0030));
    if (pSVar6 == (STGroupBoatC *)0x0) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b9b,0,0,"%s",
                                 "STBoatC::Scout ptr==NULL");
      if (iVar5 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar5 = thunk_FUN_0040bc90(pSVar6,(uint)(ushort)this->field_0032,(short *)(int)this->field_06D1,
                               (short *)(int)this->field_06D3,(short *)(int)this->field_06D5,'\0');
    switch(this->field_06E3) {
    case 0:
      break;
    case 1:
      if (this->field_06D7 <= iVar5) {
        this->field_06DB = iVar5;
        this->field_06E3 = 2;
        goto cf_common_exit_004800EC;
      }
      break;
    case 2:
      if (this->field_06DB <= iVar5) {
        this->field_06DF = iVar5;
        this->field_06E3 = 3;
        goto cf_common_exit_004800EC;
      }
      break;
    case 3:
      if (this->field_06DF <= iVar5) {
        return 0;
      }
      break;
    default:
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3bb7,0,0,"%s",
                                 "STBoatC::Scout incorrect ssi.num 2");
      if (iVar5 == 0) {
        return 2;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    this->field_06D7 = iVar5;
    this->field_06E3 = 1;
cf_common_exit_004800EC:
    sub_00481520(this,(int)this->field_06D1,(int)this->field_06D3,(int)this->field_06D5);
    iVar5 = sub_0045FF50(this,0);
    if (iVar5 != -1) {
      return 2;
    }
    return -1;
  }
  iVar5 = sub_0045FF50(this,2);
  if (iVar5 == -1) {
    return -1;
  }
  if (iVar5 == 0) {
LAB_0047ff46:
    sVar1 = this->field_06D5;
    sVar2 = this->field_06D3;
    sVar3 = this->field_06D1;
    this->field_06E7 = 2;
    goto LAB_0047ff67;
  }
  if (iVar5 != 3) {
    return 2;
  }
  pSVar6 = thunk_FUN_0042b760(*(char *)&this->field_0024,(uint)(ushort)this->field_0030);
  if (pSVar6 == (STGroupBoatC *)0x0) {
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b57,0,0,"%s",
                               "STBoatC::Scout ptr==NULL");
    if (iVar5 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar5 = thunk_FUN_0040bc90(pSVar6,(uint)(ushort)this->field_0032,(short *)(int)this->field_06CB,
                             (short *)(int)this->field_06CD,(short *)(int)this->field_06CF,'\0');
  switch(this->field_06E3) {
  case 0:
    break;
  case 1:
    if (iVar5 < this->field_06D7) break;
    this->field_06DB = iVar5;
    this->field_06E3 = 2;
    goto cf_common_exit_0047FEEB;
  case 2:
    if (this->field_06DB <= iVar5) {
      this->field_06DF = iVar5;
      this->field_06E3 = 3;
      goto cf_common_exit_0047FEEB;
    }
    break;
  case 3:
    if (this->field_06DF <= iVar5) {
      this->field_06E3 = 0;
      goto LAB_0047ff46;
    }
    break;
  default:
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b76,0,0,"%s",
                               "STBoatC::Scout incorrect ssi.num");
    if (iVar5 == 0) {
      return 2;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  this->field_06D7 = iVar5;
  this->field_06E3 = 1;
cf_common_exit_0047FEEB:
  sVar1 = this->field_06CF;
  sVar2 = this->field_06CD;
  sVar3 = this->field_06CB;
LAB_0047ff67:
  sub_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
  iVar5 = sub_0045FF50(this,0);
  if (iVar5 != -1) {
    return 2;
  }
  return -1;
}

