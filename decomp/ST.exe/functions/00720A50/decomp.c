
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sedit.cpp
   EditorClassTy::_Draw */

int __thiscall EditorClassTy::_Draw(EditorClassTy *this,int *param_1)

{
  char cVar1;
  ccFntTy *this_00;
  code *pcVar2;
  EditorClassTy *pEVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  size_t sVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  size_t _Count;
  uint uVar11;
  undefined4 unaff_ESI;
  size_t _Count_00;
  int iVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  InternalExceptionFrame local_64;
  size_t local_20;
  EditorClassTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((this->field_0138 == 0) || (*(int *)(this->field_0138 + 8) == 0)) {
    return 0;
  }
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pEVar3 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar12 = ReportDebugMessage(s_E__Ourlib__sedit_cpp_007f0b08,0x51,0,iVar4,&DAT_007a4ccc,
                                s_EditorClassTy___Draw_Error___007f0b20);
    if (iVar12 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib__sedit_cpp_007f0b08,0x52);
    return iVar4;
  }
  local_18 = FUN_00720d30((int)local_1c);
  if (local_18 == 0) {
    local_18 = 1;
  }
  iVar4 = local_18;
  local_8 = Library::DKW::LIB::FUN_006aac10(local_18 * 4 + 4);
  local_10 = 0;
  *(undefined4 *)(pEVar3->field_0138 + 4) = pEVar3->field_0144;
  if (0 < iVar4) {
    do {
      iVar12 = local_10;
      iVar4 = pEVar3->field_0138;
      if (*(int *)(iVar4 + 4) < *(int *)(iVar4 + 8)) {
        iVar9 = *(int *)(iVar4 + 4) + 1;
        local_c = *(char **)(*(int *)(iVar4 + 0x14) + -4 + iVar9 * 4);
        *(int *)(iVar4 + 4) = iVar9;
      }
      else {
        local_c = (char *)0x0;
      }
      if (local_c == (char *)0x0) break;
      uVar10 = 0xffffffff;
      pcVar6 = local_c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      _Count = ~uVar10 - 1;
      local_20 = _Count;
      if ((int)pEVar3->field_0148 < (int)_Count) {
        if ((pEVar3->field_0x20 & 0x20) != 0) {
          local_c = FUN_006c49b0(local_c);
          Library::MSVCRT::__strnset(local_c,0x2a,_Count);
        }
        if ((pEVar3->field_0x20 & 4) == 0) {
          sVar7 = pEVar3->field_0148;
          _Count_00 = 0;
          local_14 = 0;
          if (_Count != sVar7 && -1 < (int)(_Count - sVar7)) {
            do {
              this_00 = pEVar3->field_0214;
              uVar10 = FUN_00710fb0(this_00,(byte *)(local_c + sVar7 + _Count_00));
              iVar4 = (int)*(short *)(this_00->field_009A + 0x6a + (uVar10 & 0xffff) * 10);
              if ((int)pEVar3->field_002C < iVar4 + local_14) break;
              sVar7 = pEVar3->field_0148;
              local_14 = local_14 + pEVar3->field_0214->field_0058 + iVar4;
              _Count_00 = _Count_00 + 1;
            } while ((int)_Count_00 < (int)(local_20 - sVar7));
          }
          if (_Count_00 == 0) {
            _Count_00 = 1;
          }
          puVar5 = Library::DKW::LIB::FUN_006aac10(_Count_00 + 1);
          local_8[local_10] = (int)puVar5;
          Library::MSVCRT::_strncpy
                    ((char *)local_8[local_10],local_c + pEVar3->field_0148,_Count_00);
          iVar12 = local_10;
        }
        else {
          pcVar6 = ccFntTy::GetFittingStr
                             (pEVar3->field_0214,(char *)0x0,(uint *)(local_c + pEVar3->field_0148),
                              (uint *)0x0,pEVar3->field_002C,(undefined4 *)0x0);
          local_8[iVar12] = (int)pcVar6;
        }
        if ((pEVar3->field_0x20 & 0x20) != 0) {
          FUN_006ab060(&local_c);
        }
      }
      else {
        uVar10 = 0xffffffff;
        pcVar6 = PTR_DAT_007f0afc;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar5 = Library::DKW::LIB::FUN_006aac10(~uVar10);
        local_8[iVar12] = (int)puVar5;
        uVar10 = 0xffffffff;
        pcVar6 = PTR_DAT_007f0afc;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar5 = (undefined4 *)PTR_DAT_007f0afc;
        puVar13 = (undefined4 *)local_8[local_10];
        for (uVar11 = ~uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar13 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar10 = ~uVar10 & 3; iVar12 = local_10, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
      }
      local_10 = iVar12 + 1;
    } while (local_10 < local_18);
  }
  iVar4 = (**(code **)(pEVar3->field_0000 + 8))(local_8);
  if (local_8 != (int *)0x0) {
    if (*local_8 != 0) {
      iVar12 = 0;
      piVar8 = local_8;
      do {
        FUN_006ab060(piVar8);
        iVar12 = iVar12 + 4;
        piVar8 = (int *)(iVar12 + (int)local_8);
      } while (*(int *)(iVar12 + (int)local_8) != 0);
    }
    FUN_006ab060(&local_8);
  }
  g_currentExceptionFrame = local_64.previous;
  return iVar4;
}

