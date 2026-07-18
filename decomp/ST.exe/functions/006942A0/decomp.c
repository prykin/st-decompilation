
int FUN_006942a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  uint local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 1;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar1 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079d770,(int *)&local_c,0x1999);
  }
  else {
    local_8 = 0;
  }
  iVar1 = local_8;
  DAT_00858df8 = (undefined4 *)local_54;
  if (local_8 != 0) {
    puVar3 = (undefined4 *)(local_10 + 0x11);
    for (iVar2 = 0xa2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined4 *)(local_c + 0x11);
    puVar4 = (undefined4 *)(local_10 + 0x11);
    for (iVar2 = 0xa2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)(local_10 + 0x10) = *(undefined1 *)(local_c + 0x10);
  }
  if (local_c != 0) {
    FUN_006f20e0(&local_c);
  }
  return iVar1;
}

