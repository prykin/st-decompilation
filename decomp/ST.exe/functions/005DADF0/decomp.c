
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::InitChat */

void __thiscall StartSystemTy::InitChat(StartSystemTy *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (DAT_0080c4fa != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570(DAT_0080c4fa);
    }
    DAT_0080c4fa = (AnonShape_006B5570_4D68B99C *)
                   Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,0x14);
    iVar2 = local_8->field_067E;
    if (iVar2 != 0) {
      uVar6 = *(uint *)(iVar2 + 0x14);
      if (uVar6 == 0) {
        uVar6 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar2 + 8);
      }
      puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar3 = 0xff;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0xda,0,iVar2,&DAT_007a4ccc,
                             s_StartSystemTy__InitChat_007cd75c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_startsys_cpp_007cd718,0xdb);
  return;
}

