
void __thiscall StartSystemTy::LoadMapData(StartSystemTy *this,int param_1,char param_2)

{
  SystemClassTy **ppSVar1;
  int *piVar2;
  MMsgTy *this_00;
  code *pcVar3;
  SystemClassTy *this_01;
  int iVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar13;
  InternalExceptionFrame IStack_9c;
  undefined4 uStack_58;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  SystemClassTy *pSStack_1c;
  undefined1 *puStack_18;
  uint *puStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined4 uStack_d;
  undefined4 *puStack_8;
  
  IStack_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_9c;
  pSStack_1c = (SystemClassTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pSStack_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_9c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x231,0,iVar4,
                                &DAT_007a4ccc,s_StartSystemTy__LoadMapData_007cd7b0);
    if (iVar11 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_startsys_cpp_007cd718,0x231);
    return;
  }
  if (param_1 != 0) {
    piVar2 = &pSStack_1c[0x17].systemId;
    if (pSStack_1c[0x17].systemId != 0) {
      FUN_006ab060(piVar2);
    }
    puVar5 = FUN_0070a5a0(param_1,0xc,PTR_s_SMALL_MAP_0079c1dc,2,0);
    *piVar2 = (int)puVar5;
    if (puVar5 != (ushort *)0x0) {
      FUN_006c7f90((int)puVar5,(byte *)0x0,*(HPALETTE *)(DAT_0080759c + 0x4b4),0);
      FUN_006b5440((int)this_01[0x17].objects,0,0x14,0x14,*piVar2,0,0);
    }
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = FUN_0071aa10(param_1,PTR_s_OBJECTIVES_0079c1d4,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    puStack_18 = &uStack_10;
    puStack_8 = &DAT_008087b6;
    puVar5 = cMf32::RecGet((cMf32 *)param_1,0,PTR_s_DESCRIPTOR_0079c1d8,(int *)&puStack_8,0);
    if ((puVar5 == (ushort *)0x0) ||
       ((((param_2 == '\f' || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) &&
        (puVar5 = cMf32::RecGet((cMf32 *)param_1,0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&puStack_18,
                                0), puVar5 == (ushort *)0x0)))) {
      puVar13 = &DAT_008087b6;
      for (iVar4 = 0x666; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
    }
    else {
      DAT_008087b5 = 0;
      thunk_FUN_0056ef50(0x807620);
      puVar13 = &DAT_0080c3c3;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      puStack_8 = &DAT_0080c3c3;
      cMf32::RecGet((cMf32 *)param_1,0xc,PTR_s_TITLE_MISSION_0079c1cc,(int *)&puStack_8,0);
      iVar4 = 0;
      if (0 < (int)DAT_0080c4cb[2]) {
        if ((int)DAT_0080c4cb[2] < 1) {
          pcVar10 = (char *)0x0;
          goto LAB_005dc22d;
        }
        do {
          pcVar10 = *(char **)(DAT_0080c4cb[5] + iVar4 * 4);
LAB_005dc22d:
          thunk_FUN_005411a0((int)this_01[0x2a].nextMessages,pcVar10,s_____s_007c72b4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)DAT_0080c4cb[2]);
      }
      iVar4 = this_01[1].systemId;
      *(undefined4 *)(iVar4 + 0x7e) = 1;
      puVar6 = (undefined2 *)(iVar4 + 0x9e);
      *puVar6 = 0;
      *(undefined1 *)puVar6 = DAT_007cc854;
      puStack_14 = ccFntTy::FormIndentSarr
                             ((ccFntTy *)this_01[1].systemId,(int)this_01[0x2a].nextMessages,
                              (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                              *(int *)((int)this_01[0x2a].messages + 4) + -0x14,0,0xffffffff,
                              (char *)0x0,1);
      if (this_01[0x2a].nextMessages != (byte *)0x0) {
        FUN_006b5570(this_01[0x2a].nextMessages);
      }
      puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
      this_01[0x2a].nextMessages = puVar7;
      ppSVar1 = &this_01[1].parentSystem;
      uVar8 = FUN_006b0140(0x2347,DAT_00807618);
      wsprintfA((LPSTR)ppSVar1,s__2__s__007cd800,uVar8);
      Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,(char *)ppSVar1);
      wsprintfA((LPSTR)ppSVar1,s__0__s_007cd7f8,&DAT_0080c3c3);
      Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,(char *)ppSVar1);
      Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,&DAT_007c3b5c);
      uVar9 = DAT_008087c4 & 0xffff;
      uVar12 = (uint)DAT_008087c2;
      uVar8 = FUN_006b0140(0x2344,DAT_00807618);
      wsprintfA((LPSTR)ppSVar1,s__2__s___0_d_2x_0_d_007cd7e0,uVar8,uVar12,uVar9);
      Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,(char *)ppSVar1);
      uVar9 = DAT_008087c4 >> 0x10 & 0xff;
      uVar8 = FUN_006b0140(0x2345,DAT_00807618);
      wsprintfA((LPSTR)ppSVar1,s__2__s___0_d_007cd7d0,uVar8,uVar9);
      Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,(char *)ppSVar1);
      Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,&DAT_007c3b5c);
      switch(param_2) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\x05':
      case '\t':
      case '\n':
      case '\v':
      case '\f':
      case '\r':
      case '\x0e':
      case '\x0f':
      case '\x10':
      case '\x13':
        uVar8 = FUN_006b0140(0x2346,DAT_00807618);
        wsprintfA((LPSTR)ppSVar1,s__2__s__007cd800,uVar8);
        Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,(char *)ppSVar1);
        Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,&DAT_007c3b5c);
      }
      puVar7 = puStack_14;
      if (puStack_14 != (uint *)0x0) {
        if (puStack_14[2] != 0) {
          ccFntTy::SepColorStrInSarr((ccFntTy *)this_01[1].systemId,puStack_14,puStack_14);
        }
        iVar4 = 0;
        if (0 < (int)puVar7[2]) {
          if ((int)puVar7[2] < 1) {
            pcVar10 = (char *)0x0;
            goto LAB_005dc430;
          }
          do {
            pcVar10 = *(char **)(puVar7[5] + iVar4 * 4);
LAB_005dc430:
            Library::DKW::TBL::FUN_006b5aa0((int)this_01[0x2a].nextMessages,pcVar10);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)puVar7[2]);
        }
        FUN_006b5570((byte *)puVar7);
      }
      if (((param_2 == '\f') || (param_2 == '\x10')) ||
         ((param_2 == '\x13' && (DAT_00803400 == '\f')))) {
        DAT_0080874d = uStack_10;
        DAT_0080874e = uStack_f;
        DAT_0080874f = uStack_e;
        DAT_00808750 = uStack_d;
      }
      uStack_2c = 0x28;
      iVar4 = *(int *)((int)&this_01[0x1c].nextMessages + 1);
      uStack_28 = CONCAT22(*(undefined2 *)((int)this_01[0x2a].nextMessages + 8),1);
      if (iVar4 != 0) {
        SystemClassTy::SendMessage(this_01,2,iVar4,(int)auStack_3c);
      }
      iVar4 = *(int *)((int)&this_01[0x1c].nextMessages + 1);
      uStack_2c = 0x22;
      uStack_28 = 0;
      if (iVar4 != 0) {
        SystemClassTy::SendMessage(this_01,2,iVar4,(int)auStack_3c);
      }
      iVar4 = *(int *)((int)&this_01[0x1c].nextMessages + 1);
      uStack_2c = 0x20;
      uStack_28 = 1;
      if (iVar4 != 0) {
        SystemClassTy::SendMessage(this_01,2,iVar4,(int)auStack_3c);
      }
    }
    this_00 = *(MMsgTy **)((int)&this_01[0x17].messages + 2);
    if (this_00 != (MMsgTy *)0x0) {
      puVar13 = &uStack_58;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined2 *)puVar13 = 0;
      uStack_58._0_2_ = 1;
      uStack_58._2_2_ = 1;
      MMsgTy::StatePanel(this_00,(int)&uStack_58);
    }
  }
  g_currentExceptionFrame = IStack_9c.previous;
  return;
}

