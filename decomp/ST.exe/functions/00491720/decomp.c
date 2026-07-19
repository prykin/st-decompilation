
void __fastcall FUN_00491720(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar6;
  uint uVar7;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_c;
  uint local_8;
  
  uVar6 = 0;
  local_8 = 0;
  if (DAT_008117bc != (undefined4 *)0x0) {
    local_18 = (undefined2)param_1[9];
    local_16 = *(undefined2 *)((int)param_1 + 0x32);
    piVar1 = (int *)((int)param_1 + 0x5a6);
    local_1c = 0x5dd3;
    if ((*piVar1 == 0) &&
       (iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x5a2),piVar1), iVar3 == -4)) {
      RaiseInternalException(-4,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x501f);
    }
    local_14 = *(undefined2 *)(*piVar1 + 0x24);
    local_12 = *(undefined2 *)(*piVar1 + 0x32);
    (**(code **)*DAT_008117bc)(local_2c);
    param_2 = extraout_EDX;
  }
  param_1[0x170] = 0;
  *(undefined4 *)((int)param_1 + 0x7c2) = 0;
  *(undefined4 *)((int)param_1 + 0x5a6) = 0;
  uVar4 = DumpClassC::WritePtr
                    (*(short *)((int)param_1 + 0x5b),*(short *)((int)param_1 + 0x5d),
                     *(short *)((int)param_1 + 0x5f),
                     CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)((int)param_1 + 0x8e)),
                     (int)param_1);
  iVar3 = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),(char)param_1[9]),
                             CONCAT22((short)((uint)uVar4 >> 0x10),(short)param_1[0xc]));
  uVar5 = thunk_FUN_00424790(iVar3);
  uVar2 = *(uint *)((int)param_1 + 0x1d1);
  uVar7 = local_8;
  if ((uVar2 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      uVar6 = 1;
    }
  }
  else if ((uVar5 & 1) == 0) {
    uVar7 = 1;
  }
  if ((uVar2 & 2) == 0) {
    if ((uVar5 & 2) != 0) {
      uVar6 = uVar6 | 2;
    }
  }
  else if ((uVar5 & 2) == 0) {
    uVar7 = uVar7 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar5 & 4) != 0) {
      uVar6 = uVar6 | 4;
    }
  }
  else if ((uVar5 & 4) == 0) {
    uVar7 = uVar7 | 4;
  }
  if ((uVar2 & 8) == 0) {
    if ((uVar5 & 8) != 0) {
      uVar6 = uVar6 | 8;
    }
  }
  else if ((uVar5 & 8) == 0) {
    uVar7 = uVar7 | 8;
  }
  if ((uVar2 & 0x10) == 0) {
    if ((uVar5 & 0x10) != 0) {
      uVar6 = uVar6 | 0x10;
    }
  }
  else if ((uVar5 & 0x10) == 0) {
    uVar7 = uVar7 | 0x10;
  }
  if (uVar6 != 0) {
    (**(code **)(*param_1 + 0x100))(uVar6);
  }
  if (uVar7 != 0) {
    (**(code **)(*param_1 + 0x104))(uVar7);
  }
  local_c = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
  STBoatC::CmdToObj((STBoatC *)param_1,3,&local_c);
  return;
}

