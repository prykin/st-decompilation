
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelSI */

void __thiscall CPanelTy::Update2PanelSI(CPanelTy *this)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_ac;
  int local_68;
  char local_64;
  char local_63;
  byte local_4b;
  char local_34;
  CPanelTy *local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234,0,iVar5,&DAT_007a4ccc
                               ,s_CPanelTy__Update2PanelSI_007c2620);
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &local_c->field_0xb99;
  piVar8 = (int *)puVar1;
  piVar9 = &local_68;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  puVar10 = (undefined4 *)puVar1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  STAllPlayersC::GetPanelInfo(DAT_007fa174,2,(int *)puVar1);
  if (local_63 == this_00->field_0xb9e) {
    switch(this_00->field_0xb9e) {
    case 1:
      if ((local_68 == *(int *)&this_00->field_0xb99) && (local_64 == this_00->field_0xb9d)) {
        thunk_FUN_00501d00(this_00,(int *)&this_00->field_0xb99,&local_68);
        switch(*(undefined4 *)&this_00->field_0xb99) {
        case 0x1a:
          goto switchD_005030a2_caseD_1a;
        case 0x1b:
        case 0x1d:
        case 0x23:
        case 0x24:
          cVar2 = this_00->field_0xbcd;
          if (cVar2 == local_34) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          if ((cVar2 != -1) && (local_8 = (uint)local_8._1_3_ << 8, cVar2 != '\0')) {
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,1);
              thunk_FUN_00540760((undefined4 *)this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,
                                 '\x01',pbVar6);
              bVar4 = (byte)local_8 + 1;
              local_8 = CONCAT31(local_8._1_3_,bVar4);
            } while (bVar4 < (byte)this_00->field_0xbcd);
          }
          if ((byte)local_8 < 0x14) {
            iVar7 = 0x14 - (local_8 & 0xff);
            iVar5 = (local_8 & 0xff) * 4 + 0x3f;
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
              thunk_FUN_00540760((undefined4 *)this_00->field_018C,iVar5,0x87,'\x01',pbVar6);
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if ((int)*(uint *)&this_00->field_0x154 < 0) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)&this_00->field_0x154,0xffffffff,
                     *(uint *)&this_00->field_0x48,*(uint *)&this_00->field_0xa0);
          g_currentExceptionFrame = local_ac.previous;
          return;
        default:
          g_currentExceptionFrame = local_ac.previous;
          return;
        }
      }
      break;
    case 2:
    case 3:
      if ((local_68 == *(int *)&this_00->field_0xb99) && (local_64 == this_00->field_0xb9d)) {
        thunk_FUN_00501d00(this_00,(int *)&this_00->field_0xb99,&local_68);
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    case 4:
      if (local_68 == *(int *)&this_00->field_0xb99) {
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    default:
      goto switchD_00503051_default;
    }
  }
  PaintCtrlBoatSI(this_00);
  SetControlBoatSI(this_00);
  thunk_FUN_00501a10((int)this_00);
switchD_00503051_default:
  g_currentExceptionFrame = local_ac.previous;
  return;
switchD_005030a2_caseD_1a:
  if (this_00->field_0xbb6 == local_4b) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if ((this_00->field_0xbb6 & 0xfe) != 0) {
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,3);
      thunk_FUN_00540760((undefined4 *)this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',
                         pbVar6);
      bVar4 = (byte)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar4);
    } while (bVar4 < (byte)this_00->field_0xbb6 >> 1);
  }
  if ((byte)local_8 < 0x14) {
    iVar7 = 0x14 - (local_8 & 0xff);
    iVar5 = (local_8 & 0xff) * 4 + 0x3f;
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
      thunk_FUN_00540760((undefined4 *)this_00->field_018C,iVar5,0x87,'\x01',pbVar6);
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((int)*(uint *)&this_00->field_0x154 < 0) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,*(uint *)&this_00->field_0x154,0xffffffff,*(uint *)&this_00->field_0x48,
             *(uint *)&this_00->field_0xa0);
  g_currentExceptionFrame = local_ac.previous;
  return;
}

