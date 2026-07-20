
void FUN_0075d370(AnonShape_0075D370_6C1A68B3 *param_1,int *param_2,int *param_3,undefined4 param_4,
                 int param_5,int *param_6,int param_7)

{
  AnonNested_0075D370_01B2_35AE3A6A *pAVar1;
  AnonShape_0075D370_6C1A68B3 *pAVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  pAVar2 = param_1;
  pAVar1 = param_1->field_01B2;
  if (param_1->field_0126 <= (int)pAVar1->field_005C) {
    local_8 = *(int *)&param_1->field_0xd0;
    local_c = 0;
    if (0 < *(int *)&param_1->field_0x1c) {
      puVar5 = &pAVar1->field_0xc;
      param_1 = (AnonShape_0075D370_6C1A68B3 *)param_2;
      do {
        (**(code **)(puVar5 + 0x28))
                  (pAVar2,local_8,*(int *)param_1 + *(int *)(puVar5 + 0x58) * *param_3 * 4,puVar5);
        param_1 = (AnonShape_0075D370_6C1A68B3 *)&param_1->field_0x4;
        local_c = local_c + 1;
        puVar5 = puVar5 + 4;
        local_8 = local_8 + 0x54;
      } while (local_c < *(int *)&pAVar2->field_0x1c);
    }
    pAVar1->field_005C = 0;
  }
  uVar6 = pAVar2->field_0126 - pAVar1->field_005C;
  if ((uint)pAVar1->field_0060 < uVar6) {
    uVar6 = pAVar1->field_0060;
  }
  uVar3 = param_7 - *param_6;
  if (uVar3 < uVar6) {
    uVar6 = uVar3;
  }
  (**(code **)(*(int *)&pAVar2->field_0x1b6 + 4))
            (pAVar2,&pAVar1->field_0xc,pAVar1->field_005C,param_5 + *param_6 * 4,uVar6);
  *param_6 = *param_6 + uVar6;
  iVar4 = pAVar1->field_005C + uVar6;
  pAVar1->field_0060 = pAVar1->field_0060 - uVar6;
  pAVar1->field_005C = iVar4;
  if (pAVar2->field_0126 <= iVar4) {
    *param_3 = *param_3 + 1;
  }
  return;
}

