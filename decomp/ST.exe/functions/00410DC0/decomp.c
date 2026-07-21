
/* WARNING: Removing unreachable block (ram,0x0041112c) */
/* WARNING: Removing unreachable block (ram,0x00411131) */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2726 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_00410dc0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (DAT_007f4d20 <= *(int *)(&DAT_007a4c20 + param_5 * 8)) {
    iVar2 = thunk_FUN_0040fc40(param_1,param_2,param_3,param_4,param_5,0);
    return iVar2;
  }
  if ((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
     (((-1 < param_2 && (param_2 < DAT_007f4d30)) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))))
  {
    if (0 < param_4) {
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    iVar3 = DAT_007f4d30 * DAT_007f4d2c;
    uVar6 = *(uint *)(&DAT_007a4c24 + param_5 * 8);
    DAT_007f4d14 = 0;
    iVar2 = DAT_007f4d20 / (int)uVar6 + 2;
    if (DAT_007f4d20 < iVar2) {
      iVar2 = DAT_007f4d20;
    }
    iVar2 = thunk_FUN_0040fc40(param_1,param_2,param_3,0,param_5,iVar2);
    if (iVar2 != 0) {
      return iVar2;
    }
    param_4 = 1;
    iVar2 = (int)((uVar6 & 0xfffffffe) - ((int)uVar6 >> 0x1f)) >> 1;
    if (0 < iVar2) {
      local_14 = (uVar6 & 0xfffffffe) - 1;
      do {
        if (DAT_007f4d20 <= DAT_007f4d14) goto cf_break_loop_00411005;
        local_8 = (DAT_007f4d38 * param_4 >> 0x10) + param_1;
        local_c = param_2 - (DAT_007f4d28 * param_4 >> 0x10);
        iVar4 = DAT_007f4d20 - DAT_007f4d14;
        iVar5 = iVar4 / (local_14 + 1);
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        if ((0 < iVar5) &&
           (iVar5 = thunk_FUN_0040fc40(local_8,local_c,param_3,0,param_5,iVar5), iVar5 != 0)) {
          return iVar5;
        }
        if (DAT_007f4d20 <= DAT_007f4d14) goto cf_break_loop_00411005;
        local_8 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
        iVar4 = DAT_007f4d20 - DAT_007f4d14;
        local_c = (DAT_007f4d28 * param_4 >> 0x10) + param_2;
        iVar5 = iVar4 / local_14;
        if (iVar4 < iVar4 / local_14) {
          iVar5 = iVar4;
        }
        if (iVar5 < 1) {
          iVar5 = DAT_007f4d20;
        }
        iVar5 = thunk_FUN_0040fc40(local_8,local_c,param_3,0,param_5,iVar5);
        if (iVar5 != 0) {
          return iVar5;
        }
        param_4 = param_4 + 1;
        local_14 = local_14 + -2;
      } while (param_4 <= iVar2);
    }
    if (DAT_007f4d20 <= DAT_007f4d14) {
cf_break_loop_00411005:
      iVar5 = 0;
      param_4 = 0;
      iVar2 = DAT_007f4d14;
      if (0 < DAT_007f4d14) {
        do {
          local_8 = *(int *)(iVar5 + DAT_007f4d3c);
          local_c = *(int *)(iVar5 + 4 + DAT_007f4d3c);
          local_10 = *(int *)(iVar5 + 8 + DAT_007f4d3c);
          if ((((local_8 < 0) || (DAT_007f4d2c <= local_8)) || (local_c < 0)) ||
             ((DAT_007f4d30 <= local_c ||
              (*(short *)(DAT_007f4cf0 + (local_10 * iVar3 + local_8 + DAT_007f4d2c * local_c) * 2)
               != 0)))) {
            iVar2 = FUN_0040f270(&local_8,&local_c,&local_10,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                                 DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
            if (iVar2 != 0) {
              return -4;
            }
            uVar6 = local_10 * iVar3 + local_8 + DAT_007f4d2c * local_c ^ 7;
            pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar6 >> 3));
            *pbVar1 = *pbVar1 | '\x01' << (uVar6 & 7);
            *(int *)(iVar5 + DAT_007f4d3c) = local_8;
            *(int *)(iVar5 + 4 + DAT_007f4d3c) = local_c;
            *(int *)(iVar5 + 8 + DAT_007f4d3c) = local_10;
            iVar2 = DAT_007f4d14;
          }
          param_4 = param_4 + 1;
          iVar5 = iVar5 + 0x14;
        } while (param_4 < iVar2);
      }
      FUN_0040eb90();
      return 0;
    }
  }
  return -4;
}

