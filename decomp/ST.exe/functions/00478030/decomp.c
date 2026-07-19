
int __thiscall FUN_00478030(void *this,undefined4 param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *local_8;
  
  uVar2 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(*(undefined4 *)((int)this + 0x611)) {
  case 0:
  case 5:
    iVar6 = thunk_FUN_00460360(this);
    return iVar6;
  case 1:
    return 0;
  case 2:
    iVar6 = *(int *)((int)this + 0x615);
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
      iVar6 = (ushort)(*(short *)((int)this + 0x607) * 200) + 100;
      iVar7 = CONCAT22(uVar2,*(short *)((int)this + 0x605) * 0xc9) + 100;
      iVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)this + 0x603) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)((int)this + 0x45)),iVar4,iVar7,iVar6);
      *(undefined2 *)((int)this + 0x60f) = uVar2;
      *(undefined4 *)((int)this + 0x615) = 4;
    }
    if (*(int *)((int)this + 0x615) == 4) {
      uVar5 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x60f));
      uVar5 = thunk_FUN_00417910(this,(short)uVar5);
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
        *(undefined4 *)((int)this + 0x615) = 5;
LAB_00478373:
        iVar6 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
    if (*(int *)((int)this + 0x615) == 5) {
      thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                         *(short *)((int)this + 0x45),*(short *)((int)this + 0x603) * 0xc9 + 100,
                         *(short *)((int)this + 0x605) * 0xc9 + 100,
                         *(short *)((int)this + 0x607) * 200 + 100,*(byte *)((int)this + 0x61));
      *(undefined4 *)((int)this + 0x615) = 6;
    }
    if (*(int *)((int)this + 0x615) == 6) {
      iVar6 = thunk_FUN_00415ed0(this,&local_8,&param_1);
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
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6);
        return 0xffff;
      }
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  case 3:
    piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)this >> 8),
                                                *(undefined1 *)((int)this + 0x5fc)),
                                       CONCAT22((short)((uint)*(undefined4 *)((int)this + 0x611) >>
                                                       0x10),*(undefined2 *)((int)this + 0x5fd)),1);
    if (((piVar3 != (int *)0x0) && (piVar3[6] == *(int *)((int)this + 0x5ff))) &&
       (iVar6 = (**(code **)(*piVar3 + 0x108))(*(undefined4 *)((int)this + 0x24)), iVar6 != 0)) {
      thunk_FUN_004cd450((int)piVar3);
    }
    if (((int)*(short *)((int)this + 0x41) != (*(short *)((int)this + 0x609) + 1) * 0xc9) ||
       ((int)*(short *)((int)this + 0x43) != (*(short *)((int)this + 0x60b) + 1) * 0xc9)) {
      iVar6 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar6 != 0);
    }
    *(undefined4 *)((int)this + 0x611) = 4;
    *(undefined4 *)((int)this + 0x615) = 0;
    break;
  case 4:
    if (*(int *)((int)this + 0x615) == 0) {
      iVar6 = (ushort)(*(short *)((int)this + 0x607) * 200) + 100;
      iVar7 = CONCAT22(uVar2,*(short *)((int)this + 0x605) * 0xc9) + 100;
      iVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)this + 0x603) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)((int)this + 0x45)),iVar4,iVar7,iVar6);
      *(undefined2 *)((int)this + 0x60f) = uVar2;
      *(undefined4 *)((int)this + 0x615) = 1;
    }
    if (*(int *)((int)this + 0x615) == 1) {
      uVar5 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x60f));
      uVar5 = thunk_FUN_00417910(this,(short)uVar5);
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
        *(undefined4 *)((int)this + 0x615) = 2;
        goto LAB_00478373;
      }
    }
    if (*(int *)((int)this + 0x615) == 2) {
      thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                         *(short *)((int)this + 0x45),*(short *)((int)this + 0x603) * 0xc9 + 100,
                         *(short *)((int)this + 0x605) * 0xc9 + 100,
                         *(short *)((int)this + 0x607) * 200 + 100,*(byte *)((int)this + 0x61));
      *(undefined4 *)((int)this + 0x615) = 3;
    }
    if (*(int *)((int)this + 0x615) == 3) {
      iVar6 = thunk_FUN_00415ed0(this,&local_8,&param_1);
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
        iVar6 = (**(code **)(*(int *)this + 0xd8))();
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
  iVar6 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

