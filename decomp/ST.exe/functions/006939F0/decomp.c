
undefined4 FUN_006939f0(void)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 1;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar1 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    puVar2 = local_10;
    for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined1 *)puVar2 = 0;
    FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079d770,(int *)&local_8,1);
    DAT_00858df8 = (undefined4 *)local_54;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_54;
    local_c = 0;
    FUN_006f20e0((uint *)&local_8);
  }
  if (local_8 != (undefined4 *)0x0) {
    puVar2 = local_8;
    for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_10 = *puVar2;
      puVar2 = puVar2 + 1;
      local_10 = local_10 + 1;
    }
    *(undefined1 *)local_10 = *(undefined1 *)puVar2;
    FUN_006f20e0((uint *)&local_8);
  }
  return local_c;
}

