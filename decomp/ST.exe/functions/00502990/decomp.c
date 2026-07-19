
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintCtrlBoatSI */

void __thiscall CPanelTy::PaintCtrlBoatSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x1ed,0,iVar3,&DAT_007a4ccc
                               ,s_CPanelTy__PaintCtrlBoatSI_007c2600);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x1ed);
    return;
  }
  switch(local_c->field_0B9E) {
  case 0:
    DibPut((undefined4 *)local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974);
    DibPut((undefined4 *)pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_097C);
    break;
  case 1:
    DibPut((undefined4 *)local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0988);
    if (pCVar2->field_0B99 == 0xbd) {
      pbVar4 = (byte *)pCVar2->field_097C;
LAB_00502b2d:
      puVar7 = (undefined4 *)pCVar2->field_018C;
    }
    else {
      pbVar4 = (byte *)pCVar2->field_098C;
      puVar7 = (undefined4 *)pCVar2->field_018C;
    }
    goto LAB_00502b3b;
  case 2:
    DibPut((undefined4 *)local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0988);
    DibPut((undefined4 *)pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_098C);
    break;
  case 3:
    DibPut((undefined4 *)local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974);
    switch(pCVar2->field_0B99) {
    case 9:
    case 0x15:
    case 0xa6:
    case 0xa7:
    case 0xaf:
    case 0xbd:
      pbVar4 = (byte *)pCVar2->field_097C;
      puVar7 = (undefined4 *)pCVar2->field_018C;
      break;
    default:
      pbVar4 = (byte *)pCVar2->field_0990;
      goto LAB_00502b2d;
    }
LAB_00502b3b:
    DibPut(puVar7,0x31,0,'\x06',pbVar4);
    break;
  case 4:
    DibPut((undefined4 *)local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974);
    DibPut((undefined4 *)pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_097C);
  }
  if (pCVar2->field_0B9E == '\x01') {
    switch(pCVar2->field_0B99) {
    case 0x1a:
      pbVar4 = (byte *)FUN_0070b3a0(pCVar2->field_02B2,3);
      DibPut((undefined4 *)pCVar2->field_018C,0x3c,0x84,'\x01',pbVar4);
      bVar6 = 0;
      local_8 = local_8 & 0xffffff00;
      if ((pCVar2->field_0BB6 & 0xfe) != 0) {
        do {
          pbVar4 = (byte *)FUN_0070b3a0(pCVar2->field_02B6,3);
          DibPut((undefined4 *)pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',pbVar4);
          bVar6 = bVar6 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar6);
        } while (bVar6 < (byte)pCVar2->field_0BB6 >> 1);
      }
      if (bVar6 < 0x14) {
        iVar5 = 0x14 - (local_8 & 0xff);
        iVar3 = (local_8 & 0xff) * 4 + 0x3f;
        do {
          pbVar4 = (byte *)FUN_0070b3a0(pCVar2->field_02B6,0);
          DibPut((undefined4 *)pCVar2->field_018C,iVar3,0x87,'\x01',pbVar4);
          iVar3 = iVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      break;
    case 0x1b:
    case 0x1d:
    case 0x23:
    case 0x24:
      if (pCVar2->field_0BCD != -1) {
        pbVar4 = (byte *)FUN_0070b3a0(pCVar2->field_02B2,3);
        DibPut((undefined4 *)pCVar2->field_018C,0x3c,0x84,'\x01',pbVar4);
        bVar6 = 0;
        local_8 = local_8 & 0xffffff00;
        if (pCVar2->field_0BCD != '\0') {
          do {
            pbVar4 = (byte *)FUN_0070b3a0(pCVar2->field_02B6,1);
            DibPut((undefined4 *)pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',pbVar4);
            bVar6 = bVar6 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar6);
          } while (bVar6 < (byte)pCVar2->field_0BCD);
        }
        if (bVar6 < 0x14) {
          iVar5 = 0x14 - (local_8 & 0xff);
          iVar3 = (local_8 & 0xff) * 4 + 0x3f;
          do {
            pbVar4 = (byte *)FUN_0070b3a0(pCVar2->field_02B6,0);
            DibPut((undefined4 *)pCVar2->field_018C,iVar3,0x87,'\x01',pbVar4);
            iVar3 = iVar3 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
  }
  if (-1 < (int)pCVar2->field_0154) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pCVar2->field_0154,0xffffffff,pCVar2->field_0048,pCVar2->field_00A0);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

