
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::SetState
   
   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/cLoadingTy_SetState_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
cLoadingTy::SetState
          (cLoadingTy *this,cLoadingTy_SetState_param_1Enum param_1,uint param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *extraout_EAX;
  char *extraout_EAX_00;
  char *extraout_EAX_01;
  char *extraout_EAX_02;
  DWORD DVar4;
  char *extraout_EAX_03;
  char *extraout_EAX_04;
  char *extraout_EAX_05;
  char *extraout_EAX_06;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  cLoadingTy *pcVar10;
  uint *puVar11;
  void *unaff_EDI;
  uint *puVar12;
  char *pcVar13;
  uint local_450 [256];
  InternalExceptionFrame local_50;
  uint local_c;
  cLoadingTy *local_8;
  
  local_8 = this;
  sub_00555570(this);
  if ((int)this->field_003C < -1) {
    return;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pcVar10 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0x14a,0,iVar3,&DAT_007a4ccc,
                               s_cLoadingTy__SetState_007c8fd0);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_grig_loading_cpp_007c8f0c,0x14b);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  switch(param_1) {
  case CASE_0:
    LoadResourceString(0x267a,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    puVar11 = (uint *)(pcVar13 + -uVar7);
    puVar12 = local_450;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    LoadResourceString(0x267e,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX_00;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar8 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar8 != '\0');
    pcVar9 = pcVar13 + -uVar7;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar13 = pcVar13 + 1;
    }
    DrawLine(local_8,local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_1:
    LoadResourceString(0x267a,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX_01;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    puVar11 = (uint *)(pcVar13 + -uVar7);
    puVar12 = local_450;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    LoadResourceString(0x267b,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX_02;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar8 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar8 != '\0');
    pcVar9 = pcVar13 + -uVar7;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; pcVar10 = local_8, uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (local_8->field_003C == 0) {
      uVar7 = local_8->field_0040;
      if (uVar7 < param_2) {
        param_2 = uVar7;
      }
    }
    else {
      DVar4 = timeGetTime();
      uVar7 = pcVar10->field_0040;
      param_2 = DVar4 - pcVar10->field_0044;
      if (uVar7 < param_2) {
        param_2 = uVar7;
      }
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar7 = (param_2 * 100) / uVar7;
    if (uVar7 != pcVar10->field_0050) {
      if (0 < (int)uVar7) {
        local_c = uVar7;
        do {
          uVar8 = 0xffffffff;
          pcVar9 = &DAT_007c8fec;
          do {
            pcVar13 = pcVar9;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar3 = -1;
          puVar11 = local_450;
          do {
            puVar12 = puVar11;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            puVar12 = (uint *)((int)puVar11 + 1);
            uVar6 = *puVar11;
            puVar11 = puVar12;
          } while ((char)uVar6 != '\0');
          pcVar9 = pcVar13 + -uVar8;
          pcVar13 = (char *)((int)puVar12 + -1);
          for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar13 = pcVar13 + 4;
          }
          uVar6 = local_c - 1;
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar13 = pcVar13 + 1;
          }
          local_c = uVar6;
          pcVar10 = local_8;
        } while (uVar6 != 0);
      }
      DrawLine(pcVar10,local_450);
      pcVar10->field_0050 = uVar7;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if ((code *)pcVar10->field_0058 != (code *)0x0) {
      (*(code *)pcVar10->field_0058)(pcVar10->field_0054);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    break;
  case CASE_2:
    local_8->field_003C = 0xffffffff;
    LoadResourceString(0x267a,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX_03;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    puVar11 = (uint *)(pcVar13 + -uVar7);
    puVar12 = local_450;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    LoadResourceString(0x267c,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX_04;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar8 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar8 != '\0');
    pcVar9 = pcVar13 + -uVar7;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar13 = pcVar13 + 1;
    }
    goto joined_r0x00555393;
  case CASE_3:
    local_8->field_003C = 0xffffffff;
    LoadResourceString(0x267a,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX_05;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    puVar11 = (uint *)(pcVar13 + -uVar7);
    puVar12 = local_450;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    LoadResourceString(0x267d,HINSTANCE_00807618);
    uVar7 = 0xffffffff;
    pcVar9 = extraout_EAX_06;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    puVar11 = local_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar8 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar8 != '\0');
    pcVar9 = pcVar13 + -uVar7;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar13 = pcVar13 + 1;
    }
joined_r0x00555393:
    if (param_3 != (char *)0x0) {
      uVar7 = 0xffffffff;
      do {
        pcVar9 = param_3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar9 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar9;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar3 = -1;
      puVar11 = local_450;
      do {
        puVar12 = puVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        puVar12 = (uint *)((int)puVar11 + 1);
        uVar8 = *puVar11;
        puVar11 = puVar12;
      } while ((char)uVar8 != '\0');
      pcVar9 = pcVar9 + -uVar7;
      pcVar13 = (char *)((int)puVar12 + -1);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    DrawLineCR(pcVar10,local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  default:
    if ((code *)local_8->field_0058 != (code *)0x0) {
      (*(code *)local_8->field_0058)(local_8->field_0054);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

