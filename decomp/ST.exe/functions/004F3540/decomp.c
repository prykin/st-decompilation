
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintBut
   
   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004FB060 -> 004F3540 @ 004FD4D0 | 004FB060 -> 004F3540 @ 004FD51D */

void __thiscall
CPanelTy::PaintBut(CPanelTy *this,byte param_1,AnonShape_004F3540_E0E47AE6 *param_2,byte param_3,
                  char *text,undefined *param_5)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR text_00;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  InternalExceptionFrame local_54;
  AnonNested_004F3540_0018_2CFA22F7 *local_10;
  ushort *local_c;
  CPanelTy *local_8;
  
  local_10 = param_2->field_0018;
  local_c = (ushort *)0x0;
  if (param_5 == (undefined *)0x0) {
    return;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = (int *)Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != (int *)0x0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1cd,0,(int)errorCode,
                               &DAT_007a4ccc,s_CPanelTy__PaintBut_007c1b38);
    if (iVar6 == 0) {
      RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1cd);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = 1;
  uVar4 = (*(code *)param_5)(param_2);
  text_00 = FUN_006f2c00(text,1,uVar4);
  local_c = cMf32::RecGet(DAT_00806790,param_3,text_00,errorCode,iVar6);
  pCVar3 = local_8;
  uVar2 = (uint)param_1;
  iVar6 = local_10->field_0004;
  iVar5 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (local_8->field_0134 != 0) {
      iVar5 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
      break;
    }
    goto LAB_004f3636;
  default:
    if (local_8->field_0130 != 0) {
      iVar5 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
    }
    break;
  case 3:
    if (local_8->field_0134 != 0) {
      iVar5 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
    }
    break;
  case 5:
    if (local_8->field_0138 != 0) {
      iVar5 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
    }
    break;
  case 7:
    if (local_8->field_0138 != 0) {
      iVar5 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
      break;
    }
LAB_004f3636:
    iVar6 = iVar6 - local_8->field_00C0;
  }
  DibPut((AnonShape_006B5B10_E0D06CF1 *)(&local_8->field_0180)[uVar2],
         local_10->field_0000 - (&local_8->field_003C)[uVar2],iVar6 - iVar5,param_3,(byte *)local_c)
  ;
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
  if ((param_1 < 0xb) && (-1 < (int)(&pCVar3->field_0148)[uVar2])) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,(&pCVar3->field_0148)[uVar2],0xffffffff,(&pCVar3->field_003C)[uVar2],
               *(uint *)(&pCVar3->field_0x94 + uVar2 * 4));
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

