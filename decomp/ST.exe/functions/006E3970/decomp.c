
void FUN_006e3970(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    uVar6 = *(int *)(*(int *)(local_8 + 0xc) + 0xc) - 1;
    uVar4 = FUN_006acc70(*(int *)(local_8 + 0xc),uVar6,&local_10);
    while (-1 < (int)uVar4) {
      if (local_c[2] == param_1) {
        FUN_006b0c70(*(int *)(local_8 + 0xc),uVar6);
        thunk_FUN_006a4950(local_c);
        for (puVar1 = *(undefined4 **)(local_8 + 0x30); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          uVar4 = puVar1[1];
          if ((uVar6 <= uVar4) && (uVar4 != 0)) {
            puVar1[1] = uVar4 - 1;
          }
        }
      }
      uVar6 = uVar6 - 1;
      uVar4 = FUN_006acc70(*(int *)(local_8 + 0xc),uVar6,&local_10);
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar5 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0xa1,0,iVar3,&DAT_007a4ccc);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar3,0,0x7ee78c,0xa2);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

