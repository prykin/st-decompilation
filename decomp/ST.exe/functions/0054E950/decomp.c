
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::AddToRep */

void __thiscall STPlaySystemC::AddToRep(STPlaySystemC *this,undefined4 *param_1,uint param_2)

{
  code *pcVar1;
  STPlaySystemC *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  int *local_8;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      puVar4 = Library::DKW::LIB::FUN_006aac10(param_2 + 8);
      pSVar2 = local_c;
      puVar4[1] = param_2;
      puVar7 = puVar4 + 2;
      for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar7 = *param_1;
        param_1 = param_1 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = &local_c->field_0065;
      FUN_006b9910(puVar7,(int)puVar4);
      uVar6 = pSVar2->field_0069 + 1;
      pSVar2->field_0069 = uVar6;
      if (0xd2 < uVar6) {
        local_8 = (int *)*puVar7;
        iVar3 = FUN_006b98c0(puVar7,local_8);
        if (iVar3 != 0) {
          if (local_8 != (int *)0x0) {
            FreeAndNull(&local_8);
          }
          pSVar2->field_0069 = pSVar2->field_0069 + -1;
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x482,0,iVar3,
                               &DAT_007a4ccc,s_STPlaySystemC__AddToRep_007c857c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x484);
  }
  return;
}

