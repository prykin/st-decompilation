
void __fastcall thunk_FUN_00591bf0(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  void *this;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 unaff_ESI;
  uint *puVar11;
  void *unaff_EDI;
  undefined4 auStack_284 [112];
  undefined4 uStack_c4;
  undefined4 auStack_c0 [16];
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_38;
  uint uStack_34;
  undefined4 uStack_28;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  void *pvStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  pvStack_c = param_1;
  DVar5 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x61) = DVar5;
  uStack_c4 = DAT_00858df8;
  DAT_00858df8 = &uStack_c4;
  iVar6 = __setjmp3(auStack_c0,0,unaff_EDI,unaff_ESI);
  this = pvStack_c;
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_c4;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x117,0,iVar6,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar6,0,0x7cbcd4,0x117);
    return;
  }
  thunk_FUN_00592340();
  thunk_FUN_005926e0();
  cVar1 = *(char *)((int)this + 0x65);
  if (cVar1 == '\x01') {
    iVar6 = 0;
    if (*(char *)((int)this + 0x9a) != '\0') {
      puVar11 = (uint *)((int)this + 0x221);
      do {
        if (((*(int *)((int)puVar11 + -0x165) != 0) && (*(char *)((int)puVar11 + -0x13f) != '\0'))
           && (puVar11[9] <= *(uint *)((int)this + 0x61) - puVar11[10])) {
          puVar11[10] = *(uint *)((int)this + 0x61);
          uVar7 = puVar11[-5];
          puVar11[-5] = uVar7 + 1;
          if ((int)puVar11[-4] <= (int)(uVar7 + 1)) {
            puVar11[-5] = 0;
          }
          if (puVar11[-6] != 0xffffffff) {
            FUN_006b3730((uint *)puVar11[0xb],puVar11[-6],puVar11[-5],*puVar11,puVar11[1]);
          }
        }
        iVar6 = iVar6 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar6 < (int)(uint)*(byte *)((int)this + 0x9a));
    }
  }
  else if (cVar1 == '\x03') {
    iVar6 = 0;
    uVar7 = (uint)*(byte *)((int)this + 0x9a);
    if (uVar7 != 0) {
      do {
        if (*(int *)((int)this + iVar6 * 0x1fb + 0xbc) != 0) {
          if ((uint)(*(int *)((int)this + 0x61) - *(int *)((int)this + iVar6 * 0x1fb + 0x127)) <
              *(uint *)((int)this + iVar6 * 0x1fb + 0x123)) {
            iVar6 = 0;
            iStack_8 = 0;
            if (uVar7 != 0) {
              puVar8 = (undefined4 *)((int)this + 0x249);
              do {
                if (*(char *)((int)puVar8 + -0x167) != '\0') {
                  *puVar8 = *(undefined4 *)((int)this + 0x61);
                }
                iVar6 = iVar6 + 1;
                puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
              } while (iVar6 < (int)(uint)*(byte *)((int)this + 0x9a));
            }
          }
          else {
            iVar10 = *(int *)((int)this + iVar6 * 0x1fb + 0xeb);
            if (iVar10 < *(int *)((int)this + iVar6 * 0x1fb + 0xef) + -1) {
              if ((iVar10 == 0) &&
                 (uVar7 = *(uint *)((int)this + iVar6 * 0x1fb + 0xe7), uVar7 != 0xffffffff)) {
                FUN_006b34d0(*(uint **)((int)this + iVar6 * 0x1fb + 299),uVar7,0xfffffffe,
                             *(uint *)((int)this + iVar6 * 0x1fb + 0xff),
                             *(uint *)((int)this + iVar6 * 0x1fb + 0x103));
              }
              *(int *)((int)this + iVar6 * 0x1fb + 0xeb) =
                   *(int *)((int)this + iVar6 * 0x1fb + 0xeb) + 1;
              uVar7 = *(uint *)((int)this + iVar6 * 0x1fb + 0xe7);
              if (uVar7 != 0xffffffff) {
                FUN_006b3730(*(uint **)((int)this + iVar6 * 0x1fb + 299),uVar7,
                             *(uint *)((int)this + iVar6 * 0x1fb + 0xeb),
                             *(uint *)((int)this + iVar6 * 0x1fb + 0xff),
                             *(uint *)((int)this + iVar6 * 0x1fb + 0x103));
              }
              iStack_8 = 0;
            }
            else {
              iVar10 = *(int *)((int)this + iVar6 * 0x1fb + 0x17c);
              if (iVar10 < *(int *)((int)this + iVar6 * 0x1fb + 0x180) + -3) {
                if (iVar10 == 0) {
                  uVar7 = *(uint *)((int)this + iVar6 * 0x1fb + 0x178);
                  if (uVar7 != 0xffffffff) {
                    FUN_006b34d0(*(uint **)((int)this + iVar6 * 0x1fb + 0x1bc),uVar7,0xfffffffe,
                                 *(uint *)((int)this + iVar6 * 0x1fb + 400),
                                 *(uint *)((int)this + iVar6 * 0x1fb + 0x194));
                  }
                  if ((*(char *)((int)this + iVar6 * 0x1fb + 0xe2) != '\0') &&
                     (uVar7 = *(uint *)((int)this + iVar6 * 0x1fb + 0x209), uVar7 != 0xffffffff)) {
                    FUN_006b34d0(*(uint **)((int)this + iVar6 * 0x1fb + 0x24d),uVar7,0xfffffffe,
                                 *(uint *)((int)this + iVar6 * 0x1fb + 0x221),
                                 *(uint *)((int)this + iVar6 * 0x1fb + 0x225));
                  }
                }
                *(int *)((int)this + iVar6 * 0x1fb + 0x17c) =
                     *(int *)((int)this + iVar6 * 0x1fb + 0x17c) + 1;
                uVar7 = *(uint *)((int)this + iVar6 * 0x1fb + 0x178);
                if (uVar7 != 0xffffffff) {
                  FUN_006b3730(*(uint **)((int)this + iVar6 * 0x1fb + 0x1bc),uVar7,
                               *(uint *)((int)this + iVar6 * 0x1fb + 0x17c),
                               *(uint *)((int)this + iVar6 * 0x1fb + 400),
                               *(uint *)((int)this + iVar6 * 0x1fb + 0x194));
                }
                thunk_FUN_005b6730(this,0x1e,'\x01',-1);
                iStack_8 = 0;
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        uVar7 = (uint)*(byte *)((int)this + 0x9a);
      } while (iVar6 < (int)uVar7);
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      iVar10 = 1;
      puVar8 = auStack_80;
      for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar8 = auStack_284;
      for (iVar6 = 0x70; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar8 = auStack_284 + 1;
      iVar6 = 3;
      piVar9 = (int *)((int)this + 0x491);
      do {
        iVar2 = piVar9[0x19];
        puVar8[-1] = iVar10;
        iVar3 = *piVar9;
        *puVar8 = 0;
        puVar8[2] = iVar2 + iVar3;
        puVar8[4] = piVar9[2];
        iVar10 = iVar10 + 1;
        puVar8[3] = piVar9[0x1a] + piVar9[1];
        puVar8[5] = piVar9[3];
        puVar8 = puVar8 + 0x1c;
        iVar6 = iVar6 + -1;
        piVar9 = (int *)((int)piVar9 + 0x1fb);
      } while (iVar6 != 0);
      uStack_70 = *(undefined4 *)((int)this + 8);
      uStack_34 = (uint)DAT_0080874e;
      puStack_38 = auStack_284;
      uStack_6c = 2;
      uStack_4c = 2;
      auStack_80[0] = 1;
      uStack_68 = 0x68ff;
      uStack_48 = 0x697f;
      uStack_50 = uStack_70;
      (**(code **)(**(int **)((int)this + 0xc) + 8))(5,(int)this + 0x66,0,auStack_80,0);
      iVar6 = *(int *)((int)this + 0x1a5b);
      if (*(int *)(iVar6 + 0x2e6) != 0) {
        puVar8 = &uStack_28;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = 0;
        uStack_1c = 1;
        uStack_1e = 1;
        uStack_28._2_2_ = 1;
        thunk_FUN_005b9010(*(void **)(iVar6 + 0x2e6),(int)&uStack_28);
      }
      *(undefined1 *)((int)this + 0x65) = 1;
      DAT_00858df8 = (undefined4 *)uStack_c4;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    iVar6 = 0;
    if (*(char *)((int)this + 0x9a) != '\0') {
      puVar11 = (uint *)((int)this + 0x178);
      do {
        if ((uint)(*(int *)((int)this + 0x61) - *(int *)((int)puVar11 + -0x51)) <
            *(uint *)((int)puVar11 + -0x55)) {
LAB_00591d08:
          iStack_8 = 0;
        }
        else {
          if (*(char *)((int)puVar11 + -0xbd) != '\0') {
            if (*puVar11 != 0xffffffff) {
              FUN_006b3af0((int *)puVar11[0x11],*puVar11);
            }
            if ((*(char *)((int)puVar11 + -0x96) != '\0') &&
               (*(uint *)((int)puVar11 + 0x91) != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)puVar11 + 0xd5),*(uint *)((int)puVar11 + 0x91));
            }
            *(undefined1 *)((int)puVar11 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar11 + -0x8d)) {
            uVar7 = *(int *)((int)puVar11 + -0x8d) - 1;
            *(uint *)((int)puVar11 + -0x8d) = uVar7;
            if (*(uint *)((int)puVar11 + -0x91) != 0xffffffff) {
              FUN_006b3730(*(uint **)((int)puVar11 + -0x4d),*(uint *)((int)puVar11 + -0x91),uVar7,
                           *(uint *)((int)puVar11 + -0x79),*(uint *)((int)puVar11 + -0x75));
            }
            goto LAB_00591d08;
          }
        }
        iVar6 = iVar6 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar6 < (int)(uint)*(byte *)((int)this + 0x9a));
    }
    iVar6 = 0;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      *(undefined1 *)((int)this + 0x65) = 2;
      if (*(char *)((int)this + 0x9a) != '\0') {
        puVar11 = (uint *)((int)this + 0xe7);
        do {
          if (*puVar11 != 0xffffffff) {
            FUN_006b3af0((int *)puVar11[0x11],*puVar11);
          }
          iVar6 = iVar6 + 1;
          puVar11 = (uint *)((int)puVar11 + 0x1fb);
        } while (iVar6 < (int)(uint)*(byte *)((int)this + 0x9a));
      }
      if (*(int *)((int)this + (uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xd1) != 0) {
        FUN_006e3b50((undefined4 *)((int)this + (uint)*(byte *)((int)this + 0x1a5a) * 0x1fb + 0xc1))
        ;
        DAT_00858df8 = (undefined4 *)uStack_c4;
        return;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_c4;
  return;
}

