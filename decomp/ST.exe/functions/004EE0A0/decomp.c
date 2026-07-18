
void FUN_004ee0a0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  short *psVar5;
  void *unaff_EDI;
  char *pcVar6;
  short *psVar7;
  bool bVar8;
  undefined4 local_6c;
  undefined4 local_68 [16];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  byte local_16;
  int local_14;
  void *local_10;
  int local_c;
  char *local_8;
  
  local_6c = DAT_00858df8;
  DAT_00858df8 = &local_6c;
  iVar2 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_6c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_behpanel_cpp_007c1694,0xb2,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7c1694,0xb2);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_28 = *(int *)((int)local_10 + 0x1ab);
  local_24 = *(undefined4 *)((int)local_10 + 0x1af);
  local_20 = *(undefined4 *)((int)local_10 + 0x1b3);
  local_1c = *(undefined4 *)((int)local_10 + 0x1b7);
  local_18 = *(undefined2 *)((int)local_10 + 0x1bb);
  local_16 = *(byte *)((int)local_10 + 0x1bd);
  thunk_FUN_0043beb0(DAT_007fa174,0xb,(int *)((int)local_10 + 0x1ab));
  local_8 = (char *)&local_24;
  local_14 = -0x1af - (int)local_10;
  pcVar6 = (char *)((int)local_10 + 0x1af);
  piVar4 = (int *)((int)local_10 + 0x1cf);
  local_c = 6;
  do {
    *(undefined4 *)((int)local_10 + 0x28) = 0x54;
    *(uint *)((int)local_10 + 0x2c) = (uint)(byte)pcVar6[6];
    *(char **)((int)local_10 + 0x30) = pcVar6 + local_14;
    FUN_006e6080(local_10,2,*(undefined4 *)((int)local_10 + 0x1be),
                 (undefined4 *)((int)local_10 + 0x18));
    if (*pcVar6 != *local_8) {
      *(undefined1 *)((int)piVar4 + -1) = 1;
      iVar2 = thunk_FUN_00525390(*pcVar6,*(int *)((int)local_10 + 0x1ab));
      *piVar4 = iVar2;
      iVar2 = thunk_FUN_005272b0(*pcVar6);
      piVar4[2] = iVar2;
      *(undefined1 *)(piVar4 + 3) = 3;
    }
    piVar4 = (int *)((int)piVar4 + 0x27);
    pcVar6 = pcVar6 + 1;
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar2 = 3;
  bVar8 = true;
  psVar5 = (short *)((int)local_10 + 0x1af);
  psVar7 = (short *)&local_24;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *psVar5 == *psVar7;
    psVar5 = psVar5 + 1;
    psVar7 = psVar7 + 1;
  } while (bVar8);
  if (!bVar8) {
    *(undefined4 *)((int)local_10 + 0x28) = 5;
    FUN_006e6080(local_10,2,*(undefined4 *)((int)local_10 + 0x1be),
                 (undefined4 *)((int)local_10 + 0x18));
  }
  if (*(byte *)((int)local_10 + 0x1bb) != (byte)local_18) {
    *(uint *)((int)local_10 + 0x2c) = (uint)*(byte *)((int)local_10 + 0x1bb);
    *(undefined4 *)((int)local_10 + 0x28) = 0x20;
    FUN_006e6080(local_10,2,*(undefined4 *)((int)local_10 + 0x1c2),
                 (undefined4 *)((int)local_10 + 0x18));
  }
  if (*(byte *)((int)local_10 + 0x1bc) != local_18._1_1_) {
    *(uint *)((int)local_10 + 0x2c) = (uint)*(byte *)((int)local_10 + 0x1bc);
    *(undefined4 *)((int)local_10 + 0x28) = 0x20;
    FUN_006e6080(local_10,2,*(undefined4 *)((int)local_10 + 0x1c6),
                 (undefined4 *)((int)local_10 + 0x18));
  }
  if (*(byte *)((int)local_10 + 0x1bd) != local_16) {
    *(uint *)((int)local_10 + 0x2c) = (uint)*(byte *)((int)local_10 + 0x1bd);
    *(undefined4 *)((int)local_10 + 0x28) = 0x20;
    FUN_006e6080(local_10,2,*(undefined4 *)((int)local_10 + 0x1ca),
                 (undefined4 *)((int)local_10 + 0x18));
  }
  DAT_00858df8 = (undefined4 *)local_6c;
  return;
}

