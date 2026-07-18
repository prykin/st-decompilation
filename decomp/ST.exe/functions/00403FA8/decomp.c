
undefined4 __thiscall
thunk_FUN_005b7ef0(void *this,UINT param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6,UINT param_7)

{
  code *pcVar1;
  void *this_00;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint auStack_478 [256];
  undefined4 *puStack_78;
  undefined4 auStack_74 [16];
  int aiStack_34 [8];
  void *pvStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_c = uStack_c & 0xffffff00;
  if ((param_1 != 0) && (*(char *)((int)this + 0x1ca9) == '\0')) {
    puStack_78 = DAT_00858df8;
    DAT_00858df8 = &puStack_78;
    pvStack_14 = this;
    iVar3 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
    this_00 = pvStack_14;
    if (iVar3 == 0) {
      iVar3 = *(int *)((int)pvStack_14 + 0x1cab);
      if (iVar3 != 0) {
        piVar9 = aiStack_34;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar9 = 0;
          piVar9 = piVar9 + 1;
        }
        aiStack_34[3] = 2;
        aiStack_34[4] = 0x6940;
        aiStack_34[2] = iVar3;
        (**(code **)(**(int **)((int)this_00 + 0xc) + 0x18))(aiStack_34);
      }
      *(undefined1 *)((int)this_00 + 0x1ca9) = 1;
      puVar6 = (undefined4 *)((int)this_00 + 0x1cd0);
      puVar11 = (undefined4 *)((int)this_00 + 0x1a60);
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
      *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar6 + 2);
      *(undefined1 *)((int)this_00 + 0x1a5f) = *(undefined1 *)((int)this_00 + 0x65);
      *(undefined4 *)((int)this_00 + 0x2d) = 0x21;
      puVar6 = (undefined4 *)((int)this_00 + 0x1c82);
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      if (*(char *)((int)this_00 + 0x9a) != '\0') {
        do {
          uVar10 = uStack_8 & 0xff;
          iVar3 = *(int *)((int)this_00 + uVar10 * 4 + 0x66);
          if (iVar3 != 0) {
            FUN_006e6080(this_00,2,iVar3,(undefined4 *)((int)this_00 + 0x1d));
            *(ushort *)((int)this_00 + uVar10 * 2 + 0x1c82) =
                 (-(ushort)(*(int *)((int)this_00 + 0x31) != 0) & 2) - 1;
          }
          puVar6 = (undefined4 *)(uVar10 * 0x1fb + 0xbc + (int)this_00);
          puVar11 = (undefined4 *)(uVar10 * 0x27 + 0x1a87 + (int)this_00);
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)puVar6;
          *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar6 + 2);
          bVar2 = (char)uStack_8 + 1;
          uStack_8 = CONCAT31(uStack_8._1_3_,bVar2);
        } while (bVar2 < *(byte *)((int)this_00 + 0x9a));
      }
      *(UINT *)((int)this_00 + 0x1cd0) = param_1;
      if (param_6 == 0) {
        uVar5 = 0xffffffff;
        iStack_10 = *(int *)((int)this_00 + 0x1d88);
        uVar4 = 7;
        iVar15 = -1;
        iVar14 = -1;
        iVar12 = 1;
        uVar13 = 0xffffffff;
        uVar10 = 0xfffffffe;
        iVar8 = 0x39;
        iVar3 = 0x158;
        puVar7 = (uint *)FUN_006b0140(param_1,DAT_00807618);
        puVar6 = FUN_00713480(puVar7,iVar3,iVar8,uVar10,uVar13,iVar12,iVar14,iVar15);
        (**(code **)(iStack_10 + 8))(puVar6,uVar4,uVar5);
      }
      else {
        uVar4 = FUN_006b0140(param_7,DAT_00807618);
        uVar5 = FUN_006b0140(param_1,DAT_00807618);
        wsprintfA((LPSTR)auStack_478,s__s___s__li__007ccca4,uVar5,uVar4,param_6);
        iVar3 = *(int *)((int)this_00 + 0x1d88);
        uVar5 = 0xffffffff;
        uVar4 = 7;
        puVar6 = FUN_00713480(auStack_478,0x158,0x39,0xfffffffe,0xffffffff,1,-1,-1);
        (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
      }
      bVar2 = 0;
      *(undefined4 *)((int)this_00 + 0x1d90) = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      if (*(char *)((int)this_00 + 0x9a) != '\0') {
        do {
          uVar10 = uStack_8 & 0xff;
          bVar2 = bVar2 + 1;
          uStack_8 = CONCAT31(uStack_8._1_3_,bVar2);
          *(undefined4 *)((int)this_00 + uVar10 * 0x1fb + 0xbc) = 0;
          *(undefined1 *)((int)this_00 + uVar10 * 0x1fb + 0xe1) = 1;
        } while (bVar2 < *(byte *)((int)this_00 + 0x9a));
      }
      if (param_2 == '\0') {
        *(undefined4 *)((int)this_00 + 0x4b2) = 0x24b8;
        *(undefined1 *)((int)this_00 + 0x4d7) = 1;
        iVar3 = 8;
        if (param_3 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)((int)this_00 + 0x4b7);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          puVar6 = (undefined4 *)((int)this_00 + 0x4b7);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *param_3;
            param_3 = param_3 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        uVar5 = 0xffffffff;
        uVar4 = 7;
        iVar16 = -1;
        iVar3 = *(int *)((int)this_00 + 0x56a);
        iVar15 = -1;
        iVar14 = 1;
        uVar13 = 0xffffffff;
        uVar10 = 0xfffffffe;
        iVar12 = 0x1e;
        iVar8 = 0x7d;
        puVar7 = (uint *)FUN_006b0140(*(UINT *)((int)this_00 + 0x4b2),DAT_00807618);
        puVar6 = FUN_00713480(puVar7,iVar8,iVar12,uVar10,uVar13,iVar14,iVar15,iVar16);
        (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
        *(undefined4 *)((int)this_00 + 0x572) = 0;
      }
      else {
        if (param_2 == '\x01') {
          *(undefined4 *)((int)this_00 + 0x4b2) = 0x24b9;
          *(undefined1 *)((int)this_00 + 0x4d7) = 1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)((int)this_00 + 0x4b7);
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            puVar6 = (undefined4 *)((int)this_00 + 0x4b7);
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          uVar5 = 0xffffffff;
          uVar4 = 7;
          iVar16 = -1;
          iVar3 = *(int *)((int)this_00 + 0x56a);
          iVar15 = -1;
          iVar14 = 1;
          uVar13 = 0xffffffff;
          uVar10 = 0xfffffffe;
          iVar12 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)FUN_006b0140(*(UINT *)((int)this_00 + 0x4b2),DAT_00807618);
          puVar6 = FUN_00713480(puVar7,iVar8,iVar12,uVar10,uVar13,iVar14,iVar15,iVar16);
          (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
          *(undefined4 *)((int)this_00 + 0x572) = 0;
          *(undefined4 *)((int)this_00 + 0x2b7) = 0x24ba;
          *(undefined1 *)((int)this_00 + 0x2dc) = 1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          *(undefined4 *)((int)this_00 + 0x6ad) = 0x24b9;
          *(undefined1 *)((int)this_00 + 0x6d2) = 1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)((int)this_00 + 0x6b2);
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            puVar6 = (undefined4 *)((int)this_00 + 0x6b2);
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          uVar5 = 0xffffffff;
          uVar4 = 7;
          iVar16 = -1;
          iVar3 = *(int *)((int)this_00 + 0x765);
          iVar15 = -1;
          iVar14 = 1;
          uVar13 = 0xffffffff;
          uVar10 = 0xfffffffe;
          iVar12 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)FUN_006b0140(*(UINT *)((int)this_00 + 0x6ad),DAT_00807618);
          puVar6 = FUN_00713480(puVar7,iVar8,iVar12,uVar10,uVar13,iVar14,iVar15,iVar16);
          (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
          *(undefined4 *)((int)this_00 + 0x76d) = 0;
          *(undefined4 *)((int)this_00 + 0x4b2) = 0x24ba;
          *(undefined1 *)((int)this_00 + 0x4d7) = 1;
          iVar3 = 8;
          if (param_4 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)((int)this_00 + 0x4b7);
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          else {
            puVar6 = (undefined4 *)((int)this_00 + 0x4b7);
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *param_4;
              param_4 = param_4 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          uVar5 = 0xffffffff;
          uVar4 = 7;
          iVar16 = -1;
          iVar3 = *(int *)((int)this_00 + 0x56a);
          iVar15 = -1;
          iVar14 = 1;
          uVar13 = 0xffffffff;
          uVar10 = 0xfffffffe;
          iVar12 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)FUN_006b0140(*(UINT *)((int)this_00 + 0x4b2),DAT_00807618);
          puVar6 = FUN_00713480(puVar7,iVar8,iVar12,uVar10,uVar13,iVar14,iVar15,iVar16);
          (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
          *(undefined4 *)((int)this_00 + 0x572) = 0;
          *(undefined4 *)((int)this_00 + 0x2b7) = 0x24bb;
          *(undefined1 *)((int)this_00 + 0x2dc) = 1;
        }
        iVar3 = 8;
        if (param_5 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)((int)this_00 + 700);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          puVar6 = (undefined4 *)((int)this_00 + 700);
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *param_5;
            param_5 = param_5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        uVar5 = 0xffffffff;
        uVar4 = 7;
        iVar16 = -1;
        iVar3 = *(int *)((int)this_00 + 0x36f);
        iVar15 = -1;
        iVar14 = 1;
        uVar13 = 0xffffffff;
        uVar10 = 0xfffffffe;
        iVar12 = 0x1e;
        iVar8 = 0x7d;
        puVar7 = (uint *)FUN_006b0140(*(UINT *)((int)this_00 + 0x2b7),DAT_00807618);
        puVar6 = FUN_00713480(puVar7,iVar8,iVar12,uVar10,uVar13,iVar14,iVar15,iVar16);
        (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
        *(undefined4 *)((int)this_00 + 0x377) = 0;
      }
LAB_005b8415:
      thunk_FUN_005b6480();
      bVar2 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      if (*(char *)((int)this_00 + 0x9a) != '\0') {
        do {
          uVar10 = uStack_8 & 0xff;
          *(undefined4 *)((int)this_00 + uVar10 * 0x1fb + 0x127) =
               *(undefined4 *)((int)this_00 + 0x61);
          *(uint *)((int)this_00 + uVar10 * 0x1fb + 0x123) = ((uStack_c & 0xff) + 1) * 100;
          if (*(int *)(uVar10 * 0x27 + 0x1a87 + (int)this_00) != 0) {
            uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + '\x01');
          }
          bVar2 = bVar2 + 1;
          uStack_8 = CONCAT31(uStack_8._1_3_,bVar2);
        } while (bVar2 < *(byte *)((int)this_00 + 0x9a));
      }
      if (*(char *)((int)this_00 + 0x65) == '\x02') {
        *(undefined1 *)((int)this_00 + 0x65) = 3;
        *(undefined4 *)((int)this_00 + 0x1c9c) = 0x1010101;
        *(undefined4 *)((int)this_00 + 0x1ca0) = 0x1010101;
        *(undefined4 *)((int)this_00 + 0x1ca4) = 0x1010101;
        *(undefined1 *)((int)this_00 + 0x1ca8) = 1;
        thunk_FUN_005b6730(this_00,5,'\0',-1);
        *(undefined1 *)((int)this_00 + 0x1caa) = 0;
      }
      else {
        *(undefined1 *)((int)this_00 + 0x65) = 4;
        *(undefined4 *)((int)this_00 + 0x1c9c) = 0x1010101;
        *(undefined4 *)((int)this_00 + 0x1ca0) = 0x1010101;
        *(undefined4 *)((int)this_00 + 0x1ca4) = 0x1010101;
        *(undefined1 *)((int)this_00 + 0x1ca8) = 1;
        thunk_FUN_005b6730(this_00,6,'\x01',-1);
        *(undefined1 *)((int)this_00 + 0x1caa) = 1;
        if (*(uint *)((int)this_00 + 0x1d8c) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)this_00 + 0x1dd0),*(uint *)((int)this_00 + 0x1d8c));
        }
        uStack_8 = uStack_8 & 0xffffff00;
        if (*(char *)((int)this_00 + 0x9a) != '\0') {
          do {
            iVar3 = (uStack_8 & 0xff) * 0x1fb;
            uVar10 = *(uint *)((int)this_00 + (uStack_8 & 0xff) * 0x1fb + 0x178);
            if (uVar10 != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)this_00 + iVar3 + 0x1bc),uVar10);
            }
            if ((*(char *)((int)this_00 + iVar3 + 0xe2) != '\0') &&
               (uVar10 = *(uint *)((int)this_00 + iVar3 + 0x209), uVar10 != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)this_00 + iVar3 + 0x24d),uVar10);
            }
            bVar2 = (char)uStack_8 + 1;
            uStack_8 = CONCAT31(uStack_8._1_3_,bVar2);
          } while (bVar2 < *(byte *)((int)this_00 + 0x9a));
          DAT_00858df8 = puStack_78;
          return 1;
        }
      }
      DAT_00858df8 = puStack_78;
      return 1;
    }
    DAT_00858df8 = puStack_78;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x14e,0,iVar3,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar3,0,0x7ccb74,0x14e);
  }
  return 0;
}

