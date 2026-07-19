
undefined4 __fastcall thunk_FUN_00492b20(int param_1)

{
  undefined4 in_EAX;
  int *this;
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined4 *puVar8;
  int iVar9;
  short sVar10;
  undefined4 *puVar11;
  int iStack_10;
  short asStack_c [2];
  short sStack_8;
  short sStack_6;
  
  this = (int *)STAllPlayersC::GetObjPtr
                          (DAT_007fa174,
                           CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x5fc)),
                           CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)(param_1 + 0x5fd)),
                           1);
  if ((((((this != (int *)0x0) && (this[6] == *(int *)(param_1 + 0x5ff))) &&
        (iVar1 = (**(code **)(*this + 0x108))(*(undefined4 *)(param_1 + 0x24)), iVar1 != 0)) &&
       ((thunk_FUN_004162b0(this,&sStack_8,&sStack_6,asStack_c), -1 < sStack_8 &&
        (sStack_8 < DAT_007fb278)))) && (-1 < sStack_6)) &&
     (((sStack_6 < DAT_007fb27a && (-1 < asStack_c[0])) && ((int)asStack_c[0] < DAT_007fb27c + -1)))
     ) {
    *(short *)(param_1 + 0x609) = sStack_8;
    *(short *)(param_1 + 0x60b) = sStack_6;
    *(short *)(param_1 + 0x60d) = asStack_c[0];
    uVar4 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
    puVar8 = DAT_007fb280;
    puVar11 = DAT_007fb238;
    for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                 (int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                 (int)*(short *)(param_1 + 0x5f),(int)sStack_8,(int)sStack_6,asStack_c[0] + 1);
    if (this[0xb] == 0) {
      sVar7 = asStack_c[0] + 1;
      if ((((-1 < sStack_8) && (sStack_8 < DAT_007fb240)) && (-1 < sStack_6)) &&
         (((sStack_6 < DAT_007fb242 && (-1 < sVar7)) && (sVar7 < DAT_007fb244)))) {
        if ((-1 < *(short *)((int)DAT_007fb280 +
                            ((int)sVar7 * (int)DAT_007fb27e + (int)DAT_007fb278 * (int)sStack_6 +
                            (int)sStack_8) * 2)) &&
           (*(short *)((int)DAT_007fb238 +
                      ((asStack_c[0] + 1) * (int)DAT_007fb27e + (int)DAT_007fb278 * (int)sStack_6 +
                      (int)sStack_8) * 2) != 0)) {
          *(short *)(param_1 + 0x603) = sStack_8;
          *(short *)(param_1 + 0x605) = sStack_6;
          *(short *)(param_1 + 0x607) = sVar7;
          return 1;
        }
      }
    }
    else if (this[0xb] == 1) {
      iStack_10 = 10000000;
      *(short *)(param_1 + 0x607) = asStack_c[0] + 1;
      iVar2 = (int)sStack_8;
      iVar1 = iVar2 + 1;
      if (iVar2 <= iVar1) {
        do {
          iVar6 = (int)sStack_6;
          if (iVar6 <= sStack_6 + 1) {
            do {
              sVar7 = (short)iVar2;
              iVar9 = (int)*(short *)((int)DAT_007fb238 +
                                     ((int)DAT_007fb27e * (asStack_c[0] + 1) +
                                     iVar2 + DAT_007fb278 * iVar6) * 2);
              if (((((-1 < sVar7) && (sVar7 < DAT_007fb240)) && (sVar3 = (short)iVar6, -1 < sVar3))
                  && (((sVar3 < DAT_007fb242 && (sVar10 = asStack_c[0] + 1, -1 < sVar10)) &&
                      ((sVar10 < DAT_007fb244 &&
                       ((-1 < *(short *)((int)DAT_007fb280 +
                                        ((int)sVar10 * (int)DAT_007fb27e +
                                         (int)sVar3 * (int)DAT_007fb278 + (int)sVar7) * 2) &&
                        (iVar9 != 0)))))))) && (iVar9 < iStack_10)) {
                *(short *)(param_1 + 0x603) = sVar7;
                *(short *)(param_1 + 0x605) = sVar3;
                iStack_10 = iVar9;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 <= sStack_6 + 1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar1);
        if (iStack_10 != 10000000) {
          return 1;
        }
      }
    }
  }
  return 0;
}

