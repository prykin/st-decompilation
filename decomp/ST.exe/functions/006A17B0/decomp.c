
/* WARNING: Removing unreachable block (ram,0x006a1957) */

undefined4 __cdecl
FUN_006a17b0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort local_14;
  undefined2 uStack_12;
  ushort uStack_10;
  int local_c;
  int *local_8;

  iVar1 = param_4;
  iVar2 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    thunk_FUN_006a1410(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
    local_c = 0;
    do {
      param_4 = 0;
      local_8 = &DAT_007df82c;
      do {
        iVar2 = local_8[-1] + param_2;
        iVar6 = *local_8 + param_3;
        if ((((-1 < iVar2) && (iVar2 < *param_1)) && (-1 < iVar6)) &&
           (((iVar6 < param_1[1] && (-1 < iVar1)) &&
            ((iVar1 < 6 &&
             (iVar3 = thunk_FUN_006a20e0(param_1,iVar2,iVar6,iVar1,param_5), iVar3 != 0)))))) {
          iVar3 = thunk_FUN_006a1370(param_1,iVar2,iVar6,iVar1,(undefined4 *)&local_14);
          iVar3 = thunk_FUN_006a24e0(&local_14,iVar1,param_6,(int)(short)iVar3,param_5);
          if (iVar3 != 0) {
            if (param_5 == 0xff) {
              uVar5 = (uint)(byte)param_6[2];
            }
            else if (param_5 == 1) {
              uVar5 = (uint)(byte)param_6[1];
            }
            else {
              uVar5 = (uint)(byte)*param_6;
            }
            if (param_5 == 0xff) {
              uVar4 = (uint)uStack_10;
            }
            else if (param_5 == 1) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar4 = CONCAT22(uStack_10,uStack_12);
            }
            else {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar4 = CONCAT22(uStack_12,local_14);
            }
            if ((*(ushort *)(&DAT_007df898 + (param_4 + (uVar4 & 0xf) * 8) * 2) &
                 (&DAT_007df808)[uVar5 & 0xf] & 0xf00) != 0) {
              thunk_FUN_006a1410(param_1,iVar2,iVar6,iVar1,param_5,param_7,param_8);
            }
          }
        }
        local_8 = local_8 + 2;
        param_4 = param_4 + 1;
      } while ((int)local_8 < 0x7df86c);
      local_c = local_c + 1;
    } while (local_c < 1);
  }
  return 1;
}

