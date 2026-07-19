
undefined4 __thiscall thunk_FUN_00418030(void *this,short param_1,short param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  int *this_00;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  short *psVar8;
  int *piVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  undefined4 unaff_ESI;
  short *psVar13;
  int iVar14;
  void *unaff_EDI;
  short *psVar15;
  int iVar16;
  InternalExceptionFrame IStack_9c;
  int *piStack_58;
  short *psStack_54;
  short *psStack_50;
  short *psStack_4c;
  short *psStack_48;
  short *psStack_44;
  short *psStack_40;
  int iStack_3c;
  short *psStack_38;
  int iStack_34;
  int iStack_30;
  short *psStack_2c;
  int iStack_28;
  short *psStack_24;
  short *psStack_20;
  short *psStack_1c;
  undefined1 uStack_15;
  short *psStack_14;
  short *psStack_10;
  short *psStack_c;
  bool bStack_5;
  
  piStack_58 = this;
  thunk_FUN_004167a0((int)this);
  if (((param_1 == *(short *)((int)this + 0x47)) && (param_2 == *(short *)((int)this + 0x49))) &&
     (param_3 == *(short *)((int)this + 0x4b))) {
    return 1;
  }
  IStack_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_9c;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = piStack_58;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_9c.previous;
    return 0xffffffff;
  }
  psStack_2c = (short *)(int)param_1;
  uVar5 = (int)psStack_2c - (int)*(short *)((int)piStack_58 + 0x5b);
  uVar11 = (int)uVar5 >> 0x1f;
  if ((((int)((uVar5 ^ uVar11) - uVar11) < 2) &&
      (psVar15 = (short *)(int)param_2,
      uVar5 = (int)psVar15 - (int)*(short *)((int)piStack_58 + 0x5d), uVar11 = (int)uVar5 >> 0x1f,
      (int)((uVar5 ^ uVar11) - uVar11) < 2)) &&
     (psVar13 = (short *)(int)param_3,
     uVar5 = (int)psVar13 - (int)*(short *)((int)piStack_58 + 0x5f), uVar11 = (int)uVar5 >> 0x1f,
     (int)((uVar5 ^ uVar11) - uVar11) < 2)) {
    if (((param_1 < 0) || (DAT_007fb240 <= param_1)) ||
       ((param_2 < 0 || (((DAT_007fb242 <= param_2 || (param_3 < 0)) || (DAT_007fb244 <= param_3))))
       )) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(DAT_007fb248 +
                      ((uint)*(byte *)((int)piStack_58 + 0x8e) +
                      (int)((int)psStack_2c +
                           (int)DAT_007fb240 * (int)psVar15 + (int)DAT_007fb246 * (int)psVar13) * 2)
                      * 4);
    }
    if (iVar4 == 0) {
      *(undefined4 *)((int)piStack_58 + 0x9b) = 2;
      puVar6 = Library::DKW::LIB::FUN_006aac10(0x10);
      *(undefined4 **)((int)this_00 + 0x97) = puVar6;
      *(short *)(puVar6 + 2) = param_1;
      *(short *)(*(int *)((int)this_00 + 0x97) + 10) = param_2;
      *(short *)(*(int *)((int)this_00 + 0x97) + 0xc) = param_3;
      uVar7 = FUN_006a5eb0((int)*(short *)((int)this_00 + 0x5b),(int)*(short *)((int)this_00 + 0x5d)
                           ,(int)*(short *)((int)this_00 + 0x5f),(int)psStack_2c,(int)psVar15,
                           (int)psVar13);
      *(short *)(*(int *)((int)this_00 + 0x97) + 0xe) = (short)uVar7;
      goto LAB_0041862b;
    }
  }
  psStack_44 = (short *)0x3;
  psStack_14 = (short *)Library::DKW::LIB::FUN_006aac10(0x2ae);
  sVar3 = *(short *)((int)this_00 + 0x47);
  psStack_54 = psStack_14 + 0xab;
  iVar4 = 2;
  if (sVar3 < 2) {
    iVar4 = (int)sVar3;
  }
  psStack_38 = (short *)-iVar4;
  if (sVar3 + 2 < (int)DAT_007fb278) {
    iStack_28 = 2;
  }
  else {
    iStack_28 = ((int)DAT_007fb278 - (int)sVar3) + -1;
  }
  sVar3 = *(short *)((int)this_00 + 0x49);
  iStack_34 = 2;
  if (sVar3 < 2) {
    iStack_34 = (int)sVar3;
  }
  iStack_34 = -iStack_34;
  if (sVar3 + 2 < (int)DAT_007fb27a) {
    iStack_3c = 2;
  }
  else {
    iStack_3c = ((int)DAT_007fb27a - (int)sVar3) + -1;
  }
  sVar3 = *(short *)((int)this_00 + 0x4b);
  iVar14 = 2;
  if (sVar3 < 2) {
    iVar14 = (int)sVar3;
  }
  psVar15 = (short *)(sVar3 + 2);
  psStack_4c = (short *)-iVar14;
  if ((int)psVar15 < (int)DAT_007fb27c) {
    psStack_24 = (short *)0x2;
  }
  else {
    psStack_24 = (short *)(((int)DAT_007fb27c - (int)sVar3) + -1);
  }
  psStack_c = (short *)0x0;
  psStack_1c = psStack_4c;
  if (-(int)psStack_24 == iVar14 || (int)psStack_4c < (int)psStack_24) {
    psStack_20 = psStack_54 + (iVar14 * -7 + iStack_34) * 7;
    iVar14 = iStack_34;
    psVar13 = psStack_54;
    psVar8 = psStack_20;
    do {
      while (psStack_48 = psVar8, iStack_30 = iVar14, iStack_30 <= iStack_3c) {
        psStack_10 = psStack_38;
        if ((int)psStack_38 <= iStack_28) {
          psStack_40 = psStack_48 + -iVar4;
          do {
            sVar10 = *(short *)((int)this_00 + 0x4b) + (short)psStack_1c;
            sVar3 = *(short *)((int)this_00 + 0x47) + (short)psStack_10;
            psStack_50 = (short *)(CONCAT22((short)((uint)psVar13 >> 0x10),
                                            *(undefined2 *)((int)this_00 + 0x49)) + iStack_30);
            sVar12 = (short)psStack_50;
            if (((sVar3 < 0) || (DAT_007fb240 <= sVar3)) ||
               (((sVar12 < 0 || ((DAT_007fb242 <= sVar12 || (sVar10 < 0)))) ||
                (DAT_007fb244 <= sVar10)))) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = *(int **)(DAT_007fb248 +
                                ((int)sVar10 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                                (int)sVar3) * 8);
            }
            psVar13 = psStack_50;
            if (piVar9 == (int *)0x0) {
              if (*(char *)((int)this_00 + 0x8e) != '\0') {
                if (((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) || (sVar12 < 0)) ||
                    ((DAT_007fb242 <= sVar12 || (sVar10 < 0)))) || (DAT_007fb244 <= sVar10)) {
                  piVar9 = (int *)0x0;
                }
                else {
                  piVar9 = *(int **)(DAT_007fb248 + 4 +
                                    ((int)sVar10 * (int)DAT_007fb246 +
                                     (int)sVar12 * (int)DAT_007fb240 + (int)sVar3) * 8);
                  psVar13 = (short *)(int)DAT_007fb240;
                }
              }
              if (piVar9 != (int *)0x0) goto LAB_004183b8;
            }
            else {
LAB_004183b8:
              if ((piVar9 != this_00) &&
                 (((psVar13 = psStack_1c,
                   (undefined1 *)((int)*(short *)((int)this_00 + 0x4b) + (int)psStack_1c) !=
                   (undefined1 *)(int)param_3 ||
                   (*(short *)((int)this_00 + 0x49) + iStack_30 != (int)param_2)) ||
                  ((short *)((int)*(short *)((int)this_00 + 0x47) + (int)psStack_10) != psStack_2c))
                 )) {
                psStack_c = (short *)0x1;
                *psStack_40 = -3;
              }
            }
            psStack_10 = (short *)((int)psStack_10 + 1);
            psStack_40 = psStack_40 + 1;
          } while ((int)psStack_10 <= iStack_28);
        }
        psVar8 = psStack_48 + 7;
        iVar14 = iStack_30 + 1;
      }
      psStack_20 = psStack_20 + 0x31;
      psStack_1c = (short *)((int)psStack_1c + 1);
      psVar15 = psStack_38;
      iVar14 = iStack_34;
      psVar13 = psStack_24;
      psVar8 = psStack_20;
    } while ((int)psStack_1c <= (int)psStack_24);
  }
  if (psStack_c == (short *)0x0) {
    FUN_006ab060(&psStack_14);
    psStack_44 = (short *)0x0;
  }
  psVar13 = psStack_14;
  psStack_50 = (short *)(int)param_2;
  psVar8 = psStack_44;
  psStack_44 = (short *)(int)param_3;
  psVar8 = Library::DKW::WAY::FUN_006ae7d0
                     ((int)DAT_007fb280,(int)DAT_007fb278,(short *)(int)DAT_007fb27a,
                      (short *)(int)DAT_007fb27c,(short *)(int)*(short *)((int)this_00 + 0x47),
                      (short *)(int)*(short *)((int)this_00 + 0x49),
                      (short *)(int)*(short *)((int)this_00 + 0x4b),psStack_2c,psStack_50,
                      (short *)(int)param_3,(int *)((int)this_00 + 0x9b),(undefined4 *)psStack_14,
                      psVar8);
  *(short **)((int)this_00 + 0x97) = psVar8;
  if (psVar8 == (short *)0x0) {
    iVar4 = (int)DAT_007fb27e;
    iVar14 = (int)DAT_007fb27c;
    psVar13 = DAT_007fb280;
    psVar15 = DAT_007fb238;
    for (uVar5 = (iVar4 * iVar14 & 0x7fffffffU) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar15 = *(undefined4 *)psVar13;
      psVar13 = psVar13 + 2;
      psVar15 = psVar15 + 2;
    }
    for (uVar5 = iVar4 * iVar14 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)psVar15 = (char)*psVar13;
      psVar13 = (short *)((int)psVar13 + 1);
      psVar15 = (short *)((int)psVar15 + 1);
    }
    if ((psStack_c != (short *)0x0) &&
       (psStack_1c = psStack_4c, psVar13 = psStack_4c, (int)psStack_4c <= (int)psStack_24)) {
      psStack_c = psStack_54 + ((int)psStack_4c * 7 + iStack_34) * 7;
      do {
        psStack_10 = DAT_007fb238 +
                     (int)((int)*(short *)((int)this_00 + 0x4b) + (int)psVar13) * (int)DAT_007fb27e
                     + (*(short *)((int)this_00 + 0x49) + iStack_34) * (int)DAT_007fb278 +
                     (int)*(short *)((int)this_00 + 0x47);
        if (iStack_34 <= iStack_3c) {
          iVar4 = (iStack_3c - iStack_34) + 1;
          psVar15 = psStack_c;
          do {
            if ((int)psStack_38 <= iStack_28) {
              psVar8 = psVar15 + (int)psStack_38;
              iVar14 = (iStack_28 - (int)psStack_38) + 1;
              do {
                if (*psVar8 < 0) {
                  *(short *)(((int)psStack_10 - (int)psVar15) + (int)psVar8) = *psVar8;
                }
                psVar8 = psVar8 + 1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            psVar15 = psVar15 + 7;
            iVar4 = iVar4 + -1;
            psStack_10 = psStack_10 + DAT_007fb278;
          } while (iVar4 != 0);
          psStack_20 = (short *)0x0;
        }
        psVar13 = (short *)((int)psVar13 + 1);
        psVar15 = psStack_c + 0x31;
        psStack_1c = psVar13;
        psStack_c = psVar15;
      } while ((int)psVar13 <= (int)psStack_24);
    }
    psVar8 = Library::DKW::WAY::FUN_006afba0
                       ((int)DAT_007fb238,(int)DAT_007fb230,(short *)(int)DAT_007fb232,
                        (short *)(int)DAT_007fb234,(short *)(int)*(short *)((int)this_00 + 0x47),
                        (short *)(int)*(short *)((int)this_00 + 0x49),
                        (short *)(int)*(short *)((int)this_00 + 0x4b),psStack_2c,psStack_50,
                        psStack_44,(int *)((int)this_00 + 0x9b),0);
    *(short **)((int)this_00 + 0x97) = psVar8;
  }
  FUN_006ab060(&psStack_14);
LAB_0041862b:
  g_currentExceptionFrame = IStack_9c.previous;
  iVar4 = *(int *)((int)this_00 + 0x97);
  if (iVar4 == 0) {
    return 2;
  }
  *(undefined1 *)((int)this_00 + 0xe3) = 1;
  *(undefined4 *)((int)this_00 + 0xd3) = 1;
  iVar14 = CONCAT22((short)((uint)psVar13 >> 0x10),*(short *)(iVar4 + 8) * 0xc9) + 100;
  sVar3 = (short)iVar14;
  uVar5 = (int)sVar3 - (int)*(short *)((int)this_00 + 0x41);
  iVar16 = CONCAT22((short)((uint)psVar15 >> 0x10),*(short *)(iVar4 + 10) * 0xc9) + 100;
  uVar11 = (int)uVar5 >> 0x1f;
  psStack_c = (short *)(CONCAT22((short)((uint)IStack_9c.previous >> 0x10),
                                 *(short *)(iVar4 + 0xc) * 200) + 100);
  psStack_54 = (short *)((uVar5 ^ uVar11) - uVar11);
  uStack_15 = 0;
  sVar10 = (short)iVar16;
  uVar5 = (int)sVar10 - (int)*(short *)((int)this_00 + 0x43);
  bStack_5 = false;
  uVar11 = (int)uVar5 >> 0x1f;
  psStack_4c = (short *)((uVar5 ^ uVar11) - uVar11);
  uVar5 = (int)(short)psStack_c - (int)*(short *)((int)this_00 + 0x45);
  uVar11 = (int)uVar5 >> 0x1f;
  psStack_10 = (short *)((uVar5 ^ uVar11) - uVar11);
  if (psStack_10 == (short *)0x0) {
    psStack_14 = (short *)CONCAT31(psStack_14._1_3_,*(undefined1 *)((int)this_00 + 0x61));
  }
  else {
    bVar1 = 2 < (int)psStack_10 / (int)psStack_54;
    bStack_5 = psStack_54 == (short *)0x0 || bVar1;
    if ((psStack_4c == (short *)0x0) || (2 < (int)psStack_10 / (int)psStack_4c)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((psStack_54 == (short *)0x0 || bVar1) && (bVar2)) {
      psStack_14 = (short *)CONCAT31(psStack_14._1_3_,*(undefined1 *)((int)this_00 + 0x62));
    }
    else {
      psStack_14 = (short *)CONCAT31(psStack_14._1_3_,*(undefined1 *)((int)this_00 + 0x61));
    }
  }
  iVar4 = thunk_FUN_00415b30(this_00,*(short *)((int)this_00 + 0x41),*(short *)((int)this_00 + 0x43)
                             ,*(short *)((int)this_00 + 0x45),sVar3,sVar10,(short)psStack_c,
                             (byte)psStack_14);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  if (((short)this_00[0x23] != 1) &&
     ((*(short *)((int)this_00 + 0x41) != sVar3 || (*(short *)((int)this_00 + 0x43) != sVar10)))) {
    sVar3 = (**(code **)(*this_00 + 0x10))
                      (*(short *)((int)this_00 + 0x41),*(undefined2 *)((int)this_00 + 0x43),
                       *(undefined2 *)((int)this_00 + 0x45),iVar14,iVar16,psStack_c);
    uVar5 = thunk_FUN_004176c0(this_00,sVar3);
    if ((short)uVar5 != (short)this_00[0x1b]) {
      thunk_FUN_00417740(this_00,(short)this_00[0x1b],(short)uVar5);
    }
  }
  return 0;
}

