
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::ShowSprites */

void __thiscall MMsgTy::ShowSprites(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint *puVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (*(uint *)&local_8[1].field_0x51 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&local_8[1].field_0x95,*(uint *)&local_8[1].field_0x51,0xfffffffe,
                 *(uint *)&local_8[1].field_0x69,*(uint *)&local_8[1].field_0x6d);
    }
    iVar3 = 0;
    if (pMVar2->field_0x9a != '\0') {
      puVar5 = (uint *)&pMVar2->field_0xe7;
      do {
        if (*puVar5 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)puVar5[0x11],*puVar5,0xfffffffe,puVar5[6],puVar5[7]);
        }
        iVar3 = iVar3 + 1;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
      } while (iVar3 < (int)(uint)(byte)pMVar2->field_0x9a);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x4b,0,iVar3,&DAT_007a4ccc,
                             s_MMsgTy__ShowSprites_007ccc48);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x4b);
  return;
}

