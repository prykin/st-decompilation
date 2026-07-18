
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
  UINT UVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  char *pcVar11;
  void *unaff_EDI;
  size_t _Count;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 local_58;
  undefined4 local_54 [16];
  PlayPanelTy *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_14 = this;
  iVar4 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  pPVar3 = local_14;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0x11f,0,iVar4,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar4,0,0x7c7574,0x11f);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),0x1d,0x13,'\x01',*(byte **)(local_14 + 0x1cd)
                    );
  local_c = 0x1b;
  local_10 = 8;
  iVar4 = 0;
  do {
    iVar8 = local_c;
    if ((uint)(iVar4 + *(int *)(pPVar3 + 0x1c9)) < (uint)DAT_00808aaf) {
      local_8 = iVar4;
      pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pPVar3 + 0x1d1),
                                    (byte)(&DAT_00808af4)[(iVar4 + *(int *)(pPVar3 + 0x1c9)) * 0x9c]
                                    + 9);
      thunk_FUN_00540760(*(undefined4 **)(pPVar3 + 0x68),0x22,iVar8,'\x01',pbVar5);
      ccFntTy::SetSurf(*(ccFntTy **)(pPVar3 + 0x1dd),*(int *)(pPVar3 + 0x68),0,0x37,iVar8,0x10,0xc);
      cVar1 = (&DAT_008087e8)
              [(uint)(byte)(&DAT_00808af4)[(iVar4 + *(int *)(pPVar3 + 0x1c9)) * 0x9c] * 0x51];
      if (cVar1 == '\x01') {
        UVar6 = 0x2742;
      }
      else if (cVar1 == '\x02') {
        UVar6 = 0x2743;
      }
      else if (cVar1 == '\x03') {
        UVar6 = 0x2745;
      }
      else {
        UVar6 = 10000;
      }
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = -1;
      puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(pPVar3 + 0x1dd),puVar7,iVar13,iVar14,uVar9);
      ccFntTy::SetSurf(*(ccFntTy **)(pPVar3 + 0x1dd),*(int *)(pPVar3 + 0x68),0,0x68,iVar8,0x10e,0xc)
      ;
      iVar8 = FUN_00711110(*(void **)(pPVar3 + 0x1dd),
                           &DAT_00808ab0 + (iVar4 + *(int *)(pPVar3 + 0x1c9)) * 0x27);
      if (iVar8 < 0x10e) {
        uVar9 = 0xffffffff;
        pcVar11 = (char *)(&DAT_00808ab0 + (iVar4 + *(int *)(pPVar3 + 0x1c9)) * 0x27);
        do {
          pcVar12 = pcVar11;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar12 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar11 = pcVar12 + -uVar9;
        pcVar12 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar9 = uVar9 & 3; iVar4 = local_8, uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar12 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar11 = (char *)(&DAT_00808ab0 + (iVar4 + *(int *)(pPVar3 + 0x1c9)) * 0x27);
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        local_8 = ~uVar9 - 1;
        _Count = 0x14;
        do {
          _Count = _Count + 1;
          _strncpy((char *)&DAT_0080f33a,
                   (char *)(&DAT_00808ab0 + (iVar4 + *(int *)(pPVar3 + 0x1c9)) * 0x27),_Count);
          iVar8 = FUN_00711110(*(void **)(pPVar3 + 0x1dd),&DAT_0080f33a);
          if (0x10d < iVar8) break;
        } while ((int)_Count < local_8);
      }
      ccFntTy::WrStr(*(ccFntTy **)(pPVar3 + 0x1dd),&DAT_0080f33a,5,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
    }
    iVar4 = iVar4 + 1;
    local_c = local_c + 0xf;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      local_8 = iVar4;
      FUN_006b3640(DAT_008075a8,*(uint *)(pPVar3 + 0x60),0xffffffff,*(uint *)(pPVar3 + 0x3c),
                   *(uint *)(pPVar3 + 0x44));
      DAT_00858df8 = (undefined4 *)local_58;
      return;
    }
  } while( true );
}

