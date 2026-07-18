
undefined4 FUN_005fb640(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  void *this;
  int iVar10;
  byte bVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar12;
  undefined4 unaff_ESI;
  undefined4 *puVar13;
  int *piVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 ***local_60;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  iVar7 = thunk_FUN_0041e530(param_1);
  if (iVar7 != 0xffff) {
    local_60 = DAT_00858df8;
    DAT_00858df8 = &local_60;
    iVar7 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
    if (iVar7 == 0) {
      uVar8 = *(uint *)(param_1 + 0x10);
      if (0x110 < uVar8) {
        switch(uVar8) {
        case 0x112:
          if (*(int *)((int)local_8 + 0x2d6) < 0) {
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          }
          thunk_FUN_004ad5e0((int)local_8 + 0x1d5);
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        case 0x113:
          if (*(int *)((int)local_8 + 0x2d6) < 0) {
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          }
          (*(code *)**(undefined4 **)((int)local_8 + 0x1d5))();
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        default:
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        case 0x128:
          iVar7 = *(int *)(param_1 + 0x14);
          *(undefined1 *)((int)local_8 + 0x315) = *(undefined1 *)(iVar7 + 0x18);
          if (((*(char *)((int)local_8 + 0x24e) != '\0') && (*(short *)((int)local_8 + 0x2ab) != -1)
              ) && ((this = *(void **)((int)local_8 + 0x2ad), this != (void *)0x0 ||
                    (this = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)param_1 >> 8),
                                                                *(undefined1 *)
                                                                 ((int)local_8 + 0x2a3)),
                                                       CONCAT22((short)(uVar8 - 0x112 >> 0x10),
                                                                *(short *)((int)local_8 + 0x2ab)),1)
                    , this != (void *)0x0)))) {
            thunk_FUN_00492510(this,local_8[6]);
            (**(code **)(*local_8 + 0xac))(*(undefined4 *)((int)this + 0x18));
          }
          switch(*(undefined4 *)(iVar7 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005fbd82_caseD_2;
          case 3:
            uVar19 = 0;
            *(undefined1 *)((int)local_8 + 0x30e) = *(undefined1 *)(iVar7 + 8);
            *(undefined2 *)((int)local_8 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
            iVar7 = *(int *)((int)local_8 + 0x2c6);
            *(undefined1 *)((int)local_8 + 0x30d) = 1;
            *(undefined4 *)((int)local_8 + 0x23a) = 5;
            iVar10 = *(int *)((int)local_8 + 0x2c2);
            local_8[0xb8] = *(int *)((int)DAT_00802a38 + 0xe4) + 0x15;
            iVar18 = *(int *)((int)local_8 + 0x2be);
            iVar17 = 1;
            uVar8 = thunk_FUN_004ad650((int)local_8 + 0x1d5);
            thunk_FUN_006377b0(uVar8,iVar17,iVar18,iVar10,iVar7,uVar19);
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          case 5:
            *(undefined4 *)((int)local_8 + 0x2d2) = 0;
            *(undefined4 *)((int)local_8 + 0x2b5) = 3;
            *(undefined4 *)((int)local_8 + 0x23a) = 5;
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          default:
            *(undefined1 *)((int)local_8 + 0x30e) = *(undefined1 *)(iVar7 + 8);
            *(undefined2 *)((int)local_8 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
            *(undefined1 *)((int)local_8 + 0x30d) = 1;
            if (-1 < (int)*(uint *)((int)local_8 + 0x2d6)) {
              FUN_006eab60(*(void **)((int)local_8 + 0x211),*(uint *)((int)local_8 + 0x2d6));
            }
            thunk_FUN_005fc3e0(local_8);
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          }
        case 0x129:
          goto switchD_005fbd08_caseD_129;
        }
      }
      if (uVar8 == 0x110) {
        puVar4 = *(undefined4 **)(param_1 + 0x14);
        if (*(int *)((int)local_8 + 0x23a) == 5) {
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        if (*(int *)((int)local_8 + 0x23a) == 6) {
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        iVar7 = (**(code **)(*local_8 + 0x124))(*puVar4);
        if (iVar7 == 0) {
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        thunk_FUN_005ec9f0(1);
        *(undefined1 *)((int)local_8 + 0x30e) = *(undefined1 *)(puVar4 + 2);
        *(undefined2 *)((int)local_8 + 0x30f) = *(undefined2 *)(puVar4 + 3);
        *(undefined1 *)((int)local_8 + 0x30d) = 1;
        *(undefined4 *)((int)local_8 + 0x23a) = 5;
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      if (3 < uVar8) {
        if (uVar8 == 0x108) {
          thunk_FUN_005ef5f0((int)local_8);
          thunk_FUN_005eeff0(local_8,0);
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        if (uVar8 != 0x10f) {
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        local_14 = (byte *)thunk_FUN_005fcad0(local_8,&local_10);
        thunk_FUN_0054d430(DAT_00802a38,local_8[6],local_14,local_10);
        FUN_006ab060(&local_14);
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      if (uVar8 == 3) {
        iVar7 = thunk_FUN_00495ff0(*(short *)((int)local_8 + 0x242),(short)local_8[0x91],
                                   *(short *)((int)local_8 + 0x246),0,(int)local_8);
        if (iVar7 == 0) {
          *(char *)((int)local_8 + 0x252) = *(char *)((int)local_8 + 0x252) + -1;
        }
        thunk_FUN_004ad310((int)local_8 + 0x1d5);
        if ((char)local_8[0xb9] == '\0') {
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        if (DAT_007fa174 == 0) {
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        uVar12 = extraout_var;
        if ((char)local_8[0x94] != '\x03') {
          thunk_FUN_005f0d90((int)local_8);
          uVar12 = extraout_var_00;
        }
        thunk_FUN_0044a730(CONCAT22(uVar12,*(undefined2 *)((int)local_8 + 0x32)),(uint)local_8);
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      if (uVar8 == 0) {
        if (*(int *)((int)local_8 + 0x23a) == 6) {
          thunk_FUN_005fc3e0(local_8);
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        uVar9 = thunk_FUN_005ee6e0(local_8);
        *(char *)((int)local_8 + 0x2de) = (char)uVar9;
        if ((char)uVar9 == '\0') {
          if (*(int *)((int)local_8 + 0x23a) != 6) {
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          }
          thunk_FUN_005fc3e0(local_8);
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        *(undefined4 *)((int)local_8 + 0x2be) = *(undefined4 *)((int)local_8 + 0x277);
        *(undefined4 *)((int)local_8 + 0x2c2) = *(undefined4 *)((int)local_8 + 0x27b);
        *(undefined4 *)((int)local_8 + 0x2c6) = *(undefined4 *)((int)local_8 + 0x27f);
        thunk_FUN_005eff00((int)local_8);
        if ((-1 < *(int *)((int)local_8 + 0x2d2)) &&
           (iVar7 = thunk_FUN_005f0ba0((int)local_8), iVar7 != 0)) {
          *(undefined4 *)((int)local_8 + 0x2d2) = 0xffffffff;
        }
        thunk_FUN_005eeff0(local_8,0);
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      if (uVar8 != 2) {
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x14);
      if (puVar4[3] != 2) {
        puVar13 = puVar4;
        puVar15 = (undefined4 *)((int)local_8 + 0x326);
        for (iVar7 = 0x55; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
        if (puVar4[3] == 0) {
          *(int *)((int)local_8 + 0x46f) = (int)*(short *)((int)local_8 + 0x34e);
          *(int *)((int)local_8 + 0x473) = (int)(short)local_8[0xd4];
          *(int *)((int)local_8 + 0x477) = (int)*(short *)((int)local_8 + 0x352);
          *(short *)((int)local_8 + 0x34e) = *(short *)((int)local_8 + 0x34e) * 0xc9 + 100;
          *(short *)(local_8 + 0xd4) = (short)local_8[0xd4] * 0xc9 + 100;
          *(short *)((int)local_8 + 0x352) = *(short *)((int)local_8 + 0x352) * 200 + 100;
        }
        iVar7 = thunk_FUN_005fc4a0(local_8);
        if (iVar7 == 0) {
          thunk_FUN_005fc3e0(local_8);
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        thunk_FUN_005ec9f0(0);
        if ((((local_8[0xd6] != 0) && (*(short *)((int)local_8 + 0x342) == 1)) &&
            (iVar7 = FUN_006e62d0(DAT_00802a38,local_8[0xd6],&local_18), iVar7 != -4)) &&
           (*(void **)((int)local_8 + 0x211) != (void *)0x0)) {
          FUN_006ea460(*(void **)((int)local_8 + 0x211),*(uint *)((int)local_8 + 0x1ed),
                       *(int *)(local_18 + 0x1ed));
        }
        if (DAT_007fa174 != 0) {
          iVar7 = thunk_FUN_0044a5b0(0xffff,local_8);
          if (iVar7 != 0) {
            thunk_FUN_005fc3e0(local_8);
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          }
          *(undefined1 *)(local_8 + 0xb9) = 1;
          thunk_FUN_005fceb0((int)local_8);
        }
        uVar8 = *(uint *)((int)local_8 + 0x342) >> 0x10;
        if (uVar8 != 3) {
          if (uVar8 != 5) {
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          }
          *(int *)((int)local_8 + 0x2d2) = *(short *)(DAT_00806724 + 0x23) + -1;
          *(undefined4 *)((int)local_8 + 0x2b5) = 1;
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        thunk_FUN_006377b0(*(uint *)((int)local_8 + 0x1ed),1,(int)*(short *)((int)local_8 + 0x34e),
                           (int)(short)local_8[0xd4],(int)*(short *)((int)local_8 + 0x352),0x13);
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      iVar7 = thunk_FUN_005fcc00(local_8,puVar4);
      if (iVar7 < 0) {
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      if (*(char *)((int)local_8 + 0x252) != '\0') {
        sVar1 = *(short *)((int)local_8 + 0x242);
        sVar3 = (short)local_8[0x91];
        local_1c = (int)sVar3;
        sVar2 = *(short *)((int)local_8 + 0x246);
        local_c = 1;
        if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
            ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                          (int)sVar1) * 8);
        }
        bVar6 = true;
        if ((iVar7 == 0) &&
           (iVar7 = thunk_FUN_00495ec0(sVar1,sVar3,sVar2,0,(int)local_8), iVar7 == 0)) {
          *(char *)((int)local_8 + 0x252) = *(char *)((int)local_8 + 0x252) + '\x01';
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) {
          thunk_FUN_005fc3e0(local_8);
          DAT_00858df8 = (undefined4 ****)local_60;
          return 0;
        }
        bVar11 = *(char *)((int)local_8 + 0x252) - 1;
        *(byte *)((int)local_8 + 0x252) = bVar11;
        if (1 < bVar11) {
          sVar1 = (short)local_8[0x92];
          sVar3 = *(short *)((int)local_8 + 0x24a);
          local_c = (uint)sVar3;
          sVar2 = (short)local_8[0x93];
          local_1c = 1;
          if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
             (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                            (int)sVar1) * 8);
          }
          bVar6 = true;
          if ((iVar7 == 0) &&
             (iVar7 = thunk_FUN_00495ec0(sVar1,sVar3,sVar2,0,(int)local_8), iVar7 == 0)) {
            *(char *)((int)local_8 + 0x252) = *(char *)((int)local_8 + 0x252) + '\x01';
          }
          else {
            bVar6 = false;
          }
          if (!bVar6) {
            thunk_FUN_005fc3e0(local_8);
            DAT_00858df8 = (undefined4 ****)local_60;
            return 0;
          }
          *(char *)((int)local_8 + 0x252) = *(char *)((int)local_8 + 0x252) + -1;
        }
      }
      thunk_FUN_005ef5f0((int)local_8);
      thunk_FUN_005eeff0(local_8,0);
      if (DAT_007fa174 == 0) {
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      iVar7 = thunk_FUN_0044a5b0(*(ushort *)((int)local_8 + 0x32),local_8);
      if (iVar7 == 0) {
        DAT_00858df8 = (undefined4 ****)local_60;
        return 0;
      }
      thunk_FUN_005fc3e0(local_8);
      DAT_00858df8 = (undefined4 ****)local_60;
      return 0;
    }
    DAT_00858df8 = (undefined4 ****)local_60;
    iVar10 = FUN_006ad4d0(s_E____titans_nick_to_cont_cpp_007ce8e0,0x139,0,iVar7,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
    FUN_006a5e40(iVar7,0,0x7ce8e0,0x13b);
  }
  return 0xffff;
switchD_005fbd82_caseD_2:
  iVar10 = (**(code **)(*local_8 + 0x124))(20000);
  if (iVar10 == 0) {
    DAT_00858df8 = (undefined4 ****)local_60;
    return 0;
  }
  thunk_FUN_005ec9f0(1);
  if (*(int *)(iVar7 + 0x18) == 4) {
    FUN_006e9d40(*(void **)((int)local_8 + 0x211),*(uint **)((int)local_8 + 0x1ed),8);
  }
  *(undefined1 *)((int)local_8 + 0x30e) = *(undefined1 *)(iVar7 + 8);
  *(undefined2 *)((int)local_8 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
  *(undefined4 *)((int)local_8 + 0x23a) = 5;
  *(undefined1 *)((int)local_8 + 0x30d) = 1;
  DAT_00858df8 = (undefined4 ****)local_60;
  return 0;
switchD_005fbd08_caseD_129:
  if (*(int *)((int)local_8 + 0x23a) != 4) {
    DAT_00858df8 = (undefined4 ****)local_60;
    return 0;
  }
  uVar8 = CONCAT22((short)((uint)param_1 >> 0x10),*(short *)((int)local_8 + 0x2ab));
  if (*(short *)((int)local_8 + 0x2ab) == -1) {
    DAT_00858df8 = (undefined4 ****)local_60;
    return 0;
  }
  if (*(char *)((int)local_8 + 0x24f) == '\0') {
    DAT_00858df8 = (undefined4 ****)local_60;
    return 0;
  }
  local_c = *(uint *)((int)local_8 + 0x2ad);
  if (local_c == 0) {
    local_c = thunk_FUN_0042b620(CONCAT31((int3)(uVar8 >> 8),*(undefined1 *)((int)local_8 + 0x2a3)),
                                 uVar8,1);
  }
  if (local_c != 0) {
    *(int *)((int)local_8 + 0x277) = (int)*(short *)(local_c + 0x41);
    *(int *)((int)local_8 + 0x27b) = (int)*(short *)(local_c + 0x43);
    *(int *)((int)local_8 + 0x27f) = *(short *)(local_c + 0x45) + 5;
    *(int *)((int)local_8 + 0x2ba) = (int)*(short *)(local_c + 0x6c) / 0xf;
    piVar14 = (int *)(local_c + 0x34);
    piVar16 = local_8 + 0xd;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar16 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar16 = piVar16 + 1;
    }
    *(short *)piVar16 = (short)*piVar14;
    *(undefined1 *)((int)piVar16 + 2) = *(undefined1 *)((int)piVar14 + 2);
    *(undefined4 *)((int)local_8 + 0x76) = 0;
    *(undefined2 *)((int)local_8 + 0x6e) = *(undefined2 *)(local_c + 0x6e);
    *(undefined4 *)((int)local_8 + 0x2be) = *(undefined4 *)((int)local_8 + 0x277);
    *(undefined4 *)((int)local_8 + 0x2c2) = *(undefined4 *)((int)local_8 + 0x27b);
    *(undefined4 *)((int)local_8 + 0x2c6) = *(undefined4 *)((int)local_8 + 0x27f);
  }
  thunk_FUN_005ef5f0((int)local_8);
  iVar7 = (**(code **)(*local_8 + 0xd8))();
  if (iVar7 == 0) {
    DAT_00858df8 = (undefined4 ****)local_60;
    return 0;
  }
  return 0xffff;
}

