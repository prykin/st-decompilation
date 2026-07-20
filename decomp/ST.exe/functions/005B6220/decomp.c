
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::DoneMMObj */

void __thiscall MMObjTy::DoneMMObj(MMObjTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint *puVar5;
  SpriteClassTy *this_00;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 0xd;
    puVar5 = &local_8->field_0066;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(pMVar2->field_000C,*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    this_00 = (SpriteClassTy *)&pMVar2[1].field_0x91;
    iVar3 = 0xd;
    do {
      SpriteClassTy::CloseSprite(this_00 + -1);
      SpriteClassTy::CloseSprite(this_00);
      if (*(char *)((int)&this_00[-2].field_008D + 3) != '\0') {
        SpriteClassTy::CloseSprite(this_00 + 1);
      }
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0xe5,0,iVar3,&DAT_007a4ccc,
                             s_MMObjTy__DoneMMObj_007ccacc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0xe5);
  return;
}

