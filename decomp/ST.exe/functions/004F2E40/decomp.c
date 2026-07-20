
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::SetButStruct */

void __thiscall
CPanelTy::SetButStruct
          (CPanelTy *this,undefined4 *param_1,byte param_2,undefined4 param_3,int param_4,
          int param_5,byte param_6,undefined4 param_7,undefined2 param_8,undefined2 param_9,
          undefined4 param_10,char *param_11)

{
  undefined1 *text;
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    puVar6 = param_1;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *param_1 = param_3;
    uVar2 = (uint)param_2;
    param_1[2] = (&local_c->field_003C)[uVar2] + param_4;
    iVar3 = local_c->field_0130;
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = local_c->field_0134;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar3 = local_c->field_0138;
    }
    if (iVar3 == 0) {
      if ((param_2 == 1) || (param_2 == 7)) {
        iVar3 = local_c->field_00C0;
      }
      else {
        iVar3 = 0;
      }
      iVar3 = iVar3 + DAT_00806734;
    }
    else {
      iVar3 = *(int *)(&local_c->field_0x94 + uVar2 * 4);
    }
    text = &local_c->field_0x1e1;
    param_1[3] = iVar3 + param_5;
    param_1[0x42] = 1;
    param_1[0x43] = 1;
    wsprintfA(text,&DAT_007c181c,param_7);
    local_8 = cMf32::RecGet(DAT_00806790,param_6,text,(int *)0x0,1);
    param_1[4] = *(undefined4 *)(local_8 + 2);
    param_1[5] = *(undefined4 *)(local_8 + 4);
    cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
    param_1[0x21] = 3;
    param_1[0x2a] = 3;
    param_1[0x20] = 0x101;
    param_1[0x22] = 0x4201;
    *(undefined2 *)(param_1 + 0x23) = param_9;
    *(undefined2 *)((int)param_1 + 0x8e) = param_8;
    param_1[0x24] = param_10;
    param_1[0x26] = 0;
    param_1[0x2f] = 1;
    param_1[0x29] = 0x101;
    param_1[0x2b] = 0x4202;
    *(undefined2 *)(param_1 + 0x2c) = param_9;
    *(undefined2 *)((int)param_1 + 0xb2) = param_8;
    param_1[0x2d] = param_10;
    if (param_11 != (char *)0x0) {
      uVar4 = FUN_0070aa70(DAT_00806790,param_11,0,1);
      param_1[0x49] = uVar4;
      iVar3 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,param_11,1);
      param_1[0x4a] = iVar3;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x171,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__SetButStruct_007c1b04);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x171);
  return;
}

