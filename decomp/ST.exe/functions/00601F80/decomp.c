
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_dest.cpp
   STDestC::GetMessage */

undefined4 __thiscall STDestC::GetMessage(STDestC *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  uint uVar1;
  code *pcVar2;
  AnonShape_00602BE0_B1CC517D *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  AnonShape_00602BE0_B1CC517D *local_8;
  
  local_8 = (AnonShape_00602BE0_B1CC517D *)this;
  iVar4 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar4 != 0xffff) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pAVar3 = local_8;
    if (iVar4 == 0) {
      uVar1 = param_1->field_0010;
      if (uVar1 < 0x110) {
        if (uVar1 == 0x10f) {
          local_10 = thunk_FUN_006025d0(local_8,&local_c);
          STPlaySystemC::SaveObjData
                    (PTR_00802a38,*(undefined4 *)&pAVar3->field_0x18,local_10,local_c);
          FUN_006ab060(&local_10);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (uVar1 == 0) {
          if ((local_8->field_036E != 0) && (local_8->field_036E != 4)) {
            thunk_FUN_00602be0(local_8);
          }
          if ((*(byte *)&PTR_00802a38->field_00E4 & 0xf) == 0) {
            thunk_FUN_00603120((AnonShape_00603120_1977E258 *)pAVar3);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (uVar1 == 2) {
          puVar5 = param_1->field_0014;
          if (puVar5[3] != 2) {
            puVar8 = (undefined4 *)&local_8->field_0x231;
            for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar8 = puVar8 + 1;
            }
            *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
            iVar4 = thunk_FUN_006024b0((int)local_8);
            if (iVar4 != 0) {
              if ((*(int *)&pAVar3->field_0x3a7 != 0) && (iVar4 = thunk_FUN_006029c0(), iVar4 == 0))
              {
                thunk_FUN_00602440(pAVar3);
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              iVar4 = STAllPlayersC::RegisterBlot(g_sTAllPlayers_007FA174,0xffff,pAVar3);
              if (iVar4 == 0) {
                pAVar3->field_0x3a5 = 1;
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
            }
            thunk_FUN_00602440(pAVar3);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar4 = thunk_FUN_00602660(local_8,puVar5);
          if (-1 < iVar4) {
            if (pAVar3->field_036E == 4) {
              puVar5 = thunk_FUN_00602e90();
              pAVar3->field_03AB = puVar5;
              if (puVar5 == (undefined4 *)0x0) {
                thunk_FUN_00602440(pAVar3);
              }
            }
            else if ((*(int *)&pAVar3->field_0x3a7 != 0) && (pAVar3->field_036E != 0)) {
              thunk_FUN_00602be0(pAVar3);
            }
            if (((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (pAVar3->field_0x3a5 != '\0'))
               && (iVar4 = STAllPlayersC::RegisterBlot
                                     (g_sTAllPlayers_007FA174,*(ushort *)&pAVar3->field_0x32,pAVar3)
                  , iVar4 != 0)) {
              thunk_FUN_00602440(pAVar3);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
          }
        }
        else if (((uVar1 == 3) &&
                 (thunk_FUN_004ad310((STT3DSprC *)&local_8->field_0x1d5),
                 pAVar3->field_0x3a5 != '\0')) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
        {
          STAllPlayersC::UnRegisterBlot
                    (g_sTAllPlayers_007FA174,
                     CONCAT22(extraout_var,*(undefined2 *)&pAVar3->field_0x32),
                     (AnonShape_0044AA20_1EE9340C *)pAVar3);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (uVar1 == 0x112) {
        if (-1 < (int)local_8->field_039B) {
          thunk_FUN_004ad5e0((int)&local_8->field_0x1d5);
        }
      }
      else if (uVar1 == 0x113) {
        if (-1 < (int)local_8->field_039B) {
          (*(code *)**(undefined4 **)&local_8->field_0x1d5)();
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (uVar1 == 0x128) {
        thunk_FUN_004ad430((int)&local_8->field_0x1d5);
        thunk_FUN_00602440(pAVar3);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_dest_cpp_007ced34,0x95,0,iVar4,&DAT_007a4ccc,
                               s_STDestC__GetMessage_007ced58);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    RaiseInternalException(iVar4,0,s_E____titans_nick_to_dest_cpp_007ced34,0x97);
  }
  return 0xffff;
}

