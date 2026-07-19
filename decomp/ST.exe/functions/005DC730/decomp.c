
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::SetObjectives */

void __thiscall
StartSystemTy::SetObjectives(StartSystemTy *this,int param_1,char *param_2,int param_3)

{
  SystemClassTy **ppSVar1;
  code *pcVar2;
  SystemClassTy *this_00;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_70;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  uint *local_c;
  SystemClassTy *local_8;
  
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = (SystemClassTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x26b,0,iVar3,&DAT_007a4ccc
                               ,s_StartSystemTy__SetObjectives_007cd808);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_startsys_cpp_007cd718,0x26b);
    return;
  }
  if (param_1 != 0) {
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
    if (param_2 != (char *)0x0) {
      DAT_0080c4cb = FUN_0071aa10(param_1,param_2,0);
    }
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    this_00 = local_8;
    if (local_8[0x2a].nextMessages != (byte *)0x0) {
      FUN_006b5570(local_8[0x2a].nextMessages);
    }
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_00[0x2a].nextMessages = puVar4;
    iVar3 = 0;
    if (0 < (int)DAT_0080c4cb[2]) {
      if ((int)DAT_0080c4cb[2] < 1) {
        pcVar8 = (char *)0x0;
        goto LAB_005dc828;
      }
      do {
        pcVar8 = *(char **)(DAT_0080c4cb[5] + iVar3 * 4);
LAB_005dc828:
        thunk_FUN_005411a0((int)this_00[0x2a].nextMessages,pcVar8,s_____s_007c72b4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)DAT_0080c4cb[2]);
    }
    iVar3 = this_00[1].systemId;
    *(undefined4 *)(iVar3 + 0x7e) = 1;
    puVar5 = (undefined2 *)(iVar3 + 0x9e);
    *puVar5 = 0;
    *(undefined1 *)puVar5 = DAT_007cc854;
    local_c = ccFntTy::FormIndentSarr
                        ((ccFntTy *)this_00[1].systemId,(int)this_00[0x2a].nextMessages,
                         (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                         *(int *)((int)this_00[0x2a].messages + 4) + -0x14,0,0xffffffff,(char *)0x0,
                         1);
    if (this_00[0x2a].nextMessages != (byte *)0x0) {
      FUN_006b5570(this_00[0x2a].nextMessages);
    }
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_00[0x2a].nextMessages = puVar4;
    ppSVar1 = &this_00[1].parentSystem;
    uVar6 = FUN_006b0140(0x2347,DAT_00807618);
    wsprintfA((LPSTR)ppSVar1,s__2__s__007cd800,uVar6);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,(char *)ppSVar1);
    wsprintfA((LPSTR)ppSVar1,s__0__s_007cd7f8,&DAT_0080c3c3);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,(char *)ppSVar1);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,&DAT_007c3b5c);
    uVar7 = DAT_008087c4 & 0xffff;
    uVar10 = (uint)DAT_008087c2;
    uVar6 = FUN_006b0140(0x2344,DAT_00807618);
    wsprintfA((LPSTR)ppSVar1,s__2__s___0_d_2x_0_d_007cd7e0,uVar6,uVar10,uVar7);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,(char *)ppSVar1);
    uVar7 = DAT_008087c4 >> 0x10 & 0xff;
    uVar6 = FUN_006b0140(0x2345,DAT_00807618);
    wsprintfA((LPSTR)ppSVar1,s__2__s___0_d_007cd7d0,uVar6,uVar7);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,(char *)ppSVar1);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,&DAT_007c3b5c);
    uVar6 = FUN_006b0140(0x2346,DAT_00807618);
    wsprintfA((LPSTR)ppSVar1,s__2__s__007cd800,uVar6);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,(char *)ppSVar1);
    Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,&DAT_007c3b5c);
    puVar4 = local_c;
    if (local_c != (uint *)0x0) {
      if (local_c[2] != 0) {
        ccFntTy::SepColorStrInSarr((ccFntTy *)this_00[1].systemId,local_c,local_c);
      }
      iVar3 = 0;
      if (0 < (int)puVar4[2]) {
        if ((int)puVar4[2] < 1) {
          pcVar8 = (char *)0x0;
          goto LAB_005dca07;
        }
        do {
          pcVar8 = *(char **)(puVar4[5] + iVar3 * 4);
LAB_005dca07:
          Library::DKW::TBL::FUN_006b5aa0((int)this_00[0x2a].nextMessages,pcVar8);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)puVar4[2]);
      }
      FUN_006b5570((byte *)puVar4);
    }
    iVar3 = *(int *)((int)&this_00[0x1c].nextMessages + 1);
    local_1c = 0x28;
    local_18 = CONCAT22(*(undefined2 *)((int)this_00[0x2a].nextMessages + 8),1);
    if (iVar3 != 0) {
      SystemClassTy::SendMessage(this_00,2,iVar3,(int)local_2c);
    }
    iVar3 = *(int *)((int)&this_00[0x1c].nextMessages + 1);
    local_1c = 0x22;
    local_18 = 0;
    if (iVar3 != 0) {
      SystemClassTy::SendMessage(this_00,2,iVar3,(int)local_2c);
    }
    local_1c = 0x20;
    local_18 = (uint)(param_3 != 0);
    iVar3 = *(int *)((int)&this_00[0x1c].nextMessages + 1);
    if (iVar3 != 0) {
      SystemClassTy::SendMessage(this_00,2,iVar3,(int)local_2c);
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

