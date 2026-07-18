
int __thiscall FUN_0047fe10(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  void *pvVar6;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  undefined4 *puVar7;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar7 = (undefined4 *)((int)this + 0x2cc);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(short *)((int)this + 0x6cf) = *(short *)((int)this + 0x43f);
    *(short *)((int)this + 0x6cd) = *(short *)((int)this + 0x43d);
    *(undefined2 *)((int)this + 0x6d1) = *(undefined2 *)((int)this + 0x441);
    *(undefined2 *)((int)this + 0x6d3) = *(undefined2 *)((int)this + 0x443);
    *(undefined4 *)((int)this + 0x2c4) = 0;
    *(undefined4 *)((int)this + 0x6e3) = 0;
    *(short *)((int)this + 0x6cb) = *(short *)((int)this + 0x43b);
    *(undefined2 *)((int)this + 0x6d5) = *(undefined2 *)((int)this + 0x445);
    *(undefined4 *)((int)this + 0x6e7) = 0;
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x43b),(int)*(short *)((int)this + 0x43d),
                       (int)*(short *)((int)this + 0x43f));
    iVar5 = thunk_FUN_0045ff50(this,0);
    return (-(uint)(iVar5 != -1) & 3) - 1;
  }
  iVar5 = *(int *)((int)this + 0x6e7);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      iVar5 = (**(code **)(*(int *)this + 0x20))();
      if (iVar5 == -1) {
        return -1;
      }
      if (iVar5 == 1) {
        *(undefined4 *)((int)this + 0x6e7) = 2;
        *(undefined4 *)((int)this + 0x6e3) = 0;
        thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x6d1),
                           (int)*(short *)((int)this + 0x6d3),(int)*(short *)((int)this + 0x6d5));
        iVar5 = thunk_FUN_0045ff50(this,0);
        if (iVar5 == -1) {
          return -1;
        }
      }
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    if (iVar5 != 2) {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3bbf,0,0,&DAT_007a4ccc);
      if (iVar5 == 0) {
        return -1;
      }
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    iVar5 = thunk_FUN_0045ff50(this,2);
    if (iVar5 == -1) {
      return -1;
    }
    if (iVar5 == 0) {
      return 0;
    }
    if (iVar5 != 3) {
      return 2;
    }
    pvVar6 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                 *(undefined1 *)((int)this + 0x24)),
                                        CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x30)));
    if (pvVar6 == (void *)0x0) {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b9b,0,0,&DAT_007a4ccc);
      if (iVar5 == 0) {
        return -1;
      }
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    iVar5 = thunk_FUN_0040bc90(pvVar6,(uint)*(ushort *)((int)this + 0x32),
                               (short *)(int)*(short *)((int)this + 0x6d1),
                               (short *)(int)*(short *)((int)this + 0x6d3),
                               (short *)(int)*(short *)((int)this + 0x6d5),'\0');
    switch(*(undefined4 *)((int)this + 0x6e3)) {
    case 0:
      break;
    case 1:
      if (*(int *)((int)this + 0x6d7) <= iVar5) {
        *(int *)((int)this + 0x6db) = iVar5;
        *(undefined4 *)((int)this + 0x6e3) = 2;
        goto LAB_004800ec;
      }
      break;
    case 2:
      if (*(int *)((int)this + 0x6db) <= iVar5) {
        *(int *)((int)this + 0x6df) = iVar5;
        *(undefined4 *)((int)this + 0x6e3) = 3;
        goto LAB_004800ec;
      }
      break;
    case 3:
      if (*(int *)((int)this + 0x6df) <= iVar5) {
        return 0;
      }
      break;
    default:
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3bb7,0,0,&DAT_007a4ccc);
      if (iVar5 == 0) {
        return 2;
      }
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    *(int *)((int)this + 0x6d7) = iVar5;
    *(undefined4 *)((int)this + 0x6e3) = 1;
LAB_004800ec:
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x6d1),(int)*(short *)((int)this + 0x6d3),
                       (int)*(short *)((int)this + 0x6d5));
    iVar5 = thunk_FUN_0045ff50(this,0);
    if (iVar5 != -1) {
      return 2;
    }
    return -1;
  }
  iVar5 = thunk_FUN_0045ff50(this,2);
  if (iVar5 == -1) {
    return -1;
  }
  if (iVar5 == 0) {
LAB_0047ff46:
    sVar1 = *(short *)((int)this + 0x6d5);
    sVar2 = *(short *)((int)this + 0x6d3);
    sVar3 = *(short *)((int)this + 0x6d1);
    *(undefined4 *)((int)this + 0x6e7) = 2;
    goto LAB_0047ff67;
  }
  if (iVar5 != 3) {
    return 2;
  }
  pvVar6 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                               *(undefined1 *)((int)this + 0x24)),
                                      (uint)*(ushort *)((int)this + 0x30));
  if (pvVar6 == (void *)0x0) {
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b57,0,0,&DAT_007a4ccc);
    if (iVar5 == 0) {
      return -1;
    }
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  iVar5 = thunk_FUN_0040bc90(pvVar6,(uint)*(ushort *)((int)this + 0x32),
                             (short *)(int)*(short *)((int)this + 0x6cb),
                             (short *)(int)*(short *)((int)this + 0x6cd),
                             (short *)(int)*(short *)((int)this + 0x6cf),'\0');
  switch(*(undefined4 *)((int)this + 0x6e3)) {
  case 0:
    break;
  case 1:
    if (iVar5 < *(int *)((int)this + 0x6d7)) break;
    *(int *)((int)this + 0x6db) = iVar5;
    *(undefined4 *)((int)this + 0x6e3) = 2;
    goto LAB_0047feeb;
  case 2:
    if (*(int *)((int)this + 0x6db) <= iVar5) {
      *(int *)((int)this + 0x6df) = iVar5;
      *(undefined4 *)((int)this + 0x6e3) = 3;
      goto LAB_0047feeb;
    }
    break;
  case 3:
    if (*(int *)((int)this + 0x6df) <= iVar5) {
      *(undefined4 *)((int)this + 0x6e3) = 0;
      goto LAB_0047ff46;
    }
    break;
  default:
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b76,0,0,&DAT_007a4ccc);
    if (iVar5 == 0) {
      return 2;
    }
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  *(int *)((int)this + 0x6d7) = iVar5;
  *(undefined4 *)((int)this + 0x6e3) = 1;
LAB_0047feeb:
  sVar1 = *(short *)((int)this + 0x6cf);
  sVar2 = *(short *)((int)this + 0x6cd);
  sVar3 = *(short *)((int)this + 0x6cb);
LAB_0047ff67:
  thunk_FUN_00481520(this,(int)sVar3,(int)sVar2,(int)sVar1);
  iVar5 = thunk_FUN_0045ff50(this,0);
  if (iVar5 != -1) {
    return 2;
  }
  return -1;
}

