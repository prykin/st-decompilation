
int __thiscall STBoatC::BackBuild(STBoatC *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_EDX;
  int iVar7;
  STBoatC *pSStack_8;
  
  uVar2 = (undefined2)((uint)this >> 0x10);
  pSStack_8 = this;
  switch(*(undefined4 *)(this + 0x508)) {
  case 0:
  case 1:
  case 7:
    iVar5 = thunk_FUN_00460360((int *)this);
    return (int)(short)iVar5;
  case 2:
  case 3:
  case 4:
    iVar5 = *(int *)(this + 0x50c);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      return 0;
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(*(short *)(this + 0x500) * 200) + 100;
      iVar7 = CONCAT22(uVar2,*(short *)(this + 0x4fe) * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(this + 0x4fc) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar6,iVar7,iVar5);
      *(undefined2 *)(this + 0x506) = uVar2;
      *(undefined4 *)(this + 0x50c) = 4;
    }
    if (*(int *)(this + 0x50c) == 4) {
      uVar3 = thunk_FUN_004176c0(this,*(short *)(this + 0x506));
      uVar3 = thunk_FUN_00417910(this,(short)uVar3);
      if ((short)uVar3 == -1) {
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x253e,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackBuild__BUILD_PMOVE_007aa7d4);
        if (iVar5 == 0) {
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x253f)
          ;
          return 0xffff;
        }
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      if ((short)uVar3 == 0) {
        *(undefined4 *)(this + 0x50c) = 5;
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
    }
    if (*(int *)(this + 0x50c) == 5) {
      thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                         *(short *)(this + 0x45),*(short *)(this + 0x4fc) * 0xc9 + 100,
                         *(short *)(this + 0x4fe) * 0xc9 + 100,*(short *)(this + 0x500) * 200 + 100,
                         (byte)this[0x61]);
      *(undefined4 *)(this + 0x50c) = 6;
    }
    if (*(int *)(this + 0x50c) == 6) {
      uVar4 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
      if ((short)uVar4 == -1) {
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2554,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackBuild__BUILD_PMOVE_2_007aa7ac);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        iVar5 = 0x2555;
LAB_0046cbe2:
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar5);
        return 0xffff;
      }
      if ((short)uVar4 == 0) {
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar5 != 0);
      }
    }
    break;
  case 5:
    if (*(int *)(this + 0x502) == 0) {
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar5 != 0);
    }
    *(undefined4 *)(this + 0x508) = 6;
    break;
  case 6:
    if (*(int *)(this + 0x50c) == 0) {
      iVar5 = CONCAT22(uVar2,*(short *)(this + 0x500) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)in_EDX >> 0x10),*(short *)(this + 0x4fe) * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(this + 0x4fc) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar6,iVar7,iVar5);
      *(undefined2 *)(this + 0x506) = uVar2;
      *(undefined4 *)(this + 0x50c) = 1;
    }
    if (*(int *)(this + 0x50c) == 1) {
      uVar3 = thunk_FUN_004176c0(this,*(short *)(this + 0x506));
      uVar3 = thunk_FUN_00417910(this,(short)uVar3);
      if ((short)uVar3 == -1) {
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x256d,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackBuild__BUILD_OMOVE_007aa784);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        iVar5 = 0x256e;
        goto LAB_0046cbe2;
      }
      if ((short)uVar3 == 0) {
        *(undefined4 *)(this + 0x50c) = 2;
        break;
      }
    }
    if (*(int *)(this + 0x50c) == 2) {
      thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                         *(short *)(this + 0x45),*(short *)(this + 0x4fc) * 0xc9 + 100,
                         *(short *)(this + 0x4fe) * 0xc9 + 100,*(short *)(this + 0x500) * 200 + 100,
                         (byte)this[0x61]);
      *(undefined4 *)(this + 0x50c) = 3;
    }
    if (*(int *)(this + 0x50c) == 3) {
      uVar4 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
      if ((short)uVar4 == -1) {
        iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2583,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackBuild__BUILD_OMOVE_2_007aa75c);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        iVar5 = 0x2584;
        goto LAB_0046cbe2;
      }
      if ((short)uVar4 == 0) {
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar5 != 0);
      }
    }
    break;
  default:
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2590,0,0,&DAT_007a4ccc,
                               s_STBoatC__BackBuild_007aa744);
    if (iVar5 == 0) {
      return -1;
    }
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  iVar5 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
}

