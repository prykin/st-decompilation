
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintLife */

void __thiscall CPanelTy::PaintLife(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 extraout_EDX;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  UINT UVar8;
  InternalExceptionFrame local_5c;
  CPanelTy *local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  if (param_1 == 0) {
    local_14 = (undefined4 *)this->field_019C;
    bVar3 = this->field_0C6C;
  }
  else {
    local_14 = (undefined4 *)this->field_0184;
    bVar3 = this->field_0B7E;
  }
  local_c = CONCAT31(local_c._1_3_,bVar3);
  if (param_1 == 0) {
    local_5 = this->field_0C53;
  }
  else {
    local_5 = this->field_0B65;
  }
  if (bVar3 < 0x65) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_18 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar2 = local_14;
    this_00 = local_18;
    if (iVar4 == 0) {
      bVar3 = (byte)local_c;
      cVar6 = (char)(((local_c & 0xff) * 7) / 10);
      local_10 = CONCAT31(local_10._1_3_,cVar6);
      if (((byte)local_c != 0) && (cVar6 == '\0')) {
        local_10 = CONCAT31(local_10._1_3_,1);
      }
      if ((byte)local_c < 0x46) {
        iVar4 = (-(uint)((byte)local_c < 0x14) & 6) + 6;
      }
      else {
        iVar4 = 0;
      }
      Library::DKW::WGR::FUN_006b55f0
                (local_14,0,5,0x1f,local_18->field_0286,0,0,iVar4,local_10 & 0xff,6);
      if ((param_1 == 0) && (local_5 == '\x02')) {
        UVar8 = 0x36ba;
        uVar7 = local_c;
      }
      else {
        UVar8 = 0x36b1;
        uVar7 = CONCAT31((int3)((uint)extraout_EDX >> 8),'d' - bVar3);
      }
      PaintDamageXY(this_00,(int)puVar2,5,0x27,uVar7,UVar8);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x2f,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__PaintLife_007c240c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x2f);
  }
  return;
}

