
void thunk_FUN_005e9b50(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 auStack_8d8 [6];
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  int iStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  int iStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_74;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  puVar5 = auStack_8d8;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (*(int *)(iStack_8 + 0x1a64) == 0) {
      thunk_FUN_005ddc70();
      thunk_FUN_005de270();
      puVar5 = auStack_8d8;
      for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      auStack_8d8[0] = 1;
      auStack_8d8[1] = 9;
      auStack_8d8[2] = *(undefined4 *)(DAT_0081176c + 0x34);
      auStack_8d8[3] = 0xcb;
      auStack_8d8[4] = 0x23f;
      auStack_8d8[5] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 4);
      uStack_8c0 = *(undefined4 *)(*(int *)(DAT_0081176c + 0x682) + 8);
      uStack_8bc = 0x104;
      uStack_8b8 = *(undefined4 *)(DAT_0081176c + 0x686);
      piVar1 = *(int **)(iStack_8 + 0xc);
      uStack_74 = 0x100;
      iStack_88c = piVar1[5];
      uStack_888 = 0;
      uStack_884 = 0xc0a0;
      iStack_84c = piVar1[5];
      uStack_848 = 0;
      uStack_844 = 0xc0a2;
      (**(code **)(*piVar1 + 8))(6,DAT_0081176c + 0x54c,0,auStack_8d8,0);
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x303,0,iVar4,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cdd5c,0x303);
  return;
}

