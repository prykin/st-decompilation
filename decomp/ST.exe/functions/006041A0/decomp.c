
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::CreateGroupPart */

int __thiscall STExplosionC::CreateGroupPart(STExplosionC *this,int param_1)

{
  code *pcVar1;
  STExplosionC *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  int iVar5;
  void *unaff_EDI;
  int *piVar6;
  InternalExceptionFrame local_50;
  STExplosionC *local_c;
  int local_8;
  
  iVar5 = 0;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    if (0 < param_1) {
      piVar6 = &local_c->field_0219;
      do {
        puVar4 = thunk_FUN_00629010();
        *piVar6 = (int)puVar4;
        *(STExplosionC **)((int)puVar4 + 0xce) = pSVar2;
        iVar3 = *piVar6;
        piVar6 = piVar6 + 1;
        *(int *)(iVar3 + 0xd2) = iVar5;
        local_8 = local_8 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (0 < local_8) {
    puVar4 = &local_c->field_0219;
    iVar5 = local_8;
    do {
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)*puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = ReportDebugMessage(s_E____titans_nick_to_Expl_cpp_007cf630,0x1f6,0,iVar3,&DAT_007a4ccc,
                             s_STExplosionC__CreateGroupPart_007cf670);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_nick_to_Expl_cpp_007cf630,0x1f8);
  return 0xffff;
}

