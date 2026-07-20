
void __thiscall FUN_0054b700(void *this,int param_1)

{
  AnonShape_0054B700_B3EE6DE9 *pAVar1;
  int iVar2;
  BITMAPINFO *pBVar3;
  void *unaff_ESI;
  int iVar4;
  int iVar5;
  int iVar6;
  InternalExceptionFrame *pIVar7;
  undefined4 local_48 [16];
  AnonShape_0054B700_B3EE6DE9 *local_8;
  
  pIVar7 = g_currentExceptionFrame;
  if (param_1 == *(int *)((int)this + 0x4df)) {
    return;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar7);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar7;
    return;
  }
  if (DAT_0080874e == '\x03') {
    iVar6 = 0x68;
    iVar5 = 0xb;
    iVar2 = g_nWidth_00806730 + -0x15;
    iVar4 = 0xea;
  }
  else {
    iVar6 = 0x8f;
    iVar5 = 0x10;
    iVar2 = g_nWidth_00806730 + -0x18;
    iVar4 = 0xa1;
  }
  FUN_006b5f80(DAT_008075a8,iVar2,iVar4,iVar5,iVar6);
  pAVar1 = local_8;
  if (local_8->field_04DF < 0) goto LAB_0054b81b;
  if (DAT_0080874e == '\x01') {
    iVar2 = 1;
LAB_0054b7e0:
    pBVar3 = (BITMAPINFO *)FUN_0070b3a0(local_8->field_04E3,iVar2);
    iVar2 = pAVar1->field_04DF * -0x1d + 0x115;
    iVar4 = g_nWidth_00806730 + -0x18;
  }
  else {
    if (DAT_0080874e == '\x02') {
      iVar2 = 3;
      goto LAB_0054b7e0;
    }
    if (DAT_0080874e != '\x03') goto LAB_0054b81b;
    pBVar3 = (BITMAPINFO *)FUN_0070b3a0(local_8->field_04E3,5);
    iVar2 = pAVar1->field_04DF * -0x13 + 0x136;
    iVar4 = g_nWidth_00806730 + -0x15;
  }
  PutDDX(iVar4,iVar2,'\x06',pBVar3);
LAB_0054b81b:
  pAVar1->field_04DF = param_1;
  if (-1 < param_1) {
    if (DAT_0080874e == '\x01') {
      pBVar3 = (BITMAPINFO *)FUN_0070b3a0(pAVar1->field_04E3,0);
      iVar4 = pAVar1->field_04DF * -0x1d + 0x115;
      iVar2 = g_nWidth_00806730 + -0x18;
    }
    else if (DAT_0080874e == '\x02') {
      pBVar3 = (BITMAPINFO *)FUN_0070b3a0(pAVar1->field_04E3,2);
      iVar4 = pAVar1->field_04DF * -0x1d + 0x115;
      iVar2 = g_nWidth_00806730 + -0x18;
    }
    else {
      if (DAT_0080874e != '\x03') {
        g_currentExceptionFrame = pIVar7;
        return;
      }
      pBVar3 = (BITMAPINFO *)FUN_0070b3a0(pAVar1->field_04E3,4);
      iVar4 = pAVar1->field_04DF * -0x13 + 0x136;
      iVar2 = g_nWidth_00806730 + -0x15;
    }
    PutDDX(iVar2,iVar4,'\x06',pBVar3);
  }
  g_currentExceptionFrame = pIVar7;
  return;
}

