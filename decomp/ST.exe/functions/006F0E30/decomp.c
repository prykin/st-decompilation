#include "../../pseudocode_runtime.h"


int __cdecl
FUN_006f0e30(RecoveredRecord_006F0E30_F311FECB *param_1,RecoveredRecord_006F0E30_E46FC23B *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  RecoveredRecord_006F0E30_F311FECB *pRVar4;
  RecoveredRecord_006F0E30_E46FC23B *pRVar5;
  bool bVar6;
  bool bVar7;

  if (*(byte *)param_1 != *(byte *)param_2) {
    return (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
  }
  sVar1 = param_1->field_0016;
  if (sVar1 != param_2->field_0016) {
    return (int)sVar1 - (int)param_2->field_0016;
  }
  iVar3 = (int)sVar1;
  bVar6 = false;
  iVar2 = 0;
  bVar7 = true;
  pRVar4 = param_1 + 1;
  pRVar5 = param_2 + 1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *(byte *)pRVar4 < *(byte *)pRVar5;
    bVar7 = *(byte *)pRVar4 == *(byte *)pRVar5;
    pRVar4 = (RecoveredRecord_006F0E30_F311FECB *)&pRVar4->field_0x1;
    pRVar5 = (RecoveredRecord_006F0E30_E46FC23B *)&pRVar5->field_0x1;
  } while (bVar7);
  if (!bVar7) {
    iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (iVar2 == 0) {
    memmove(param_1, param_2, 0x18); /* compiler REP MOVS byte copy */
  }
  return iVar2;
}

