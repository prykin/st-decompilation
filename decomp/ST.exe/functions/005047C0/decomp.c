
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintPerRes */

uint __thiscall CPanelTy::PaintPerRes(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint extraout_EAX;
  byte bVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  InternalExceptionFrame local_54;
  uint local_10;
  CPanelTy *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 == 0) {
    PaintDamageXY(local_c,local_c->field_0194,param_1 + 0x39,0x65,(uint)(byte)local_c->field_0C33,
                  0x2714);
    PaintCostsXY(this_00,this_00->field_0194,param_1 + 0x39,0x70,this_00->field_0C1C,0xffff,3,0);
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)(byte)this_00->field_0C33 * 0x28) / 100;
    uVar4 = (uint)(byte)this_00->field_0C33 * -0x33333328;
    if (local_10 != 0) {
      uVar7 = 0;
      do {
        pbVar3 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,param_1 + 0xb + uVar7 * 4,0x5c,
               '\x01',pbVar3);
        bVar5 = (byte)local_8 + 1;
        local_8 = CONCAT31(local_8._1_3_,bVar5);
        uVar7 = (uint)bVar5;
        uVar4 = local_10;
      } while (uVar7 < local_10);
    }
    if ((byte)local_8 < 0x28) {
      iVar2 = param_1 + 0xb + (local_8 & 0xff) * 4;
      iVar6 = 0x28 - (local_8 & 0xff);
      do {
        pbVar3 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        uVar4 = DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar2,0x5c,'\x01',pbVar3);
        iVar2 = iVar2 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return uVar4;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x57,0,iVar2,&DAT_007a4ccc,
                             s_CPanelTy__PaintPerRes_007c275c);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x57);
  return extraout_EAX;
}

