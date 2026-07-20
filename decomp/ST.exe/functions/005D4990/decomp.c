
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::PrepareAFT */

void __thiscall
SettMapMTy::PrepareAFT(SettMapMTy *this,AnonShape_005D4990_5F0525CF *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  if ((param_1 != (AnonShape_005D4990_5F0525CF *)0x0) && (param_2 != (uint *)0x0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      if (*param_2 != 0xffffffff) {
        uVar5 = *(uint *)&local_8->field_1A5B->field_0x6a6;
        puVar6 = (undefined4 *)param_1->field_0008;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        uVar5 = *param_2;
        iVar2 = param_1->field_0008;
        uVar4 = 0;
        param_1->field_0004 = uVar5;
        if (uVar5 != 0) {
          do {
            param_2 = param_2 + 1;
            if (*param_2 < *(uint *)&local_8->field_1A5B->field_0x6a6) {
              *(undefined1 *)(*param_2 + iVar2) = 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)param_1->field_0004);
        }
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      uVar5 = *(uint *)&local_8->field_1A5B->field_0x6a6;
      puVar6 = (undefined4 *)param_1->field_0008;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0x1010101;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 1;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      param_1->field_0004 = *(undefined4 *)&local_8->field_1A5B->field_0x6a6;
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x9af,0,iVar2,&DAT_007a4ccc
                               ,s_SettMapMTy__PrepareAFT_007cd528);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_settmobj_cpp_007cd258,0x9af);
  }
  return;
}

