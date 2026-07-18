
int __thiscall STBoatC::BackToDok(STBoatC *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  STBoatC *pSVar6;
  int iVar7;
  undefined4 in_EDX;
  undefined4 uVar8;
  STBoatC *pSStack_8;
  
  *(undefined4 *)(this + 0xb7) = 0;
  pSVar6 = this;
  pSStack_8 = this;
  switch(*(undefined4 *)(this + 0x580)) {
  case 0:
  case 1:
  case 3:
    iVar5 = thunk_FUN_00460360((int *)this);
    break;
  case 2:
    iVar5 = thunk_FUN_004620f0((int *)this);
    break;
  case 4:
    iVar5 = *(int *)(this + 0x584);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      thunk_FUN_0048dba0((int)this);
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = CONCAT22((short)((uint)this >> 0x10),*(short *)(this + 0x570) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)in_EDX >> 0x10),*(short *)(this + 0x56e) * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(this + 0x56c) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar3,iVar7,iVar5);
      *(undefined2 *)(this + 0x572) = uVar2;
      *(undefined4 *)(this + 0x584) = 4;
    }
    if (*(int *)(this + 0x584) != 4) {
      if (*(int *)(this + 0x584) == 5) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),*(short *)(this + 0x56c) * 0xc9 + 100,
                           *(short *)(this + 0x56e) * 0xc9 + 100,
                           *(short *)(this + 0x570) * 200 + 100,(byte)this[0x61]);
        *(undefined4 *)(this + 0x584) = 6;
      }
      if (*(int *)(this + 0x584) != 6) {
        return 2;
      }
      iVar5 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
      if (iVar5 == -1) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2aff,0,0,&DAT_007a4ccc);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        uVar8 = 0x2b00;
        goto LAB_0047171f;
      }
      if (iVar5 != 0) goto LAB_004715ef;
      thunk_FUN_0048dba0((int)this);
      goto LAB_004716df;
    }
    uVar4 = thunk_FUN_004176c0(this,*(short *)(this + 0x572));
    uVar4 = thunk_FUN_00417910(this,(short)uVar4);
    if (uVar4 == 0xffffffff) {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2aeb,0,0,&DAT_007a4ccc);
      if (iVar5 == 0) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2aec);
        return 0xffff;
      }
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    if (uVar4 == 0) {
      *(undefined4 *)(this + 0x584) = 5;
    }
    goto LAB_004715ef;
  case 5:
    thunk_FUN_0048dba0((int)this);
    pSVar6 = (STBoatC *)(*(int *)(this + 0x57c) + 1);
    *(STBoatC **)(this + 0x57c) = pSVar6;
    if ((int)pSVar6 < 0x1f) goto LAB_00471835;
    *(undefined4 *)(this + 0x57c) = 0;
    *(undefined4 *)(this + 0x580) = 6;
  case 6:
    if (*(int *)(this + 0x584) == 0) {
      iVar5 = (ushort)(*(short *)(this + 0x570) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)pSVar6 >> 0x10),*(short *)(this + 0x56e) * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(this + 0x56c) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar3,iVar7,iVar5);
      *(undefined2 *)(this + 0x572) = uVar2;
      *(undefined4 *)(this + 0x584) = 1;
    }
    if (*(int *)(this + 0x584) == 1) {
      uVar4 = thunk_FUN_004176c0(this,*(short *)(this + 0x572));
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)(this + 0x584) = 2;
        }
LAB_00471835:
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2b25,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x2b26;
    }
    else {
      if (*(int *)(this + 0x584) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),*(short *)(this + 0x56c) * 0xc9 + 100,
                           *(short *)(this + 0x56e) * 0xc9 + 100,
                           *(short *)(this + 0x570) * 200 + 100,(byte)this[0x61]);
        *(undefined4 *)(this + 0x584) = 3;
      }
      if (*(int *)(this + 0x584) != 3) {
switchD_004714f1_default:
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2b4b,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          return -1;
        }
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
      if (iVar5 != -1) {
        if (iVar5 == 0) {
LAB_004716df:
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return -(uint)(iVar5 != 0);
        }
LAB_004715ef:
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2b3d,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x2b3e;
    }
LAB_0047171f:
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar8);
    return 0xffff;
  case 7:
  case 8:
    iVar5 = thunk_FUN_00460360((int *)this);
    return iVar5;
  default:
    goto switchD_004714f1_default;
  }
  if (iVar5 == 0) {
    thunk_FUN_0048dba0((int)this);
  }
  return iVar5;
}

