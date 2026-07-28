#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Scout

   [STSwitchEnumApplier] Switch target field_06E3 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06E3State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

int __thiscall STBoatC::Scout(STBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  code *pcVar5;
  int iVar6;
  STGroupBoatC *pSVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    sVar1 = *(short *)&this->field_0x43f;
    sVar3 = *(short *)&this->field_0x43d;
    uVar4 = *(undefined2 *)&this->field_0x441;
    sVar2 = *(short *)&this->field_0x43b;
    *(short *)((int)this->field_06CB + 4) = sVar1;
    *(short *)((int)this->field_06CB + 2) = sVar3;
    *(undefined2 *)((int)this->field_06CB + 6) = uVar4;
    *(undefined2 *)(this->field_06CB + 1) = *(undefined2 *)&this->field_0x443;
    uVar4 = *(undefined2 *)&this->field_0x445;
    this->field_02C4 = 0;
    *(undefined4 *)(this->field_06CB + 3) = 0;
    *(short *)this->field_06CB = sVar2;
    *(undefined2 *)((int)this->field_06CB + 10) = uVar4;
    *(undefined4 *)((int)this->field_06CB + 0x1c) = 0;
    sub_00481520(this,(int)sVar2,(int)sVar3,(int)sVar1);
    iVar6 = sub_0045FF50(this,0);
    return (-(uint)(iVar6 != -1) & 3) - 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = *(int *)((int)this->field_06CB + 0x1c);
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = this->StopMove(unaff_EDI);
      if (iVar6 == -1) {
        return -1;
      }
      if (iVar6 == 1) {
        *(undefined4 *)((int)this->field_06CB + 0x1c) = 2;
        *(undefined4 *)(this->field_06CB + 3) = 0;
        sub_00481520(this,(int)*(short *)((int)this->field_06CB + 6),(int)(short)this->field_06CB[1]
                     ,(int)*(short *)((int)this->field_06CB + 10));
        iVar6 = sub_0045FF50(this,0);
        if (iVar6 == -1) {
          return -1;
        }
      }
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (iVar6 != 2) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3bbf,0,0,"%s",
                                 "STBoatC::Scout incorrect entry");
      if (iVar6 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar6 = sub_0045FF50(this,2);
    if (iVar6 == -1) {
      return -1;
    }
    if (iVar6 == 0) {
      return 0;
    }
    if (iVar6 != 3) {
      return 2;
    }
    pSVar7 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
    if (pSVar7 == (STGroupBoatC *)0x0) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b9b,0,0,"%s",
                                 "STBoatC::Scout ptr==NULL");
      if (iVar6 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar6 = thunk_FUN_0040bc90(pSVar7,(uint)(ushort)this->field_0032,
                               (short *)(int)*(short *)((int)this->field_06CB + 6),
                               (short *)(int)(short)this->field_06CB[1],
                               (short *)(int)*(short *)((int)this->field_06CB + 10),'\0');
    switch((int)this->field_06CB[3]) {
    case 0:
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      if (*(int *)((int)this->field_06CB + 0xc) <= iVar6) {
        *(int *)(this->field_06CB + 2) = iVar6;
        *(undefined4 *)(this->field_06CB + 3) = 2;
        goto cf_common_exit_004800EC;
      }
      break;
    case 2:
      if ((int)this->field_06CB[2] <= iVar6) {
        *(int *)((int)this->field_06CB + 0x14) = iVar6;
        *(undefined4 *)(this->field_06CB + 3) = 3;
        goto cf_common_exit_004800EC;
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      if (*(int *)((int)this->field_06CB + 0x14) <= iVar6) {
        return 0;
      }
      break;
    default:
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3bb7,0,0,"%s",
                                 "STBoatC::Scout incorrect ssi.num 2");
      if (iVar6 == 0) {
        return 2;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    *(int *)((int)this->field_06CB + 0xc) = iVar6;
    *(undefined4 *)(this->field_06CB + 3) = 1;
cf_common_exit_004800EC:
    sub_00481520(this,(int)*(short *)((int)this->field_06CB + 6),(int)(short)this->field_06CB[1],
                 (int)*(short *)((int)this->field_06CB + 10));
    iVar6 = sub_0045FF50(this,0);
    if (iVar6 != -1) {
      return 2;
    }
    return -1;
  }
  iVar6 = sub_0045FF50(this,2);
  if (iVar6 == -1) {
    return -1;
  }
  if (iVar6 == 0) {
LAB_0047ff46:
    sVar1 = *(short *)((int)this->field_06CB + 10);
    sVar3 = (short)this->field_06CB[1];
    sVar2 = *(short *)((int)this->field_06CB + 6);
    *(undefined4 *)((int)this->field_06CB + 0x1c) = 2;
    goto LAB_0047ff67;
  }
  if (iVar6 != 3) {
    return 2;
  }
  pSVar7 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
  if (pSVar7 == (STGroupBoatC *)0x0) {
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b57,0,0,"%s",
                               "STBoatC::Scout ptr==NULL");
    if (iVar6 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = thunk_FUN_0040bc90(pSVar7,(uint)(ushort)this->field_0032,
                             (short *)(int)(short)this->field_06CB[0],
                             (short *)(int)*(short *)((int)this->field_06CB + 2),
                             (short *)(int)*(short *)((int)this->field_06CB + 4),'\0');
  switch((int)this->field_06CB[3]) {
  case 0:
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    if (iVar6 < *(int *)((int)this->field_06CB + 0xc)) break;
    *(int *)(this->field_06CB + 2) = iVar6;
    *(undefined4 *)(this->field_06CB + 3) = 2;
    goto cf_common_exit_0047FEEB;
  case 2:
    if ((int)this->field_06CB[2] <= iVar6) {
      *(int *)((int)this->field_06CB + 0x14) = iVar6;
      *(undefined4 *)(this->field_06CB + 3) = 3;
      goto cf_common_exit_0047FEEB;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 3:
    if (*(int *)((int)this->field_06CB + 0x14) <= iVar6) {
      *(undefined4 *)(this->field_06CB + 3) = 0;
      goto LAB_0047ff46;
    }
    break;
  default:
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b76,0,0,"%s",
                               "STBoatC::Scout incorrect ssi.num");
    if (iVar6 == 0) {
      return 2;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  *(int *)((int)this->field_06CB + 0xc) = iVar6;
  *(undefined4 *)(this->field_06CB + 3) = 1;
cf_common_exit_0047FEEB:
  sVar1 = *(short *)((int)this->field_06CB + 4);
  sVar3 = *(short *)((int)this->field_06CB + 2);
  sVar2 = (short)this->field_06CB[0];
LAB_0047ff67:
  sub_00481520(this,(int)sVar2,(int)sVar3,(int)sVar1);
  iVar6 = sub_0045FF50(this,0);
  if (iVar6 != -1) {
    return 2;
  }
  return -1;
}

