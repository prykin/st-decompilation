
void __cdecl
FUN_006d1350(undefined2 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;

  if (param_6 != 0) {
    iVar4 = param_6;
    do {
      do {
        bVar1 = *param_3;
        puVar3 = param_1;
        while (param_3 = param_3 + 1, bVar1 != param_8) {
          uVar2 = *(undefined4 *)(param_5 + (uint)bVar1 * 4);
          *puVar3 = (short)uVar2;
          *(char *)(puVar3 + 1) = (char)((uint)uVar2 >> 0x10);
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_006d13a9;
          puVar3 = (undefined2 *)((int)puVar3 + 3);
          bVar1 = *param_3;
        }
        param_1 = (undefined2 *)((int)puVar3 + 3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
LAB_006d13a9:
      param_3 = param_3 + (param_4 - param_6);
      param_1 = (undefined2 *)((int)puVar3 + param_2 + param_6 * -3 + 3);
      param_7 = param_7 + -1;
      iVar4 = param_6;
    } while (param_7 != 0);
  }
  return;
}

