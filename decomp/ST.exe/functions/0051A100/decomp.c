
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ObjProc */

void __thiscall HelpPanelTy::ObjProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  char cVar3;
  ushort uVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  HINSTANCE pHVar13;
  byte bVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *local_a0;
  undefined4 local_9c [16];
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  uint local_4b;
  undefined4 local_47;
  HelpPanelTy *local_40;
  byte *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  int local_27;
  uint local_23;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  char local_9;
  int local_8;
  
  local_8 = 0;
  local_9 = '\0';
  if (DAT_007fa174 != 0) {
    local_a0 = DAT_00858df8;
    DAT_00858df8 = &local_a0;
    local_40 = this;
    iVar5 = __setjmp3(local_9c,0,unaff_EDI,unaff_ESI);
    this_00 = local_40;
    if (iVar5 == 0) {
      if (param_3 == '\0') {
        HVar1 = local_40[0x1a1];
        if (((HVar1 == (HelpPanelTy)0x0) || (HVar1 == (HelpPanelTy)0x6)) ||
           (HVar1 == (HelpPanelTy)0xa)) {
          local_40[0x1a2] = HVar1;
          *(undefined4 *)(local_40 + 0x1ab) = *(undefined4 *)(local_40 + 0x1a3);
        }
        else {
          local_40[0x1a2] = (HelpPanelTy)0x0;
          *(undefined4 *)(local_40 + 0x1ab) = 0;
        }
        local_40[0x1a1] = (HelpPanelTy)0x2;
        *(int *)(local_40 + 0x1a3) = param_1;
        *(uint *)(local_40 + 0x1a7) = param_2;
        *(undefined2 *)(local_40 + 0x1af) = 0x32;
        *(undefined2 *)(local_40 + 0x1b1) = 5;
        if (*(int *)(local_40 + 0x178) != 0) {
          *(undefined4 *)(local_40 + 0x28) = 0x4202;
          *(undefined2 *)(local_40 + 0x2c) = 0;
          *(undefined2 *)(local_40 + 0x2e) = 2;
          *(int *)(local_40 + 0x30) = *(int *)(local_40 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(local_40 + 0x18);
          }
        }
      }
      bVar14 = (byte)param_2;
      UVar6 = thunk_FUN_00523410(param_1,bVar14,0);
      DrawTitle(this_00,0x55fa,param_2,UVar6);
      DrawObj(this_00,&local_8,param_1,bVar14,*(int *)(this_00 + 0x240));
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x19c,
                       0xf);
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      local_8 = local_8 + 0xf;
      UVar6 = 0;
      iVar5 = FUN_006b0fd0(0x8014a0);
      if (iVar5 == 0) {
        iVar5 = FUN_006b0fd0(0x800f90);
        if (iVar5 == 0) {
          iVar5 = FUN_006b0fd0(0x801360);
          if (iVar5 == 0) {
            iVar5 = FUN_006b0fd0(0x800f80);
            if (iVar5 != 0) {
              UVar6 = 0x3a9d;
            }
          }
          else {
            UVar6 = 0x3aa8;
          }
        }
        else {
          UVar6 = 0x3a9c;
        }
      }
      else {
        UVar6 = 0x3a9b;
      }
      if (UVar6 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,
                         0xf);
        uVar16 = 3;
        iVar15 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x5654,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar15 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
        local_8 = local_8 + 0xf;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,0xf
                      );
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x5656,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,0x106
                       ,0xf);
      if (param_2 == 1) {
        UVar6 = 0x5604;
      }
      else if (param_2 == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar15 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,0xf
                      );
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      local_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar5 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar5 = *(int *)(&DAT_007e22a0 + (local_14 + param_2) * 4);
      }
      if (iVar5 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar5);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar15 = FUN_0070b3a0(*(int *)(this_00 + 0x238),(-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,local_8,iVar15,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar15 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar15 + 8);
        local_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        local_28 = 1;
        local_23 = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_38);
        local_8 = local_8 + 0x14;
      }
      local_14 = local_14 + -0x97 + param_2;
      iVar15 = *(int *)(&DAT_007e1c50 + local_14 * 4);
      if (iVar15 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar15);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        iVar9 = FUN_0070b3a0(*(int *)(this_00 + 0x238),0);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,local_8,iVar9,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar9 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar9 + 8);
        local_28 = 1;
        local_27 = 0xdd;
        local_23 = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_38);
        local_8 = local_8 + 0x14;
      }
      iVar9 = *(int *)(&DAT_008545ac + local_14 * 4);
      if (iVar9 != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x96,
                         local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar9);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        iVar10 = FUN_0070b3a0(*(int *)(this_00 + 0x238),2);
        FUN_006b5440(*(int *)(this_00 + 0x218),0,0xb4,local_8,iVar10,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar10 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar10 + 8);
        local_28 = 1;
        local_27 = 0xdc;
        local_23 = param_2;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_38);
        local_8 = local_8 + 0x14;
      }
      if (iVar9 == 0 && (iVar15 == 0 && iVar5 == 0)) {
        local_8 = local_8 + 0xf;
      }
      local_1c = (int *)0x1;
      local_10 = 1;
      local_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pbVar11 = &DAT_007c0e4c + local_18 + (local_10 & 0xffff);
        local_3c = pbVar11;
        if (*pbVar11 == 0) break;
        if (local_1c != (int *)0x0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91
                           ,0xf);
          uVar16 = 3;
          iVar15 = -1;
          iVar5 = -3;
          puVar7 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
          local_1c = (int *)0x0;
        }
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar15 = -1;
        iVar5 = 1;
        pHVar13 = DAT_00807618;
        UVar6 = thunk_FUN_00528060(*pbVar11,'\0');
        puVar7 = (uint *)FUN_006b0140(UVar6,pHVar13);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
        local_8 = local_8 + 0xf;
        uVar8 = thunk_FUN_005276e0(*pbVar11,0);
        pbVar11 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x230),uVar8);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x96,local_8,'\x01',pbVar11);
        local_5c = 0x96;
        local_54 = *(undefined4 *)(pbVar11 + 4);
        local_58 = local_8;
        local_50 = *(undefined4 *)(pbVar11 + 8);
        local_4b = (uint)*local_3c;
        local_4c = 5;
        local_47 = 0;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_5c);
        local_10 = local_10 + 1;
        local_8 = local_8 + 5 + *(int *)(pbVar11 + 8);
      } while ((ushort)local_10 < 3);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x19c,
                       0xf);
      uVar16 = 3;
      iVar15 = -1;
      iVar5 = -1;
      puVar7 = (uint *)FUN_006b0140(0x564b,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,0x106
                       ,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar15 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564c,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,0xf
                      );
      iVar15 = local_14;
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007e417c + local_14 * 4));
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,0x106
                       ,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564d,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      iVar5 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      local_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      local_18 = 0x42;
      local_10 = iVar5;
      do {
        iVar9 = *local_1c;
        if (iVar9 < (int)local_10) {
          local_10 = iVar9;
        }
        if (iVar5 < iVar9) {
          iVar5 = iVar9;
        }
        local_1c = local_1c + 3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar5 = (int)((iVar5 - local_10) + ((int)(iVar5 - local_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar15 * 4) < (int)(local_10 + iVar5)) {
        local_10 = 0x5613;
      }
      else {
        local_10 = (((int)(local_10 + iVar5 * 2) <= *(int *)(&DAT_007e3dc4 + iVar15 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,0xf
                      );
      uVar16 = 2;
      iVar9 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(local_10,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar16);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,0x106
                       ,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x565a,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,0xf
                      );
      uVar16 = 2;
      iVar9 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(0x273f - (*(int *)(&DAT_00791b18 + iVar15 * 4) != 0),
                                    DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar16);
      local_8 = local_8 + 0xf;
      iVar5 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar5 * 8) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(&DAT_00794038 + iVar5 * 8);
      }
      local_18 = iVar5 * 0x18;
      iVar5 = DrawWeapon(this_00,0x96,&local_8,(&DAT_00792ca0)[iVar5 * 6],iVar9,param_2);
      cVar3 = local_9;
      if ((iVar5 != 0) || (local_9 = '\0', cVar3 != '\0')) {
        local_9 = '\x01';
      }
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      iVar5 = DrawWeapon(this_00,0x96,&local_8,*(int *)((int)&DAT_00792cac + local_18),iVar5,param_2
                        );
      cVar3 = local_9;
      if ((iVar5 != 0) || (local_9 = '\0', cVar3 != '\0')) {
        local_9 = '\x01';
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,0x106
                       ,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x564e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,0xf
                      );
      uVar16 = 2;
      iVar9 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140((param_2 != 3) + 0x273e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar16);
      local_8 = local_8 + 0xf;
      if (local_9 != '\0') {
        bVar12 = false;
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar15 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x564f,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar8);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,
                         0xf);
        if (*(int *)((int)&DAT_00792ca0 + local_18) != 0) {
          bVar12 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + local_18) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)((int)&DAT_00792cac + local_18) != 0) &&
           ((bVar12 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + local_18) * 3 + -0x1c2] != 0))
           )) {
          bVar12 = true;
        }
        uVar16 = 2;
        iVar15 = -1;
        iVar5 = -3;
        puVar7 = (uint *)FUN_006b0140(0x273f - bVar12,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
        local_8 = local_8 + 0xf;
        iVar15 = local_14;
      }
      if (param_2 != 3) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,
                         0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar9 = -1;
        iVar5 = 1;
        puVar7 = (uint *)FUN_006b0140(0x5650,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
        iVar5 = *(int *)(&DAT_007e29f0 + iVar15 * 4);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,
                         0xf);
        uVar16 = 2;
        iVar9 = -1;
        iVar15 = -3;
        puVar7 = (uint *)FUN_006b0140(0x273f - (iVar5 != 0),DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar15,iVar9,uVar16);
        local_8 = local_8 + 0xf;
        iVar15 = local_14;
        if (iVar5 != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,
                           0x106,0xf);
          uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar9 = -1;
          iVar15 = 1;
          puVar7 = (uint *)FUN_006b0140(0x5651,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar15,iVar9,uVar8);
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e8),*(int *)(this_00 + 0x218),0,0x5f,
                           local_8 + -3,0x16,0x14);
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar5);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e8),&DAT_0080f33a,1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          iVar5 = FUN_0070b3a0(*(int *)(this_00 + 0x238),1);
          FUN_006b5440(*(int *)(this_00 + 0x218),0,0x7a,local_8,iVar5,0,0x3a);
          local_38 = 0x7a;
          local_30 = *(undefined4 *)(iVar5 + 4);
          local_34 = local_8;
          local_2c = *(undefined4 *)(iVar5 + 8);
          local_28 = 1;
          local_27 = 0xde;
          local_23 = param_2;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_38);
          local_8 = local_8 + 0x14;
          iVar15 = local_14;
        }
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0x96,local_8,0x106
                       ,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar9 = -1;
      iVar5 = 1;
      puVar7 = (uint *)FUN_006b0140(0x565b,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar9,uVar8);
      local_10 = 0;
      uVar4 = 0;
      do {
        if ((&DAT_007e1988)[iVar15 * 3 + (uint)uVar4] != '\0') {
          local_10 = 0x273e;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      if (local_10 == 0) {
        local_10 = 0x273f;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,0x91,0xf
                      );
      uVar16 = 2;
      iVar15 = -1;
      iVar5 = -3;
      puVar7 = (uint *)FUN_006b0140(local_10,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar5,iVar15,uVar16);
      local_8 = local_8 + 0xf;
      UVar6 = thunk_FUN_00523410(param_1,bVar14,2);
      DrawDescription(this_00,&local_8,UVar6);
      AddLinks(this_00,&local_8,'\x02',param_1,param_2);
      DAT_00858df8 = local_a0;
      return;
    }
    DAT_00858df8 = local_a0;
    iVar15 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x7ec,0,iVar5,&DAT_007a4ccc);
    if (iVar15 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c383c,0x7ec);
  }
  return;
}

