
void FUN_00538390(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)((int)local_8 + 0x18);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)local_8 + 0x28) = 0x14;
    *(undefined4 *)((int)local_8 + 0x2c) = *(undefined4 *)((int)local_8 + 8);
    FUN_006e6000(local_8,3,1,(undefined4 *)((int)local_8 + 0x18));
    if (-1 < (int)*(uint *)((int)local_8 + 0x60)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)((int)local_8 + 0x60));
    }
    *(undefined4 *)((int)local_8 + 0x60) = 0xffffffff;
    if (*(int *)((int)local_8 + 0x68) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x68));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0x3c,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7390,0x3c);
  return;
}

