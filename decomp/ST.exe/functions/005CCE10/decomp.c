
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SetListCtrls */

void __thiscall SettMapMTy::SetListCtrls(SettMapMTy *this)

{
  SettMapMTy_field_1E26State SVar1;
  char cVar2;
  DArrayTy *pDVar3;
  code *pcVar4;
  SettMapMTy *pSVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  char *pcVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  bool bVar13;
  InternalExceptionFrame local_14c;
  InternalExceptionFrame local_108;
  InternalExceptionFrame local_c4;
  InternalExceptionFrame local_80;
  undefined4 local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_1c;
  int local_18;
  SettMapMTy *local_14;
  int local_10;
  cMf32 *local_c;
  uint local_8;
  
  local_1c = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x164,0,iVar6,&DAT_007a4ccc
                               ,s_SettMapMTy__SetListCtrls_007cd2f0);
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Start_settmobj_cpp_007cd258,0x164);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar12 = local_3c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_2c = 0x26;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_14;
  if (iVar6 == 0) {
    FUN_006e6080(local_14,2,local_14->field_211D,local_3c);
    local_1c = local_28;
  }
  if ((pSVar5->field_1E26 == CASE_5) || (pSVar5->field_1E26 == CASE_F)) {
    local_c = (cMf32 *)pSVar5->field_1F3F;
  }
  else {
    local_c = (cMf32 *)pSVar5->field_1F43;
  }
  g_currentExceptionFrame = local_c4.previous;
  pSVar5->field_0029 = 2;
  pSVar5->field_002D = 0x20;
  local_10 = 0;
  local_8 = 0x7e3;
  do {
    local_18 = 0;
    uVar10 = local_8;
    do {
      if ((&pSVar5->field_0000)[uVar10 + local_18] != (AnonPointee_SettMapMTy_0000 *)0x0) {
        pDVar3 = pSVar5->field_1F84;
        if ((pDVar3 == (DArrayTy *)0x0) ||
           (uVar9 = pSVar5->field_1F88 + local_10, pDVar3->count <= uVar9)) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar11 = (char *)(pDVar3->elementSize * uVar9 + (int)pDVar3->data);
        }
        SVar1 = pSVar5->field_1E26;
        pSVar5->field_0025 = (&pSVar5->field_0000)[uVar10 + local_18];
        pSVar5->field_0031 = 0;
        if (((SVar1 != CASE_C) && (SVar1 != CASE_10)) && (pcVar11 != (char *)0x0)) {
          switch(local_18) {
          case 0:
            if (*(DArrayTy **)(pcVar11 + 0x50) != (DArrayTy *)0x0) {
              DArrayDestroy(*(DArrayTy **)(pcVar11 + 0x50));
            }
            pcVar11[0x50] = '\0';
            pcVar11[0x51] = '\0';
            pcVar11[0x52] = '\0';
            pcVar11[0x53] = '\0';
            switch(pSVar5->field_1E26) {
            case CASE_5:
            case CASE_F:
              puVar7 = CreateStrategList((int)local_c,(uint)(byte)pcVar11[2],0xffffffff);
              break;
            default:
              puVar7 = CreateOpponentList(local_c,(uint)(byte)pcVar11[3],DAT_0080995c);
              break;
            case CASE_C:
            case CASE_10:
              puVar7 = CreateSaveStrategList((int)local_c,(uint)(byte)pcVar11[2],0xffffffff);
            }
            *(uint **)(pcVar11 + 0x50) = puVar7;
            if (puVar7[3] <= (uint)(byte)pcVar11[5]) {
              pcVar11[5] = (char)puVar7[3];
            }
            if ((*(int *)(*(int *)(pcVar11 + 0x50) + 0xc) == 0) && (pcVar11[4] == '\x04')) {
              pcVar11[4] = '\x01';
            }
            if (((*pcVar11 != '\0') && (pSVar5->field_1E26 != CASE_5)) &&
               ((pSVar5->field_1E26 != CASE_F && (pcVar11[4] == '\x02')))) {
              bVar13 = *(int *)(pcVar11 + 6) == DAT_0080877f;
LAB_005cd119:
              if (bVar13) goto cf_common_join_005CD142;
            }
            break;
          case 1:
          case 2:
            if (((SVar1 != CASE_5) && (SVar1 != CASE_F)) && (*pcVar11 != '\0')) {
              if (DAT_0080877e != '\0') {
                if (pcVar11[4] == '\x02') {
LAB_005cd10f:
                  bVar13 = *(int *)(pcVar11 + 6) == DAT_0080877f;
                  goto LAB_005cd119;
                }
                goto cf_common_join_005CD142;
              }
              if (pcVar11[4] == '\x02') {
                iVar6 = *(int *)(pcVar11 + 6);
                goto joined_r0x005cd0bb;
              }
            }
            break;
          case 3:
            if (((DAT_0080877e != '\0') || (cVar2 = pcVar11[4], cVar2 == '\x01')) ||
               ((cVar2 == '\x02' && (*(int *)(pcVar11 + 6) == DAT_0080877f))))
            goto cf_common_join_005CD142;
            if (cVar2 == '\x03') {
              iVar6 = *(int *)(pcVar11 + 6);
              goto joined_r0x005cd0bb;
            }
            break;
          case 5:
            if (((((DAT_0080874d != -1) && (SVar1 != CASE_5)) &&
                 ((SVar1 != CASE_F && ((*pcVar11 != '\0' && (cVar2 = pcVar11[4], cVar2 != '\0'))))))
                && (cVar2 != '\x01')) && (pcVar11[2] != -1)) {
              if (DAT_00808a8f == '\0') {
                if ((cVar2 != '\x02') || (*(int *)(pcVar11 + 6) != DAT_0080877f))
                goto cf_common_join_005CD142;
              }
              else if (DAT_0080877e == '\0') {
                if (cVar2 == '\x02') goto LAB_005cd10f;
              }
              else {
                if (cVar2 == '\x02') {
                  iVar6 = *(int *)(pcVar11 + 6);
                  goto joined_r0x005cd0bb;
                }
cf_common_join_005CD142:
                pSVar5->field_0031 = 1;
              }
            }
            break;
          case 7:
            if (pcVar11[4] == '\x02') {
              iVar6 = *(int *)(pcVar11 + 6);
joined_r0x005cd0bb:
              if (iVar6 == DAT_0080877f) goto cf_common_join_005CD142;
            }
          }
        }
        (*pSVar5->field_000C->vtable->vfunc_18)(&pSVar5->field_0x1d);
        uVar10 = local_8;
      }
      local_18 = local_18 + 1;
    } while (local_18 < 8);
    local_8 = uVar10 + 8;
    local_10 = local_10 + 1;
    if (0x832 < (int)local_8) {
      local_8 = pSVar5->field_1F84->count;
      local_2c = 0x28;
      if ((pSVar5->field_1F84 == (DArrayTy *)0x0) || (local_8 < 0xb)) {
        local_28 = 1;
      }
      else {
        local_28 = local_8 - 9;
      }
      local_108.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_108;
      iVar6 = Library::MSVCRT::__setjmp3(local_108.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar6 == 0) {
        FUN_006e6080(local_14,2,local_14->field_211D,local_3c);
      }
      local_2c = 0x22;
      if (local_8 < 0xb) {
        local_28 = 0;
      }
      else {
        local_28 = local_1c & 0xffff;
        if (local_8 < local_28 + 10) {
          local_28 = local_8 - 10;
        }
      }
      g_currentExceptionFrame = &local_14c;
      local_14c.previous = local_108.previous;
      iVar6 = Library::MSVCRT::__setjmp3(local_14c.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar6 == 0) {
        FUN_006e6080(local_14,2,local_14->field_211D,local_3c);
      }
      g_currentExceptionFrame = local_80.previous;
      return;
    }
  } while( true );
}

