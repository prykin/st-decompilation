
undefined4 __thiscall thunk_FUN_004c4550(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  undefined4 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 auStack_c0 [2];
  undefined4 auStack_b8 [2];
  undefined4 auStack_b0 [5];
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 auStack_84 [5];
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short sStack_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  undefined2 uStack_5e;
  int iStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined2 uStack_53;
  undefined4 uStack_41;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  STJellyManC *pSStack_24;
  undefined2 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  piVar9 = param_1;
  sVar6 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  iVar3 = (int)param_1 + *(int *)((int)this + 0x235) * 2;
  iStack_10 = 0;
  iVar10 = *(int *)(&DAT_00792a90 + iVar3 * 4);
  if (iVar10 == 1) {
    iVar10 = (int)param_1 * 0x80;
    if (*(int *)(iVar10 + 0x291 + (int)this) != 0) {
      if ((&DAT_00792ca0)[iVar3 * 3] == 0xb1) {
        puVar5 = auStack_b0;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)((int)this + iVar10 + 0x29d) = 1;
        *(undefined2 *)puVar5 = 0;
        auStack_b0[1] = *(undefined4 *)((int)this + 0x24);
        auStack_b0[3] = 1;
        auStack_b0[0] = 0x168;
        auStack_b0[2] = 1;
        if (&stack0x00000000 != &DAT_0000000c) {
          uStack_c = CONCAT22(uStack_c._2_2_,*(undefined2 *)((int)this + 0x41));
        }
        if (&stack0x00000000 != (undefined1 *)0x8) {
          uStack_8 = CONCAT22(uStack_8._2_2_,*(undefined2 *)((int)this + 0x43));
        }
        if (&stack0x00000000 != (undefined1 *)0x10) {
          iStack_10 = CONCAT22(iStack_10._2_2_,*(undefined2 *)((int)this + 0x45));
        }
        uStack_9c = (short)uStack_c;
        uStack_96 = *(undefined2 *)((int)this + iVar10 + 0x2a5);
        uStack_9a = (short)uStack_8;
        uStack_94 = *(undefined2 *)((int)this + iVar10 + 0x2a9);
        uStack_98 = (undefined2)iStack_10;
        uStack_92 = *(undefined2 *)((int)this + iVar10 + 0x2ad);
        STPlaySystemC::CreateGameObject(DAT_00802a38,0x168,0,0,auStack_b0,0);
        return 0;
      }
      *(undefined4 *)((int)this + iVar10 + 0x29d) = 1;
      puVar5 = auStack_84;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iStack_18 = *(int *)(&DAT_007932d0 + ((int)param_1 + *(int *)((int)this + 0x235) * 2) * 0x16);
      if (iStack_18 == 0) {
        iStack_18 = 1;
        if (&stack0x00000000 != (undefined1 *)0x6a) {
          sStack_6a = *(short *)((int)this + 0x41);
        }
        if (&stack0x00000000 != (undefined1 *)0x68) {
          sStack_68 = *(short *)((int)this + 0x43);
        }
        if (&stack0x00000000 != (undefined1 *)0x66) {
          sStack_66 = *(short *)((int)this + 0x45);
        }
      }
      else {
        if (&stack0x00000000 != &DAT_0000000c) {
          uStack_c = CONCAT22(uStack_c._2_2_,*(undefined2 *)((int)this + 0x41));
        }
        if (&stack0x00000000 != (undefined1 *)0x8) {
          uStack_8 = CONCAT22(uStack_8._2_2_,*(undefined2 *)((int)this + 0x43));
        }
        if (&stack0x00000000 != (undefined1 *)0x10) {
          iStack_10 = CONCAT22(iStack_10._2_2_,*(undefined2 *)((int)this + 0x45));
        }
      }
      sStack_64 = *(short *)((int)this + iVar10 + 0x2a5);
      uStack_58 = 0;
      sStack_62 = *(short *)((int)this + iVar10 + 0x2a9);
      sStack_60 = *(short *)((int)this + iVar10 + 0x2ad);
      uStack_5e = *(undefined2 *)((int)this + 0x259);
      uStack_57 = *(undefined4 *)((int)this + 0x18);
      uStack_53 = *(undefined2 *)((int)this + 0x32);
      uStack_41 = *(undefined4 *)((int)this + iVar10 + 0x28d);
      auStack_84[1] = *(undefined4 *)((int)this + 0x24);
      auStack_84[3] = 1;
      auStack_84[0] = 0x28;
      iStack_14 = 0;
      iVar3 = iStack_18;
      if (0 < iStack_18) {
        iVar11 = 0;
        do {
          if (((int)piVar9 < 1) || (iStack_14 == *(int *)((int)this + iVar10 + 0x2c1))) {
            iVar3 = ((int)piVar9 + *(int *)((int)this + 0x235) * 2) * 0x16;
            if (*(int *)(&DAT_007932d0 + iVar3) != 0) {
              puVar5 = (undefined4 *)
                       thunk_FUN_0041dc40(auStack_b8,*(undefined4 *)(&DAT_007932d4 + iVar3 + iVar11)
                                          ,*(undefined2 *)
                                            ((int)(&DAT_007932d4 + iVar3 + iVar11) + 4),
                                          -*(short *)((int)this + 0x259));
              sStack_2c = (short)*puVar5;
              sStack_2a = (short)((uint)*puVar5 >> 0x10);
              sStack_28 = *(short *)(puVar5 + 1);
              sStack_6a = sStack_2c + (short)uStack_c;
              sStack_68 = sStack_2a + (short)uStack_8;
              sStack_66 = sStack_28 + (short)iStack_10;
              iVar3 = (int)param_1 + *(int *)((int)this + 0x235) * 2;
              uStack_20 = *(undefined2 *)(&DAT_007932d8 + iVar11 + iVar3 * 0x16);
              pSStack_24 = (STJellyManC *)
                           (*(uint *)(&DAT_007932d4 + iVar3 * 0x16 + iVar11) & 0xffff0000);
              puVar5 = (undefined4 *)
                       thunk_FUN_0041dc40(auStack_c0,pSStack_24,0,-*(short *)((int)this + 0x259));
              sStack_2c = (short)*puVar5;
              sStack_2a = (short)((uint)*puVar5 >> 0x10);
              sStack_64 = sStack_2c + *(short *)((int)this + iVar10 + 0x2a5);
              sStack_62 = *(short *)((int)this + iVar10 + 0x2a9) + sStack_2a;
              sStack_60 = *(short *)((int)this + iVar10 + 0x2ad) + *(short *)(puVar5 + 1);
            }
            iVar2 = (int)param_1 + *(int *)((int)this + 0x235) * 2;
            if ((*(int *)(&DAT_00793e28 + iVar2 * 4) == 0) ||
               (iVar3 = iStack_18, piVar9 = param_1, *(int *)((int)this + iVar10 + 0x2c5) != 0)) {
              iVar3 = (&DAT_00792ca0)[iStack_14 + iVar2 * 3];
              if (iVar3 == 0xab) {
                thunk_FUN_00586240((int)sStack_6a,(int)sStack_68,(int)sStack_66,
                                   *(undefined4 *)((int)this + iVar10 + 0x28d),
                                   *(undefined4 *)((int)this + 0x24),
                                   *(undefined4 *)((int)this + 0x18),
                                   *(undefined2 *)((int)this + 0x32));
                if (*(int *)((int)this + 0x5ac) == 0x47) {
                  (**(code **)(*(int *)this + 0x90))(4,0x315);
                }
              }
              else {
                sStack_70 = sStack_6a;
                sStack_6e = sStack_68;
                sStack_6c = sStack_66;
                iStack_5c = iVar3;
                if (iVar3 == 0xb0) {
                  auStack_84[0] = 0x15e;
                  if (*(int *)((int)this + 0x5ac) == 0x68) {
                    iStack_5c = 1;
                    *(int *)((int)this + 0x4d4) = *(int *)((int)this + 0x4d4) + -10;
                  }
                  else if (*(int *)((int)this + 0x5ac) == 0x71) {
                    iStack_5c = 0;
                  }
                  iVar3 = 0x15e;
                }
                else {
                  iVar3 = 0x28;
                }
                STPlaySystemC::CreateGameObject(DAT_00802a38,iVar3,0,0,auStack_84,0);
              }
              *(int *)((int)this + iVar10 + 0x2c5) = *(int *)((int)this + iVar10 + 0x2c5) + -1;
              *(undefined4 *)((int)this + iVar10 + 0x2c9) = *(undefined4 *)(DAT_00802a38 + 0xe4);
              iVar3 = iStack_18;
              piVar9 = param_1;
            }
          }
          iStack_14 = iStack_14 + 1;
          iVar11 = iVar11 + 6;
        } while (iStack_14 < iVar3);
      }
      if ((0 < (int)piVar9) &&
         (iVar11 = *(int *)((int)this + iVar10 + 0x2c1) + 1,
         *(int *)((int)this + iVar10 + 0x2c1) = iVar11, iVar3 <= iVar11)) {
        *(undefined4 *)((int)this + iVar10 + 0x2c1) = 0;
      }
    }
  }
  else if (iVar10 == 2) {
    *(undefined4 *)((int)this + (int)param_1 * 0x80 + 0x29d) = 1;
    switch((&DAT_00792ca0)[((int)param_1 + *(int *)((int)this + 0x235) * 2) * 3]) {
    case 0xa3:
      piVar9 = (int *)((int)this + (int)param_1 * 0x80 + 0x2a9);
      piVar1 = (int *)((int)this + (int)param_1 * 0x80 + 0x2a5);
      iVar3 = (int)param_1 * 0x80;
      param_1 = piVar1;
      thunk_FUN_004db160(DAT_007fa174,*(int *)((int)this + 0x24),0xa8,piVar1,piVar9,
                         (int *)((int)this + iVar3 + 0x2ad),&iStack_1c);
      thunk_FUN_00584a30(*(undefined4 *)((int)this + 0x4e0),*(undefined4 *)((int)this + 0x4e4),
                         *(undefined4 *)((int)this + 0x4e8),*param_1 * 0xc9 + 100,
                         *piVar9 * 0xc9 + 100,*(undefined4 *)((int)this + 0x24),iStack_1c,
                         *(undefined4 *)((int)this + 0x18),*(undefined2 *)((int)this + 0x32));
      uVar4 = thunk_FUN_004406c0(DAT_0080874d);
      uVar4 = uVar4 & 0xff;
      if (uVar4 == 1) {
        (**(code **)(*(int *)this + 0x90))(6,0x9e);
        return 0;
      }
      if (uVar4 == 2) {
        (**(code **)(*(int *)this + 0x90))(6,0x9f);
        return 0;
      }
      if (uVar4 == 3) {
        (**(code **)(*(int *)this + 0x90))(6,0xa0);
        return 0;
      }
      break;
    case 0xa8:
      piVar9 = (int *)((int)this + (int)param_1 * 0x80 + 0x2a9);
      piVar1 = (int *)((int)this + (int)param_1 * 0x80 + 0x2a5);
      iVar3 = (int)param_1 * 0x80;
      param_1 = piVar1;
      thunk_FUN_004db160(DAT_007fa174,*(int *)((int)this + 0x24),0xa8,piVar1,piVar9,
                         (int *)((int)this + iVar3 + 0x2ad),&iStack_1c);
      thunk_FUN_006405f0(0xa8,*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x18),
                         *(undefined2 *)((int)this + 0x32),(short)*(undefined4 *)((int)this + 0x4e0)
                         ,(short)*(undefined4 *)((int)this + 0x4e4),
                         (short)*(undefined4 *)((int)this + 0x4e8),(short)*param_1 * 0xc9 + 100,
                         (short)*piVar9 * 0xc9 + 100,(short)iStack_1c);
      uVar4 = thunk_FUN_004406c0(DAT_0080874d);
      uVar4 = uVar4 & 0xff;
      if (uVar4 == 1) {
        (**(code **)(*(int *)this + 0x90))(6,0x98);
        return 0;
      }
      if (uVar4 == 2) {
        (**(code **)(*(int *)this + 0x90))(6,0x99);
        return 0;
      }
      if (uVar4 == 3) {
        (**(code **)(*(int *)this + 0x90))(6,0x9a);
        return 0;
      }
      break;
    case 0xb2:
      if ((*(int *)((int)this + 0x5ac) == 0x70) && (*(int *)((int)this + 0x4f0) == 0)) {
        this_00 = (void *)thunk_FUN_0058bab0(*(undefined4 *)((int)this + 0x4e0),
                                             *(undefined4 *)((int)this + 0x4e4),
                                             *(undefined4 *)((int)this + 0x4e8),
                                             *(undefined4 *)((int)this + 0x24),
                                             *(undefined4 *)((int)this + 0x18),
                                             *(undefined2 *)((int)this + 0x32));
        *(undefined4 *)((int)this + 0x4f0) = *(undefined4 *)((int)this_00 + 0x18);
        iVar3 = *(int *)((int)this + (int)piVar9 * 0x80 + 0x2a5);
        if ((-1 < iVar3) && (iVar10 = *(int *)((int)this + (int)piVar9 * 0x80 + 0x2a9), -1 < iVar10)
           ) {
          thunk_FUN_0058c560(this_00,iVar3,iVar10);
          return 0;
        }
      }
      break;
    case 0xbe:
      piVar9 = (int *)((int)this + (int)param_1 * 0x80 + 0x2a9);
      piVar1 = (int *)((int)this + (int)param_1 * 0x80 + 0x2a5);
      iVar3 = (int)param_1 * 0x80;
      param_1 = piVar1;
      thunk_FUN_004db160(DAT_007fa174,*(int *)((int)this + 0x24),0xa8,piVar1,piVar9,
                         (int *)((int)this + iVar3 + 0x2ad),&iStack_1c);
      thunk_FUN_006405f0(0xbe,*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x18),
                         *(undefined2 *)((int)this + 0x32),(short)*(undefined4 *)((int)this + 0x4e0)
                         ,(short)*(undefined4 *)((int)this + 0x4e4),
                         (short)*(undefined4 *)((int)this + 0x4e8),(short)*param_1 * 0xc9 + 100,
                         (short)*piVar9 * 0xc9 + 100,(short)iStack_1c);
      uVar4 = thunk_FUN_004406c0(DAT_0080874d);
      uVar4 = uVar4 & 0xff;
      if (uVar4 == 1) {
        (**(code **)(*(int *)this + 0x90))(6,0x9b);
        return 0;
      }
      if (uVar4 == 2) {
        (**(code **)(*(int *)this + 0x90))(6,0x9c);
        return 0;
      }
      if (uVar4 == 3) {
        (**(code **)(*(int *)this + 0x90))(6,0x9d);
        return 0;
      }
    }
  }
  else if (iVar10 == 3) {
    if ((&DAT_00792ca0)[iVar3 * 3] == 0xbc) {
      if (&stack0x00000000 != &DAT_0000000c) {
        uStack_c = (uint)*(ushort *)((int)this + 0x41);
      }
      if (&stack0x00000000 != (undefined1 *)0x8) {
        uStack_8 = (uint)*(ushort *)((int)this + 0x43);
      }
      if (&stack0x00000000 != (undefined1 *)0x10) {
        sVar6 = *(short *)((int)this + 0x45);
      }
      if (*(int *)((int)this + 0x4d0) != 0) {
        iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x4d0),(int *)&pSStack_24);
        if (iVar3 != 0) {
          *(undefined4 *)((int)this + 0x4d0) = 0;
          *(undefined4 *)((int)piVar9 * 0x80 + 0x29d + (int)this) = 1;
          return 0;
        }
        iVar3 = ((int)piVar9 + *(int *)((int)this + 0x235) * 2) * 0x16;
        iStack_10 = (int)*(short *)(&DAT_007932d8 + iVar3) + (int)sVar6;
        sVar6 = (short)(iStack_10 >> 0x1f);
        if (iStack_10 < 0) {
          iStack_14 = (short)(((short)(iStack_10 / 200) + sVar6) -
                             (short)((longlong)iStack_10 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iStack_14 = (int)(short)(((short)(iStack_10 / 200) + sVar6) -
                                  (short)((longlong)iStack_10 * 0x51eb851f >> 0x3f));
        }
        param_1 = (int *)((int)(short)uStack_8 + (int)*(short *)(&DAT_007932d6 + iVar3));
        sVar6 = (short)((int)param_1 >> 0x1f);
        if ((int)param_1 < 0) {
          sVar6 = (((short)((int)param_1 / 0xc9) + sVar6) -
                  (short)((longlong)(int)param_1 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar6 = ((short)((int)param_1 / 0xc9) + sVar6) -
                  (short)((longlong)(int)param_1 * 0x28c1979 >> 0x3f);
        }
        iStack_18 = (int)*(short *)(&DAT_007932d4 + iVar3) + (int)(short)uStack_c;
        sVar7 = (short)(iStack_18 >> 0x1f);
        if (iStack_18 < 0) {
          sVar7 = (((short)(iStack_18 / 0xc9) + sVar7) -
                  (short)((longlong)iStack_18 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar7 = ((short)(iStack_18 / 0xc9) + sVar7) -
                  (short)((longlong)iStack_18 * 0x28c1979 >> 0x3f);
        }
        if ((((sVar7 < 0) || (DAT_007fb240 <= sVar7)) || (sVar6 < 0)) ||
           (((DAT_007fb242 <= sVar6 || (sVar8 = (short)iStack_14, sVar8 < 0)) ||
            ((DAT_007fb244 <= sVar8 ||
             (*(int *)(DAT_007fb248 + 4 +
                      ((int)sVar6 * (int)DAT_007fb240 + (int)sVar8 * (int)DAT_007fb246 + (int)sVar7)
                      * 8) == 0)))))) {
          STJellyManC::Error(pSStack_24,iStack_18,param_1,iStack_10);
          *(undefined4 *)((int)this + (int)piVar9 * 0x80 + 0x29d) = 1;
          *(int *)((int)this + (int)piVar9 * 0x80 + 0x2c5) =
               *(int *)((int)this + (int)piVar9 * 0x80 + 0x2c5) + -1;
          return 0;
        }
      }
    }
    else if ((&DAT_00792ca0)[iVar3 * 3] == 0xb3) {
      param_1 = (int *)0x0;
      if ((*(int *)((int)this + 0x4ec) != 0) &&
         (iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x4ec),(int *)&param_1), iVar3 == 0
         )) {
        thunk_FUN_00617b10(param_1,*(undefined4 *)((int)this + (int)piVar9 * 0x80 + 0x2a5),
                           *(undefined4 *)((int)this + (int)piVar9 * 0x80 + 0x2a9),
                           *(undefined4 *)((int)this + (int)piVar9 * 0x80 + 0x2ad),
                           *(undefined4 *)((int)this + 0x4f4),*(undefined4 *)((int)this + 0x4f8),
                           *(undefined4 *)((int)this + 0x4fc));
        *(undefined4 *)((int)this + (int)piVar9 * 0x80 + 0x29d) = 1;
        *(int *)((int)this + (int)piVar9 * 0x80 + 0x2c5) =
             *(int *)((int)this + (int)piVar9 * 0x80 + 0x2c5) + -1;
        return 0;
      }
    }
  }
  return 0;
}

