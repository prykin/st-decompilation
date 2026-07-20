
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadRC
   
   [STSwitchEnumApplier] Switch target field_054C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_054CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0046EFD0 -> 00415ED0 @ 0046F1CD | 0046EFD0 -> 00415ED0 @ 0046F3D9 */

int __thiscall STBoatC::BackUnLoadRC(STBoatC *this,int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  STBoatC *pSVar6;
  int iVar7;
  STBoatC *local_8;
  
  this->field_00B7 = 0;
  pSVar6 = this;
  local_8 = this;
  switch(this->field_054C) {
  case CASE_0:
  case CASE_1:
  case CASE_3:
    if (this->field_0544 != 0) {
      iVar5 = thunk_FUN_004620f0(this);
      return iVar5;
    }
  case CASE_7:
    iVar5 = sub_00460360(this);
    break;
  case CASE_2:
    iVar5 = thunk_FUN_004620f0(this);
    break;
  case CASE_4:
    iVar5 = *(int *)&this->field_0x550;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      sub_0048D930(this);
      iVar5 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(*(short *)&this->field_0x540 * 200) + 100;
      iVar7 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x53e * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)&this->field_0x53c * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      *(undefined2 *)&this->field_0x542 = uVar2;
      *(undefined4 *)&this->field_0x550 = 4;
    }
    if (*(int *)&this->field_0x550 != 4) {
      if (*(int *)&this->field_0x550 == 5) {
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   *(short *)&this->field_0x53c * 0xc9 + 100,
                   *(short *)&this->field_0x53e * 0xc9 + 100,
                   *(short *)&this->field_0x540 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x550 = 6;
      }
      if (*(int *)&this->field_0x550 != 6) {
        return 2;
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 == -1) {
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x283d,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackUnLoadRC__UNLOADRC__007aaa8c);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        iVar5 = 0x283e;
        goto cf_error_exit_0046F13E;
      }
      if (iVar5 != 0) {
        iVar5 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      sub_0048D930(this);
      goto LAB_0046f1fd;
    }
    uVar4 = sub_004176C0(this,*(short *)&this->field_0x542);
    uVar4 = sub_00417910(this,(short)uVar4);
    if (uVar4 != 0xffffffff) {
      if (uVar4 == 0) {
        *(undefined4 *)&this->field_0x550 = 5;
      }
      goto cf_common_exit_0046F0F9;
    }
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2829,0,0,&DAT_007a4ccc,
                               s_STBoatC__BackUnLoadRC__UNLOADRC__007aaac0);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    iVar5 = 0x282a;
    goto cf_error_exit_0046F13E;
  case CASE_5:
    sub_0048D930(this);
    pSVar6 = (STBoatC *)(*(int *)&this->field_0x548 + 1);
    *(STBoatC **)&this->field_0x548 = pSVar6;
    if ((int)pSVar6 < 0x47) goto cf_common_exit_0046F0F9;
    *(undefined4 *)&this->field_0x548 = 0;
    this->field_054C = CASE_6;
  case CASE_6:
    if (*(int *)&this->field_0x550 == 0) {
      iVar5 = (ushort)(*(short *)&this->field_0x540 * 200) + 100;
      iVar7 = CONCAT22((short)((uint)pSVar6 >> 0x10),*(short *)&this->field_0x53e * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)&this->field_0x53c * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      *(undefined2 *)&this->field_0x542 = uVar2;
      *(undefined4 *)&this->field_0x550 = 1;
    }
    if (*(int *)&this->field_0x550 == 1) {
      uVar4 = sub_004176C0(this,*(short *)&this->field_0x542);
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)&this->field_0x550 = 2;
        }
cf_common_exit_0046F0F9:
        iVar5 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2864,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackUnLoadRC__UNLOADRC__007aaa5c);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = 0x2865;
    }
    else {
      if (*(int *)&this->field_0x550 == 2) {
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   *(short *)&this->field_0x53c * 0xc9 + 100,
                   *(short *)&this->field_0x53e * 0xc9 + 100,
                   *(short *)&this->field_0x540 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x550 = 3;
      }
      if (*(int *)&this->field_0x550 != 3) {
switchD_0046eff1_default:
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x288a,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackUnLoadRC_007aaa0c);
        if (iVar5 == 0) {
          return -1;
        }
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          iVar5 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
LAB_0046f1fd:
        iVar5 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar5 != 0);
      }
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x287c,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackUnLoadRC__UNLOADRC__007aaa28);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = 0x287d;
    }
cf_error_exit_0046F13E:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar5);
    return 0xffff;
  default:
    goto switchD_0046eff1_default;
  }
  if (iVar5 == 0) {
    sub_0048D930(this);
  }
  return iVar5;
}

