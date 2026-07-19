
int __thiscall
thunk_FUN_0040bc90(void *this,uint param_1,short *param_2,short *param_3,short *param_4,char param_5
                  )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iStack_2c;
  void *pvStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  pvStack_28 = this;
  iVar2 = thunk_FUN_00423e70(this,param_1);
  if (iVar2 != 0) {
    puStack_8 = (undefined4 *)
                FUN_006aac70((int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278 * 2);
    uVar5 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
    puVar8 = DAT_007fb280;
    puVar10 = puStack_8;
    for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iStack_24 = *(short *)(iVar2 + 0x47) + -2;
    if (iStack_24 < 0) {
      iStack_24 = 0;
    }
    iStack_20 = *(short *)(iVar2 + 0x49) + -2;
    if (iStack_20 < 0) {
      iStack_20 = 0;
    }
    param_1 = (int)*(short *)(iVar2 + 0x4b) - 2;
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    iVar3 = (int)DAT_007fb278;
    iStack_10 = *(short *)(iVar2 + 0x47) + 2;
    if (iVar3 <= iStack_10) {
      iStack_10 = iVar3 + -1;
    }
    iVar11 = *(short *)(iVar2 + 0x49) + 2;
    if (DAT_007fb27a <= iVar11) {
      iVar11 = DAT_007fb27a + -1;
    }
    iStack_c = *(short *)(iVar2 + 0x4b) + 2;
    if (DAT_007fb27c <= iStack_c) {
      iStack_c = DAT_007fb27c + -1;
    }
    iVar9 = iStack_20;
    iStack_14 = iVar11;
    if ((int)param_1 <= iStack_c) {
      do {
        puStack_18 = (undefined1 *)
                     ((int)puStack_8 + ((int)DAT_007fb27a * param_1 + iVar9) * iVar3 * 2);
        iStack_1c = iVar9;
        if (iVar9 <= iVar11) {
          do {
            if (iStack_24 <= iStack_10) {
              psVar4 = (short *)(puStack_18 + iStack_24 * 2);
              iVar3 = iStack_24;
              do {
                if ((*psVar4 == 0) &&
                   (bVar1 = thunk_FUN_00497920(iVar2,iVar3,iStack_1c,param_1),
                   CONCAT31(extraout_var,bVar1) == 0)) {
                  *psVar4 = -3;
                }
                iVar3 = iVar3 + 1;
                psVar4 = psVar4 + 1;
                iVar11 = iStack_14;
              } while (iVar3 <= iStack_10);
            }
            iVar3 = (int)DAT_007fb278;
            puStack_18 = puStack_18 + iVar3 * 2;
            iStack_1c = iStack_1c + 1;
            iVar9 = iStack_20;
          } while (iStack_1c <= iVar11);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 <= iStack_c);
    }
    *(undefined2 *)
     ((int)puStack_8 +
     ((int)*(short *)(iVar2 + 0x4b) * (int)DAT_007fb27e +
      (int)*(short *)(iVar2 + 0x49) * (int)DAT_007fb278 + (int)*(short *)(iVar2 + 0x47)) * 2) = 0;
    iVar3 = (int)param_2 + (int)DAT_007fb278 * (int)param_3 + (int)DAT_007fb27e * (int)param_4;
    if (*(short *)((int)puStack_8 + iVar3 * 2) == -3) {
      *(undefined2 *)((int)puStack_8 + iVar3 * 2) = 0;
    }
    uVar5 = 0;
    if (param_5 != '\0') {
      uVar5 = 4;
    }
    psVar4 = FUN_006a9190((int)puStack_8,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                          (short *)(int)*(short *)(iVar2 + 0x47),
                          (short *)(int)*(short *)(iVar2 + 0x49),
                          (short *)(int)*(short *)(iVar2 + 0x4b),param_2,param_3,param_4,0,
                          &iStack_2c,(undefined4 *)0x0,(short *)0x0,uVar5);
    puVar8 = puStack_8;
    if (psVar4 == (short *)0x0) {
      iVar3 = FUN_006ab090((int)puStack_8,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                           (int)param_2,(int)param_3,(int)param_4,(int)*(short *)(iVar2 + 0x47),
                           (int)*(short *)(iVar2 + 0x49),(int)*(short *)(iVar2 + 0x4b));
      if (iVar3 != 0) {
        FUN_006a5e90(puVar8);
        RaiseInternalException(-2,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x173);
        return -2;
      }
      sVar7 = *(short *)((int)puVar8 +
                        (((int)*(short *)(iVar2 + 0x4b) * (int)DAT_007fb27a +
                         (int)*(short *)(iVar2 + 0x49)) * (int)DAT_007fb278 +
                        (int)*(short *)(iVar2 + 0x47)) * 2);
    }
    else {
      sVar7 = psVar4[3] + 1;
      FUN_006a5e90((undefined4 *)psVar4);
      puVar8 = puStack_8;
    }
    FUN_006a5e90(puVar8);
    if (0 < sVar7) {
      return (sVar7 + -1) / 3;
    }
  }
  return -4;
}

