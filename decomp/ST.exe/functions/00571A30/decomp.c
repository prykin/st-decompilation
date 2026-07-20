
void __cdecl
FUN_00571a30(AnonShape_00571A30_8BA8841B *param_1,AnonShape_00571A30_67EE4B56 *param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0x10;
  if (param_3 != '\0') {
    puVar2 = (undefined4 *)&param_2->field_0x10;
    puVar3 = (undefined4 *)&param_1->field_0x299;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1->field_02E6 = param_2->field_005D;
    param_1->field_02EA = param_2->field_0061;
    param_1->field_02EE = param_2->field_0065;
    puVar2 = (undefined4 *)&param_2[1].field_0x8;
    puVar3 = (undefined4 *)&param_1->field_0x11aa;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((int)&param_1->field_0003 + 1) = *(undefined4 *)((int)&param_2->field_0003 + 1);
    *(undefined4 *)&param_1->field_0x8 = *(undefined4 *)&param_2->field_0x8;
    *(undefined2 *)&param_1->field_0xc = *(undefined2 *)&param_2->field_0xc;
    param_1->field_000E = param_2->field_000E;
    param_1->field_02D9 = param_2->field_0x50;
    param_1->field_02DA = param_2->field_0051;
    param_1->field_02DB = param_2->field_0052;
    param_1->field_0x2dc = param_2->field_0053;
    param_1->field_02DD = param_2->field_0x54;
    param_1->field_02DE = param_2->field_0055;
    param_1->field_02DF = param_2->field_0056;
    param_1->field_0x2e0 = param_2->field_0057;
    param_1->field_02E1 = *(undefined4 *)&param_2->field_0x58;
    param_1->field_02E5 = param_2->field_0x5c;
    param_1->field_02F3 = param_2->field_006A;
    param_1->field_0x2f4 = param_2->field_006B;
    param_1->field_02F5 = *(undefined4 *)(param_2 + 1);
    param_1->field_02F2 = param_2->field_0069;
    param_1->field_11A6 = *(undefined4 *)((int)&param_2[1].field_0003 + 1);
    return;
  }
  puVar2 = (undefined4 *)&param_1->field_0x299;
  puVar3 = (undefined4 *)&param_2->field_0x10;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2->field_005D = param_1->field_02E6;
  param_2->field_0061 = param_1->field_02EA;
  param_2->field_0065 = param_1->field_02EE;
  puVar2 = (undefined4 *)&param_1->field_0x11aa;
  puVar3 = (undefined4 *)&param_2[1].field_0x8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)((int)&param_2->field_0003 + 1) = *(undefined4 *)((int)&param_1->field_0003 + 1);
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined2 *)&param_2->field_0xc = *(undefined2 *)&param_1->field_0xc;
  param_2->field_000E = param_1->field_000E;
  param_2->field_0x50 = param_1->field_02D9;
  param_2->field_0051 = param_1->field_02DA;
  param_2->field_0052 = param_1->field_02DB;
  param_2->field_0053 = param_1->field_0x2dc;
  param_2->field_0x54 = param_1->field_02DD;
  param_2->field_0055 = param_1->field_02DE;
  param_2->field_0056 = param_1->field_02DF;
  param_2->field_0057 = param_1->field_0x2e0;
  *(undefined4 *)&param_2->field_0x58 = param_1->field_02E1;
  param_2->field_0x5c = param_1->field_02E5;
  param_2->field_006A = param_1->field_02F3;
  param_2->field_006B = param_1->field_0x2f4;
  *(undefined4 *)(param_2 + 1) = param_1->field_02F5;
  param_2->field_0069 = param_1->field_02F2;
  *(undefined4 *)((int)&param_2[1].field_0003 + 1) = param_1->field_11A6;
  return;
}

