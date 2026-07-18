
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::GetMessage */

undefined4 __thiscall STMineSetC::GetMessage(STMineSetC *this,int param_1)

{
  STMineSetC SVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  STMineSetC *this_00;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  void *unaff_EDI;
  STMineSetC *pSVar12;
  undefined4 local_60;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  STMineSetC *local_8;
  
  local_8 = this;
  iVar7 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar7 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar10 = FUN_006ad4d0(s_E____titans_nick_to_mine_set_cpp_007d06b0,0x174,0,iVar7,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar7,0,0x7d06b0,0x176);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return uVar8;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (0x110 < uVar9) {
    if (0x128 < uVar9) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (uVar9 == 0x128) {
      thunk_FUN_004ad430((int)(local_8 + 0x1d5));
      thunk_FUN_00622670(this_00);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (uVar9 != 0x112) {
      if (uVar9 != 0x113) {
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
      if (*(int *)(local_8 + 0x2ba) < 0) {
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
      if (*(int *)(local_8 + 0x2ae) != 1) {
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
      (*(code *)**(undefined4 **)(local_8 + 0x1d5))();
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (*(int *)(local_8 + 0x2ba) < 0) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (*(int *)(local_8 + 0x2ae) != 1) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_004ad5e0((int)(local_8 + 0x1d5));
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 == 0x110) {
    thunk_FUN_00627390((int)local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (3 < uVar9) {
    if (uVar9 == 0x108) {
      uVar8 = thunk_FUN_004ab050();
      thunk_FUN_00626b50(local_8,uVar8);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (uVar9 != 0x10f) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    local_10 = (byte *)thunk_FUN_00622990(local_8,&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_10,local_c);
    FUN_006ab060(&local_10);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 == 3) {
    thunk_FUN_00622880((int *)local_8);
    if (*(int *)(this_00 + 0x363) == 0) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_006366d0(*(int *)(this_00 + 0x363));
    FUN_0072e2b0(*(undefined4 **)(this_00 + 0x363));
    *(undefined4 *)(this_00 + 0x363) = 0;
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 == 0) {
    if ((local_8[0x2ad] == (STMineSetC)0x3) &&
       (0x1194 < (uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)(local_8 + 0x35f)))) {
      thunk_FUN_00627390((int)local_8);
    }
    iVar7 = thunk_FUN_006239a0((int *)this_00);
    if (iVar7 == 0) {
      if ((*(int *)(this_00 + 0x2ae) == 2) && (this_00[0x353] == (STMineSetC)0x0)) {
        uVar9 = thunk_FUN_006226c0(this_00,(int)*(short *)(this_00 + 0x47),
                                   (int)*(short *)(this_00 + 0x49));
        this_00[0x353] = SUB41(uVar9,0);
        if (SUB41(uVar9,0) != (STMineSetC)0x0) {
          LoadImagMineSet(this_00,0);
          thunk_FUN_004ad460(this_00 + 0x1d5,1);
        }
      }
    }
    else {
      if ((((this_00[0x314] == (STMineSetC)0x0) && (iVar7 = *(int *)(this_00 + 0x2ae), iVar7 != 2))
          && (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) {
        uVar8 = thunk_FUN_00627400(this_00,iVar7);
        *(undefined4 *)(this_00 + 0x2ae) = uVar8;
      }
      iVar7 = *(int *)(this_00 + 0x2ae);
      if (((iVar7 != 2) && (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) {
        if (this_00[0x353] == (STMineSetC)0x0) {
          uVar9 = thunk_FUN_006226c0(this_00,(int)*(short *)(this_00 + 0x47),
                                     (int)*(short *)(this_00 + 0x49));
          this_00[0x353] = SUB41(uVar9,0);
          if ((SUB41(uVar9,0) != (STMineSetC)0x0) && (*(int *)(this_00 + 0x2ba) < 0)) {
            LoadImagMineSet(this_00,0);
            thunk_FUN_004ad460(this_00 + 0x1d5,1);
          }
        }
        else if (((byte)DAT_00802a38[0xe4] & 3) == 0) {
          uVar9 = thunk_FUN_006226c0(this_00,(int)*(short *)(this_00 + 0x47),
                                     (int)*(short *)(this_00 + 0x49));
          this_00[0x353] = SUB41(uVar9,0);
          if ((SUB41(uVar9,0) == (STMineSetC)0x0) && (this_00[0x2e9] != (STMineSetC)0x0)) {
            thunk_FUN_004ad430((int)(this_00 + 0x1d5));
            this_00[0x2e9] = (STMineSetC)0x0;
          }
        }
        *(undefined2 *)(this_00 + 0x45) = *(undefined2 *)(this_00 + 0x2ca);
        *(undefined2 *)(this_00 + 0x41) = *(undefined2 *)(this_00 + 0x2c2);
        *(undefined2 *)(this_00 + 0x43) = *(undefined2 *)(this_00 + 0x2c6);
        if (this_00[0x353] != (STMineSetC)0x0) {
          thunk_FUN_00623600((int *)this_00);
        }
        SVar1 = this_00[0x2ad];
        if ((((SVar1 == (STMineSetC)0x0) || (SVar1 == (STMineSetC)0x1)) ||
            (SVar1 == (STMineSetC)0x2)) &&
           ((((*(uint *)(DAT_00802a38 + 0xe4) % 5 == 0 &&
              (0x19 < *(uint *)(DAT_00802a38 + 0xe4) - *(int *)(this_00 + 0x346))) &&
             ((*(int *)(this_00 + 0x2ae) == 0 || (*(int *)(this_00 + 0x2ae) == 1)))) &&
            (iVar7 = thunk_FUN_00625730(this_00), iVar7 != 0)))) {
          *(undefined4 *)(this_00 + 0x2ae) = 2;
          *(int *)(this_00 + 0x30f) =
               *(int *)(&DAT_007d02a4 + (uint)(byte)this_00[0x2ad] * 4) +
               *(int *)(DAT_00802a38 + 0xe4);
        }
      }
    }
    if (((*(int *)(this_00 + 0x355) == 0) && (*(int *)(this_00 + 0x2ae) != 2)) &&
       ((*(int *)(this_00 + 0x2ae) != 4 &&
        (((short)(*(short *)(this_00 + 0x47) * 0xc9 + 100) == *(short *)(this_00 + 0x41) &&
         ((short)(*(short *)(this_00 + 0x49) * 0xc9 + 100) == *(short *)(this_00 + 0x43))))))) {
      *(undefined4 *)(this_00 + 0x355) = 1;
    }
    if ((*(int **)(this_00 + 0x363) != (int *)0x0) &&
       (iVar7 = thunk_FUN_006372e0(*(int **)(this_00 + 0x363)), iVar7 != 0)) {
      thunk_FUN_006366d0(*(int *)(this_00 + 0x363));
      FUN_0072e2b0(*(undefined4 **)(this_00 + 0x363));
      *(undefined4 *)(this_00 + 0x363) = 0;
    }
    if (this_00[0x359] == (STMineSetC)0x0) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_00627170(this_00);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 != 2) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(local_8 + 0x219) = 0x23a;
  *(undefined4 *)(local_8 + 0x215) = 0x32;
  if (*(int *)(iVar7 + 0xc) == 2) {
    thunk_FUN_00622ab0(local_8,*(undefined4 **)(param_1 + 0x14));
    if (this_00[0x313] != (STMineSetC)0x0) {
      sVar2 = *(short *)(this_00 + 0x47);
      local_1c = 1;
      local_14 = (uint)(byte)this_00[0x8e];
      sVar3 = *(short *)(this_00 + 0x4b);
      sVar4 = *(short *)(this_00 + 0x49);
      local_18 = (int)sVar4;
      if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar4 < 0)) ||
         (((DAT_007fb242 <= sVar4 || (sVar3 < 0)) || (DAT_007fb244 <= sVar3)))) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(DAT_007fb248 +
                        (local_14 +
                        ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                        (int)sVar2) * 2) * 4);
      }
      if ((iVar7 == 0) &&
         (iVar7 = DumpClassC::WritePtr(sVar2,sVar4,sVar3,local_14,(int)this_00), iVar7 == 0)) {
        this_00[0x314] = (STMineSetC)((char)this_00[0x314] + '\x01');
        iVar7 = local_1c;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) {
        thunk_FUN_00622670(this_00);
      }
    }
    pSVar12 = this_00 + 0x231;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar12 = 0;
      pSVar12 = pSVar12 + 4;
    }
    *pSVar12 = (STMineSetC)0x0;
    if (this_00[0x353] != (STMineSetC)0x0) {
      uVar8 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
      *(undefined4 *)(this_00 + 0x2ba) = uVar8;
    }
    *(undefined4 *)(this_00 + 0x363) = 0;
    iVar7 = STAllPlayersC::RegisterMine(DAT_007fa174,*(ushort *)(this_00 + 0x32),this_00);
    if (iVar7 == 0) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_00622670(this_00);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  puVar11 = *(undefined4 **)(param_1 + 0x14);
  pSVar12 = local_8 + 0x25e;
  for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pSVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    pSVar12 = pSVar12 + 4;
  }
  *(undefined2 *)pSVar12 = *(undefined2 *)puVar11;
  pSVar12[2] = *(STMineSetC *)((int)puVar11 + 2);
  if (*(int *)(iVar7 + 0xc) == 0) {
    *(int *)(local_8 + 0x276) = (int)(short)(*(short *)(local_8 + 0x276) * 0xc9 + 100);
    *(int *)(local_8 + 0x27a) = (int)(short)(*(short *)(local_8 + 0x27a) * 0xc9 + 100);
    *(int *)(local_8 + 0x27e) = (int)(short)(*(short *)(local_8 + 0x27e) * 200 + 100);
    *(undefined4 *)(local_8 + 0x282) = *(undefined4 *)(local_8 + 0x276);
    *(undefined4 *)(local_8 + 0x286) = *(undefined4 *)(local_8 + 0x27a);
    *(undefined4 *)(local_8 + 0x28a) = *(undefined4 *)(local_8 + 0x27e);
  }
  iVar7 = thunk_FUN_00622ba0(local_8);
  if (iVar7 == 0) {
    thunk_FUN_00622670(this_00);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  bVar6 = false;
  if (*(int *)(this_00 + 0x2f6) == 0) {
    *(undefined2 *)(this_00 + 0x34) = *(undefined2 *)(this_00 + 0x41);
    *(undefined2 *)(this_00 + 0x36) = *(undefined2 *)(this_00 + 0x43);
    *(undefined2 *)(this_00 + 0x38) = *(undefined2 *)(this_00 + 0x45);
    iVar7 = thunk_FUN_00624570(this_00,1,*(int *)(this_00 + 0x2c2),*(int *)(this_00 + 0x2c6),
                               *(int *)(this_00 + 0x2ca));
    if (iVar7 == 0) goto LAB_00621d24;
    *(undefined4 *)(this_00 + 0x2ee) = 1;
  }
  else {
    iVar7 = thunk_FUN_00624570(this_00,2,(int)*(short *)(this_00 + 0x3a),
                               (int)*(short *)(this_00 + 0x3c),(int)*(short *)(this_00 + 0x3e));
    if (iVar7 == 0) goto LAB_00621d24;
    *(undefined4 *)(this_00 + 0x2ee) = 2;
  }
  *(undefined4 *)(this_00 + 0x2ae) = 1;
  bVar6 = true;
LAB_00621d24:
  if (bVar6) {
    *(undefined4 *)(this_00 + 0x2ae) = 1;
    this_00[0x353] = (STMineSetC)0x1;
    LoadImagMineSet(this_00,0);
    iVar7 = STAllPlayersC::RegisterMine(DAT_007fa174,0xffff,this_00);
    if (iVar7 != 0) {
      thunk_FUN_00622670(this_00);
    }
    thunk_FUN_00627700((int)this_00);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  thunk_FUN_00622670(this_00);
  DAT_00858df8 = (undefined4 *)local_60;
  return 0;
}

