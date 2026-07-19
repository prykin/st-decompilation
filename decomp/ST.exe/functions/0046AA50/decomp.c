
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackLoadRC
   
   [STSwitchEnumApplier] Switch target field_04D5 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_04D5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

int __thiscall STBoatC::BackLoadRC(STBoatC *this,undefined4 param_1)

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
  switch(this->field_04D5) {
  case CASE_0:
    goto switchD_0046aa71_caseD_0;
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_7:
  case CASE_8:
  case CASE_A:
    if (this->field_04CD != 0) {
      iVar5 = thunk_FUN_004620f0((int *)this);
      return iVar5;
    }
    iVar5 = thunk_FUN_00460360((int *)this);
    break;
  case CASE_3:
  case CASE_9:
    iVar5 = thunk_FUN_004620f0((int *)this);
    break;
  case CASE_5:
    thunk_FUN_0048d930((int)this);
    iVar5 = *(int *)&this->field_0x4d1 + 1;
    *(int *)&this->field_0x4d1 = iVar5;
    if (iVar5 < 0x47) {
LAB_0046acad:
      iVar5 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    *(undefined4 *)&this->field_0x4d1 = 0;
    goto LAB_0046aaed;
  case CASE_6:
  case CASE_E:
    iVar5 = thunk_FUN_00460360((int *)this);
    return iVar5;
  case CASE_B:
    iVar5 = *(int *)&this->field_0x4d9;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      thunk_FUN_0048d930((int)this);
      iVar5 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(*(short *)&this->field_0x4c9 * 200) + 100;
      iVar7 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x4c7 * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)&this->field_0x4c5 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      *(undefined2 *)&this->field_0x4cb = uVar2;
      *(undefined4 *)&this->field_0x4d9 = 4;
    }
    if (*(int *)&this->field_0x4d9 == 4) {
      uVar4 = thunk_FUN_004176c0(this,*(short *)&this->field_0x4cb);
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)&this->field_0x4d9 = 5;
        }
        goto LAB_0046abcb;
      }
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x22fd,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackLoadRC__LOADRC_PDEP_007aa5ac);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = 0x22fe;
    }
    else {
      if (*(int *)&this->field_0x4d9 == 5) {
        thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                           *(short *)&this->field_0x4c5 * 0xc9 + 100,
                           *(short *)&this->field_0x4c7 * 0xc9 + 100,
                           *(short *)&this->field_0x4c9 * 200 + 100,this->field_0x61);
        *(undefined4 *)&this->field_0x4d9 = 6;
      }
      if (*(int *)&this->field_0x4d9 != 6) {
        return 2;
      }
      iVar5 = thunk_FUN_00415ed0(this,&local_8,&param_1);
      if (iVar5 != -1) {
        if (iVar5 == 0) {
          thunk_FUN_0048d930((int)this);
          iVar5 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar5 != 0);
        }
        goto LAB_0046acad;
      }
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2311,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackLoadRC__LOADRC_PDEP_007aa580);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = 0x2312;
    }
    goto LAB_0046ac10;
  case CASE_C:
    thunk_FUN_0048d930((int)this);
    pSVar6 = (STBoatC *)(*(int *)&this->field_0x4d1 + 1);
    *(STBoatC **)&this->field_0x4d1 = pSVar6;
    if ((int)pSVar6 < 0x47) goto LAB_0046abcb;
    *(undefined4 *)&this->field_0x4d1 = 0;
    this->field_04D5 = CASE_D;
  case CASE_D:
    if (*(int *)&this->field_0x4d9 == 0) {
      iVar5 = (ushort)(*(short *)&this->field_0x4c9 * 200) + 100;
      iVar7 = CONCAT22((short)((uint)pSVar6 >> 0x10),*(short *)&this->field_0x4c7 * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)&this->field_0x4c5 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      *(undefined2 *)&this->field_0x4cb = uVar2;
      *(undefined4 *)&this->field_0x4d9 = 1;
    }
    if (*(int *)&this->field_0x4d9 == 1) {
      uVar4 = thunk_FUN_004176c0(this,*(short *)&this->field_0x4cb);
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)&this->field_0x4d9 = 2;
        }
LAB_0046abcb:
        iVar5 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2338,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackLoadRC__LOADRC_ODEP_007aa554);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = 0x2339;
    }
    else {
      if (*(int *)&this->field_0x4d9 == 2) {
        thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                           *(short *)&this->field_0x4c5 * 0xc9 + 100,
                           *(short *)&this->field_0x4c7 * 0xc9 + 100,
                           *(short *)&this->field_0x4c9 * 200 + 100,this->field_0x61);
        *(undefined4 *)&this->field_0x4d9 = 3;
      }
      if (*(int *)&this->field_0x4d9 != 3) {
switchD_0046aa71_caseD_0:
        iVar5 = thunk_FUN_004620f0((int *)this);
        iVar3 = (*this->vtable->vfunc_D8)();
        if (iVar3 != 0) {
          return -1;
        }
        return iVar5;
      }
      iVar5 = thunk_FUN_00415ed0(this,&local_8,&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          iVar5 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
LAB_0046aaed:
        iVar5 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar5 != 0);
      }
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2350,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackLoadRC__LOADRC_ODEP_007aa528);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = 0x2351;
    }
LAB_0046ac10:
    RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar5);
    return 0xffff;
  default:
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2367,0,0,&DAT_007a4ccc,
                               s_STBoatC__BackLoadRC_007aa510);
    if (iVar5 == 0) {
      return -1;
    }
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  if (iVar5 == 0) {
    thunk_FUN_0048d930((int)this);
  }
  return iVar5;
}

