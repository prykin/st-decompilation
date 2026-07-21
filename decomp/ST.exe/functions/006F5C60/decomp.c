
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5c60(undefined1 *param_1,int param_2,byte *param_3,int param_4,ushort *param_5,
                 int param_6,uint param_7,byte *param_8,int param_9,int param_10,int param_11)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_8;

  _DAT_00857000 = 1;
  if (-1 < param_10 + -1) {
    local_8 = param_10;
    do {
      uVar1 = (uint)*param_8;
      param_8 = param_8 + 1;
      iVar2 = param_9;
      if (uVar1 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
        param_5 = (ushort *)((int)param_5 + param_6);
      }
      else {
        while( true ) {
          if ((uVar1 & 0x80) == 0) {
            uVar1 = uVar1 & 0x7f;
            iVar2 = iVar2 - uVar1;
            param_1 = param_1 + uVar1;
            param_3 = param_3 + uVar1;
            param_5 = param_5 + uVar1;
          }
          else {
            uVar3 = uVar1 & 0x3f;
            iVar2 = iVar2 - uVar3;
            if ((uVar1 & 0x40) == 0) {
              if (-1 < (int)(uVar3 - 1)) {
                param_8 = param_8 + uVar3;
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_11);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
            else {
              param_8 = param_8 + 1;
              if (-1 < (int)(uVar3 - 1)) {
                do {
                  if (param_7 <= *param_5) {
                    *param_1 = *(undefined1 *)((uint)*param_3 + param_11);
                  }
                  param_5 = param_5 + 1;
                  param_1 = param_1 + 1;
                  param_3 = param_3 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
            }
          }
          if (iVar2 < 1) break;
          uVar1 = (uint)*param_8;
          param_8 = param_8 + 1;
        }
        param_1 = param_1 + (param_2 - param_9);
        param_3 = param_3 + (param_4 - param_9);
        param_5 = (ushort *)((int)param_5 + param_6 + param_9 * -2);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

