
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DrawSprite */

void __thiscall CursorClassTy::DrawSprite(CursorClassTy *this,int param_1,int param_2)

{
  SpriteClassTy *pSVar1;
  code *pcVar2;
  DWORD DVar3;
  CursorClassTy *pCVar4;
  bool bVar5;
  undefined3 extraout_var;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  DWORD local_10;
  CursorClassTy *local_c;
  int local_8;
  
  local_c = this;
  local_10 = FUN_006e51b0((int)this->field_0010);
  local_8 = 0;
  if (this->field_001C == 0xffffffff) {
    iVar6 = 0;
  }
  else {
    bVar5 = FUN_006b33f0(this->field_0060,this->field_001C);
    iVar6 = CONCAT31(extraout_var,bVar5);
  }
  if (iVar6 != 0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar4 = local_c;
    DVar3 = local_10;
    if (iVar6 == 0) {
      local_c->field_0020 = 0xfffffffe;
      if (param_1 != -1) {
        local_c->field_0034 = param_1;
        local_8 = 1;
      }
      if (param_2 != -1) {
        local_c->field_0038 = param_2;
        local_8 = 1;
      }
      if ((uint)(local_c->field_0058 + local_c->field_005C) <= local_10) {
        local_c->field_0020 = 0xffffffff;
        local_c->field_005C = local_10;
        local_8 = 1;
      }
      if (local_8 != 0) {
        if (local_c->field_00A9 == 0) {
          FUN_006b8bc0((int *)local_c->field_00AD,local_c->field_0034,local_c->field_0038,
                       local_c->field_0020);
        }
        else {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)DAT_008075a8,local_c->field_001C,local_c->field_0020,
                     local_c->field_00B9 + local_c->field_0034,
                     local_c->field_00BD + local_c->field_0038);
        }
      }
      pSVar1 = pCVar4->field_04EB;
      if ((pSVar1 != (SpriteClassTy *)0x0) && (DAT_00807598 != (void *)0x0)) {
        if (pSVar1->field_000C + -1 <= (int)pSVar1->field_0008) {
          SpriteClassTy::CloseSprite(pSVar1);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)pCVar4->field_04EB);
          pCVar4->field_04EB = (SpriteClassTy *)0x0;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if ((uint)(pSVar1->field_0040 + pSVar1->field_0044) <= DVar3) {
          pSVar1->field_0044 = DVar3;
          pSVar1->field_0008 = pSVar1->field_0008 + 1;
          FUN_006e2970(DAT_00807598,*(undefined4 *)(pCVar4 + 1),*(undefined4 *)&pCVar4[1].field_0x4,
                       pCVar4[1].field_0008,&pCVar4->field_04EB->field_001C,
                       &pCVar4->field_04EB->field_0020);
          pCVar4->field_04EB->field_001C =
               pCVar4->field_04EB->field_001C - *(int *)(pCVar4->field_04E7 + 9) / 2;
          pCVar4->field_04EB->field_0020 =
               pCVar4->field_04EB->field_0020 - *(int *)(pCVar4->field_04E7 + 0xd) / 2;
          pSVar1 = pCVar4->field_04EB;
          Library::DKW::DDX::FUN_006b3730
                    (DAT_008075a8,pSVar1->field_0004,pSVar1->field_0008,pSVar1->field_001C,
                     pSVar1->field_0020);
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xcc,0,iVar6,
                               &DAT_007a4ccc,s_CursorClassTy__DrawSprite_007c7e48);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xcd);
  }
  return;
}

