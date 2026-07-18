
void FUN_00521b90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(byte **)(local_8 + 0x198) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_8 + 0x198));
      *(undefined4 *)(local_8 + 0x198) = 0;
    }
    if (*(uint *)(local_8 + 0x1a0) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x1a0));
    }
    *(undefined4 *)(local_8 + 0x1a0) = 0;
    DAT_0080169c = 0;
    if (*(uint **)(local_8 + 0x180) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_8 + 0x180));
      *(undefined4 *)(local_8 + 0x180) = 0;
    }
    if (*(int *)(local_8 + 0x184) != 0) {
      FUN_006f20e0((uint *)(local_8 + 0x184));
    }
    if (*(int *)(local_8 + 0x19c) != 0) {
      FUN_006f20e0((uint *)(local_8 + 0x19c));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_intercom_cpp_007c401c,0x4a,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c401c,0x4a);
  return;
}

