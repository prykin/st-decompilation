
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackCapture
   
   [STSwitchEnumApplier] Switch target field_0611 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0611State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00478030 -> 00415ED0 @ 004781BF | 00478030 -> 00415ED0 @ 00478438 */

int __thiscall STBoatC::BackCapture(STBoatC *this,int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  STBoatC *local_8;
  
  uVar2 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(this->field_0611) {
  case CASE_0:
  case CASE_5:
    iVar6 = sub_00460360(this);
    return iVar6;
  case CASE_1:
    return 0;
  case CASE_2:
    iVar6 = *(int *)&this->field_0x615;
    if (iVar6 == 0) {
      return 0;
    }
    if (iVar6 == 1) {
      return 0;
    }
    if (iVar6 == 2) {
      return 0;
    }
    if (iVar6 == 3) {
      iVar6 = (ushort)(*(short *)&this->field_0x607 * 200) + 100;
      iVar7 = CONCAT22(uVar2,*(short *)&this->field_0x605 * 0xc9) + 100;
      iVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)&this->field_0x603 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar4 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar4,iVar7,iVar6);
      *(undefined2 *)&this->field_0x60f = uVar2;
      *(undefined4 *)&this->field_0x615 = 4;
    }
    if (*(int *)&this->field_0x615 == 4) {
      uVar5 = sub_004176C0(this,*(short *)&this->field_0x60f);
      uVar5 = sub_00417910(this,(short)uVar5);
      if (uVar5 == 0xffffffff) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3336,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackCapture__CAPTURE_PM_007ab31c);
        if (iVar6 == 0) {
          return -1;
        }
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      if (uVar5 == 0) {
        *(undefined4 *)&this->field_0x615 = 5;
LAB_00478373:
        iVar6 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
    if (*(int *)&this->field_0x615 == 5) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 *(short *)&this->field_0x603 * 0xc9 + 100,*(short *)&this->field_0x605 * 0xc9 + 100
                 ,*(short *)&this->field_0x607 * 200 + 100,this->field_0061);
      *(undefined4 *)&this->field_0x615 = 6;
    }
    if (*(int *)&this->field_0x615 == 6) {
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x334b,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackCapture__CAPTURE_PM_007ab2ec);
        if (iVar6 != 0) {
          pcVar1 = (code *)swi(3);
          iVar6 = (*pcVar1)();
          return iVar6;
        }
        iVar6 = 0x334c;
LAB_0047848a:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6)
        ;
        return 0xffff;
      }
      if (iVar6 == 0) {
        iVar6 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  case CASE_3:
    piVar3 = (int *)STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)this >> 8),this->field_0x5fc),
                               CONCAT22((short)(this->field_0611 >> 0x10),
                                        *(undefined2 *)&this->field_0x5fd),CASE_1);
    if (((piVar3 != (int *)0x0) && (piVar3[6] == *(int *)&this->field_0x5ff)) &&
       (iVar6 = (**(code **)(*piVar3 + 0x108))(*(undefined4 *)&this->field_0x24), iVar6 != 0)) {
      thunk_FUN_004cd450((int)piVar3);
    }
    if (((int)this->field_0041 != (*(short *)&this->field_0x609 + 1) * 0xc9) ||
       ((int)this->field_0043 != (*(short *)&this->field_0x60b + 1) * 0xc9)) {
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
    this->field_0611 = CASE_4;
    *(undefined4 *)&this->field_0x615 = 0;
    break;
  case CASE_4:
    if (*(int *)&this->field_0x615 == 0) {
      iVar6 = (ushort)(*(short *)&this->field_0x607 * 200) + 100;
      iVar7 = CONCAT22(uVar2,*(short *)&this->field_0x605 * 0xc9) + 100;
      iVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)&this->field_0x603 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar4 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar4,iVar7,iVar6);
      *(undefined2 *)&this->field_0x60f = uVar2;
      *(undefined4 *)&this->field_0x615 = 1;
    }
    if (*(int *)&this->field_0x615 == 1) {
      uVar5 = sub_004176C0(this,*(short *)&this->field_0x60f);
      uVar5 = sub_00417910(this,(short)uVar5);
      if (uVar5 == 0xffffffff) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3373,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackCapture__CAPTURE_OM_007ab2c0);
        if (iVar6 == 0) {
          return -1;
        }
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      if (uVar5 == 0) {
        *(undefined4 *)&this->field_0x615 = 2;
        goto LAB_00478373;
      }
    }
    if (*(int *)&this->field_0x615 == 2) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 *(short *)&this->field_0x603 * 0xc9 + 100,*(short *)&this->field_0x605 * 0xc9 + 100
                 ,*(short *)&this->field_0x607 * 200 + 100,this->field_0061);
      *(undefined4 *)&this->field_0x615 = 3;
    }
    if (*(int *)&this->field_0x615 == 3) {
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3388,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackCapture__CAPTURE_OM_007ab290);
        if (iVar6 != 0) {
          pcVar1 = (code *)swi(3);
          iVar6 = (*pcVar1)();
          return iVar6;
        }
        iVar6 = 0x3389;
        goto LAB_0047848a;
      }
      if (iVar6 == 0) {
        iVar6 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  default:
    iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3396,0,0,&DAT_007a4ccc,
                               s_STBoatC__BackCapture___incorrect_007ab260);
    if (iVar6 == 0) {
      return -1;
    }
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

