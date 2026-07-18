
void FUN_006bcd10(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = DAT_00854fc8;
joined_r0x006bcd2a:
  do {
    iVar2 = iVar2 + -1;
    if (DAT_00854f98 != 0) {
      DAT_00854f60 = iVar2;
      return;
    }
    if (iVar2 < 0) {
      DAT_00854f60 = iVar2;
      return;
    }
    DAT_00854f44 = *(uint **)(DAT_00854fdc + iVar2 * 4);
    DAT_00854f60 = iVar2;
    if ((*DAT_00854f44 & 8) == 0) {
      if ((*DAT_00854f44 & 2) == 0) goto joined_r0x006bcd2a;
      if (((*(int *)(DAT_00854fd4 + 0x1e8) < (int)DAT_00854f44[0x11]) &&
          (*(int *)(DAT_00854fd4 + 0x1dc) != 0)) &&
         (iVar2 = FUN_006cfeb0((int *)&DAT_00854f08,(int *)(DAT_00854f44 + 10),
                               (int *)(*(int *)(DAT_00854fd4 + 0x1e4) * 0x10 + 0x14 + DAT_00854fd4))
         , iVar2 != 0)) {
        FUN_006bcb30(DAT_00854fd4,DAT_00854f08,DAT_00854f0c,DAT_00854f10,DAT_00854f14);
      }
      DAT_00854eec = 0;
      puVar3 = DAT_00854f44;
      iVar2 = DAT_00854f60;
      if (0 < DAT_00854f60) {
        do {
          DAT_00854fd0 = *(uint **)(DAT_00854fdc + DAT_00854eec * 4);
          if ((((*DAT_00854fd0 & 2) == 0) || ((int)DAT_00854fd0[0x1a] < 5)) &&
             (DAT_00854edc = 0, 4 < (int)puVar3[0x1a])) {
            iVar2 = FUN_006b0460((int *)&DAT_00854f08,(int *)(DAT_00854fd0 + 1),(int *)(puVar3 + 10)
                                );
            if (iVar2 != 0) {
              DAT_00854edc = FUN_006d1ad0((int *)(DAT_00854fd0 + 0x1a),4,DAT_00854f08,DAT_00854f0c,
                                          DAT_00854f10,DAT_00854f14,DAT_00854fd0[3],DAT_00854fd0[4],
                                          -(uint)((*DAT_00854fd0 & 0x2000) != 0));
            }
            puVar3 = DAT_00854f44;
            if (DAT_00854edc != 0) {
              *DAT_00854fd0 = *DAT_00854fd0 | 2;
              uVar8 = *DAT_00854fd0;
              if (((uVar8 & 0x3000) != 0) ||
                 ((puVar3 = DAT_00854f44, (uVar8 & 0x4000) != 0 && ((uVar8 & 0x20000) == 0)))) {
                *DAT_00854fd0 = uVar8 | 4;
                if (((*DAT_00854f44 & 0x2000) == 0) || (DAT_00854edc == -1)) {
                  iVar2 = *(int *)(DAT_00854fd4 + 0x10);
                  iVar1 = *(int *)(DAT_00854fd4 + 0xc);
                  piVar4 = *(int **)(DAT_00854fd4 + 0x1c0);
                  uVar8 = DAT_00854fd0[4];
                  uVar7 = DAT_00854fd0[3];
                  uVar6 = DAT_00854fd0[2];
                  uVar5 = DAT_00854fd0[1];
                }
                else {
                  iVar2 = *(int *)(DAT_00854fd4 + 0x10);
                  iVar1 = *(int *)(DAT_00854fd4 + 0xc);
                  piVar4 = *(int **)(DAT_00854fd4 + 0x1c0);
                  uVar5 = DAT_00854f08;
                  uVar6 = DAT_00854f0c;
                  uVar7 = DAT_00854f10;
                  uVar8 = DAT_00854f14;
                }
                DAT_00854f28 = FUN_006d1ad0(piVar4,100,uVar5,uVar6,uVar7,uVar8,iVar1,iVar2,1);
                if (DAT_00854f28 == -1) {
                  DAT_00854f98 = 1;
                  iVar2 = DAT_00854f60;
                  break;
                }
                puVar3 = DAT_00854f44;
                if (DAT_00854f28 != 0) goto LAB_006bd0ad;
              }
            }
          }
          DAT_00854eec = DAT_00854eec + 1;
          iVar2 = DAT_00854f60;
        } while (DAT_00854eec < DAT_00854f60);
      }
    }
    else {
      DAT_00854eec = 0;
      if (0 < iVar2) {
        do {
          DAT_00854fd0 = *(uint **)(DAT_00854fdc + DAT_00854eec * 4);
          if (((((*DAT_00854fd0 & 2) == 0) || ((int)DAT_00854fd0[0x1a] < 5)) &&
              (iVar1 = FUN_006cfeb0((int *)&DAT_00854f08,(int *)(DAT_00854fd0 + 10),
                                    (int *)(*(int *)(DAT_00854fd4 + 0x1e4) * 0x10 + 0x14 +
                                           DAT_00854fd4)), iVar2 = DAT_00854f60, iVar1 != 0)) &&
             (iVar1 = FUN_006bd0c0(DAT_00854fd4,DAT_00854f08,DAT_00854f0c,DAT_00854f10,DAT_00854f14)
             , iVar2 = DAT_00854f60, iVar1 != 0)) {
            DAT_00854fd0[0x1a] = 5;
            *DAT_00854fd0 = *DAT_00854fd0 | 2;
            uVar8 = *DAT_00854fd0;
            if (((uVar8 & 0x3000) != 0) ||
               ((iVar2 = DAT_00854f60, (uVar8 & 0x4000) != 0 && ((uVar8 & 0x20000) == 0)))) {
              *DAT_00854fd0 = uVar8 | 4;
              DAT_00854f28 = FUN_006d1ad0(*(int **)(DAT_00854fd4 + 0x1c0),100,DAT_00854fd0[1],
                                          DAT_00854fd0[2],DAT_00854fd0[3],DAT_00854fd0[4],
                                          *(int *)(DAT_00854fd4 + 0xc),*(int *)(DAT_00854fd4 + 0x10)
                                          ,1);
              iVar2 = DAT_00854f60;
              if (DAT_00854f28 == -1) {
                DAT_00854f98 = 1;
                break;
              }
              if (DAT_00854f28 != 0) {
LAB_006bd0ad:
                DAT_00854f28 = DAT_00854f28 + -1;
                DAT_00854f6c = 1;
                return;
              }
            }
          }
          DAT_00854eec = DAT_00854eec + 1;
        } while (DAT_00854eec < iVar2);
      }
    }
    if (DAT_00854f6c != 0) {
      return;
    }
  } while( true );
}

