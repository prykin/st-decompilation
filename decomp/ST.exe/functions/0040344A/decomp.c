
int __thiscall STBoatC::BackUnLoadRC(STBoatC *this,undefined4 param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  STBoatC *pSVar6;
  int iVar7;
  undefined4 uVar8;
  STBoatC *pSStack_8;
  
  *(undefined4 *)(this + 0xb7) = 0;
  pSVar6 = this;
  pSStack_8 = this;
  switch(*(undefined4 *)(this + 0x54c)) {
  case 0:
  case 1:
  case 3:
    if (*(int *)(this + 0x544) != 0) {
      iVar5 = thunk_FUN_004620f0((int *)this);
      return iVar5;
    }
  case 7:
    iVar5 = thunk_FUN_00460360((int *)this);
    break;
  case 2:
    iVar5 = thunk_FUN_004620f0((int *)this);
    break;
  case 4:
    iVar5 = *(int *)(this + 0x550);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      thunk_FUN_0048d930((int)this);
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(*(short *)(this + 0x540) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)this >> 0x10),*(short *)(this + 0x53e) * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(this + 0x53c) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar3,iVar7,iVar5);
      *(undefined2 *)(this + 0x542) = uVar2;
      *(undefined4 *)(this + 0x550) = 4;
    }
    if (*(int *)(this + 0x550) != 4) {
      if (*(int *)(this + 0x550) == 5) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),*(short *)(this + 0x53c) * 0xc9 + 100,
                           *(short *)(this + 0x53e) * 0xc9 + 100,
                           *(short *)(this + 0x540) * 200 + 100,(byte)this[0x61]);
        *(undefined4 *)(this + 0x550) = 6;
      }
      if (*(int *)(this + 0x550) != 6) {
        return 2;
      }
      iVar5 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
      if (iVar5 == -1) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x283d,0,0,&DAT_007a4ccc);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        uVar8 = 0x283e;
        goto LAB_0046f13e;
      }
      if (iVar5 != 0) {
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      thunk_FUN_0048d930((int)this);
      goto LAB_0046f1fd;
    }
    uVar4 = thunk_FUN_004176c0(this,*(short *)(this + 0x542));
    uVar4 = thunk_FUN_00417910(this,(short)uVar4);
    if (uVar4 != 0xffffffff) {
      if (uVar4 == 0) {
        *(undefined4 *)(this + 0x550) = 5;
      }
      goto LAB_0046f0f9;
    }
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2829,0,0,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    uVar8 = 0x282a;
    goto LAB_0046f13e;
  case 5:
    thunk_FUN_0048d930((int)this);
    pSVar6 = (STBoatC *)(*(int *)(this + 0x548) + 1);
    *(STBoatC **)(this + 0x548) = pSVar6;
    if ((int)pSVar6 < 0x47) goto LAB_0046f0f9;
    *(undefined4 *)(this + 0x548) = 0;
    *(undefined4 *)(this + 0x54c) = 6;
  case 6:
    if (*(int *)(this + 0x550) == 0) {
      iVar5 = (ushort)(*(short *)(this + 0x540) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)pSVar6 >> 0x10),*(short *)(this + 0x53e) * 0xc9) + 100;
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(this + 0x53c) * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar2,*(undefined2 *)(this + 0x45)),iVar3,iVar7,iVar5);
      *(undefined2 *)(this + 0x542) = uVar2;
      *(undefined4 *)(this + 0x550) = 1;
    }
    if (*(int *)(this + 0x550) == 1) {
      uVar4 = thunk_FUN_004176c0(this,*(short *)(this + 0x542));
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)(this + 0x550) = 2;
        }
LAB_0046f0f9:
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2864,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x2865;
    }
    else {
      if (*(int *)(this + 0x550) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),*(short *)(this + 0x53c) * 0xc9 + 100,
                           *(short *)(this + 0x53e) * 0xc9 + 100,
                           *(short *)(this + 0x540) * 200 + 100,(byte)this[0x61]);
        *(undefined4 *)(this + 0x550) = 3;
      }
      if (*(int *)(this + 0x550) != 3) {
switchD_0046eff1_default:
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x288a,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          return -1;
        }
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
LAB_0046f1fd:
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar5 != 0);
      }
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x287c,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      uVar8 = 0x287d;
    }
LAB_0046f13e:
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar8);
    return 0xffff;
  default:
    goto switchD_0046eff1_default;
  }
  if (iVar5 == 0) {
    thunk_FUN_0048d930((int)this);
  }
  return iVar5;
}

