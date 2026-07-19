
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::SetImages
   
   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/SpriteClassTy_SetImages_param_2Enum. Cases:
   CASE_7=7;CASE_8=8;CASE_1E=30;CASE_81=129 */

undefined4 __thiscall
SpriteClassTy::SetImages
          (SpriteClassTy *this,undefined4 param_1,SpriteClassTy_SetImages_param_2Enum param_2,
          uint param_3,char *param_4,uint param_5,int param_6)

{
  char cVar1;
  code *pcVar2;
  SpriteClassTy *pSVar3;
  int iVar4;
  char *pcVar5;
  short *psVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar11;
  InternalExceptionFrame local_50;
  SpriteClassTy *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (this->field_0004 == -1) {
    return 0;
  }
  if (this->field_004C == -0x80) {
    return 0;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_c;
  if (iVar4 == 0) {
    local_c->field_004D = 0;
    if (local_c->field_0061 == 0) {
      switch(local_c->field_004C) {
      case 7:
      case 0x81:
        if (local_c->field_0051 != 0) {
          FUN_00725e30(&local_c->field_0051);
        }
        break;
      case 8:
        if (local_c->field_0059 != 0) {
          FUN_00726260(&local_c->field_0059);
        }
        break;
      case 0x1e:
        if (local_c->field_0055 != 0) {
          FUN_00726bd0(&local_c->field_0055);
        }
      }
    }
    switch(param_2) {
    case CASE_7:
    case CASE_81:
      pcVar5 = FUN_00725c60(param_1,param_4,0,param_6);
      pSVar3->field_0051 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib_Sprite_cpp_007f0454,0xe4);
      }
      iVar4 = pSVar3->field_0051;
      Library::DKW::DDX::FUN_006b2930
                ((int *)pSVar3->field_0048,pSVar3->field_0004,0,
                 (undefined4 *)(int)*(short *)(iVar4 + 0x23),(int *)(iVar4 + 0x2d),0x8000000,
                 (int)*(short *)(iVar4 + 0x29),(int)*(short *)(iVar4 + 0x2b));
      iVar4 = pSVar3->field_0051;
      pSVar3->field_000C = (int)*(short *)(iVar4 + 0x23);
      pSVar3->field_0024 = (int)*(short *)(iVar4 + 0x29);
      pSVar3->field_0028 = (int)*(short *)(iVar4 + 0x2b);
      break;
    case CASE_8:
      psVar6 = FUN_00725f50(param_1,param_4,param_3,0,param_6);
      pSVar3->field_0059 = psVar6;
      if (psVar6 == (short *)0x0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib_Sprite_cpp_007f0454,0xf8);
      }
      psVar6 = (short *)pSVar3->field_0059;
      Library::DKW::DDX::FUN_006b2930
                ((int *)pSVar3->field_0048,pSVar3->field_0004,(int)*psVar6,
                 (undefined4 *)(int)psVar6[1],(int *)(psVar6 + 6),0x4000000,(int)psVar6[2],
                 (int)psVar6[3]);
      psVar6 = (short *)pSVar3->field_0059;
      pSVar3->field_000C = (int)psVar6[1];
      pSVar3->field_0018 = (int)*psVar6;
      pSVar3->field_0024 = (int)psVar6[2];
      pSVar3->field_0028 = (int)psVar6[3];
      pSVar3->field_004D = param_3;
      break;
    case CASE_1E:
      psVar6 = FUN_00726a80(param_1,param_4,0,param_6);
      pSVar3->field_0055 = psVar6;
      if (psVar6 == (short *)0x0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib_Sprite_cpp_007f0454,0xee);
      }
      psVar6 = (short *)pSVar3->field_0055;
      Library::DKW::DDX::FUN_006b2930
                ((int *)pSVar3->field_0048,pSVar3->field_0004,0,(undefined4 *)(int)*psVar6,
                 (int *)(psVar6 + 5),0x8000000,(int)psVar6[3],(int)psVar6[4]);
      psVar6 = (short *)pSVar3->field_0055;
      pSVar3->field_000C = (int)*psVar6;
      pSVar3->field_0024 = (int)psVar6[3];
      pSVar3->field_0028 = (int)psVar6[4];
    }
    pSVar3->field_004C = param_2;
    iVar4 = pSVar3->field_000C;
    if (iVar4 < 1) {
      iVar8 = iVar4 + -1;
    }
    else {
      iVar8 = 0;
    }
    pSVar3->field_0010 = iVar8;
    pSVar3->field_0014 = iVar4 + -1;
    uVar9 = 0xffffffff;
    do {
      pcVar5 = param_4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar5 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar5;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar5 = pcVar5 + -uVar9;
    pcVar11 = &pSVar3->field_0065;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if (param_5 != 0xffffffff) {
      FUN_006b3020(pSVar3->field_0048,pSVar3->field_0004,param_5);
      pSVar3->field_005D = param_5;
    }
    pSVar3->field_0061 = 0;
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    local_8 = 0xfffffffc;
    if (param_6 != 0) {
      iVar8 = ReportDebugMessage(s_E__Ourlib_Sprite_cpp_007f0454,0x115,0,iVar4,&DAT_007a4ccc,
                                 s_SpriteClassTy__SetImages_007f04c0);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      RaiseInternalException(iVar4,0,s_E__Ourlib_Sprite_cpp_007f0454,0x117);
      return 0xfffffffc;
    }
  }
  return local_8;
}

