
void FUN_00753020(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  RecoveredRecord_006BFE70_3123BCE8 *pRVar3;
  RecoveredRecord_006BFE70_3123BCE8 *pRVar4;

  pRVar3 = (RecoveredRecord_006BFE70_3123BCE8 *)(param_1 + param_2);
  uVar2 = 0xffffffff;
  pRVar4 = pRVar3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *(char *)pRVar4;
    pRVar4 = (RecoveredRecord_006BFE70_3123BCE8 *)&pRVar4->field_0x1;
  } while (cVar1 != '\0');

  Library::MSVCRT::FUN_0072da70(pRVar3,(AnonPointee_TLOBaseTy_0607 *)&pRVar3->field_0x1,~uVar2 - 1);
  return;
}

