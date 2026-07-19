
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DrawSprite */

void __thiscall CursorClassTy::DrawSprite(CursorClassTy *this,int param_1,int param_2)

{
  SpriteClassTy *this_00;
  code *pcVar1;
  uint uVar2;
  CursorClassTy *pCVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  uint local_10;
  CursorClassTy *local_c;
  int local_8;
  
  local_c = this;
  local_10 = FUN_006e51b0(*(int *)(this + 0x10));
  local_8 = 0;
  if (*(uint *)(this + 0x1c) == 0xffffffff) {
    iVar5 = 0;
  }
  else {
    bVar4 = FUN_006b33f0(*(int *)(this + 0x60),*(uint *)(this + 0x1c));
    iVar5 = CONCAT31(extraout_var,bVar4);
  }
  if (iVar5 != 0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar3 = local_c;
    uVar2 = local_10;
    if (iVar5 == 0) {
      *(undefined4 *)(local_c + 0x20) = 0xfffffffe;
      if (param_1 != -1) {
        *(int *)(local_c + 0x34) = param_1;
        local_8 = 1;
      }
      if (param_2 != -1) {
        *(int *)(local_c + 0x38) = param_2;
        local_8 = 1;
      }
      if ((uint)(*(int *)(local_c + 0x58) + *(int *)(local_c + 0x5c)) <= local_10) {
        *(undefined4 *)(local_c + 0x20) = 0xffffffff;
        *(uint *)(local_c + 0x5c) = local_10;
        local_8 = 1;
      }
      if (local_8 != 0) {
        if (*(int *)(local_c + 0xa9) == 0) {
          FUN_006b8bc0(*(int **)(local_c + 0xad),*(int *)(local_c + 0x34),*(int *)(local_c + 0x38),
                       *(int *)(local_c + 0x20));
        }
        else {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)DAT_008075a8,*(uint *)(local_c + 0x1c),*(uint *)(local_c + 0x20),
                     *(int *)(local_c + 0xb9) + *(int *)(local_c + 0x34),
                     *(int *)(local_c + 0xbd) + *(int *)(local_c + 0x38));
        }
      }
      this_00 = *(SpriteClassTy **)(pCVar3 + 0x4eb);
      if ((this_00 != (SpriteClassTy *)0x0) && (DAT_00807598 != (void *)0x0)) {
        if (*(int *)(this_00 + 0xc) + -1 <= *(int *)(this_00 + 8)) {
          SpriteClassTy::CloseSprite(this_00);
          Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pCVar3 + 0x4eb));
          *(undefined4 *)(pCVar3 + 0x4eb) = 0;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if ((uint)(*(int *)(this_00 + 0x40) + *(int *)(this_00 + 0x44)) <= uVar2) {
          *(uint *)(this_00 + 0x44) = uVar2;
          *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
          FUN_006e2970(DAT_00807598,*(undefined4 *)(pCVar3 + 0x4ef),*(undefined4 *)(pCVar3 + 0x4f3),
                       *(undefined4 *)(pCVar3 + 0x4f7),(int *)(*(int *)(pCVar3 + 0x4eb) + 0x1c),
                       (int *)(*(int *)(pCVar3 + 0x4eb) + 0x20));
          *(int *)(*(int *)(pCVar3 + 0x4eb) + 0x1c) =
               *(int *)(*(int *)(pCVar3 + 0x4eb) + 0x1c) -
               *(int *)(*(int *)(pCVar3 + 0x4e7) + 9) / 2;
          *(int *)(*(int *)(pCVar3 + 0x4eb) + 0x20) =
               *(int *)(*(int *)(pCVar3 + 0x4eb) + 0x20) -
               *(int *)(*(int *)(pCVar3 + 0x4e7) + 0xd) / 2;
          iVar5 = *(int *)(pCVar3 + 0x4eb);
          Library::DKW::DDX::FUN_006b3730
                    (DAT_008075a8,*(uint *)(iVar5 + 4),*(uint *)(iVar5 + 8),*(uint *)(iVar5 + 0x1c),
                     *(uint *)(iVar5 + 0x20));
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xcc,0,iVar5,
                               &DAT_007a4ccc,s_CursorClassTy__DrawSprite_007c7e48);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xcd);
  }
  return;
}

