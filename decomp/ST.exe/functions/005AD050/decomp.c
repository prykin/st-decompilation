
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PaintChooseMap */

void __thiscall ChooseMapTy::PaintChooseMap(ChooseMapTy *this,char param_1)

{
  ChooseMapTy_field_1A5FState CVar1;
  code *pcVar2;
  ChooseMapTy *pCVar3;
  int errorCode;
  UINT UVar4;
  uint *puVar5;
  int iVar6;
  MMMObjTy *this_00;
  MMMObjTy *this_01;
  StartServTy *this_02;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x1bb,0,errorCode,
                               &DAT_007a4ccc,s_ChooseMapTy__PaintChooseMap_007cc7cc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_load_obj_cpp_007cc728,0x1bb);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
  pCVar3 = local_8;
  if ((*(int *)&local_8[1].field_0x658 == 0) && (param_1 == '\0')) {
    MMMObjTy::OutBSlProc
              (this_00,(int)DAT_0080759c,0,0,0x112,0x38,0x204,0x19d,
               (undefined4 *)(*(int *)&local_8->field_0x1a5b + 0x140));
  }
  if (((*(int *)&pCVar3[1].field_0x65c == 0) && (param_1 == '\0')) ||
     ((param_1 != '\0' && (pCVar3[1].field_0x654 == '\0')))) {
    this_01 = (MMMObjTy *)(*(int *)&pCVar3->field_0x1a5b + 0x140);
    MMMObjTy::OutBSlProc(this_01,(int)DAT_0080759c,0,0,10,0xb4,0xf9,0x121,(undefined4 *)this_01);
  }
  CVar1 = pCVar3->field_1A5F;
  if (((((CVar1 == CASE_C) || (CVar1 == CASE_4)) || (CVar1 == CASE_5)) || (CVar1 == CASE_13)) &&
     (((*(int *)&pCVar3[1].field_0x660 == 0 && (param_1 == '\0')) ||
      ((param_1 != '\0' && (pCVar3[1].field_0x657 == '\0')))))) {
    ChatGlassTy::OutChGlProc
              (DAT_0080759c,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,
               (undefined4 *)(*(int *)&pCVar3->field_0x1a5b + 0x140));
  }
  switch(pCVar3->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = 0x26ae;
    break;
  case CASE_2|CASE_1:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = 0x26af;
    break;
  default:
    goto switchD_005ad1b8_caseD_6;
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = 0x26ad;
    break;
  case CASE_13:
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    UVar4 = (DAT_00803400 != '\f') + 0x26ad;
  }
  uVar10 = 0;
  uVar8 = 0xffffffff;
  uVar7 = 0xfffffffe;
  puVar5 = (uint *)FUN_006b0140(UVar4,DAT_00807618);
  StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar5,uVar7,uVar8,pvVar9,uVar10);
switchD_005ad1b8_caseD_6:
  g_currentExceptionFrame = local_4c.previous;
  return;
}

