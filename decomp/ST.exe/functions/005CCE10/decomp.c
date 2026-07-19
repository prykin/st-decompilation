
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SetListCtrls */

void __thiscall SettMapMTy::SetListCtrls(SettMapMTy *this)

{
  SettMapMTy SVar1;
  char cVar2;
  code *pcVar3;
  SettMapMTy *pSVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  bool bVar11;
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
  int local_c;
  uint local_8;
  
  local_1c = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_14 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x164,0,iVar5,&DAT_007a4ccc
                               ,s_SettMapMTy__SetListCtrls_007cd2f0);
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_settmobj_cpp_007cd258,0x164);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar10 = local_3c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_2c = 0x26;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar5 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_14;
  if (iVar5 == 0) {
    FUN_006e6080(local_14,2,*(undefined4 *)(local_14 + 0x211d),local_3c);
    local_1c = local_28;
  }
  if ((pSVar4[0x1e26] == (SettMapMTy)0x5) || (pSVar4[0x1e26] == (SettMapMTy)0xf)) {
    local_c = *(int *)(pSVar4 + 7999);
  }
  else {
    local_c = *(int *)(pSVar4 + 0x1f43);
  }
  g_currentExceptionFrame = local_c4.previous;
  *(undefined4 *)(pSVar4 + 0x29) = 2;
  *(undefined4 *)(pSVar4 + 0x2d) = 0x20;
  local_10 = 0;
  local_8 = 0x7e3;
  do {
    local_18 = 0;
    uVar8 = local_8;
    do {
      if (*(int *)(pSVar4 + (uVar8 + local_18) * 4) != 0) {
        iVar5 = *(int *)(pSVar4 + 0x1f84);
        if ((iVar5 == 0) || (*(uint *)(iVar5 + 0xc) <= (uint)(*(int *)(pSVar4 + 0x1f88) + local_10))
           ) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)(*(int *)(iVar5 + 8) * (*(int *)(pSVar4 + 0x1f88) + local_10) +
                           *(int *)(iVar5 + 0x1c));
        }
        SVar1 = pSVar4[0x1e26];
        *(undefined4 *)(pSVar4 + 0x25) = *(undefined4 *)(pSVar4 + (uVar8 + local_18) * 4);
        *(undefined4 *)(pSVar4 + 0x31) = 0;
        if (((SVar1 != (SettMapMTy)0xc) && (SVar1 != (SettMapMTy)0x10)) && (pcVar9 != (char *)0x0))
        {
          switch(local_18) {
          case 0:
            if (*(byte **)(pcVar9 + 0x50) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pcVar9 + 0x50));
            }
            pcVar9[0x50] = '\0';
            pcVar9[0x51] = '\0';
            pcVar9[0x52] = '\0';
            pcVar9[0x53] = '\0';
            switch(pSVar4[0x1e26]) {
            case (SettMapMTy)0x5:
            case (SettMapMTy)0xf:
              puVar6 = thunk_FUN_0067e0e0(local_c,(uint)(byte)pcVar9[2],0xffffffff);
              break;
            default:
              puVar6 = thunk_FUN_0067dfd0(local_c,(uint)(byte)pcVar9[3],DAT_0080995c);
              break;
            case (SettMapMTy)0xc:
            case (SettMapMTy)0x10:
              puVar6 = thunk_FUN_0067e200(local_c,(uint)(byte)pcVar9[2],0xffffffff);
            }
            *(uint **)(pcVar9 + 0x50) = puVar6;
            if (puVar6[3] <= (uint)(byte)pcVar9[5]) {
              pcVar9[5] = (char)puVar6[3];
            }
            if ((*(int *)(*(int *)(pcVar9 + 0x50) + 0xc) == 0) && (pcVar9[4] == '\x04')) {
              pcVar9[4] = '\x01';
            }
            if (((*pcVar9 != '\0') && (pSVar4[0x1e26] != (SettMapMTy)0x5)) &&
               ((pSVar4[0x1e26] != (SettMapMTy)0xf && (pcVar9[4] == '\x02')))) {
              bVar11 = *(int *)(pcVar9 + 6) == DAT_0080877f;
LAB_005cd119:
              if (bVar11) goto LAB_005cd142;
            }
            break;
          case 1:
          case 2:
            if (((SVar1 != (SettMapMTy)0x5) && (SVar1 != (SettMapMTy)0xf)) && (*pcVar9 != '\0')) {
              if (DAT_0080877e != '\0') {
                if (pcVar9[4] == '\x02') {
LAB_005cd10f:
                  bVar11 = *(int *)(pcVar9 + 6) == DAT_0080877f;
                  goto LAB_005cd119;
                }
                goto LAB_005cd142;
              }
              if (pcVar9[4] == '\x02') {
                iVar5 = *(int *)(pcVar9 + 6);
                goto joined_r0x005cd0bb;
              }
            }
            break;
          case 3:
            if (((DAT_0080877e != '\0') || (cVar2 = pcVar9[4], cVar2 == '\x01')) ||
               ((cVar2 == '\x02' && (*(int *)(pcVar9 + 6) == DAT_0080877f)))) goto LAB_005cd142;
            if (cVar2 == '\x03') {
              iVar5 = *(int *)(pcVar9 + 6);
              goto joined_r0x005cd0bb;
            }
            break;
          case 5:
            if (((((DAT_0080874d != -1) && (SVar1 != (SettMapMTy)0x5)) &&
                 ((SVar1 != (SettMapMTy)0xf &&
                  ((*pcVar9 != '\0' && (cVar2 = pcVar9[4], cVar2 != '\0')))))) && (cVar2 != '\x01'))
               && (pcVar9[2] != -1)) {
              if (DAT_00808a8f == '\0') {
                if ((cVar2 != '\x02') || (*(int *)(pcVar9 + 6) != DAT_0080877f)) goto LAB_005cd142;
              }
              else if (DAT_0080877e == '\0') {
                if (cVar2 == '\x02') goto LAB_005cd10f;
              }
              else {
                if (cVar2 == '\x02') {
                  iVar5 = *(int *)(pcVar9 + 6);
                  goto joined_r0x005cd0bb;
                }
LAB_005cd142:
                *(undefined4 *)(pSVar4 + 0x31) = 1;
              }
            }
            break;
          case 7:
            if (pcVar9[4] == '\x02') {
              iVar5 = *(int *)(pcVar9 + 6);
joined_r0x005cd0bb:
              if (iVar5 == DAT_0080877f) goto LAB_005cd142;
            }
          }
        }
        (**(code **)(**(int **)(pSVar4 + 0xc) + 0x18))(pSVar4 + 0x1d);
        uVar8 = local_8;
      }
      local_18 = local_18 + 1;
    } while (local_18 < 8);
    local_8 = uVar8 + 8;
    local_10 = local_10 + 1;
    if (0x832 < (int)local_8) {
      local_8 = *(uint *)(*(int *)(pSVar4 + 0x1f84) + 0xc);
      local_2c = 0x28;
      if ((*(int *)(pSVar4 + 0x1f84) == 0) || (local_8 < 0xb)) {
        local_28 = 1;
      }
      else {
        local_28 = local_8 - 9;
      }
      local_108.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_108;
      iVar5 = Library::MSVCRT::__setjmp3(local_108.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar5 == 0) {
        FUN_006e6080(local_14,2,*(undefined4 *)(local_14 + 0x211d),local_3c);
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
      iVar5 = Library::MSVCRT::__setjmp3(local_14c.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar5 == 0) {
        FUN_006e6080(local_14,2,*(undefined4 *)(local_14 + 0x211d),local_3c);
      }
      g_currentExceptionFrame = local_80.previous;
      return;
    }
  } while( true );
}

