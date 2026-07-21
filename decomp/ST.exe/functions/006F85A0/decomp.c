
void FUN_006f85a0(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;

  if (-1 < param_7 + -1) {
    do {
      uVar2 = (uint)*param_5;
      param_5 = param_5 + 1;
      iVar5 = param_6;
      if (uVar2 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      }
      else {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar2 = uVar2 & 0x7f;
            iVar5 = iVar5 - uVar2;
            param_1 = param_1 + uVar2;
            param_3 = param_3 + uVar2;
          }
          else {
            uVar4 = uVar2 & 0x3f;
            iVar5 = iVar5 - uVar4;
            if ((uVar2 & 0x40) == 0) {
              if (-1 < (int)(uVar4 - 1)) {
                param_5 = param_5 + uVar4;
                puVar3 = param_1;
                do {
                  bVar1 = *param_3;
                  param_1 = puVar3 + 1;
                  param_3 = param_3 + 1;
                  uVar4 = uVar4 - 1;
                  *puVar3 = *(undefined1 *)((uint)bVar1 + param_8);
                  puVar3 = param_1;
                } while (uVar4 != 0);
              }
            }
            else {
              param_5 = param_5 + 1;
              puVar3 = param_1;
              if (-1 < (int)(uVar4 - 1)) {
                do {
                  bVar1 = *param_3;
                  param_1 = puVar3 + 1;
                  param_3 = param_3 + 1;
                  uVar4 = uVar4 - 1;
                  *puVar3 = *(undefined1 *)((uint)bVar1 + param_8);
                  puVar3 = param_1;
                } while (uVar4 != 0);
              }
            }
          }
          if (iVar5 < 1) break;
          uVar2 = (uint)*param_5;
          param_5 = param_5 + 1;
        }
        param_1 = param_1 + (param_2 - param_6);
        param_3 = param_3 + (param_4 - param_6);
      }
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

