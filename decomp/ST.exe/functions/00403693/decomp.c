
void thunk_FUN_005b7540(void)

{
  char cVar1;
  byte bVar2;
  UINT UVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  UINT *pUVar10;
  void *unaff_EDI;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  UINT *pUVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uStack_bc;
  undefined4 auStack_b8 [16];
  int aiStack_78 [8];
  int aiStack_58 [8];
  int aiStack_38 [8];
  void *pvStack_18;
  int iStack_14;
  UINT *pUStack_10;
  int iStack_c;
  UINT *pUStack_8;
  
  iStack_c = 1;
  uStack_bc = DAT_00858df8;
  DAT_00858df8 = &uStack_bc;
  iVar5 = __setjmp3(auStack_b8,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_bc;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0xe4,0,iVar5,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7ccb74,0xe4);
    return;
  }
  cVar1 = *(char *)((int)pvStack_18 + 0x65);
  if (cVar1 == '\x01') {
    if ((*(int *)((int)pvStack_18 + 0x1cd0) != 0) &&
       (*(int *)((int)pvStack_18 + 0x1d90) < *(int *)((int)pvStack_18 + 0x1d94) + -3)) {
      if ((*(int *)((int)pvStack_18 + 0x1d90) == 0) &&
         (*(uint *)((int)pvStack_18 + 0x1d8c) != 0xffffffff)) {
        FUN_006b34d0(*(uint **)((int)pvStack_18 + 0x1dd0),*(uint *)((int)pvStack_18 + 0x1d8c),
                     0xfffffffe,*(uint *)((int)pvStack_18 + 0x1da4),
                     *(uint *)((int)pvStack_18 + 0x1da8));
      }
      *(int *)((int)pvStack_18 + 0x1d90) = *(int *)((int)pvStack_18 + 0x1d90) + 1;
      if (*(uint *)((int)pvStack_18 + 0x1d8c) != 0xffffffff) {
        FUN_006b3730(*(uint **)((int)pvStack_18 + 0x1dd0),*(uint *)((int)pvStack_18 + 0x1d8c),
                     *(uint *)((int)pvStack_18 + 0x1d90),*(uint *)((int)pvStack_18 + 0x1da4),
                     *(uint *)((int)pvStack_18 + 0x1da8));
      }
      thunk_FUN_005b6730(pvStack_18,0x1e,'\x01',-1);
    }
  }
  else if (cVar1 == '\x03') {
    if (*(int *)((int)pvStack_18 + 0x1cd0) != 0) {
      if (*(int *)((int)pvStack_18 + 0x1cff) < *(int *)((int)pvStack_18 + 0x1d03) + -1) {
        *(int *)((int)pvStack_18 + 0x1cff) = *(int *)((int)pvStack_18 + 0x1cff) + 1;
        if (*(uint *)((int)pvStack_18 + 0x1cfb) != 0xffffffff) {
          FUN_006b3730(*(uint **)((int)pvStack_18 + 0x1d3f),*(uint *)((int)pvStack_18 + 0x1cfb),
                       *(uint *)((int)pvStack_18 + 0x1cff),*(uint *)((int)pvStack_18 + 0x1d13),
                       *(uint *)((int)pvStack_18 + 0x1d17));
        }
        iStack_c = 0;
      }
      else if (*(int *)((int)pvStack_18 + 0x1d90) < *(int *)((int)pvStack_18 + 0x1d94) + -3) {
        if ((*(int *)((int)pvStack_18 + 0x1d90) == 0) &&
           (*(uint *)((int)pvStack_18 + 0x1d8c) != 0xffffffff)) {
          FUN_006b34d0(*(uint **)((int)pvStack_18 + 0x1dd0),*(uint *)((int)pvStack_18 + 0x1d8c),
                       0xfffffffe,*(uint *)((int)pvStack_18 + 0x1da4),
                       *(uint *)((int)pvStack_18 + 0x1da8));
        }
        *(int *)((int)pvStack_18 + 0x1d90) = *(int *)((int)pvStack_18 + 0x1d90) + 1;
        if (*(uint *)((int)pvStack_18 + 0x1d8c) != 0xffffffff) {
          FUN_006b3730(*(uint **)((int)pvStack_18 + 0x1dd0),*(uint *)((int)pvStack_18 + 0x1d8c),
                       *(uint *)((int)pvStack_18 + 0x1d90),*(uint *)((int)pvStack_18 + 0x1da4),
                       *(uint *)((int)pvStack_18 + 0x1da8));
        }
        thunk_FUN_005b6730(pvStack_18,0x1e,'\x01',-1);
      }
    }
    iVar5 = 0;
    if (*(char *)((int)pvStack_18 + 0x9a) != '\0') {
      puVar11 = (uint *)((int)pvStack_18 + 0xff);
      do {
        if ((*(char *)((int)pvStack_18 + iVar5 + 0x1c9c) != '\0') &&
           (*(int *)((int)puVar11 + -0x43) != 0)) {
          if (puVar11[9] <= *(int *)((int)pvStack_18 + 0x61) - puVar11[10]) {
            if ((int)puVar11[-5] < (int)(puVar11[-4] - 1)) {
              uVar6 = puVar11[-5] + 1;
              puVar11[-5] = uVar6;
              if (puVar11[-6] != 0xffffffff) {
                FUN_006b3730((uint *)puVar11[0xb],puVar11[-6],uVar6,*puVar11,puVar11[1]);
              }
            }
            else {
              if (*(int *)((int)puVar11 + 0x81) + -3 <= *(int *)((int)puVar11 + 0x7d))
              goto LAB_005b7ad9;
              if ((*(int *)((int)puVar11 + 0x7d) == 0) &&
                 (*(uint *)((int)puVar11 + 0x79) != 0xffffffff)) {
                FUN_006b34d0(*(uint **)((int)puVar11 + 0xbd),*(uint *)((int)puVar11 + 0x79),
                             0xfffffffe,*(uint *)((int)puVar11 + 0x91),
                             *(uint *)((int)puVar11 + 0x95));
              }
              uVar6 = *(int *)((int)puVar11 + 0x7d) + 1;
              *(uint *)((int)puVar11 + 0x7d) = uVar6;
              if (*(uint *)((int)puVar11 + 0x79) != 0xffffffff) {
                FUN_006b3730(*(uint **)((int)puVar11 + 0xbd),*(uint *)((int)puVar11 + 0x79),uVar6,
                             *(uint *)((int)puVar11 + 0x91),*(uint *)((int)puVar11 + 0x95));
              }
              thunk_FUN_005b6730(pvStack_18,0x1e,'\x01',-1);
            }
          }
          iStack_c = 0;
        }
LAB_005b7ad9:
        iVar5 = iVar5 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar5 < (int)(uint)*(byte *)((int)pvStack_18 + 0x9a));
    }
    if (iStack_c != 0) {
      *(undefined1 *)((int)pvStack_18 + 0x65) = 1;
      if (*(char *)((int)pvStack_18 + 0x9a) != '\0') {
        pUStack_8 = (UINT *)((int)pvStack_18 + 0x66);
        pUStack_10 = (UINT *)((int)pvStack_18 + 0x1c82);
        puVar7 = (undefined4 *)((int)pvStack_18 + 0xa7);
        iVar5 = 0x68ff;
        do {
          if ((*(int *)((int)puVar7 + 0x15) != 0) && (*pUStack_8 == 0)) {
            if (*(char *)((int)pvStack_18 + 0x1ca9) == '\0') {
              uVar6 = (uint)(-1 < (short)*pUStack_10);
            }
            else {
              uVar6 = 1;
            }
            iVar8 = thunk_FUN_005b5510(1,uVar6,puVar7[0x16] + puVar7[-3],puVar7[0x17] + puVar7[-2],
                                       puVar7[-1],*puVar7,iVar5,iVar5 + 0x80);
            *pUStack_8 = iVar8;
          }
          pUStack_10 = (UINT *)((int)pUStack_10 + 2);
          pUStack_8 = pUStack_8 + 1;
          puVar7 = (undefined4 *)((int)puVar7 + 0x1fb);
          iVar8 = iVar5 + -0x68fe;
          iVar5 = iVar5 + 1;
        } while (iVar8 < (int)(uint)*(byte *)((int)pvStack_18 + 0x9a));
      }
      if ((*(char *)((int)pvStack_18 + 0x1ca9) == '\0') &&
         (aiStack_58[2] = *(int *)((int)pvStack_18 + 0x1cab), aiStack_58[2] != 0)) {
        piVar12 = *(int **)((int)pvStack_18 + 0xc);
        piVar15 = aiStack_58;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar15 = 0;
          piVar15 = piVar15 + 1;
        }
        aiStack_58[3] = 2;
        aiStack_58[4] = 0x693f;
        (**(code **)(*piVar12 + 0x18))(aiStack_58);
        DAT_00858df8 = (undefined4 *)uStack_bc;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    if ((*(int *)((int)pvStack_18 + 0x1cd0) != 0) && (0 < *(int *)((int)pvStack_18 + 0x1cff))) {
      *(int *)((int)pvStack_18 + 0x1cff) = *(int *)((int)pvStack_18 + 0x1cff) + -1;
      if (*(uint *)((int)pvStack_18 + 0x1cfb) != 0xffffffff) {
        FUN_006b3730(*(uint **)((int)pvStack_18 + 0x1d3f),*(uint *)((int)pvStack_18 + 0x1cfb),
                     *(uint *)((int)pvStack_18 + 0x1cff),*(uint *)((int)pvStack_18 + 0x1d13),
                     *(uint *)((int)pvStack_18 + 0x1d17));
      }
      iStack_c = 0;
    }
    if (*(char *)((int)pvStack_18 + 0x9a) != '\0') {
      pcVar9 = (char *)((int)pvStack_18 + 0x1c9c);
      iStack_14 = -0x1c9c - (int)pvStack_18;
      puVar11 = (uint *)((int)pvStack_18 + 0xff);
      do {
        if (*pcVar9 != '\0') {
          if (puVar11[9] <= *(int *)((int)pvStack_18 + 0x61) - puVar11[10]) {
            if ((int)puVar11[-5] < 1) {
              if (*(char *)((int)pvStack_18 + 0x1caa) == '\0') {
                *(undefined4 *)((int)puVar11 + -0x43) = 0;
              }
              *pcVar9 = '\0';
              goto LAB_005b7655;
            }
            uVar6 = puVar11[-5] - 1;
            puVar11[-5] = uVar6;
            if (puVar11[-6] != 0xffffffff) {
              FUN_006b3730((uint *)puVar11[0xb],puVar11[-6],uVar6,*puVar11,puVar11[1]);
            }
          }
          iStack_c = 0;
        }
LAB_005b7655:
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
        pcVar9 = pcVar9 + 1;
      } while ((int)(pcVar9 + iStack_14) < (int)(uint)*(byte *)((int)pvStack_18 + 0x9a));
    }
    if (iStack_c != 0) {
      *(undefined1 *)((int)pvStack_18 + 0x65) = 2;
      if (*(char *)((int)pvStack_18 + 0x1ca9) != '\0') {
        if (*(char *)((int)pvStack_18 + 0x1caa) != '\0') {
          *(undefined4 *)((int)pvStack_18 + 0x1c9c) = 0x1010101;
          *(undefined4 *)((int)pvStack_18 + 0x1ca0) = 0x1010101;
          *(undefined4 *)((int)pvStack_18 + 0x1ca4) = 0x1010101;
          *(undefined1 *)((int)pvStack_18 + 0x1ca8) = 1;
          *(undefined1 *)((int)pvStack_18 + 0x65) = 3;
          thunk_FUN_005b6730(pvStack_18,5,'\0',-1);
          *(undefined1 *)((int)pvStack_18 + 0x1caa) = 0;
          DAT_00858df8 = (undefined4 *)uStack_bc;
          return;
        }
        bVar2 = *(byte *)((int)pvStack_18 + 0x1a5a);
        if ((bVar2 != 0xff) && (*(int *)((int)pvStack_18 + (uint)bVar2 * 0x1fb + 0xd1) != 0)) {
          FUN_006e3b50((undefined4 *)((int)pvStack_18 + (uint)bVar2 * 0x1fb + 0xc1));
        }
        iVar5 = *(int *)((int)pvStack_18 + 0x1cab);
        if (iVar5 != 0) {
          piVar12 = aiStack_78;
          for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = 0;
            piVar12 = piVar12 + 1;
          }
          aiStack_78[3] = 2;
          aiStack_78[4] = 0x693f;
          aiStack_78[2] = iVar5;
          (**(code **)(**(int **)((int)pvStack_18 + 0xc) + 0x18))(aiStack_78);
        }
        if (*(char *)((int)pvStack_18 + 0x1a5f) != '\0') {
          iStack_14 = 0;
          puVar7 = (undefined4 *)((int)pvStack_18 + 0x1a60);
          puVar13 = (undefined4 *)((int)pvStack_18 + 0x1cd0);
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = *(undefined2 *)puVar7;
          *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar7 + 2);
          if (*(char *)((int)pvStack_18 + 0x9a) != '\0') {
            pUStack_8 = (UINT *)((int)pvStack_18 + 0xbc);
            pUStack_10 = (UINT *)((int)pvStack_18 + 0x1a87);
            do {
              pUVar10 = pUStack_10;
              pUVar14 = pUStack_8;
              for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pUVar14 = *pUVar10;
                pUVar10 = pUVar10 + 1;
                pUVar14 = pUVar14 + 1;
              }
              *(short *)pUVar14 = (short)*pUVar10;
              *(undefined1 *)((int)pUVar14 + 2) = *(undefined1 *)((int)pUVar10 + 2);
              if (*pUStack_8 != 0) {
                uVar21 = 0xffffffff;
                uVar20 = 7;
                iVar19 = -1;
                UVar3 = pUStack_8[0x2e];
                iVar18 = -1;
                iVar17 = 1;
                uVar16 = 0xffffffff;
                uVar6 = 0xfffffffe;
                iVar8 = 0x1e;
                iVar5 = 0x7d;
                puVar11 = (uint *)FUN_006b0140(*pUStack_8,DAT_00807618);
                puVar7 = FUN_00713480(puVar11,iVar5,iVar8,uVar6,uVar16,iVar17,iVar18,iVar19);
                (**(code **)(UVar3 + 8))(puVar7,uVar20,uVar21);
                pUStack_8[0x30] = 0;
              }
              iStack_14 = iStack_14 + 1;
              pUStack_10 = (UINT *)((int)pUStack_10 + 0x27);
              pUStack_8 = (UINT *)((int)pUStack_8 + 0x1fb);
            } while (iStack_14 < (int)(uint)*(byte *)((int)pvStack_18 + 0x9a));
          }
          if ((*(char *)((int)pvStack_18 + 0x1a5f) == '\x03') ||
             (*(char *)((int)pvStack_18 + 0x1a5f) == '\x01')) {
            *(undefined4 *)((int)pvStack_18 + 0x1c9c) = 0x1010101;
            *(undefined4 *)((int)pvStack_18 + 0x1ca0) = 0x1010101;
            *(undefined4 *)((int)pvStack_18 + 0x1ca4) = 0x1010101;
            *(undefined1 *)((int)pvStack_18 + 0x1ca8) = 1;
            *(undefined1 *)((int)pvStack_18 + 0x65) = 3;
          }
          *(undefined1 *)((int)pvStack_18 + 0x1a5f) = 0;
        }
        *(undefined1 *)((int)pvStack_18 + 0x1ca9) = 0;
        DAT_00858df8 = (undefined4 *)uStack_bc;
        return;
      }
      iVar5 = *(int *)((int)pvStack_18 + 0x1cab);
      if (iVar5 != 0) {
        piVar12 = aiStack_38;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + 1;
        }
        aiStack_38[3] = 2;
        aiStack_38[4] = 0x693f;
        aiStack_38[2] = iVar5;
        (**(code **)(**(int **)((int)pvStack_18 + 0xc) + 0x18))(aiStack_38);
      }
      bVar2 = *(byte *)((int)pvStack_18 + 0x1a5a);
      if ((bVar2 != 0xff) && (*(int *)((int)pvStack_18 + (uint)bVar2 * 0x1fb + 0xd1) != 0)) {
        FUN_006e3b50((undefined4 *)((int)pvStack_18 + (uint)bVar2 * 0x1fb + 0xc1));
        DAT_00858df8 = (undefined4 *)uStack_bc;
        return;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_bc;
  return;
}

