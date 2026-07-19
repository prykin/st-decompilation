
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::SetImagesPtr
   
   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/SpriteClassTy_SetImagesPtr_param_2Enum. Cases:
   CASE_7=7;CASE_8=8;CASE_1E=30;CASE_81=129 */

undefined4 __thiscall
SpriteClassTy::SetImagesPtr
          (SpriteClassTy *this,short *param_1,SpriteClassTy_SetImagesPtr_param_2Enum param_2,
          uint param_3)

{
  char cVar1;
  short *psVar2;
  code *pcVar3;
  SpriteClassTy *pSVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  void *unaff_EDI;
  char *pcVar11;
  InternalExceptionFrame local_4c;
  SpriteClassTy *local_8;
  
  if (this->field_0004 == -1) {
    return 0;
  }
  if (this->field_004C == -0x80) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E__Ourlib_Sprite_cpp_007f0454,0x161,0,iVar5,&DAT_007a4ccc,
                               s_SpriteClassTy__SetImagesPtr_007f04dc);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    RaiseInternalException(iVar5,0,s_E__Ourlib_Sprite_cpp_007f0454,0x163);
    return 0xfffffc18;
  }
  local_8->field_004D = 0;
  if (local_8->field_0061 == 0) {
    switch(local_8->field_004C) {
    case 7:
    case 0x81:
      if (local_8->field_0051 != 0) {
        FUN_00725e30(&local_8->field_0051);
      }
      break;
    case 8:
      if (local_8->field_0059 != 0) {
        FUN_00726260(&local_8->field_0059);
      }
      break;
    case 0x1e:
      if (local_8->field_0055 != 0) {
        FUN_00726bd0(&local_8->field_0055);
      }
    }
  }
  switch(param_2) {
  case CASE_7:
  case CASE_81:
    pSVar4->field_0051 = param_1;
    Library::DKW::DDX::FUN_006b2930
              ((int *)pSVar4->field_0048,pSVar4->field_0004,0,
               (undefined4 *)(int)*(short *)((int)param_1 + 0x23),(int *)((int)param_1 + 0x2d),
               0x8000000,(int)*(short *)((int)param_1 + 0x29),(int)*(short *)((int)param_1 + 0x2b));
    iVar5 = pSVar4->field_0051;
    pSVar4->field_000C = (int)*(short *)(iVar5 + 0x23);
    pSVar4->field_0024 = (int)*(short *)(iVar5 + 0x29);
    pSVar4->field_0028 = (int)*(short *)(iVar5 + 0x2b);
    break;
  case CASE_8:
    pSVar4->field_0059 = param_1;
    Library::DKW::DDX::FUN_006b2930
              ((int *)pSVar4->field_0048,pSVar4->field_0004,(int)*param_1,
               (undefined4 *)(int)param_1[1],(int *)(param_1 + 6),0x4000000,(int)param_1[2],
               (int)param_1[3]);
    psVar2 = (short *)pSVar4->field_0059;
    pSVar4->field_000C = (int)psVar2[1];
    pSVar4->field_0018 = (int)*psVar2;
    pSVar4->field_0024 = (int)psVar2[2];
    pSVar4->field_0028 = (int)psVar2[3];
    pSVar4->field_004D = 0xffffffff;
    break;
  case CASE_1E:
    pSVar4->field_0055 = param_1;
    Library::DKW::DDX::FUN_006b2930
              ((int *)pSVar4->field_0048,pSVar4->field_0004,0,(undefined4 *)(int)*param_1,
               (int *)(param_1 + 5),0x8000000,(int)param_1[3],(int)param_1[4]);
    psVar2 = (short *)pSVar4->field_0055;
    pSVar4->field_000C = (int)*psVar2;
    pSVar4->field_0024 = (int)psVar2[3];
    pSVar4->field_0028 = (int)psVar2[4];
  }
  pSVar4->field_004C = param_2;
  iVar5 = pSVar4->field_000C;
  if (iVar5 < 1) {
    iVar7 = iVar5 + -1;
  }
  else {
    iVar7 = 0;
  }
  pSVar4->field_0010 = iVar7;
  pSVar4->field_0014 = iVar5 + -1;
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_008016a0;
  do {
    pcVar11 = pcVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar10 = pcVar11 + -uVar8;
  pcVar11 = &pSVar4->field_0065;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (param_3 != 0xffffffff) {
    FUN_006b3020(pSVar4->field_0048,pSVar4->field_0004,param_3);
    pSVar4->field_005D = param_3;
  }
  pSVar4->field_0061 = 0;
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

