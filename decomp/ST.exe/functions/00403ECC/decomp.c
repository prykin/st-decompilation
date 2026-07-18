
void thunk_FUN_0053f220(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(uint *)(iStack_8 + 0x180) != 0) {
      FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x180));
    }
    *(undefined4 *)(iStack_8 + 0x180) = 0;
    if (*(uint *)(iStack_8 + 0x19d) != 0) {
      FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x19d));
    }
    *(undefined4 *)(iStack_8 + 0x19d) = 0;
    puVar4 = (uint *)(iStack_8 + 0x1a1);
    iVar2 = 5;
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)(iStack_8 + 0xc),*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(uint **)(iStack_8 + 0x17c) != (uint *)0x0) {
      FUN_00710560(*(uint **)(iStack_8 + 0x17c));
      *(undefined4 *)(iStack_8 + 0x17c) = 0;
    }
    if (*(int *)(iStack_8 + 0x184) != 0) {
      FUN_006f20e0((uint *)(iStack_8 + 0x184));
    }
    *(undefined4 *)(iStack_8 + 400) = 0;
    *(undefined4 *)(iStack_8 + 0x188) = 0;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x1a6,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7870,0x1a6);
  return;
}

