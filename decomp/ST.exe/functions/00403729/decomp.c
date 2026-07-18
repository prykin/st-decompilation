
void __cdecl
thunk_FUN_006a1410(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined *param_6,
                  undefined4 param_7)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  uStack_c = 0;
  uStack_8 = 0;
  if (param_6 != (undefined *)0x0) {
    (*(code *)param_6)(param_2,param_3,param_4,param_7);
  }
  iVar3 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,&uStack_14);
  if (param_5 == 0xff) {
    iVar4 = (int)(short)iVar3;
    iVar3 = iVar4;
    if ((int)(iVar4 - (uStack_10 >> 8 & 0xf)) < iVar4) {
      do {
        if (param_6 != (undefined *)0x0) {
          (*(code *)param_6)(param_2,param_3,iVar3,param_7);
        }
        if (-1 < param_2) {
          if ((((param_2 < *param_1) && (-1 < param_3)) && (param_3 < param_1[1])) &&
             ((-1 < iVar3 && (iVar3 < 6)))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + 2 + param_2) * 6) = 0;
          }
          if (((param_2 < *param_1) && (-1 < param_3)) &&
             ((param_3 < param_1[1] && ((-1 < iVar3 && (iVar3 < 6)))))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + param_2) * 6 + 10) = 0;
          }
          if ((((param_2 < *param_1) && (-1 < param_3)) && (param_3 < param_1[1])) &&
             ((-1 < iVar3 && (iVar3 < 6)))) {
            *(undefined2 *)
             ((int)param_1 + ((param_1[1] * iVar3 + param_3) * *param_1 + param_2) * 6 + 8) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while ((int)(iVar4 - (uStack_10 >> 8 & 0xf)) < iVar3);
    }
    if ((uStack_10 & 0x1000) != 0) {
      uStack_c = CONCAT22(uStack_c._2_2_,1);
      puVar1 = (undefined4 *)((int)param_1 + (*param_1 * param_3 + param_2) * 6 + 8);
      *puVar1 = uStack_c;
      *(undefined2 *)(puVar1 + 1) = 0x1100;
      return;
    }
  }
  else {
    uStack_c = uStack_14;
    if (param_5 == 0) {
      uStack_c._2_2_ = (undefined2)(uStack_14 >> 0x10);
      uStack_c = CONCAT22(uStack_c._2_2_,1);
    }
    else if (param_5 == 1) {
      uStack_c = uStack_14 & 0xffff;
    }
    puVar2 = (uint *)((int)param_1 + (*param_1 * param_3 + param_2) * 6 + 8);
    *puVar2 = uStack_c;
    *(undefined2 *)(puVar2 + 1) = (undefined2)uStack_10;
  }
  return;
}

