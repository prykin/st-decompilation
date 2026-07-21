
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintPerResSI */

uint __thiscall CPanelTy::PaintPerResSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint extraout_EAX;
  byte bVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  InternalExceptionFrame local_54;
  uint local_10;
  CPanelTy *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    PaintDamageXY(local_c,local_c->field_0194,0x5c,0x50,(uint)(byte)local_c->field_0C33,0x2714);
    pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,0x33,0x7b,'\x01',pbVar4);
    bVar6 = 0;
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)(byte)pCVar2->field_0C33 * 0x21) / 100;
    uVar5 = (uint)(byte)pCVar2->field_0C33 * -0x70a3d701;
    if (local_10 != 0) {
      uVar8 = 0;
      do {
        pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,uVar8 * 4 + 0x35,0x7d,'\x01',pbVar4
              );
        bVar6 = bVar6 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar6);
        uVar8 = (uint)bVar6;
        uVar5 = local_10;
      } while (uVar8 < local_10);
    }
    if (bVar6 < 0x21) {
      iVar7 = 0x21 - (local_8 & 0xff);
      iVar3 = (local_8 & 0xff) * 4 + 0x35;
      do {
        pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
        uVar5 = DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,iVar3,0x7d,'\x01',pbVar4);
        iVar3 = iVar3 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return uVar5;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x68,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintPerResSI_007c2778);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x68);
  return extraout_EAX;
}

