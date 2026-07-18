
void FUN_00424360(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_8 = param_1;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  iVar4 = local_8;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1d5,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7a50a4,0x1d6);
    return;
  }
  *(undefined4 *)(local_c + 0x20) = *(undefined4 *)(local_8 + 0x14);
  *(undefined1 *)(local_c + 0x24) = *(undefined1 *)(local_8 + 4);
  *(undefined2 *)(local_c + 0x25) = *(undefined2 *)(local_8 + 0x18);
  *(undefined2 *)(local_c + 0x27) = *(undefined2 *)(local_8 + 0x1a);
  *(undefined4 *)(local_c + 0x31) = *(undefined4 *)(local_8 + 0x2c);
  *(undefined4 *)(local_c + 0x35) = *(undefined4 *)(local_8 + 0x30);
  *(undefined4 *)(local_c + 0x39) = *(undefined4 *)(local_8 + 0x34);
  if (*(int *)(local_8 + 0x1c) == -1) {
    *(undefined4 *)(local_c + 0x29) = 0;
  }
  else {
    puVar3 = FUN_006b00c0((uint *)0x0,(uint *)(*(int *)(local_8 + 0x1c) + local_8),&LAB_004045c5);
    *(uint **)(local_c + 0x29) = puVar3;
  }
  iVar2 = *(int *)(iVar4 + 0x24);
  if (iVar2 != -1) {
    puVar3 = FUN_006b00c0((uint *)0x0,(uint *)(iVar2 + iVar4),&LAB_004045c5);
    *(uint **)(local_c + 0x2d) = puVar3;
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  *(undefined4 *)(local_c + 0x2d) = 0;
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

