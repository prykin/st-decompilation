
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::HelpOrganize */

void __thiscall AiTactClassTy::HelpOrganize(AiTactClassTy *this,int param_1)

{
  AiTactClassTy AVar1;
  AiTactClassTy AVar2;
  char cVar3;
  AiFltClassTy *this_00;
  code *pcVar4;
  uint uVar5;
  AiTactClassTy *this_01;
  short sVar6;
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  int iVar10;
  void *unaff_EDI;
  uint *puVar11;
  bool bVar12;
  InternalExceptionFrame local_98;
  uint local_54 [2];
  char local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  AiTactClassTy local_14;
  undefined3 uStack_13;
  uint local_10;
  AiTactClassTy *local_c;
  uint local_8;
  
  local_10 = CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)(param_1 + 0x16));
  local_20 = CONCAT22((short)((uint)unaff_EDI >> 0x10),*(short *)(param_1 + 0x1a));
  AVar1 = *(AiTactClassTy *)(param_1 + 0x18);
  _local_14 = CONCAT31(uStack_13,AVar1);
  if (7 < (byte)AVar1) {
    return;
  }
  if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[(char)AVar1 * 0x51])) {
    return;
  }
  if ((int)(char)AVar1 == *(int *)(this + 0x24)) {
    return;
  }
  AVar2 = this[0x24];
  local_8 = CONCAT31(local_8._1_3_,AVar2);
  if (DAT_00808a8f != '\0') {
    bVar12 = (&DAT_008087ea)[(uint)(byte)AVar2 * 0x51] != (&DAT_008087ea)[(uint)(byte)AVar1 * 0x51];
    goto LAB_00690763;
  }
  if (AVar1 == AVar2) {
LAB_00690758:
    iVar7 = 0;
  }
  else {
    uVar8 = (uint)(byte)AVar1;
    uVar5 = (uint)(byte)AVar2;
    cVar3 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar5);
    if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\0')) {
      iVar7 = -2;
    }
    else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\0')) {
      iVar7 = -1;
    }
    else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) == '\x01')) {
      iVar7 = 1;
    }
    else {
      if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar8) != '\x01'))
      goto LAB_00690758;
      iVar7 = 2;
    }
  }
  bVar12 = iVar7 < 0;
LAB_00690763:
  if ((bVar12) && (*(short *)(param_1 + 0x1a) != -1)) {
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;
    local_c = this;
    iVar7 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_01 = local_c;
    if (iVar7 == 0) {
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = STAllPlayersC::GetObjPtr(DAT_007fa174,(uint)(byte)local_c[0x24],local_10,1);
      }
      if ((uVar8 != 0) && (iVar7 = thunk_FUN_0068e290(this_01,*(short *)(uVar8 + 0x30)), iVar7 != 0)
         ) {
        if (*(short *)(iVar7 + 0x7b) == 1) {
          sVar6 = (short)local_10;
        }
        else {
          sVar6 = -1;
        }
        uVar8 = thunk_FUN_00690550(this_01,*(short *)(iVar7 + 0x7d),sVar6);
        if ((int)uVar8 < 0) {
          iVar10 = *(int *)(this_01 + 0xa5);
          local_8 = 0;
          if (0 < *(int *)(iVar10 + 0xc)) {
            bVar12 = *(int *)(iVar10 + 0xc) != 0;
            do {
              if (bVar12) {
                iVar10 = *(int *)(iVar10 + 8) * local_8 + *(int *)(iVar10 + 0x1c);
              }
              else {
                iVar10 = 0;
              }
              if ((iVar10 != 0) &&
                 (this_00 = *(AiFltClassTy **)(iVar10 + 4), this_00 != (AiFltClassTy *)0x0)) {
                puVar11 = local_54;
                for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar11 = 0;
                  puVar11 = puVar11 + 1;
                }
                local_54[0] = 100;
                local_4b = 1;
                local_54[1] = *(uint *)(local_c + 300);
                local_48 = *(undefined2 *)(iVar7 + 0x7d);
                local_4a = (undefined2)local_10;
                local_46 = *(undefined2 *)(iVar7 + 0x7b);
                local_44 = (undefined2)local_20;
                local_42 = local_14;
                AiFltClassTy::GetAiMess(this_00,local_54);
                if ('\0' < local_4c) {
                  _local_1c = CONCAT22(*(undefined2 *)(iVar7 + 0x7d),
                                       *(undefined2 *)(*(int *)(iVar10 + 4) + 0x7d));
                  local_18 = CONCAT22(*(undefined2 *)(iVar7 + 0x7b),(short)local_10);
                  Library::DKW::TBL::FUN_006ae1c0
                            (*(uint **)(local_c + 0xc9),(undefined4 *)&local_1c);
                  g_currentExceptionFrame = local_98.previous;
                  return;
                }
              }
              local_8 = local_8 + 1;
              iVar10 = *(int *)(local_c + 0xa5);
              bVar12 = local_8 < *(uint *)(iVar10 + 0xc);
              if ((int)*(uint *)(iVar10 + 0xc) <= (int)local_8) {
                g_currentExceptionFrame = local_98.previous;
                return;
              }
            } while( true );
          }
        }
      }
      g_currentExceptionFrame = local_98.previous;
      return;
    }
    g_currentExceptionFrame = local_98.previous;
    iVar10 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x433,0,iVar7,&DAT_007a4ccc,
                                s_AiTactClassTy__HelpOrganize_007d5894);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x434);
  }
  return;
}

