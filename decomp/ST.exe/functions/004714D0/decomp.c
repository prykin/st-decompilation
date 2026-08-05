#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackToDok

   [STSwitchEnumApplier] Switch target field_0580 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0580State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackToDok(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=00471517 RET 0x4 | 00471537 RET 0x4 | 00471607 RET 0x4 | 00471653 RET 0x4 |
   004716F2 RET 0x4 | 0047173F RET 0x4 | 0047174C RET 0x4 | 00471769 RET 0x4 | 0047184D RET 0x4 |
   0047195E RET 0x4 */

int __thiscall STBoatC::BackToDok(STBoatC *this,int *param_1)

{
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  STBoatC *pSVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar5 = this;
  local_8 = this;
  switch(this->field_0580) {
  case CASE_0:
  case CASE_1:
  case CASE_3:
    iVar4 = sub_00460360(this);
    break;
  case CASE_2:
    iVar4 = thunk_FUN_004620f0(this);
    break;
  case CASE_4:
    iVar4 = *(int *)&this->field_0x584;
    if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
      sub_0048DBA0(this);
      iVar4 = this->vfunc_D8();
      return -(uint)(iVar4 != 0);
    }
    if (iVar4 == 3) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar4 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_056E * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(this->field_0045)),
                         this->field_056C * 0xc9 + 100,(short)iVar4,
                         STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_0570 * 200)) + 100);
      this->field_0572 = uVar2;
      *(undefined4 *)&this->field_0x584 = 4;
    }
    if (*(int *)&this->field_0x584 != 4) {
      if (*(int *)&this->field_0x584 == 5) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                     this->field_0570 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 6;
      }
      if (*(int *)&this->field_0x584 != 6) {
        return 2;
      }
      iVar4 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar4 == -1) {
        iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2aff,0,0,"%s",
                                   "STBoatC::BackToDok, TODOK_PDOCK 2");
        if (iVar4 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar4 = 0x2b00;
        goto LAB_0047171f;
      }
      if (iVar4 != 0) goto cf_common_exit_004715EF;
      sub_0048DBA0(this);
      goto LAB_004716df;
    }
    uVar3 = sub_004176C0(this,this->field_0572);
    uVar3 = sub_00417910(this,(short)uVar3);
    if (uVar3 == 0xffffffff) {
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2aeb,0,0,"%s",
                                 "STBoatC::BackToDok, TODOK_PDOCK");
      if (iVar4 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2aec
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (uVar3 == 0) {
      *(undefined4 *)&this->field_0x584 = 5;
    }
    goto cf_common_exit_004715EF;
  case CASE_5:
    sub_0048DBA0(this);
    pSVar5 = (STBoatC *)(this->field_057C + 1);
    this->field_057C = (int)pSVar5;
    if ((int)pSVar5 < 0x1f) goto LAB_00471835;
    this->field_057C = 0;
    this->field_0580 = CASE_6;
  case CASE_6:
    if (*(int *)&this->field_0x584 == 0) {
      iVar4 = STReplaceLowWord((uint32_t)(pSVar5), (uint16_t)(this->field_056E * 0xc9)) + 100;
      uVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(this->field_0045)),
                         this->field_056C * 0xc9 + 100,(short)iVar4,
                         (ushort)(this->field_0570 * 200) + 100);
      this->field_0572 = uVar2;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar3 = sub_004176C0(this,this->field_0572);
      uVar3 = sub_00417910(this,(short)uVar3);
      if (uVar3 != 0xffffffff) {
        if (uVar3 == 0) {
          *(undefined4 *)&this->field_0x584 = 2;
        }
LAB_00471835:
        iVar4 = this->vfunc_D8();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2b25,0,0,"%s",
                                 "STBoatC::BackToDok, TODOK_ODOCK");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x2b26;
    }
    else {
      if (*(int *)&this->field_0x584 == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                     this->field_0570 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 != 3) {
switchD_004714f1_default:
        iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2b4b,0,0,"%s",
                                   "STBoatC::BackToDok");
        if (iVar4 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar4 != -1) {
        if (iVar4 == 0) {
LAB_004716df:
          iVar4 = this->vfunc_D8();
          return -(uint)(iVar4 != 0);
        }
cf_common_exit_004715EF:
        iVar4 = this->vfunc_D8();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2b3d,0,0,"%s",
                                 "STBoatC::BackToDok, TODOK_ODOCK 2");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x2b3e;
    }
LAB_0047171f:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar4);
    return 0xffff;
  case CASE_7:
  case CASE_8:
    iVar4 = sub_00460360(this);
    return iVar4;
  default:
    goto switchD_004714f1_default;
  }
  if (iVar4 == 0) {
    sub_0048DBA0(this);
  }
  return iVar4;
}

