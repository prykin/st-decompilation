
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintArsenal */

void __thiscall CPanelTy::PaintArsenal(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar6;
  byte bVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_70;
  uint local_2c;
  CPanelTy *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  AnonShape_00505960_269BEFC9 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_28 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_28;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x184,0,iVar3,&DAT_007a4ccc
                               ,s_CPanelTy__PaintArsenal_007c2808);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x184);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006b4170((AnonShape_006C7610_838EDECF *)local_28->field_0194,0,0x49,0x50,0x6f,0x37,0x3d);
  FUN_006b4170((AnonShape_006C7610_838EDECF *)pCVar2->field_0194,0,0x4a,0x51,0x29,0x34,0x3f);
  FUN_006b4170((AnonShape_006C7610_838EDECF *)pCVar2->field_0194,0,0x4b,0x52,0x27,0x32,0x3a);
  if (pCVar2->field_09D4 == '\x01') {
    local_20 = CONCAT31(local_20._1_3_,4);
    bVar7 = 3;
  }
  else {
    local_20 = (uint)local_20._1_3_ << 8;
    bVar7 = 4;
  }
  local_10 = CONCAT31(local_10._1_3_,bVar7);
  if (bVar7 != 0) {
    local_14 = 0;
    local_2c = local_20 & 0xff;
    local_1c = 0x54;
    local_18 = (AnonShape_00505960_269BEFC9 *)(&pCVar2->field_0C11 + local_2c * 6);
    local_24 = (uint)bVar7;
    do {
      if (*(char *)local_18 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = ((uint)local_18->field_0002 * 10) / (uint)local_18->field_0004;
      }
      pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,5);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,0x74,local_1c,'\x01',pbVar5);
      local_10 = local_10 & 0xffffff00;
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,uVar8 * 4 + 0x76,local_1c + 2,
                 '\x01',pbVar5);
          bVar7 = (byte)local_10 + 1;
          local_10 = CONCAT31(local_10._1_3_,bVar7);
          uVar8 = (uint)bVar7;
        } while (uVar8 < uVar4);
      }
      if ((byte)local_10 < 10) {
        iVar9 = 10 - (local_10 & 0xff);
        iVar3 = (local_10 & 0xff) * 4 + 0x76;
        do {
          pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,iVar3,local_1c + 2,'\x01',pbVar5)
          ;
          iVar3 = iVar3 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      wsprintfA(&pCVar2->field_0x1e1,&DAT_007c1aa4,(uint)local_18->field_0002);
      uVar4 = local_1c;
      ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0xa2,local_1c,0x15,0xc);
      ccFntTy::WrStr(pCVar2->field_01B8,(uint *)&pCVar2->field_0x1e1,-3,-1,5);
      if ((char)local_20 == '\0') {
        if ((int)uVar4 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&PTR_DAT_00505cec)[local_14])();
          return;
        }
      }
      else if ((int)uVar4 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_DAT_00505cdc)[local_14])();
        return;
      }
      if (*(char *)local_18 == '\0') {
        pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_0292;
      }
      else {
        pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_028E;
      }
      pbVar5 = (byte *)FUN_0070b3a0(pAVar6,(-(uint)(*(char *)local_18 != '\0') & 0x14) + 0xb +
                                           local_14 + local_2c);
      if (pbVar5 != (byte *)0x0) {
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,local_c,local_8,'\x06',pbVar5);
      }
      local_14 = local_14 + 1;
      local_18 = (AnonShape_00505960_269BEFC9 *)&local_18->field_0x6;
      local_1c = uVar4 + 0xb;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

