
void FUN_005de270(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_8c4 [5];
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  int local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  int local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  int local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  int local_688 [4];
  int local_678;
  int local_674;
  undefined4 local_620;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  puVar6 = local_8c4;
  for (iVar3 = 0x21e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    local_8c4[0] = 0;
    local_8c4[1] = 2;
    iVar3 = local_8[0xd];
    local_8a4 = 0xcd;
    local_8a0 = 499;
    local_8c4[2] = 1;
    local_8c4[3] = 0;
    local_8c4[4] = *(undefined4 *)(*(int *)((int)local_8 + 0x67e) + 4);
    if (*(int *)(iVar3 + 0xa0) != 0) {
      FUN_00710790(iVar3);
    }
    local_8b0 = *(int *)(iVar3 + 0x8a);
    local_8a8 = (undefined4)(0x49 / (longlong)local_8b0);
    local_808[2] = *(undefined4 *)((int)local_8 + 0x609);
    local_808[3] = *(undefined4 *)((int)local_8 + 0x60d);
    local_7f8 = *(undefined4 *)((int)local_8 + 0x611);
    local_888 = 0;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_7a4 = 0;
    local_68c = 2;
    local_8ac = 1;
    local_884 = 0x633f;
    local_814 = 4;
    local_7f4 = *(undefined4 *)((int)local_8 + 0x615);
    iVar3 = local_8[0x160];
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a0 = 0x6341;
    local_88c = local_8[5];
    local_7a8 = local_88c;
    iVar2 = local_8[0x15e];
    piVar5 = local_808;
    piVar7 = local_688;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    local_688[3] = local_8[0x15f];
    local_674 = local_8[0x161];
    local_620 = 0x6340;
    local_688[2] = iVar2;
    local_678 = iVar3;
    (**(code **)(*local_8 + 8))(8,local_8 + 0x154,0,local_8c4,0);
    FUN_006b3430(DAT_008075a8,local_8[0x156]);
    if (local_8[0x158] != 0xffffffff) {
      FUN_006b34d0((uint *)local_8[0x169],local_8[0x158],0xfffffffe,local_8[0x15e],local_8[0x15f]);
    }
    if (*(uint *)((int)local_8 + 0x5f1) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)local_8 + 0x635),*(uint *)((int)local_8 + 0x5f1),0xfffffffe,
                   *(uint *)((int)local_8 + 0x609),*(uint *)((int)local_8 + 0x60d));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar2 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x3f9,0,iVar3,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cd718,0x3f9);
  return;
}

