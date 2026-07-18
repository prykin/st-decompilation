
void thunk_FUN_0053a380(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint *puVar4;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  int iStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(uint *)(iStack_c + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(iStack_c + 0xc),*(uint *)(iStack_c + 0x17c));
    }
    *(undefined4 *)(iStack_c + 0x17c) = 0;
    if (*(uint *)(iStack_c + 0x1c5) != 0) {
      FUN_006e56b0(*(void **)(iStack_c + 0xc),*(uint *)(iStack_c + 0x1c5));
    }
    *(undefined4 *)(iStack_c + 0x1c5) = 0;
    if (*(uint *)(iStack_c + 0x1c1) != 0) {
      FUN_006e56b0(*(void **)(iStack_c + 0xc),*(uint *)(iStack_c + 0x1c1));
    }
    *(undefined4 *)(iStack_c + 0x1c1) = 0;
    puVar4 = (uint *)(iStack_c + 0x181);
    iStack_8 = 2;
    do {
      iVar2 = 8;
      do {
        if (*puVar4 != 0) {
          FUN_006e56b0(*(void **)(iStack_c + 0xc),*puVar4);
          *puVar4 = 0;
        }
        puVar4 = puVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    if (*(uint **)(iStack_c + 0x1dd) != (uint *)0x0) {
      FUN_00710560(*(uint **)(iStack_c + 0x1dd));
      *(undefined4 *)(iStack_c + 0x1dd) = 0;
    }
    if (*(int *)(iStack_c + 0x1cd) != 0) {
      FUN_006f20e0((uint *)(iStack_c + 0x1cd));
    }
    *(undefined4 *)(iStack_c + 0x1d9) = 0;
    *(undefined4 *)(iStack_c + 0x1d5) = 0;
    *(undefined4 *)(iStack_c + 0x1d1) = 0;
    DAT_008016e4 = 0;
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0x97,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7574,0x97);
  return;
}

