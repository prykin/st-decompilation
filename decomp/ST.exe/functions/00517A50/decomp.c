
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::RCProc */

void __thiscall HelpPanelTy::RCProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  char cVar1;
  HelpPanelTy HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  UINT UVar5;
  uint *puVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 unaff_ESI;
  byte *pbVar14;
  void *unaff_EDI;
  char *pcVar15;
  byte bVar16;
  int iVar17;
  undefined4 uVar18;
  HINSTANCE pHVar19;
  undefined4 local_7c [16];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2b;
  uint local_27;
  HelpPanelTy *local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  
  pbVar14 = (byte *)0x0;
  local_8 = 0;
  local_c = (byte *)0x0;
  local_20 = this;
  local_10 = (byte *)FUN_0070b3a0(*(int *)(this + 0x248),4);
  uVar13 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar13 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar13 * 0x27] == param_2)) {
      pbVar14 = &DAT_007c3468 + (uint)uVar13 * 0x27;
      local_c = pbVar14;
      break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0xb);
  if (pbVar14 != (byte *)0x0) {
    uVar12 = (uint)DAT_00858df8;
    DAT_00858df8 = &stack0xffffff80;
    iVar4 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
    this_00 = local_20;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_20[0x1a1];
        if (((HVar2 == (HelpPanelTy)0x0) || (HVar2 == (HelpPanelTy)0x6)) ||
           (HVar2 == (HelpPanelTy)0xa)) {
          local_20[0x1a2] = HVar2;
          *(undefined4 *)(local_20 + 0x1ab) = *(undefined4 *)(local_20 + 0x1a3);
        }
        else {
          local_20[0x1a2] = (HelpPanelTy)0x0;
          *(undefined4 *)(local_20 + 0x1ab) = 0;
        }
        local_20[0x1a1] = (HelpPanelTy)0x1;
        *(int *)(local_20 + 0x1a3) = param_1;
        *(uint *)(local_20 + 0x1a7) = param_2;
        *(undefined2 *)(local_20 + 0x1af) = 0x32;
        *(undefined2 *)(local_20 + 0x1b1) = 5;
        if (*(int *)(local_20 + 0x178) != 0) {
          *(undefined4 *)(local_20 + 0x28) = 0x4202;
          *(undefined2 *)(local_20 + 0x2c) = 0;
          *(undefined2 *)(local_20 + 0x2e) = 2;
          *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(local_20 + 0x18);
          }
        }
      }
      UVar5 = thunk_FUN_005293f0(param_1);
      DrawTitle(this_00,0x55fe,param_2,UVar5);
      bVar16 = (byte)param_2;
      DrawObj(this_00,&local_8,param_1,bVar16,0);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,0xf)
      ;
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5627,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,0xcf,
                       0xf);
      pbVar14 = local_c;
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(*(UINT *)(local_c + 5),DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar10);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,0xf)
      ;
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5628,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,0xcf,
                       0xf);
      pHVar19 = DAT_00807618;
      UVar5 = thunk_FUN_00523410(*(undefined4 *)(pbVar14 + 9),bVar16,0);
      pcVar7 = (char *)FUN_006b0140(UVar5,pHVar19);
      uVar10 = 0xffffffff;
      do {
        pcVar15 = pcVar7;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar7 = pcVar15 + -uVar10;
      pcVar15 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar15 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar15 = pcVar15 + 1;
      }
      for (puVar6 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
          puVar6 = FUN_0072e560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
      pbVar8 = local_c;
      local_8 = local_8 + 0xf;
      uVar10 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 9),*local_c);
      pbVar14 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x240),uVar10);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcd,local_8,'\x01',pbVar14);
      pbVar14 = local_10;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcb,local_8 + -2,'\x06',local_10);
      local_3c = 0xcb;
      local_34 = *(undefined4 *)(pbVar14 + 4);
      local_38 = local_8 + -2;
      local_30 = *(undefined4 *)(pbVar14 + 8);
      local_2c = 2;
      local_2b = *(undefined4 *)(pbVar8 + 9);
      local_27 = param_2;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_3c);
      local_8 = local_8 + *(int *)(pbVar14 + 8);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,0xf)
      ;
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5629,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,0xcf,
                       0xf);
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x273f - (*(int *)(pbVar8 + 0xd) != 0),DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar10);
      local_8 = local_8 + 0xf;
      if (*(int *)(pbVar8 + 0xd) != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,
                         0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,
                         0xcf,0xf);
        pHVar19 = DAT_00807618;
        UVar5 = thunk_FUN_00523410(*(undefined4 *)(pbVar8 + 0xd),bVar16,0);
        pcVar7 = (char *)FUN_006b0140(UVar5,pHVar19);
        uVar10 = 0xffffffff;
        do {
          pcVar15 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar15 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar15;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar15 + -uVar10;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pbVar8 = local_c;
        local_8 = local_8 + 0xf;
        uVar10 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 0xd),*local_c);
        pbVar14 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x23c),uVar10);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcd,local_8,'\x01',pbVar14);
        pbVar14 = local_10;
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcd,local_8,'\x06',local_10);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar14 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar14 + 8);
        local_2c = 3;
        local_2b = *(undefined4 *)(pbVar8 + 0xd);
        local_27 = (uint)*pbVar8;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_3c);
        local_8 = local_8 + *(int *)(pbVar14 + 8);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,0xf)
      ;
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x562b,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
      local_18 = pbVar8 + 0x19;
      pbVar14 = pbVar8 + 0x11;
      local_1c = 2;
      do {
        local_14 = pbVar14;
        if (*(int *)pbVar14 != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,
                           0xcf,0xf);
          pHVar19 = DAT_00807618;
          UVar5 = thunk_FUN_00523410(*(undefined4 *)pbVar14,bVar16,0);
          pcVar7 = (char *)FUN_006b0140(UVar5,pHVar19);
          uVar12 = 0xffffffff;
          do {
            pcVar15 = pcVar7;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar15 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar15;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar7 = pcVar15 + -uVar12;
          pcVar15 = (char *)&DAT_0080f33a;
          for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar15 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar15 = pcVar15 + 1;
          }
          for (puVar6 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
              puVar6 = FUN_0072e560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          pbVar14 = local_14;
          local_8 = local_8 + 0xf;
          uVar12 = thunk_FUN_00526ba0(*(undefined4 *)local_14,*local_c);
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x240),uVar12);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcd,local_8,'\x01',pbVar8);
          pbVar8 = local_10;
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcb,local_8 + -2,'\x06',local_10);
          local_3c = 0xcb;
          local_34 = *(undefined4 *)(pbVar8 + 4);
          local_38 = local_8 + -2;
          local_30 = *(undefined4 *)(pbVar8 + 8);
          local_2c = 2;
          local_2b = *(undefined4 *)pbVar14;
          local_27 = (uint)*local_c;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_3c);
          local_8 = local_8 + *(int *)(pbVar8 + 8);
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,
                           0xf);
          uVar18 = 3;
          iVar17 = -1;
          iVar4 = -3;
          puVar6 = (uint *)FUN_006b0140(0x562c,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,
                           0xcf,0xf);
          uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar17 = -1;
          iVar4 = 1;
          puVar6 = (uint *)FUN_006b0140((-(uint)(*local_18 != 0) & 0xffffffef) + 0x5641,DAT_00807618
                                       );
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar12);
          local_8 = local_8 + 0xf;
          pbVar8 = local_c;
        }
        pbVar14 = local_14 + 4;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = pbVar14;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,0xf)
      ;
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x562d,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
      pcVar7 = (char *)FUN_006b0140(*(UINT *)(pbVar8 + 0x1b),DAT_00807618);
      uVar10 = 0xffffffff;
      do {
        pcVar15 = pcVar7;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar15 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar7 = pcVar15 + -uVar10;
      pcVar15 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar15 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar15 = pcVar15 + 1;
      }
      ccFntTy::FormText(*(ccFntTy **)(this_00 + 0x1e0),(char *)&DAT_0080f33a,&DAT_0080f33a,
                        (uint *)s________________007c21d8,0xcf,1);
      uVar10 = FUN_007113e0(*(void **)(this_00 + 0x1e0),&DAT_0080f33a);
      CheckBkView(this_00,local_8,uVar10);
      uVar11 = uVar10 & 0xffff;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,0xcf,
                       uVar11 + 2);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar10 < 0x10) {
        uVar11 = 0xf;
      }
      local_8 = local_8 + uVar11;
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,0xf)
      ;
      uVar18 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x562e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,0xcf,
                       0xf);
      pbVar14 = local_c;
      uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x273f - (*(int *)(local_c + 0x1f) != 0),DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar10);
      local_8 = local_8 + 0xf;
      if (*(int *)(pbVar14 + 0x1f) != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,
                         0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,
                         0xcf,0xf);
        pHVar19 = DAT_00807618;
        UVar5 = thunk_FUN_00523410(*(undefined4 *)(pbVar14 + 0x1f),bVar16,0);
        pcVar7 = (char *)FUN_006b0140(UVar5,pHVar19);
        uVar10 = 0xffffffff;
        do {
          pcVar15 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar15 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar15;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar15 + -uVar10;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pbVar8 = local_10;
        local_8 = local_8 + 0xf;
        CheckBkView(this_00,local_8,CONCAT22(extraout_var,*(undefined2 *)(local_10 + 8)));
        pbVar14 = local_c;
        uVar10 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 0x1f),*local_c);
        pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x23c),uVar10);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcd,local_8,'\x01',pbVar9);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcd,local_8,'\x06',pbVar8);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar8 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar8 + 8);
        local_2c = 0xb;
        local_2b = *(undefined4 *)(pbVar14 + 0x1f);
        local_27 = (uint)*pbVar14;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_3c);
        local_8 = local_8 + *(int *)(pbVar8 + 8);
      }
      if (*(int *)(pbVar14 + 0x23) != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,local_8,200,
                         0xf);
        uVar18 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x562f,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar4,iVar17,uVar18);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0xcd,local_8,
                         0xcf,0xf);
        pHVar19 = DAT_00807618;
        UVar5 = thunk_FUN_00523410(*(undefined4 *)(pbVar14 + 0x23),bVar16,0);
        pcVar7 = (char *)FUN_006b0140(UVar5,pHVar19);
        uVar10 = 0xffffffff;
        do {
          pcVar15 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar15 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar15;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar15 + -uVar10;
        pcVar15 = (char *)&DAT_0080f33a;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar15 = pcVar15 + 1;
        }
        for (puVar6 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
            puVar6 = FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        iVar4 = FUN_0070b3a0(*(int *)(this_00 + 0x248),4);
        CheckBkView(this_00,local_8,CONCAT22(extraout_var_00,*(undefined2 *)(iVar4 + 8)));
        pbVar8 = local_c;
        uVar10 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 0x23),*local_c);
        pbVar14 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x240),uVar10);
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcd,local_8,'\x01',pbVar14);
        pbVar14 = local_10;
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0xcb,local_8 + -2,'\x06',local_10);
        local_3c = 0xcb;
        local_34 = *(undefined4 *)(pbVar14 + 4);
        local_38 = local_8 + -2;
        local_30 = *(undefined4 *)(pbVar14 + 8);
        local_2c = 2;
        local_2b = *(undefined4 *)(pbVar8 + 0x23);
        local_27 = (uint)*pbVar8;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),&local_3c);
        local_8 = local_8 + *(int *)(pbVar14 + 8);
      }
      AddLinks(this_00,&local_8,'\x01',param_1,param_2);
      DAT_00858df8 = (undefined1 *)uVar12;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar12;
    iVar17 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x5f8,0,iVar4,&DAT_007a4ccc);
    if (iVar17 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0x5f8);
  }
  return;
}

