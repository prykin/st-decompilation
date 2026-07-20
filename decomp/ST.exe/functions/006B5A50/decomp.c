
uint __fastcall
FUN_006b5a50(AnonShape_006B5A50_BD82F60D *param_1,AnonShape_006B5A50_C145E640 *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((param_1 == (AnonShape_006B5A50_BD82F60D *)0x0) ||
     (param_2 == (AnonShape_006B5A50_C145E640 *)0x0)) {
    return 0xffffffcc;
  }
  if (param_1->field_0008 != param_2->field_0008) {
    return 0xffffffce;
  }
  if (param_1->field_000C != param_2->field_000C) {
    return 2;
  }
  iVar1 = param_1->field_000C * param_1->field_0008;
  bVar4 = true;
  pcVar2 = param_1->field_001C;
  pcVar3 = param_2->field_001C;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  return (uint)!bVar4;
}

