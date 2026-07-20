
undefined4 __thiscall FUN_00604fc0(void *this,AnonShape_00604FC0_D9906037 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  AnonShape_00604FC0_D9906037 *pAVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  
  pAVar5 = param_1;
  puVar6 = (undefined4 *)((int)this + 0x1d5);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *(undefined4 *)pAVar5;
    pAVar5 = (AnonShape_00604FC0_D9906037 *)&pAVar5->field_0x4;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0x215) = *(undefined4 *)&param_1->field_0x40;
  puVar6 = (undefined4 *)&param_1->field_0x44;
  puVar8 = (undefined4 *)((int)this + 0x219);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  piVar9 = (int *)&param_1->field_0xe2;
  *(undefined4 *)((int)this + 0x269) = *(undefined4 *)&param_1->field_0x94;
  *(undefined1 *)((int)this + 0x26d) = param_1->field_0x98;
  *(undefined4 *)((int)this + 0x26e) = param_1->field_0099;
  *(undefined4 *)((int)this + 0x2b7) = param_1->field_00DE;
  *(undefined4 *)((int)this + 699) = 0;
  *(undefined4 *)((int)this + 0x272) = param_1->field_009D;
  *(undefined4 *)((int)this + 0x276) = param_1->field_00A1;
  *(undefined4 *)((int)this + 0x27a) = param_1->field_00A5;
  *(undefined4 *)((int)this + 0x27e) = param_1->field_00A9;
  if (*(int *)((int)this + 0x215) != 0) {
    iVar3 = *piVar9;
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)&param_1[1].field_0x2);
    *(undefined4 *)((int)this + 0x215) = uVar1;
    piVar9 = (int *)(&param_1[1].field_0x2 + iVar3);
  }
  iVar3 = *(int *)((int)this + 0x269);
  if (iVar3 != 0) {
    uVar7 = 0;
    if (0 < iVar3) {
      piVar2 = (int *)((int)this + 0x219);
      piVar10 = piVar9;
      do {
        if (*piVar2 != 0) {
          uVar7 = uVar7 + 4 + *piVar10;
          piVar10 = (int *)((int)piVar10 + *piVar10 + 4);
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (uVar7 != 0) {
        piVar2 = (int *)Library::DKW::LIB::FUN_006aac70(uVar7);
        *(int **)((int)this + 0x2b3) = piVar2;
        for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar2 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar2 = piVar2 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)piVar2 = (char)*piVar9;
          piVar9 = (int *)((int)piVar9 + 1);
          piVar2 = (int *)((int)piVar2 + 1);
        }
      }
    }
  }
  return 0;
}

