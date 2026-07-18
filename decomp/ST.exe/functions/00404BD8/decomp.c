
void __thiscall
thunk_FUN_00568dd0(void *this,undefined1 param_1,char *param_2,int param_3,int *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  void *pvVar14;
  int iVar15;
  undefined4 uStack_64;
  undefined4 auStack_60 [16];
  uint *puStack_20;
  uint *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  uint uStack_c;
  void *pvStack_8;
  
  if (*(int *)((int)this + 0xf8b) == 0) {
    return;
  }
  uStack_64 = DAT_00858df8;
  DAT_00858df8 = &uStack_64;
  pvStack_8 = this;
  iVar4 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  pvVar14 = pvStack_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_64;
    return;
  }
  switch(param_1) {
  case 1:
    if (((DAT_00807300._1_1_ & 4) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(*(int *)((int)pvStack_8 + 0xdf3),param_3,-1,(undefined1 *)0x0
                                      ), puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,1,DAT_0080730e,0,2,3);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 2:
    if ((DAT_00807300._1_1_ & 2) == 0) {
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    uVar9 = uStack_c >> 8;
    uStack_c = uStack_c & 0xffffff00;
    if ((-1 < *param_4) && (-1 < param_4[1])) {
      uVar7 = *(int *)((int)pvStack_8 + 0x10dd) - param_4[1];
      uVar13 = (int)uVar7 >> 0x1f;
      uVar8 = *(int *)((int)pvStack_8 + 0x10d9) - *param_4;
      iVar4 = (uVar7 ^ uVar13) - uVar13;
      uVar7 = (int)uVar8 >> 0x1f;
      iVar15 = (uVar8 ^ uVar7) - uVar7;
      if (iVar4 < iVar15) {
        iVar4 = iVar15;
      }
      iVar4 = iVar4 + 1;
      *(int *)((int)pvStack_8 + 0x10f1) = iVar4;
      iVar15 = *(int *)(&DAT_007c9788 + *(int *)((int)pvStack_8 + 0x10e1) * 0x10);
      bVar3 = (byte)iVar15;
      if (iVar4 <= iVar15) {
        bVar3 = (byte)iVar4;
      }
      uStack_c = CONCAT31((int3)uVar9,bVar3);
      if (iVar15 <= (int)(uint)bVar3) {
        DAT_00858df8 = (undefined4 *)uStack_64;
        return;
      }
    }
    puVar11 = (uint *)FUN_0071a990(*(int *)((int)pvStack_8 + 0xdf3),param_3,-1,(undefined1 *)0x0);
    if (puVar11 == (uint *)0x0) {
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    uStack_14 = *param_4;
    puStack_1c = puVar11;
    if (((int)uStack_14 < 0) || (iStack_10 = param_4[1], iStack_10 < 0)) {
      iVar15 = 10;
      iVar4 = 4;
LAB_0056959b:
      iVar4 = FUN_006c1390(puVar11,0,0,DAT_0080730e,0,iVar4,iVar15);
    }
    else if (DAT_00807363 == '\0') {
      iVar4 = *(int *)((int)pvVar14 + 0x10e9);
      iVar15 = *(int *)((int)pvVar14 + 0x10ed);
      uVar9 = (iVar4 * uStack_14 - iStack_10) + iVar15;
      uVar7 = (int)uVar9 >> 0x1f;
      iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
      iVar12 = *(int *)((int)pvVar14 + 0x10e1) * 0x10;
      *(int *)((int)pvVar14 + 0x10f1) = iVar2;
      iVar10 = *(int *)(&DAT_007c9788 + iVar12);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
        iVar10 = iVar2;
      }
      if (iVar10 < *(int *)(&DAT_007c9790 + iVar12)) {
        uVar9 = (iVar4 * *param_4 - param_4[1]) + iVar15;
        uVar7 = (int)uVar9 >> 0x1f;
        iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
        *(int *)((int)pvVar14 + 0x10f1) = iVar2;
        uStack_18 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
          uStack_18 = iVar2;
        }
        iStack_10 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar12)) * uStack_18;
      }
      else {
        iStack_10 = 1000;
      }
      iVar15 = iVar4 * *param_4 + iVar15;
      *(int *)((int)pvVar14 + 0x10f1) = iVar15;
      iVar4 = param_4[1];
      if (iVar15 == iVar4) {
        uStack_14 = 0;
      }
      else {
        if ((*(int *)((int)pvVar14 + 0x10e5) == 0) || (*(int *)((int)pvVar14 + 0x10e5) == 3)) {
          bVar1 = iVar15 <= iVar4;
        }
        else {
          bVar1 = iVar4 <= iVar15;
        }
        uStack_14 = (bVar1 - 1 & 2) - 1;
      }
      iVar4 = *(int *)(&DAT_007c9790 + iVar12);
      uStack_18 = uStack_c & 0xff;
      if (iVar4 < (int)uStack_18) {
        iVar15 = *(int *)(&DAT_007c978c + iVar12);
        if (iVar15 < (int)uStack_18) {
          uVar9 = (((int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100) * 2 +
                  -16000) / 3;
        }
        else {
          iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100;
          iVar4 = *(int *)(&DAT_007c9790 + iVar12);
          uVar9 = (iVar2 * 2 + -16000) / 3 +
                  (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar15 - uStack_18)) /
                  (iVar15 - iVar4);
          pvVar14 = pvStack_8;
        }
      }
      else {
        uVar9 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100 - 4000;
      }
      if (iVar4 < (int)uStack_18) {
        iVar4 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar4 < (int)uStack_18) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar4 - uStack_18) * 0xff) / iVar4);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c1390(puVar11,bVar3,4,uVar9,uStack_14 * iStack_10,4,10);
    }
    else {
      iVar4 = *(int *)((int)pvVar14 + 0x10e1) * 0x10;
      uVar9 = uStack_c & 0xff;
      uStack_c = *(uint *)(&DAT_007c9790 + iVar4);
      if ((int)uStack_c < (int)uVar9) {
        iVar15 = *(int *)(&DAT_007c9788 + iVar4);
        if (iVar15 < (int)uVar9) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar15 - uVar9) * 0xff) / iVar15);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c21e0(puVar11,bVar3,4,DAT_0080730e,(uint)(float)(int)uStack_14,
                           (uint)(float)iStack_10,0,(uint)(float)(int)uStack_c,
                           (uint)(float)*(int *)(&DAT_007c9788 + iVar4),4,10);
    }
    goto LAB_005695ae;
  case 3:
    if ((DAT_00807300._1_1_ & 4) == 0) {
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    if ((-1 < *param_4) && (-1 < param_4[1])) {
      uVar9 = *(int *)((int)pvStack_8 + 0x10dd) - param_4[1];
      uVar8 = (int)uVar9 >> 0x1f;
      uVar7 = *(int *)((int)pvStack_8 + 0x10d9) - *param_4;
      iVar4 = (uVar9 ^ uVar8) - uVar8;
      uVar9 = (int)uVar7 >> 0x1f;
      iVar15 = (uVar7 ^ uVar9) - uVar9;
      if (iVar4 < iVar15) {
        iVar4 = iVar15;
      }
      iVar4 = iVar4 + 1;
      *(int *)((int)pvStack_8 + 0x10f1) = iVar4;
      iVar15 = *(int *)((int)pvStack_8 + 0x10e1) * 0x10;
      bVar3 = (byte)*(int *)(&DAT_007c9788 + iVar15);
      if (iVar4 <= *(int *)(&DAT_007c9788 + iVar15)) {
        bVar3 = (byte)iVar4;
      }
      uStack_18 = CONCAT31(uStack_18._1_3_,bVar3);
      if (*(int *)(&DAT_007c978c + iVar15) <= (int)(uint)bVar3) {
        DAT_00858df8 = (undefined4 *)uStack_64;
        return;
      }
    }
    puVar11 = (uint *)FUN_0071a990(*(int *)((int)pvStack_8 + 0xdf3),param_3,-1,(undefined1 *)0x0);
    if (puVar11 == (uint *)0x0) {
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    uStack_14 = *param_4;
    puStack_20 = puVar11;
    if (((int)uStack_14 < 0) || (iStack_10 = param_4[1], iStack_10 < 0)) {
      iVar15 = 0x11;
      iVar4 = 0xb;
      goto LAB_0056959b;
    }
    if (DAT_00807363 == '\0') {
      iVar4 = *(int *)((int)pvVar14 + 0x10e9);
      iVar15 = *(int *)((int)pvVar14 + 0x10ed);
      uVar9 = (iVar4 * uStack_14 - iStack_10) + iVar15;
      uVar7 = (int)uVar9 >> 0x1f;
      iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
      iVar12 = *(int *)((int)pvVar14 + 0x10e1) * 0x10;
      *(int *)((int)pvVar14 + 0x10f1) = iVar2;
      iVar10 = *(int *)(&DAT_007c9788 + iVar12);
      if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
        iVar10 = iVar2;
      }
      if (iVar10 < *(int *)(&DAT_007c9790 + iVar12)) {
        uVar9 = (iVar4 * *param_4 - param_4[1]) + iVar15;
        uVar7 = (int)uVar9 >> 0x1f;
        iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
        *(int *)((int)pvVar14 + 0x10f1) = iVar2;
        uStack_14 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
          uStack_14 = iVar2;
        }
        uStack_c = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar12)) * uStack_14;
      }
      else {
        uStack_c = 1000;
      }
      iVar15 = iVar4 * *param_4 + iVar15;
      *(int *)((int)pvVar14 + 0x10f1) = iVar15;
      iVar4 = param_4[1];
      if (iVar15 == iVar4) {
        iStack_10 = 0;
      }
      else {
        if ((*(int *)((int)pvVar14 + 0x10e5) == 0) || (*(int *)((int)pvVar14 + 0x10e5) == 3)) {
          bVar1 = iVar15 <= iVar4;
        }
        else {
          bVar1 = iVar4 <= iVar15;
        }
        iStack_10 = (bVar1 - 1 & 2) - 1;
      }
      iVar4 = *(int *)(&DAT_007c9790 + iVar12);
      uStack_14 = uStack_18 & 0xff;
      if (iVar4 < (int)uStack_14) {
        iVar15 = *(int *)(&DAT_007c978c + iVar12);
        if (iVar15 < (int)uStack_14) {
          uVar9 = (((int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100) * 2 +
                  -16000) / 3;
        }
        else {
          iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100;
          iVar4 = *(int *)(&DAT_007c9790 + iVar12);
          uVar9 = (iVar2 * 2 + -16000) / 3 +
                  (int)((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar15 - uStack_14)) /
                  (iVar15 - iVar4);
          pvVar14 = pvStack_8;
        }
      }
      else {
        uVar9 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100 - 4000;
      }
      if (iVar4 < (int)uStack_14) {
        iVar4 = *(int *)(&DAT_007c9788 + iVar12);
        if (iVar4 < (int)uStack_14) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar4 - uStack_14) * 0xff) / iVar4);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c1390(puVar11,bVar3,4,uVar9,iStack_10 * uStack_c,0xb,0x11);
    }
    else {
      iVar4 = *(int *)((int)pvVar14 + 0x10e1) * 0x10;
      uVar9 = uStack_18 & 0xff;
      uStack_c = *(uint *)(&DAT_007c9790 + iVar4);
      if ((int)uStack_c < (int)uVar9) {
        iVar15 = *(int *)(&DAT_007c9788 + iVar4);
        if (iVar15 < (int)uVar9) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((int)((iVar15 - uVar9) * 0xff) / iVar15);
        }
      }
      else {
        bVar3 = 0xff;
      }
      iVar4 = FUN_006c21e0(puVar11,bVar3,4,DAT_0080730e,(uint)(float)(int)uStack_14,
                           (uint)(float)iStack_10,0,(uint)(float)(int)uStack_c,
                           (uint)(float)*(int *)(&DAT_007c978c + iVar4),0xb,0x11);
    }
LAB_005695ae:
    if (-1 < iVar4) {
      *(int *)((int)pvVar14 + iVar4 * 0xc + 0xe0b) = *param_4;
      *(int *)((int)pvVar14 + iVar4 * 0xc + 0xe0f) = param_4[1];
      *(int *)((int)pvVar14 + iVar4 * 0xc + 0xe13) = param_4[2];
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 4:
    if (((DAT_00807300._1_1_ & 1) != 0) &&
       (iVar4 = thunk_FUN_00568780(pvStack_8,0x12,0x14), iVar4 != 0)) {
      uVar9 = uStack_c >> 8;
      uStack_c = uStack_c & 0xffffff00;
      if ((-1 < *param_4) && (-1 < param_4[1])) {
        uVar7 = *(int *)((int)pvVar14 + 0x10dd) - param_4[1];
        uVar13 = (int)uVar7 >> 0x1f;
        uVar8 = *(int *)((int)pvVar14 + 0x10d9) - *param_4;
        iVar4 = (uVar7 ^ uVar13) - uVar13;
        uVar7 = (int)uVar8 >> 0x1f;
        iVar15 = (uVar8 ^ uVar7) - uVar7;
        if (iVar4 < iVar15) {
          iVar4 = iVar15;
        }
        iVar4 = iVar4 + 1;
        *(int *)((int)pvVar14 + 0x10f1) = iVar4;
        iVar15 = *(int *)(&DAT_007c9788 + *(int *)((int)pvVar14 + 0x10e1) * 0x10);
        bVar3 = (byte)iVar15;
        if (iVar4 <= iVar15) {
          bVar3 = (byte)iVar4;
        }
        uStack_c = CONCAT31((int3)uVar9,bVar3);
        if (iVar15 <= (int)(uint)bVar3) {
          DAT_00858df8 = (undefined4 *)uStack_64;
          return;
        }
      }
      puStack_1c = (uint *)FUN_0071a990(*(int *)((int)pvVar14 + 0xdf3),param_3,-1,(undefined1 *)0x0)
      ;
      if (puStack_1c != (uint *)0x0) {
        uStack_14 = *param_4;
        if (((int)uStack_14 < 0) || (iStack_10 = param_4[1], iStack_10 < 0)) {
          iVar4 = FUN_006c1390(puStack_1c,0,2,DAT_0080730e,0,0x12,0x14);
        }
        else if (DAT_00807363 == '\0') {
          iVar4 = *(int *)((int)pvVar14 + 0x10e9);
          iVar15 = *(int *)((int)pvVar14 + 0x10ed);
          uVar9 = (iVar4 * uStack_14 - iStack_10) + iVar15;
          uVar7 = (int)uVar9 >> 0x1f;
          iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
          iVar12 = *(int *)((int)pvVar14 + 0x10e1) * 0x10;
          *(int *)((int)pvVar14 + 0x10f1) = iVar2;
          iVar10 = *(int *)(&DAT_007c9788 + iVar12);
          if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
            iVar10 = iVar2;
          }
          if (iVar10 < *(int *)(&DAT_007c9790 + iVar12)) {
            uVar9 = (iVar4 * *param_4 - param_4[1]) + iVar15;
            uVar7 = (int)uVar9 >> 0x1f;
            iVar2 = (int)(((uVar9 ^ uVar7) - uVar7) * 7) / 10;
            *(int *)((int)pvVar14 + 0x10f1) = iVar2;
            uStack_18 = *(int *)(&DAT_007c9788 + iVar12);
            if (iVar2 <= *(int *)(&DAT_007c9788 + iVar12)) {
              uStack_18 = iVar2;
            }
            uStack_14 = (int)(1000 / (longlong)*(int *)(&DAT_007c9790 + iVar12)) * uStack_18;
          }
          else {
            uStack_14 = 1000;
          }
          iVar15 = iVar4 * *param_4 + iVar15;
          *(int *)((int)pvVar14 + 0x10f1) = iVar15;
          iVar4 = param_4[1];
          if (iVar15 == iVar4) {
            uStack_18 = 0;
          }
          else if ((*(int *)((int)pvVar14 + 0x10e5) == 0) || (*(int *)((int)pvVar14 + 0x10e5) == 3))
          {
            uStack_18 = ((iVar15 <= iVar4) - 1 & 2) - 1;
          }
          else {
            uStack_18 = ((iVar4 <= iVar15) - 1 & 2) - 1;
          }
          iVar4 = *(int *)(&DAT_007c9790 + iVar12);
          puStack_20 = (uint *)(uStack_c & 0xff);
          if (iVar4 < (int)puStack_20) {
            iVar15 = *(int *)(&DAT_007c978c + iVar12);
            if (iVar15 < (int)puStack_20) {
              uVar9 = (((int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100) * 2 +
                      -16000) / 3;
            }
            else {
              iVar2 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100;
              uVar9 = (iVar2 * 2 + -16000) / 3 +
                      ((((8000 - iVar2) * 2) / 3 + -4000 + iVar2) * (iVar15 - (int)puStack_20)) /
                      (iVar15 - iVar4);
            }
          }
          else {
            uVar9 = (int)(*(int *)(&DAT_007c9794 + iVar12) * (DAT_0080730e + 4000)) / 100 - 4000;
          }
          uStack_c = iVar4;
          iVar4 = FUN_006c1390(puStack_1c,0,6,uVar9,uStack_18 * uStack_14,0x12,0x14);
        }
        else {
          iVar4 = *(int *)((int)pvVar14 + 0x10e1) * 0x10;
          uVar9 = uStack_c & 0xff;
          uStack_c = *(uint *)(&DAT_007c9790 + iVar4);
          if ((int)uStack_c < (int)uVar9) {
            iVar15 = *(int *)(&DAT_007c9788 + iVar4);
            if (iVar15 < (int)uVar9) {
              bVar3 = 0;
            }
            else {
              bVar3 = (byte)((int)((iVar15 - uVar9) * 0xff) / iVar15);
            }
          }
          else {
            bVar3 = 0xff;
          }
          iVar4 = FUN_006c21e0(puStack_1c,bVar3,6,DAT_0080730e,(uint)(float)(int)uStack_14,
                               (uint)(float)iStack_10,0,(uint)(float)(int)uStack_c,
                               (uint)(float)*(int *)(&DAT_007c9788 + iVar4),0x12,0x14);
        }
        if (-1 < iVar4) {
          *(int *)((int)pvVar14 + iVar4 * 0xc + 0xe0b) = *param_4;
          *(int *)((int)pvVar14 + iVar4 * 0xc + 0xe0f) = param_4[1];
          *(int *)((int)pvVar14 + iVar4 * 0xc + 0xe13) = param_4[2];
          DAT_00858df8 = (undefined4 *)uStack_64;
          return;
        }
      }
    }
    break;
  case 5:
    if (((DAT_00807300._1_1_ & 8) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(*(int *)((int)pvStack_8 + 0xdf3),param_3,-1,(undefined1 *)0x0
                                      ), puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,(-(uint)(param_5 != 0) & 0xfffffffe) + 2,DAT_0080730e,0,0x15,0x19);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 6:
    if (((DAT_00807300._1_1_ & 1) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(*(int *)((int)pvStack_8 + 0xdf3),param_3,-1,(undefined1 *)0x0
                                      ), puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,2,DAT_0080730e,0,0x1b,0x1d);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 7:
    if (((DAT_00807300._1_1_ & 4) != 0) &&
       (puVar11 = (uint *)FUN_0071a990(*(int *)((int)pvStack_8 + 0xdf3),param_3,-1,(undefined1 *)0x0
                                      ), puVar11 != (uint *)0x0)) {
      FUN_006c1390(puVar11,0,2,DAT_0080730e,0,0x1e,0x1f);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 8:
    if (param_3 == 0) {
      iVar15 = 0x10;
      iVar4 = *(int *)((int)pvStack_8 + 0xdf3);
    }
    else {
      iVar4 = *(int *)((int)pvStack_8 + 0xdf3);
      iVar15 = param_3;
    }
    puVar11 = (uint *)FUN_0071a990(iVar4,iVar15,-1,(undefined1 *)0x0);
    if (puVar11 != (uint *)0x0) {
      FUN_006c1390(puVar11,0,(-(uint)(param_3 != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 9:
    if (param_3 == 0) {
      iVar15 = 0x12;
      iVar4 = *(int *)((int)pvStack_8 + 0xdf3);
    }
    else {
      iVar4 = *(int *)((int)pvStack_8 + 0xdf3);
      iVar15 = param_3;
    }
    puVar11 = (uint *)FUN_0071a990(iVar4,iVar15,-1,(undefined1 *)0x0);
    if (puVar11 != (uint *)0x0) {
      FUN_006c1390(puVar11,0,(-(uint)(param_3 != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 10:
    if (param_3 == 0) {
      iVar15 = 0x14;
      iVar4 = *(int *)((int)pvStack_8 + 0xdf3);
    }
    else {
      iVar4 = *(int *)((int)pvStack_8 + 0xdf3);
      iVar15 = param_3;
    }
    puVar11 = (uint *)FUN_0071a990(iVar4,iVar15,-1,(undefined1 *)0x0);
    if (puVar11 != (uint *)0x0) {
      FUN_006c1390(puVar11,0,(-(uint)(param_3 != 0) & 0xfffffff7) + 9,DAT_0080730e,0,0,0);
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 0xb:
    puVar11 = (uint *)FUN_00719d00(*(undefined4 *)((int)pvStack_8 + 0xdef),param_2,0,0);
    if (puVar11 != (uint *)0x0) {
      *(undefined4 *)((int)pvVar14 + 0xe03) = *(undefined4 *)((int)pvVar14 + 0xe07);
      uVar5 = FUN_006c1390(puVar11,0,1,DAT_0080730a,0,0,1);
      *(undefined4 *)((int)pvVar14 + 0xe07) = uVar5;
      DVar6 = timeGetTime();
      *(DWORD *)((int)pvVar14 + 0xdff) = DVar6;
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    break;
  case 0xc:
    if ((DAT_00807300._1_1_ & 1) == 0) {
      DAT_00858df8 = (undefined4 *)uStack_64;
      return;
    }
    puVar11 = (uint *)0x0;
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      if (0 < param_3) {
        puVar11 = (uint *)FUN_0071a990(*(int *)((int)pvStack_8 + 0xdf3),param_3,-1,(undefined1 *)0x0
                                      );
      }
LAB_00569cc6:
      if (puVar11 == (uint *)0x0) {
        DAT_00858df8 = (undefined4 *)uStack_64;
        return;
      }
    }
    else {
      if (DAT_00806758 != 0) {
        puVar11 = (uint *)FUN_00719d00(DAT_00806758,param_2,0,0);
      }
      if (puVar11 == (uint *)0x0) {
        if (DAT_00806798 != 0) {
          puVar11 = (uint *)FUN_00719d00(DAT_00806798,param_2,0,0);
        }
        if (puVar11 == (uint *)0x0) {
          puVar11 = (uint *)FUN_00719d00(*(undefined4 *)((int)pvStack_8 + 0xdef),param_2,0,0);
          goto LAB_00569cc6;
        }
      }
    }
    bVar3 = DAT_008033f4;
    DAT_008033f4 = DAT_008033f4 + 1;
    FUN_006c1390(puVar11,bVar3,2,DAT_0080730e,0,0x1a,0x1a);
  }
  DAT_00858df8 = (undefined4 *)uStack_64;
  return;
}

