
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::RCProc */

void __thiscall HelpPanelTy::RCProc(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  UINT UVar4;
  uint *puVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 unaff_ESI;
  byte *pbVar11;
  byte *pbVar12;
  void *unaff_EDI;
  Global_sub_00526BA0_param_1Enum *pGVar13;
  char *pcVar14;
  byte bVar15;
  int iVar16;
  undefined4 uVar17;
  HINSTANCE pHVar18;
  InternalExceptionFrame *pIVar19;
  undefined4 local_7c [16];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  Global_sub_00526BA0_param_1Enum local_2b;
  uint local_27;
  HelpPanelTy *local_20;
  int local_1c;
  byte *local_18;
  Global_sub_00526BA0_param_1Enum *local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  
  pbVar11 = (byte *)0x0;
  local_8 = 0;
  local_c = (byte *)0x0;
  local_20 = this;
  local_10 = (byte *)FUN_0070b3a0(this->field_0248,4);
  uVar10 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar10 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar10 * 0x27] == param_2)) {
      pbVar11 = &DAT_007c3468 + (uint)uVar10 * 0x27;
      local_c = pbVar11;
      break;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0xb);
  if (pbVar11 != (byte *)0x0) {
    pIVar19 = g_currentExceptionFrame;
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff80;
    iVar3 = Library::MSVCRT::__setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
    this_00 = local_20;
    if (iVar3 == 0) {
      if (param_3 == '\0') {
        cVar1 = local_20->field_01A1;
        if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
          local_20->field_01A2 = cVar1;
          *(undefined4 *)&local_20->field_0x1ab = local_20->field_01A3;
        }
        else {
          local_20->field_01A2 = 0;
          *(undefined4 *)&local_20->field_0x1ab = 0;
        }
        local_20->field_01A1 = 1;
        local_20->field_01A3 = param_1;
        local_20->field_01A7 = param_2;
        *(undefined2 *)&local_20->field_0x1af = 0x32;
        *(undefined2 *)&local_20->field_0x1b1 = 5;
        if (*(int *)&local_20->field_0x178 != 0) {
          local_20->field_0028 = 0x4202;
          *(undefined2 *)&local_20->field_0x2c = 0;
          local_20->field_002E = 2;
          *(int *)&local_20->field_0x30 = *(int *)&local_20->field_0x178;
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(&local_20->field_0x18);
          }
        }
      }
      UVar4 = thunk_FUN_005293f0(param_1);
      DrawTitle(this_00,0x55fe,param_2,UVar4);
      bVar15 = (byte)param_2;
      DrawObj(this_00,&local_8,param_1,bVar15,0);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5627,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                       0xf);
      pbVar11 = local_c;
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140(*(UINT *)(local_c + 5),DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar8);
      local_8 = local_8 + 0xf;
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5628,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                       0xf);
      pHVar18 = DAT_00807618;
      UVar4 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)(pbVar11 + 9),bVar15,0);
      pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
      uVar8 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar6 = pcVar14 + -uVar8;
      pcVar14 = (char *)&DAT_0080f33a;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      for (puVar5 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
          puVar5 = Library::MSVCRT::FUN_0072e560(puVar5,'\n')) {
        *(undefined1 *)puVar5 = 0x20;
      }
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
      pbVar12 = local_c;
      local_8 = local_8 + 0xf;
      uVar8 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)(local_c + 9),*local_c);
      pbVar11 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x240,uVar8);
      thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar11);
      pbVar11 = local_10;
      thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcb,local_8 + -2,'\x06',local_10);
      local_3c = 0xcb;
      local_34 = *(undefined4 *)(pbVar11 + 4);
      local_38 = local_8 + -2;
      local_30 = *(undefined4 *)(pbVar11 + 8);
      local_2c = 2;
      local_2b = *(Global_sub_00526BA0_param_1Enum *)(pbVar12 + 9);
      local_27 = param_2;
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_3c);
      local_8 = local_8 + *(int *)(pbVar11 + 8);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5629,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                       0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140(0x273f - (*(int *)(pbVar12 + 0xd) != 0),DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar8);
      local_8 = local_8 + 0xf;
      if (*(int *)(pbVar12 + 0xd) != 0) {
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf)
        ;
        uVar17 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar5 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                         0xf);
        pHVar18 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)(pbVar12 + 0xd),bVar15,0);
        pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
        uVar8 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar6 = pcVar14 + -uVar8;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        for (puVar5 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
            puVar5 = Library::MSVCRT::FUN_0072e560(puVar5,'\n')) {
          *(undefined1 *)puVar5 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pbVar12 = local_c;
        local_8 = local_8 + 0xf;
        uVar8 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)(local_c + 0xd),*local_c);
        pbVar11 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x23c,uVar8);
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar11);
        pbVar11 = local_10;
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcd,local_8,'\x06',local_10);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar11 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar11 + 8);
        local_2c = 3;
        local_2b = *(Global_sub_00526BA0_param_1Enum *)(pbVar12 + 0xd);
        local_27 = (uint)*pbVar12;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar11 + 8);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x562b,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
      local_18 = pbVar12 + 0x19;
      pGVar13 = (Global_sub_00526BA0_param_1Enum *)(pbVar12 + 0x11);
      local_1c = 2;
      do {
        local_14 = pGVar13;
        if (*pGVar13 != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,
                           0xcf,0xf);
          pHVar18 = DAT_00807618;
          UVar4 = thunk_FUN_00523410(*pGVar13,bVar15,0);
          pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
          uVar8 = 0xffffffff;
          do {
            pcVar14 = pcVar6;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar6 = pcVar14 + -uVar8;
          pcVar14 = (char *)&DAT_0080f33a;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          for (puVar5 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
              puVar5 = Library::MSVCRT::FUN_0072e560(puVar5,'\n')) {
            *(undefined1 *)puVar5 = 0x20;
          }
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          pGVar13 = local_14;
          local_8 = local_8 + 0xf;
          uVar8 = thunk_FUN_00526ba0(*local_14,*local_c);
          pbVar11 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x240,uVar8);
          thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar11);
          pbVar11 = local_10;
          thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcb,local_8 + -2,'\x06',local_10);
          local_3c = 0xcb;
          local_34 = *(undefined4 *)(pbVar11 + 4);
          local_38 = local_8 + -2;
          local_30 = *(undefined4 *)(pbVar11 + 8);
          local_2c = 2;
          local_2b = *pGVar13;
          local_27 = (uint)*local_c;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_3c);
          local_8 = local_8 + *(int *)(pbVar11 + 8);
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,
                           0xf);
          pIVar19 = (InternalExceptionFrame *)0x3;
          iVar16 = -1;
          iVar3 = -3;
          puVar5 = (uint *)FUN_006b0140(0x562c,DAT_00807618);
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,pIVar19);
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,
                           0xcf,0xf);
          pIVar19 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
          iVar16 = -1;
          iVar3 = 1;
          puVar5 = (uint *)FUN_006b0140((-(uint)(*local_18 != 0) & 0xffffffef) + 0x5641,DAT_00807618
                                       );
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,pIVar19);
          local_8 = local_8 + 0xf;
          pbVar12 = local_c;
        }
        pGVar13 = local_14 + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = pGVar13;
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x562d,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
      pcVar6 = (char *)FUN_006b0140(*(UINT *)(pbVar12 + 0x1b),DAT_00807618);
      uVar8 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar6 = pcVar14 + -uVar8;
      pcVar14 = (char *)&DAT_0080f33a;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      ccFntTy::FormText(*(ccFntTy **)&this_00->field_0x1e0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        (uint *)s________________007c21d8,0xcf,1);
      uVar8 = FUN_007113e0(*(void **)&this_00->field_0x1e0,&DAT_0080f33a);
      CheckBkView(this_00,local_8,uVar8);
      uVar9 = uVar8 & 0xffff;
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                       uVar9 + 2);
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar8 < 0x10) {
        uVar9 = 0xf;
      }
      local_8 = local_8 + uVar9;
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x562e,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                       0xf);
      pbVar11 = local_c;
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140(0x273f - (*(int *)(local_c + 0x1f) != 0),DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar8);
      local_8 = local_8 + 0xf;
      if (*(int *)(pbVar11 + 0x1f) != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf)
        ;
        uVar17 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar5 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                         0xf);
        pHVar18 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)(pbVar11 + 0x1f),bVar15,0);
        pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
        uVar8 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar6 = pcVar14 + -uVar8;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        for (puVar5 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
            puVar5 = Library::MSVCRT::FUN_0072e560(puVar5,'\n')) {
          *(undefined1 *)puVar5 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pbVar12 = local_10;
        local_8 = local_8 + 0xf;
        CheckBkView(this_00,local_8,CONCAT22(extraout_var,*(undefined2 *)(local_10 + 8)));
        pbVar11 = local_c;
        uVar8 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)(local_c + 0x1f),*local_c);
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x23c,uVar8);
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar7);
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcd,local_8,'\x06',pbVar12);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar12 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar12 + 8);
        local_2c = 0xb;
        local_2b = *(Global_sub_00526BA0_param_1Enum *)(pbVar11 + 0x1f);
        local_27 = (uint)*pbVar11;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar12 + 8);
      }
      if (*(int *)(pbVar11 + 0x23) != 0) {
        CheckBkView(this_00,local_8,0xf);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,local_8,200,0xf)
        ;
        uVar17 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar5 = (uint *)FUN_006b0140(0x562f,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar5,iVar3,iVar16,uVar17);
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0xcd,local_8,0xcf,
                         0xf);
        pHVar18 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)(pbVar11 + 0x23),bVar15,0);
        pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
        uVar8 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar6 = pcVar14 + -uVar8;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        for (puVar5 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
            puVar5 = Library::MSVCRT::FUN_0072e560(puVar5,'\n')) {
          *(undefined1 *)puVar5 = 0x20;
        }
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        iVar3 = FUN_0070b3a0(this_00->field_0248,4);
        CheckBkView(this_00,local_8,CONCAT22(extraout_var_00,*(undefined2 *)(iVar3 + 8)));
        pbVar12 = local_c;
        uVar8 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)(local_c + 0x23),*local_c);
        pbVar11 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x240,uVar8);
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcd,local_8,'\x01',pbVar11);
        pbVar11 = local_10;
        thunk_FUN_00540760((undefined4 *)this_00->field_0218,0xcb,local_8 + -2,'\x06',local_10);
        local_3c = 0xcb;
        local_34 = *(undefined4 *)(pbVar11 + 4);
        local_38 = local_8 + -2;
        local_30 = *(undefined4 *)(pbVar11 + 8);
        local_2c = 2;
        local_2b = *(Global_sub_00526BA0_param_1Enum *)(pbVar12 + 0x23);
        local_27 = (uint)*pbVar12;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar11 + 8);
      }
      AddLinks(this_00,&local_8,'\x01',param_1,param_2);
      g_currentExceptionFrame = pIVar19;
      return;
    }
    g_currentExceptionFrame = pIVar19;
    iVar16 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x5f8,0,iVar3,
                                &DAT_007a4ccc,s_HelpPanelTy__RCProc_007c3c6c);
    if (iVar16 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x5f8);
  }
  return;
}

