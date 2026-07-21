
undefined4 __thiscall
FUN_006e9af0(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            uint param_6,uint param_7,int param_8)

{
  AnonShape_006E8840_CF3FA5BA *pAVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (pAVar1 = (AnonShape_006E8840_CF3FA5BA *)(*(int *)((int)this + 0x31c) + param_1 * 0x114),
     (*(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    if ((pAVar1->field_0x4 & 1) != 0) {
      FreeAndNull(&pAVar1->field_00A0);
    }
    pAVar1->field_0034 = param_4;
    *(uint *)&pAVar1->field_0x4 = *(uint *)&pAVar1->field_0x4 & 0xfffffffe;
    *(uint *)&pAVar1->field_0x84 = param_6;
    pAVar1->field_0038 = param_5;
    *(uint *)&pAVar1->field_0x88 = param_7;
    pAVar1->field_00A0 = (int *)param_3;
    if (((int)param_2 < 1) || (pAVar1->field_0094 == param_2)) {
      if ((int)param_2 < 0) {
        FreeAndNull((void **)(pAVar1 + 1));
      }
    }
    else {
      iVar4 = Library::DKW::LIB::FUN_006acf50(*(int *)(pAVar1 + 1),param_2 * 4);
      *(int *)(pAVar1 + 1) = iVar4;
      if (iVar4 == 0) {
        return 0xfffffffe;
      }
      iVar3 = pAVar1->field_0094;
      if (iVar3 < (int)param_2) {
        puVar6 = (undefined4 *)(iVar4 + iVar3 * 4);
        for (uVar5 = param_2 - iVar3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      if (((*(uint *)pAVar1 & 0x100) != 0) && (*(int *)&pAVar1[1].field_0x4 != 0)) {
        iVar4 = Library::DKW::LIB::FUN_006acf50(*(int *)&pAVar1[1].field_0x4,param_2 * 8);
        *(int *)&pAVar1[1].field_0x4 = iVar4;
        if (iVar4 == 0) {
          return 0xfffffffe;
        }
      }
    }
    pAVar1->field_0094 = param_2;
    if ((0 < (int)param_4) && (0 < (int)param_5)) {
      *(uint *)pAVar1 = *(uint *)pAVar1 | 0x1000;
    }
    if (param_3 != 0) {
      if ((*(uint *)pAVar1 & 0x1000) == 0) {
        FUN_006e8840(pAVar1);
      }
      iVar4 = 0;
      if (0 < (int)param_2) {
        do {
          if (pAVar1->field_00A0[iVar4 * 2 + 1] != 0) {
            *(undefined2 *)(*(int *)(pAVar1 + 1) + 2 + iVar4 * 4) = 0x8000;
            if (param_8 != 0) {
              pbVar2 = (byte *)(*(int *)(pAVar1 + 1) + 3 + iVar4 * 4);
              *pbVar2 = *pbVar2 | 0x40;
            }
            FUN_006e9a10((uint *)pAVar1,iVar4,0xfffffffe);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_2);
        return 0;
      }
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

