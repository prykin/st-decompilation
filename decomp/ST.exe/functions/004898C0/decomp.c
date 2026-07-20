
void __thiscall FUN_004898c0(void *this,AnonShape_004898C0_081F3DAB *param_1)

{
  int iVar1;
  AnonShape_004898C0_081F3DAB *pAVar2;
  
  pAVar2 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar2 = 0;
    pAVar2 = (AnonShape_004898C0_081F3DAB *)&pAVar2->field_0x4;
  }
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)&param_1->field_0x4 = *(undefined4 *)((int)this + 0x6f7);
  iVar1 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7));
  param_1->field_0x8 = (char)iVar1;
  param_1->field_0009 = *(undefined4 *)((int)this + 0x6fb);
  param_1->field_000D = *(undefined4 *)((int)this + 0x6ff);
  param_1->field_0011 = *(undefined4 *)((int)this + 0x703);
  param_1->field_0015 = *(undefined2 *)((int)this + 0x707);
  param_1->field_0017 = *(undefined1 *)((int)this + 0x709);
  return;
}

