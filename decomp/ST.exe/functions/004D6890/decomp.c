
void __thiscall FUN_004d6890(void *this,AnonShape_004D6890_0C7826D6 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  AnonShape_004D6890_0C7826D6 *pAVar4;
  
  pAVar4 = param_1;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar4 = 0;
    pAVar4 = (AnonShape_004D6890_0C7826D6 *)((int)&pAVar4->field_0003 + 1);
  }
  *(undefined2 *)pAVar4 = 0;
  iVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  param_1->field_0007 = (char)iVar3;
  *(undefined1 *)param_1 = 1;
  uVar2 = *(undefined1 *)((int)this + 0x21d);
  param_1->field_0002 = 2;
  param_1->field_0001 = uVar2;
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  param_1->field_001B = uVar2;
  param_1->field_0003 = *(undefined4 *)((int)this + 0x259);
  uVar1 = *(undefined4 *)((int)this + 0x18);
  param_1->field_0008 = (short)uVar1;
  param_1->field_000A = (short)((uint)uVar1 >> 0x10);
  param_1->field_001E = 0;
  param_1->field_0026 = 0xffff;
  *(undefined2 *)&param_1->field_0x20 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - *(int *)((int)this + 0x265))) = 1;
  return;
}

