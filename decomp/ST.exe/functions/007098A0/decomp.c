
undefined4 __cdecl
FUN_007098a0(AnonShape_007098A0_B7562D88 *param_1,char param_2,byte *param_3,int param_4,
            int *param_5,uint *param_6)

{
  char cVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  uint local_8;

  *param_5 = 0;
  *param_6 = 0xffffffff;
  local_8 = 0;
  param_1->field_0004->iteratorIndex = 0;
  do {
    pDVar3 = param_1->field_0004;
    uVar4 = pDVar3->iteratorIndex;
    if (pDVar3->count <= uVar4) {
      return 0;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar4) (runtime stride) */
    pcVar8 = (char *)(pDVar3->elementSize * uVar4 + (int)pDVar3->data);
    pDVar3->iteratorIndex = uVar4 + 1;
    if (pcVar8 == (char *)0x0) {
      return 0;
    }
    cVar1 = *pcVar8;
    if (cVar1 == param_2) {
      pbVar5 = (byte *)(pcVar8 + 1);
      pbVar7 = param_3;
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_00709921:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00709926;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_00709921;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_00709926:
      if ((iVar6 == 0) &&
         ((param_4 == *(int *)(pcVar8 + 0x21) || ((cVar1 != '\b' && (cVar1 != '\x1f')))))) {
        *param_6 = local_8;
        pDVar3 = param_1->field_0004;
        if (pDVar3->count <= local_8) {
          *param_5 = 0;
          return *(undefined4 *)(pcVar8 + 0x29);
        }
        *param_5 = (int)(pDVar3->elementSize * local_8 + (int)pDVar3->data);
        return *(undefined4 *)(pcVar8 + 0x29);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

