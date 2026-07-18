
undefined4 * __cdecl
thunk_FUN_006a40c0(int param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_006a3c10(param_1 * param_2,param_3,param_4,param_5);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar4 = (undefined4 *)((int)puVar1 + param_1 * param_2), puVar1 < puVar4)) {
    uVar2 = (int)puVar4 - (int)puVar1;
    puVar4 = puVar1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return puVar1;
  }
  return puVar1;
}

