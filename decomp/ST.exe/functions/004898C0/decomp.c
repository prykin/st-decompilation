#include "../../pseudocode_runtime.h"


void __thiscall FUN_004898c0(void *this,AnonShape_004898C0_081F3DAB *param_1)

{
  int iVar1;
  int iVar2;
  AnonShape_004898C0_081F3DAB *pAVar3;

  pAVar3 = param_1;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar3 = 0;
    pAVar3 = (AnonShape_004898C0_081F3DAB *)&pAVar3->field_0x4;
  }
  *(undefined4 *)param_1 = STField<undefined4>(this,0x18);
  *(undefined4 *)&param_1->field_0x4 = STField<undefined4>(this,0x6f7);
  iVar1 = thunk_FUN_004e8030(STField<int>(this,0x6f7));
  param_1->field_0x8 = (char)iVar1;
  param_1->field_0009 = STField<undefined4>(this,0x6fb);
  param_1->field_000D = STField<undefined4>(this,0x6ff);
  param_1->field_0011 = STField<undefined4>(this,0x703);
  param_1->field_0015 = STField<undefined2>(this,0x707);
  param_1->field_0017 = STField<undefined1>(this,0x709);
  return;
}

