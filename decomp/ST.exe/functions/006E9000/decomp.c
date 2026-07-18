
undefined4 * __thiscall
FUN_006e9000(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = FUN_006aac10(0x2c);
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  puVar1[4] = param_6;
  lVar3 = __ftol();
  puVar1[6] = (int)lVar3;
  *(undefined2 *)((int)puVar1 + 0x1e) = param_3;
  *(undefined2 *)(puVar1 + 7) = param_2;
  puVar1[8] = param_1;
  puVar1[9] = param_7;
  FUN_006b9910((undefined4 *)((int)this + 0x294),puVar1);
  iVar2 = FUN_006e8ea0(this,(int)puVar1);
  if (iVar2 != 0) {
    *(undefined4 *)((int)this + 0x134) = 1;
  }
  return puVar1;
}

