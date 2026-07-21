
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintBBut */

void __thiscall
CPanelTy::PaintBBut(CPanelTy *this,byte param_1,AnonShape_004F37C0_C7280A38 *param_2,byte param_3,
                   char *param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  LPSTR text;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame local_54;
  AnonNested_004F37C0_0018_F555AF4C *local_10;
  ushort *local_c;
  CPanelTy *local_8;
  
  local_10 = param_2->field_0018;
  local_c = (ushort *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = (int *)Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != (int *)0x0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1de,0,(int)errorCode,
                               &DAT_007a4ccc,s_CPanelTy__PaintBBut_007c1b50);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1de);
    return;
  }
  iVar5 = 1;
  text = FUN_006f2c00(param_4,1,param_5 & 0xff);
  local_c = cMf32::RecGet(DAT_00806790,param_3,text,errorCode,iVar5);
  pCVar3 = local_8;
  uVar2 = (uint)param_1;
  iVar5 = local_10->field_0004;
  iVar4 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (local_8->field_0134 != 0) {
      iVar4 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
      break;
    }
    goto LAB_004f38ad;
  default:
    if (local_8->field_0130 != 0) {
      iVar4 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
    }
    break;
  case 3:
    if (local_8->field_0134 != 0) {
      iVar4 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
    }
    break;
  case 5:
    if (local_8->field_0138 != 0) {
      iVar4 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
    }
    break;
  case 7:
    if (local_8->field_0138 != 0) {
      iVar4 = *(int *)(&local_8->field_0x94 + uVar2 * 4);
      break;
    }
LAB_004f38ad:
    iVar5 = iVar5 - local_8->field_00C0;
  }
  DibPut((AnonShape_006B5B10_E0D06CF1 *)(&local_8->field_0180)[uVar2],
         local_10->field_0000 - (&local_8->field_003C)[uVar2],iVar5 - iVar4,param_3,(byte *)local_c)
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

