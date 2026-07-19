
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlList */

void __thiscall SettMapMTy::AddPlList(SettMapMTy *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  char *pcVar8;
  uint local_164 [4];
  char local_154 [260];
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  int local_8;
  
  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x21b,0,iVar2,&DAT_007a4ccc
                               ,s_SettMapMTy__AddPlList_007cd348);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Start_settmobj_cpp_007cd258,0x21b);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) {
    if (local_c[1].field_0x127 != '\0') {
      iVar2 = local_c->field_1F84;
      cVar6 = '\0';
      uVar4 = 0;
      uVar5 = *(uint *)(iVar2 + 0xc);
      if (uVar5 != 0) {
        if (uVar5 == 0) {
          pcVar7 = (char *)0x0;
          goto LAB_005cdd03;
        }
        do {
          pcVar7 = (char *)(*(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c));
LAB_005cdd03:
          if (pcVar7 != (char *)0x0) {
            if (*(int *)(pcVar7 + 6) == DAT_0080877f) {
              local_8 = 0;
              break;
            }
            if ((*pcVar7 != '\0') && (pcVar7[4] == '\x01')) {
              cVar6 = cVar6 + '\x01';
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      if (((local_8 != 0) && (cVar6 != '\0')) && (local_164[0] = 0, uVar5 != 0)) {
        if (uVar5 == 0) {
          pcVar7 = (char *)0x0;
          goto LAB_005cdd57;
        }
        while( true ) {
          pcVar7 = (char *)(*(int *)(iVar2 + 8) * local_164[0] + *(int *)(iVar2 + 0x1c));
LAB_005cdd57:
          if (((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) && (pcVar7[4] == '\x01')) break;
          local_164[0] = local_164[0] + 1;
          if (uVar5 <= local_164[0]) {
            g_currentExceptionFrame = local_50.previous;
            return;
          }
        }
        local_164[1] = 3;
        local_164[2] = 2;
        pcVar7 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar7 = (char *)&DAT_00807ddd;
        }
        uVar5 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar6 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar6 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = local_154;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_006b6500((int)DAT_00811764,1);
        FUN_00715360(DAT_00811764,1,'(',(char *)local_164,0x114,1,0xffffffff);
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        local_c[1].field_0x127 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
    iVar2 = local_c->field_1F84;
    uVar5 = *(uint *)(iVar2 + 0xc);
    if (uVar5 != 0) {
      if (uVar5 == 0) {
        iVar3 = 0;
        goto LAB_005cdb95;
      }
      do {
        iVar3 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c);
LAB_005cdb95:
        if (((iVar3 != 0) && (DAT_0080874d == *(char *)(iVar3 + 2))) &&
           ((DAT_0080874e == *(char *)(iVar3 + 3) && (*(int *)(iVar3 + 6) == DAT_0080877f)))) {
          local_8 = 0;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    if ((local_8 != 0) && (local_164[0] = 0, uVar5 != 0)) {
      if (uVar5 == 0) {
        iVar3 = 0;
        goto LAB_005cdbf4;
      }
      while( true ) {
        iVar3 = *(int *)(iVar2 + 8) * local_164[0] + *(int *)(iVar2 + 0x1c);
LAB_005cdbf4:
        if (((iVar3 != 0) && (DAT_0080874d == *(char *)(iVar3 + 2))) &&
           (DAT_0080874e == *(char *)(iVar3 + 3))) break;
        local_164[0] = local_164[0] + 1;
        if (uVar5 <= local_164[0]) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      local_164[2] = (DAT_0080874f != '\0') + 2;
      local_164[1] = 3;
      pcVar7 = &DAT_00807e1d;
      if (DAT_008067a0 == '\0') {
        pcVar7 = (char *)&DAT_00807ddd;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar6 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar6 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = local_154;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_006b6500((int)DAT_00811764,1);
      FUN_00715360(DAT_00811764,1,'(',(char *)local_164,0x114,1,0xffffffff);
      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

