
int __thiscall FUN_0046aa50(void *this,undefined4 param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  void *local_8;
  
  *(undefined4 *)((int)this + 0xb7) = 0;
  pvVar6 = this;
  local_8 = this;
  switch(*(undefined4 *)((int)this + 0x4d5)) {
  case 0:
    goto switchD_0046aa71_caseD_0;
  case 1:
  case 2:
  case 4:
  case 7:
  case 8:
  case 10:
    if (*(int *)((int)this + 0x4cd) != 0) {
      iVar5 = thunk_FUN_004620f0(this);
      return iVar5;
    }
    iVar5 = thunk_FUN_00460360(this);
    break;
  case 3:
  case 9:
    iVar5 = thunk_FUN_004620f0(this);
    break;
  case 5:
    thunk_FUN_0048d930((int)this);
    iVar5 = *(int *)((int)this + 0x4d1) + 1;
    *(int *)((int)this + 0x4d1) = iVar5;
    if (iVar5 < 0x47) {
LAB_0046acad:
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    *(undefined4 *)((int)this + 0x4d1) = 0;
    goto LAB_0046aaed;
  case 6:
  case 0xe:
    iVar5 = thunk_FUN_00460360(this);
    return iVar5;
  case 0xb:
    iVar5 = *(int *)((int)this + 0x4d9);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      thunk_FUN_0048d930((int)this);
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(*(short *)((int)this + 0x4c9) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)this >> 0x10),*(short *)((int)this + 0x4c7) * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)((int)this + 0x4c5) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)((int)this + 0x45)),iVar3,iVar7,iVar5);
      *(undefined2 *)((int)this + 0x4cb) = uVar2;
      *(undefined4 *)((int)this + 0x4d9) = 4;
    }
    if (*(int *)((int)this + 0x4d9) == 4) {
      uVar4 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x4cb));
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)((int)this + 0x4d9) = 5;
        }
        goto LAB_0046abcb;
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x22fd,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x22fe;
    }
    else {
      if (*(int *)((int)this + 0x4d9) == 5) {
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),*(short *)((int)this + 0x4c5) * 0xc9 + 100,
                           *(short *)((int)this + 0x4c7) * 0xc9 + 100,
                           *(short *)((int)this + 0x4c9) * 200 + 100,*(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x4d9) = 6;
      }
      if (*(int *)((int)this + 0x4d9) != 6) {
        return 2;
      }
      iVar5 = thunk_FUN_00415ed0(this,&local_8,&param_1);
      if (iVar5 != -1) {
        if (iVar5 == 0) {
          thunk_FUN_0048d930((int)this);
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return -(uint)(iVar5 != 0);
        }
        goto LAB_0046acad;
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2311,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x2312;
    }
    goto LAB_0046ac10;
  case 0xc:
    thunk_FUN_0048d930((int)this);
    pvVar6 = (void *)(*(int *)((int)this + 0x4d1) + 1);
    *(void **)((int)this + 0x4d1) = pvVar6;
    if ((int)pvVar6 < 0x47) goto LAB_0046abcb;
    *(undefined4 *)((int)this + 0x4d1) = 0;
    *(undefined4 *)((int)this + 0x4d5) = 0xd;
  case 0xd:
    if (*(int *)((int)this + 0x4d9) == 0) {
      iVar5 = (ushort)(*(short *)((int)this + 0x4c9) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)pvVar6 >> 0x10),*(short *)((int)this + 0x4c7) * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)((int)this + 0x4c5) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)((int)this + 0x45)),iVar3,iVar7,iVar5);
      *(undefined2 *)((int)this + 0x4cb) = uVar2;
      *(undefined4 *)((int)this + 0x4d9) = 1;
    }
    if (*(int *)((int)this + 0x4d9) == 1) {
      uVar4 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x4cb));
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)((int)this + 0x4d9) = 2;
        }
LAB_0046abcb:
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2338,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x2339;
    }
    else {
      if (*(int *)((int)this + 0x4d9) == 2) {
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),*(short *)((int)this + 0x4c5) * 0xc9 + 100,
                           *(short *)((int)this + 0x4c7) * 0xc9 + 100,
                           *(short *)((int)this + 0x4c9) * 200 + 100,*(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x4d9) = 3;
      }
      if (*(int *)((int)this + 0x4d9) != 3) {
switchD_0046aa71_caseD_0:
        iVar5 = thunk_FUN_004620f0(this);
        iVar3 = (**(code **)(*(int *)this + 0xd8))();
        if (iVar3 != 0) {
          return -1;
        }
        return iVar5;
      }
      iVar5 = thunk_FUN_00415ed0(this,&local_8,&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
LAB_0046aaed:
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar5 != 0);
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2350,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x2351;
    }
LAB_0046ac10:
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar8);
    return 0xffff;
  default:
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2367,0,0,&DAT_007a4ccc);
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

