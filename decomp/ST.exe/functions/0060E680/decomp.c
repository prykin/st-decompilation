
undefined4 __cdecl
FUN_0060e680(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            int *param_7,int param_8,uint *param_9,uint *param_10,uint *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_10;
  uint local_c;
  uint local_8;

  uVar6 = param_4;
  iVar3 = *param_7;
  iVar5 = (param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f);
  if ((iVar5 < iVar3) &&
     (iVar1 = (param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f), iVar1 < iVar3)) {
    iVar2 = (param_6 ^ (int)param_6 >> 0x1f) - ((int)param_6 >> 0x1f);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((iVar2 < param_7[2]) &&
       (param_7[2] * iVar2 * iVar2 + iVar3 * iVar5 * iVar5 + param_7[1] * iVar1 * iVar1 <
        *(int *)(param_8 + 0xc))) {
      iVar3 = FUN_006acf0d(param_4,param_5,param_6,param_1,param_2,param_3);
      if (0xc9 < iVar3) {
        param_1 = (int)((param_1 - param_4) * 0xc9) / iVar3 + param_4;
        param_2 = (int)((param_2 - param_5) * 0xc9) / iVar3 + param_5;
        param_3 = (int)((param_3 - param_6) * 0xc9) / iVar3 + param_6;
      }
      iVar3 = *param_7;
      iVar5 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
      if ((iVar5 < iVar3) &&
         (iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f), iVar1 < iVar3)) {
        iVar2 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((iVar2 < param_7[2]) &&
           (param_7[2] * iVar2 * iVar2 + iVar3 * iVar5 * iVar5 + param_7[1] * iVar1 * iVar1 <
            *(int *)(param_8 + 0xc))) {
          *param_9 = ((int)((param_4 - param_1) + ((int)(param_4 - param_1) >> 0x1f & 7U)) >> 3) +
                     param_1;
          *param_10 = ((int)((param_5 - param_2) + ((int)(param_5 - param_2) >> 0x1f & 7U)) >> 3) +
                      param_2;
          *param_11 = ((int)((param_6 - param_3) + ((int)(param_6 - param_3) >> 0x1f & 7U)) >> 3) +
                      param_3;
          return 1;
        }
      }
      uVar8 = (int)(param_5 - param_2) / 2 + param_2;
      uVar7 = (int)(param_4 - param_1) / 2 + param_1;
      uVar4 = (int)(param_6 - param_3) / 2 + param_3;
      local_c = param_2;
      local_10 = param_3;
      param_3 = param_4;
      param_2 = param_5;
      param_4 = 7;
      local_8 = param_1;
      do {
        iVar5 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
        if ((iVar5 < iVar3) &&
           (iVar1 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f), iVar1 < iVar3)) {
          iVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar2 < param_7[2]) &&
             (uVar6 = param_3,
             param_7[2] * iVar2 * iVar2 + iVar3 * iVar5 * iVar5 + param_7[1] * iVar1 * iVar1 <
             *(int *)(param_8 + 0xc))) {
            uVar6 = uVar7;
            param_2 = uVar8;
            param_3 = uVar7;
            param_6 = uVar4;
            uVar4 = local_10;
            uVar8 = local_c;
            uVar7 = local_8;
          }
        }
        local_8 = uVar7;
        local_c = uVar8;
        local_10 = uVar4;
        uVar8 = (int)(local_c - param_2) / 2 + param_2;
        uVar7 = (int)(local_8 - uVar6) / 2 + uVar6;
        uVar4 = (int)(local_10 - param_6) / 2 + param_6;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      *param_9 = uVar7;
      *param_10 = uVar8;
      *param_11 = uVar4;
      return 1;
    }
  }
  *param_9 = param_4;
  *param_10 = param_5;
  *param_11 = param_6;
  return 0;
}

