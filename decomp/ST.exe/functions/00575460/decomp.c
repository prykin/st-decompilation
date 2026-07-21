
void __cdecl FUN_00575460(AnonShape_00575460_06C413C6 *param_1)

{
  void **value;
  int iVar1;
  uint uVar2;
  HoloTy *pHVar3;
  AnonShape_00575460_06C413C6 *pAVar4;
  DArrayTy *array;
  int iVar5;
  undefined4 *puVar6;
  int local_8;
  
  pAVar4 = param_1;
  pHVar3 = DAT_0080760c;
  if (DAT_0080760c != (HoloTy *)0x0) {
    FUN_006dbcf0((int *)DAT_0080760c);
    Library::MSVCRT::FUN_0072e2b0(pHVar3);
    DAT_0080760c = (HoloTy *)0x0;
  }
  if (param_1 != (AnonShape_00575460_06C413C6 *)0x0) {
    array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,4,0x14);
    *(undefined4 *)(param_1->field_0451 + 4) = 0;
    while( true ) {
      iVar1 = param_1->field_0451;
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      iVar5 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (iVar5 == 0) break;
      puVar6 = (undefined4 *)(iVar5 + 8);
      Library::DKW::TBL::FUN_006ae1c0((uint *)array,puVar6);
      FUN_006a5e90((short *)*puVar6);
    }
    DArrayDestroy((DArrayTy *)param_1->field_0451);
    param_1->field_0451 = 0;
    local_8 = 0;
    if (0 < param_1->field_0455) {
      param_1 = (AnonShape_00575460_06C413C6 *)&param_1->field_0x459;
      do {
        iVar1 = *(int *)param_1;
        if ((iVar1 != 0) && (value = (void **)(iVar1 + 0xc), *(int *)(iVar1 + 0xc) != 0)) {
          array->iteratorIndex = 0;
          do {
            uVar2 = array->iteratorIndex;
            if (array->count <= uVar2) goto LAB_0057554f;
            puVar6 = (undefined4 *)(array->elementSize * uVar2 + (int)array->data);
            array->iteratorIndex = uVar2 + 1;
            if (puVar6 == (undefined4 *)0x0) goto LAB_0057554f;
          } while (*value != (void *)*puVar6);
          if (puVar6 == (undefined4 *)0x0) {
LAB_0057554f:
            Library::DKW::TBL::FUN_006ae1c0((uint *)array,value);
            FreeAndNull(value);
          }
          *value = (void *)0x0;
        }
        local_8 = local_8 + 1;
        param_1 = (AnonShape_00575460_06C413C6 *)&param_1->field_0x4;
      } while (local_8 < pAVar4->field_0455);
    }
    DArrayDestroy(array);
  }
  *(undefined4 *)(*(int *)&pAVar4->field_0x44d + 4) = 0;
  while( true ) {
    iVar1 = *(int *)&pAVar4->field_0x44d;
    uVar2 = *(uint *)(iVar1 + 4);
    if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
    iVar5 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
    *(uint *)(iVar1 + 4) = uVar2 + 1;
    if (iVar5 == 0) break;
    FUN_006a5e90(*(short **)(iVar5 + 4));
  }
  DArrayDestroy(*(DArrayTy **)&pAVar4->field_0x44d);
  *(undefined4 *)&pAVar4->field_0x44d = 0;
  return;
}

