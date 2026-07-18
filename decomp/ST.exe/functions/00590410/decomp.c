
void FUN_00590410(void)

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
    thunk_FUN_00540dc0(0,*(undefined4 *)((int)local_8 + 8),2,100,2,1,0,0,0,0,0,0);
    thunk_FUN_00540dc0(0,*(undefined4 *)((int)local_8 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
    puVar4 = (undefined4 *)((int)local_8 + 0x18);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)local_8 + 0x28) = 0x14;
    *(undefined4 *)((int)local_8 + 0x2c) = *(undefined4 *)((int)local_8 + 8);
    FUN_006e6000(local_8,3,1,(undefined4 *)((int)local_8 + 0x18));
    FUN_006f20e0((uint *)((int)local_8 + 0x5e));
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (*(int *)((int)local_8 + 0x48) != 0) {
      FUN_006e3b50((undefined4 *)((int)local_8 + 0x38));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_adv_obj_cpp_007cbc24,0x36,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cbc24,0x36);
  return;
}

