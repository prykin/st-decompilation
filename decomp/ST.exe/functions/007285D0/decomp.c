
void __cdecl FUN_007285d0(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar1 = DAT_008570f8;
  uVar2 = *(uint *)(param_2 + 0x24) & 0xffff0000;
  if ((int)DAT_0085705c <= (int)uVar2) {
    uVar2 = DAT_0085705c;
  }
  uVar3 = *(uint *)(param_1 + 0x24) & 0xffff0000;
  if ((int)uVar3 < (int)DAT_008570dc) {
    uVar3 = DAT_008570dc;
  }
  if (uVar2 - uVar3 != 0 && (int)uVar3 <= (int)uVar2) {
    puVar4 = (undefined1 *)((uVar3 >> 0x10) + DAT_00857090 * DAT_00857098 + DAT_0085708c);
    for (uVar2 = uVar2 - uVar3 >> 0x10; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

