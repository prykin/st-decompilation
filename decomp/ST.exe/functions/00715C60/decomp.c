
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::SetImagesReg
   
   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/SpriteClassTy_SetImagesReg_param_2Enum. Cases:
   CASE_7=7;CASE_8=8;CASE_1E=30;CASE_81=129 */

undefined4 __thiscall
SpriteClassTy::SetImagesReg
          (SpriteClassTy *this,int *param_1,SpriteClassTy_SetImagesReg_param_2Enum param_2,
          uint param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  short *psVar2;
  code *pcVar3;
  SpriteClassTy *pSVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  byte *pbVar11;
  void *unaff_EDI;
  byte *pbVar12;
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
    iVar8 = ReportDebugMessage(s_E__Ourlib_Sprite_cpp_007f0454,0xc3,0,iVar5,&DAT_007a4ccc,
                               s_SpriteClassTy__SetImagesReg_007f04a4);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    RaiseInternalException(iVar5,0,s_E__Ourlib_Sprite_cpp_007f0454,0xc5);
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
    puVar6 = FUN_00709af0(param_1,param_2,param_4,param_3,0,1,0,(undefined4 *)0x0);
    pSVar4->field_0051 = puVar6;
    Library::DKW::DDX::FUN_006b2930
              ((int *)pSVar4->field_0048,pSVar4->field_0004,0,
               (undefined4 *)(int)*(short *)((int)puVar6 + 0x23),(int *)((int)puVar6 + 0x2d),
               0x8000000,(int)*(short *)((int)puVar6 + 0x29),(int)*(short *)((int)puVar6 + 0x2b));
    iVar5 = pSVar4->field_0051;
    pSVar4->field_000C = (int)*(short *)(iVar5 + 0x23);
    pSVar4->field_0024 = (int)*(short *)(iVar5 + 0x29);
    pSVar4->field_0028 = (int)*(short *)(iVar5 + 0x2b);
    break;
  case CASE_8:
    puVar6 = FUN_00709af0(param_1,param_2,param_4,param_3,0,1,0,(undefined4 *)0x0);
    pSVar4->field_0059 = puVar6;
    Library::DKW::DDX::FUN_006b2930
              ((int *)pSVar4->field_0048,pSVar4->field_0004,(int)(short)*puVar6,
               (undefined4 *)(int)(short)puVar6[1],(int *)(puVar6 + 6),0x4000000,
               (int)(short)puVar6[2],(int)(short)puVar6[3]);
    psVar2 = (short *)pSVar4->field_0059;
    pSVar4->field_000C = (int)psVar2[1];
    pSVar4->field_0018 = (int)*psVar2;
    pSVar4->field_0024 = (int)psVar2[2];
    pSVar4->field_0028 = (int)psVar2[3];
    pSVar4->field_004D = param_3;
    break;
  case CASE_1E:
    puVar6 = FUN_00709af0(param_1,param_2,param_4,param_3,0,1,0,(undefined4 *)0x0);
    pSVar4->field_0055 = puVar6;
    Library::DKW::DDX::FUN_006b2930
              ((int *)pSVar4->field_0048,pSVar4->field_0004,0,(undefined4 *)(int)(short)*puVar6,
               (int *)(puVar6 + 5),0x8000000,(int)(short)puVar6[3],(int)(short)puVar6[4]);
    psVar2 = (short *)pSVar4->field_0055;
    pSVar4->field_000C = (int)*psVar2;
    pSVar4->field_0024 = (int)psVar2[3];
    pSVar4->field_0028 = (int)psVar2[4];
  }
  pSVar4->field_004C = param_2;
  iVar5 = pSVar4->field_000C;
  if (iVar5 < 1) {
    iVar8 = iVar5 + -1;
  }
  else {
    iVar8 = 0;
  }
  pSVar4->field_0010 = iVar8;
  pSVar4->field_0014 = iVar5 + -1;
  uVar9 = 0xffffffff;
  do {
    pbVar11 = param_4;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pbVar11 = param_4 + 1;
    bVar1 = *param_4;
    param_4 = pbVar11;
  } while (bVar1 != 0);
  uVar9 = ~uVar9;
  pbVar11 = pbVar11 + -uVar9;
  pbVar12 = &pSVar4->field_0065;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar12 = pbVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pbVar12 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
  }
  if (param_5 != 0xffffffff) {
    FUN_006b3020(pSVar4->field_0048,pSVar4->field_0004,param_5);
    pSVar4->field_005D = param_5;
  }
  pSVar4->field_0061 = 1;
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

