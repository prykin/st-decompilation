
void __thiscall thunk_FUN_00630260(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int aiStack_24 [4];
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (DAT_008117a4 != (void *)0x0) {
    puVar1 = *(undefined4 **)((int)this + param_1 * 4 + 0x1e5);
    if ((puVar1 != (undefined4 *)0x0) && ((puVar1[1] == 3 || (puVar1[1] == 6)))) {
      piVar3 = aiStack_24;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      aiStack_24[0] = puVar1[3];
      aiStack_24[1] = *(undefined4 *)((int)this + 0x1d5);
      aiStack_24[2] = *(undefined4 *)((int)this + 0x1d9);
      aiStack_24[3] = *(undefined4 *)((int)this + 0x1dd);
      uStack_14 = *puVar1;
      iStack_10 = param_1;
      uStack_c = puVar1[2];
      if (param_2 != 0) {
        thunk_FUN_0062cf90(aiStack_24);
        return;
      }
      thunk_FUN_0062d230(DAT_008117a4,aiStack_24);
    }
  }
  return;
}

