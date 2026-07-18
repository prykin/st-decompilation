
void FUN_00539490(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  int local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if (*(uint *)(local_8 + 0x184) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x184));
    }
    *(undefined4 *)(local_8 + 0x184) = 0;
    DAT_008016e0 = 0;
    if (*(uint **)(local_8 + 0x17c) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_8 + 0x17c));
      *(undefined4 *)(local_8 + 0x17c) = 0;
    }
    if (*(int *)(local_8 + 0x180) != 0) {
      FUN_006f20e0((uint *)(local_8 + 0x180));
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_pause_cpp_007c7490,0x3b,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7490,0x3b);
  return;
}

