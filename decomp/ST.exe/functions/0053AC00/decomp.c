
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::PaintPlayPanel */

void __thiscall PlayPanelTy::PaintPlayPanel(PlayPanelTy *this)

{
  char cVar1;
  code *pcVar2;
  PlayPanelTy *pPVar3;
  int iVar4;
  byte *pbVar5;
  UINT uID;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  size_t _Count;
  char *pcVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_58;
  PlayPanelTy *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar3 = local_14;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0x11f,0,iVar4,
                                &DAT_007a4ccc,s_PlayPanelTy__PaintPlayPanel_007c7688);
    if (iVar11 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_playpan_cpp_007c7574,0x11f);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DibPut((AnonShape_006B84D0_7C7D97C6 *)local_14->field_0068,0x1d,0x13,'\x01',
         (byte *)local_14->field_01CD);
  local_c = 0x1b;
  local_10 = 8;
  iVar4 = 0;
  do {
    uVar8 = local_c;
    uVar7 = iVar4 + pPVar3->field_01C9;
    if (uVar7 < DAT_00808aaf) {
      local_8 = iVar4;
      pbVar5 = (byte *)FUN_0070b3a0(pPVar3->field_01D1,(byte)(&DAT_00808af4)[uVar7 * 0x9c] + 9);
      DibPut((AnonShape_006B84D0_7C7D97C6 *)pPVar3->field_0068,0x22,uVar8,'\x01',pbVar5);
      ccFntTy::SetSurf(pPVar3->field_01DD,(int)pPVar3->field_0068,0,0x37,uVar8,0x10,0xc);
      cVar1 = (&DAT_008087e8)
              [(uint)(byte)(&DAT_00808af4)[(iVar4 + pPVar3->field_01C9) * 0x9c] * 0x51];
      if (cVar1 == '\x01') {
        uID = 0x2742;
      }
      else if (cVar1 == '\x02') {
        uID = 0x2743;
      }
      else if (cVar1 == '\x03') {
        uID = 0x2745;
      }
      else {
        uID = 10000;
      }
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar11 = -1;
      puVar6 = (uint *)FUN_006b0140(uID,HINSTANCE_00807618);
      ccFntTy::WrStr(pPVar3->field_01DD,puVar6,iVar11,iVar12,uVar7);
      ccFntTy::SetSurf(pPVar3->field_01DD,(int)pPVar3->field_0068,0,0x68,uVar8,0x10e,0xc);
      iVar11 = FUN_00711110(pPVar3->field_01DD,&DAT_00808ab0 + (iVar4 + pPVar3->field_01C9) * 0x27);
      if (iVar11 < 0x10e) {
        uVar7 = 0xffffffff;
        pcVar9 = (char *)(&DAT_00808ab0 + (iVar4 + pPVar3->field_01C9) * 0x27);
        do {
          pcVar10 = pcVar9;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar9 = pcVar10 + -uVar7;
        pcVar10 = (char *)&DAT_0080f33a;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar7 = uVar7 & 3; iVar4 = local_8, uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      else {
        uVar7 = 0xffffffff;
        pcVar9 = (char *)(&DAT_00808ab0 + (iVar4 + pPVar3->field_01C9) * 0x27);
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        local_8 = ~uVar7 - 1;
        _Count = 0x14;
        do {
          _Count = _Count + 1;
          Library::MSVCRT::_strncpy
                    ((char *)&DAT_0080f33a,
                     (char *)(&DAT_00808ab0 + (iVar4 + pPVar3->field_01C9) * 0x27),_Count);
          iVar11 = FUN_00711110(pPVar3->field_01DD,&DAT_0080f33a);
          if (0x10d < iVar11) break;
        } while ((int)_Count < local_8);
      }
      ccFntTy::WrStr(pPVar3->field_01DD,&DAT_0080f33a,5,-1,(DAT_0080874e != '\x03') - 1 & 5);
    }
    iVar4 = iVar4 + 1;
    local_c = local_c + 0xf;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      local_8 = iVar4;
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pPVar3->field_0060,0xffffffff,pPVar3->field_003C,pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
  } while( true );
}

