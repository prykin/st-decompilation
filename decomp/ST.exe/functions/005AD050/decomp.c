
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PaintChooseMap */

void __thiscall ChooseMapTy::PaintChooseMap(ChooseMapTy *this,char param_1)

{
  ChooseMapTy CVar1;
  code *pcVar2;
  ChooseMapTy *pCVar3;
  int iVar4;
  UINT UVar5;
  uint *puVar6;
  int iVar7;
  MMMObjTy *this_00;
  StartServTy *this_01;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 local_4c;
  undefined4 local_48 [16];
  ChooseMapTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar4 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x1bb,0,iVar4,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cc728,0x1bb);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
  pCVar3 = local_8;
  if ((*(int *)(local_8 + 0x20b8) == 0) && (param_1 == '\0')) {
    MMMObjTy::OutBSlProc
              (this_00,(int)DAT_0080759c,0,0,0x112,0x38,0x204,0x19d,
               (undefined4 *)(*(int *)(local_8 + 0x1a5b) + 0x140));
  }
  if (((*(int *)(pCVar3 + 0x20bc) == 0) && (param_1 == '\0')) ||
     ((param_1 != '\0' && (pCVar3[0x20b4] == (ChooseMapTy)0x0)))) {
    MMMObjTy::OutBSlProc
              ((MMMObjTy *)(*(int *)(pCVar3 + 0x1a5b) + 0x140),(int)DAT_0080759c,0,0,10,0xb4,0xf9,
               0x121,(undefined4 *)(*(int *)(pCVar3 + 0x1a5b) + 0x140));
  }
  CVar1 = pCVar3[0x1a5f];
  if (((((CVar1 == (ChooseMapTy)0xc) || (CVar1 == (ChooseMapTy)0x4)) || (CVar1 == (ChooseMapTy)0x5))
      || (CVar1 == (ChooseMapTy)0x13)) &&
     (((*(int *)(pCVar3 + 0x20c0) == 0 && (param_1 == '\0')) ||
      ((param_1 != '\0' && (pCVar3[0x20b7] == (ChooseMapTy)0x0)))))) {
    ChatGlassTy::OutChGlProc
              (DAT_0080759c,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,
               (undefined4 *)(*(int *)(pCVar3 + 0x1a5b) + 0x140));
  }
  switch(pCVar3[0x1a5f]) {
  case (ChooseMapTy)0x1:
  case (ChooseMapTy)0x2:
  case (ChooseMapTy)0x4:
  case (ChooseMapTy)0x5:
    pvVar10 = *(void **)(DAT_0081176c + 0x30);
    UVar5 = 0x26ae;
    break;
  case (ChooseMapTy)0x3:
    pvVar10 = *(void **)(DAT_0081176c + 0x30);
    UVar5 = 0x26af;
    break;
  default:
    goto switchD_005ad1b8_caseD_6;
  case (ChooseMapTy)0x9:
  case (ChooseMapTy)0xa:
  case (ChooseMapTy)0xb:
  case (ChooseMapTy)0xc:
    pvVar10 = *(void **)(DAT_0081176c + 0x30);
    UVar5 = 0x26ad;
    break;
  case (ChooseMapTy)0x13:
    pvVar10 = *(void **)(DAT_0081176c + 0x30);
    UVar5 = (DAT_00803400 != '\f') + 0x26ad;
  }
  uVar11 = 0;
  uVar9 = 0xffffffff;
  uVar8 = 0xfffffffe;
  puVar6 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
  StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar6,uVar8,uVar9,pvVar10,uVar11);
switchD_005ad1b8_caseD_6:
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

