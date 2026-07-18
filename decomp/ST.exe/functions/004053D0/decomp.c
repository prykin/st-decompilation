
void __cdecl thunk_FUN_006a57a0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar4 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
    if (iVar4 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar4 = 5;
    *param_1 = DAT_0085496c;
    puVar2 = param_1;
    do {
      puVar2[6] = 0;
      puVar2[1] = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = DAT_0085496c;
    } while (iVar4 != 0);
    for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
      uVar5 = puVar3[5] & 0xffff;
      if (uVar5 < 5) {
        param_1[uVar5 + 1] = param_1[uVar5 + 1] + 1;
        param_1[(puVar3[5] & 0xffff) + 6] = param_1[(puVar3[5] & 0xffff) + 6] + puVar3[4];
      }
      else {
        iVar4 = FUN_00730fa0(0,0,0,0,(byte *)s_Bad_memory_block_found_at_0x_08X_007ec8d8);
        if (iVar4 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    param_1[0xb] = DAT_00854a48;
    param_1[0xc] = DAT_00854968;
  }
  return;
}

