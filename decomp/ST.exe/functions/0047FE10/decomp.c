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
  int iVar5;
  STGroupBoatC *pSVar6;
  int local_EAX_123;
  int local_EAX_180;
  int local_EAX_400;
  int local_EAX_632;
  int local_EAX_693;
  int local_EAX_876;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_06CF = this->field_043F;
    this->field_06CD = this->field_043D;
    this->field_06D1 = this->field_0441;
    this->field_06D3 = this->field_0443;
    this->field_02C4 = 0;
    this->field_06E3 = CASE_0;
    this->field_06CB = this->field_043B;
    this->field_06D5 = this->field_0445;
    this->field_06E7 = 0;
    /* ST_CALLSITE[00480249]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)this->field_043B,(int)this->field_043D,(int)this->field_043F);
    /* ST_CALLSITE[00480251]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar5 = sub_0045FF50(this,0);
    return (-(uint)(iVar5 != -1) & 3) - 1;
  }
  iVar5 = this->field_06E7;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      /* ST_CALLSITE[0047FFC5]: CALL dword ptr [EDX + 0x20] */
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar5 = this->StopMove(unaff_EDI);
      if (iVar5 == -1) {
        return -1;
      }
      if (iVar5 == 1) {
        this->field_06E7 = 2;
        this->field_06E3 = CASE_0;
        /* ST_CALLSITE[0047FFFF]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,(int)this->field_06D1,(int)this->field_06D3,(int)this->field_06D5);
        /* ST_CALLSITE[00480007]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
        iVar5 = sub_0045FF50(this,0);
        if (iVar5 == -1) {
          return -1;
        }
      }
      /* ST_CALLSITE[00480019]: CALL dword ptr [EAX + 0xd8] */
      iVar5 = this->vfunc_D8();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    if (iVar5 != 2) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3bbf,0,0,"%s",
                                 "STBoatC::Scout incorrect entry");
      if (iVar6 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    /* ST_CALLSITE[0048003B]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
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
    pSVar6 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
    if (pSVar6 == nullptr) {
      local_EAX_632 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b9b,0,0,"%s",
                              "STBoatC::Scout ptr==NULL");
      if (local_EAX_632 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    local_EAX_693 =
         thunk_FUN_0040bc90(pSVar6,(uint)(ushort)this->field_0032,(short *)(int)this->field_06D1,
                            (short *)(int)this->field_06D3,(short *)(int)this->field_06D5,'\0');
    switch(this->field_06E3) {
    case CASE_0:
      break;
    case CASE_1:
      if (this->field_06D7 <= local_EAX_693) {
        this->field_06DB = local_EAX_693;
        this->field_06E3 = CASE_2;
        goto cf_common_exit_004800EC;
      }
      break;
    case CASE_2:
      if (this->field_06DB <= local_EAX_693) {
        this->field_06DF = local_EAX_693;
        this->field_06E3 = CASE_3;
        goto cf_common_exit_004800EC;
      }
      break;
    case CASE_3:
      if (this->field_06DF <= local_EAX_693) {
        return 0;
      }
      break;
    default:
      local_EAX_876 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3bb7,0,0,"%s",
                              "STBoatC::Scout incorrect ssi.num 2");
      if (local_EAX_876 == 0) {
        return 2;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    this->field_06D7 = local_EAX_693;
    this->field_06E3 = CASE_1;
cf_common_exit_004800EC:
    /* ST_CALLSITE[00480106]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)this->field_06D1,(int)this->field_06D3,(int)this->field_06D5);
    /* ST_CALLSITE[0048010E]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar5 = sub_0045FF50(this,0);
    if (iVar5 != -1) {
      return 2;
    }
    return -1;
  }
  /* ST_CALLSITE[0047FE42]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
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
  pSVar6 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
  if (pSVar6 == nullptr) {
    local_EAX_123 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b57,0,0,"%s",
                            "STBoatC::Scout ptr==NULL");
    if (local_EAX_123 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_EAX_180 =
       thunk_FUN_0040bc90(pSVar6,(uint)(ushort)this->field_0032,(short *)(int)this->field_06CB,
                          (short *)(int)this->field_06CD,(short *)(int)this->field_06CF,'\0');
  switch(this->field_06E3) {
  case CASE_0:
    break;
  case CASE_1:
    if (local_EAX_180 < this->field_06D7) break;
    this->field_06DB = local_EAX_180;
    this->field_06E3 = CASE_2;
    goto cf_common_exit_0047FEEB;
  case CASE_2:
    if (this->field_06DB <= local_EAX_180) {
      this->field_06DF = local_EAX_180;
      this->field_06E3 = CASE_3;
      goto cf_common_exit_0047FEEB;
    }
    break;
  case CASE_3:
    if (this->field_06DF <= local_EAX_180) {
      this->field_06E3 = CASE_0;
      goto LAB_0047ff46;
    }
    break;
  default:
    local_EAX_400 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3b76,0,0,"%s",
                            "STBoatC::Scout incorrect ssi.num");
    if (local_EAX_400 == 0) {
      return 2;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  this->field_06D7 = local_EAX_180;
  this->field_06E3 = CASE_1;
cf_common_exit_0047FEEB:
  sVar1 = this->field_06CF;
  sVar2 = this->field_06CD;
  sVar3 = this->field_06CB;
LAB_0047ff67:
  /* ST_CALLSITE[0047FF6A]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
  sub_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
  /* ST_CALLSITE[0047FF72]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
  iVar5 = sub_0045FF50(this,0);
  if (iVar5 != -1) {
    return 2;
  }
  return -1;
}

