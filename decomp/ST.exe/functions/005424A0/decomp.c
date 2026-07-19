
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tintersys.cpp
   InterSystemC::CreateInterfObjects */

undefined4 __thiscall InterSystemC::CreateInterfObjects(InterSystemC *this)

{
  code *pcVar1;
  bool bVar2;
  InterSystemC *this_00;
  int iVar3;
  LPSTR pCVar4;
  byte *pbVar5;
  ushort *puVar6;
  char *pcVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  InternalExceptionFrame local_1c8;
  uint local_184 [4];
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_60;
  int local_5c;
  InterSystemC *local_8;
  
  local_1c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c8;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_1c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (DAT_0080874e == '\x01') {
      iVar3 = thunk_FUN_00541cf0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    else if (DAT_0080874e == '\x02') {
      iVar3 = thunk_FUN_00541f60(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    else {
      iVar3 = thunk_FUN_005421d0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    }
    this_00->field_0024 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = thunk_FUN_005412b0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_0028 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 0;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = thunk_FUN_005416a0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_002C = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = thunk_FUN_005419e0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_0030 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    thunk_FUN_0056a500();
    puVar8 = local_184;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar14 = (undefined4 *)0x0;
    iVar13 = 0;
    iVar12 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    uVar9 = 0;
    iVar3 = 1;
    local_184[1] = 1;
    local_184[0] = 1;
    pCVar4 = thunk_FUN_00571240(s_BUT_FILEOPT_007c7c48,0);
    pbVar5 = (byte *)FUN_006f2c00(pCVar4,iVar3,uVar9);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1,pbVar5,uVar10,bVar11,iVar12,iVar13,puVar14);
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 5) + 0x26;
    local_174 = *(undefined4 *)(puVar6 + 2);
    local_164 = this_00->field_0014;
    local_184[3] = (DAT_0080874e != '\x03') + 7;
    local_170 = *(undefined4 *)(puVar6 + 4);
    local_e0 = 0x101;
    local_104 = 0x101;
    local_dc = 3;
    local_100 = 3;
    local_d0 = 0x2717;
    local_f4 = 0x2717;
    local_d2 = 2;
    local_f6 = 2;
    local_120 = 0;
    local_160 = 0;
    local_15c = 0xb8ff;
    local_11c = 0xb900;
    local_fc = 0x4201;
    local_d8 = 0x4202;
    local_d4 = 0;
    local_f8 = 0;
    local_ec = 0;
    local_c8 = 1;
    local_124 = local_164;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,(undefined4 *)0x0,(int *)0x0,local_184,1);
    if ((*(char *)((int)&DAT_008087c4 + (uint)DAT_0080874d * 0x51 + 3) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((!bVar2) || ((DAT_00808783 == '\x03' && (DAT_00808aa9 == '\0')))) {
      local_184[0] = 0;
    }
    local_15c = 0xb905;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 4) + 0x7c;
    local_11c = 0xb906;
    local_d0 = 0x271a;
    local_f4 = 0x271a;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,(undefined4 *)0x0,(int *)0x0,local_184,1);
    local_d0 = 0x2718;
    local_f4 = 0x2718;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 3) + 0xd2;
    local_184[0] = 1;
    local_15c = 0xb901;
    local_11c = 0xb902;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,(undefined4 *)0x0,(int *)0x0,local_184,1);
    if ((*(char *)((int)&DAT_008087c4 + (uint)DAT_0080874d * 0x51 + 3) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    local_184[0] = (uint)bVar11;
    local_d0 = 0x2719;
    local_f4 = 0x2719;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 2) + 0x128;
    local_15c = 0xb903;
    local_11c = 0xb904;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,(undefined4 *)0x0,(int *)0x0,local_184,1);
    local_184[3] = DAT_00806734 + -0x1a;
    local_184[2] = DAT_00806730 + -0x32;
    local_184[0] = 1;
    local_174 = 0x28;
    local_170 = 0x12;
    if (DAT_0080874e == '\x03') {
      local_60 = FUN_0070aa70(DAT_00806790,s_BUT_OHELPMSK_007c7c38,0,1);
      local_5c = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_OHELPMSK_007c7c38,1);
    }
    local_d0 = 0x2739;
    local_f4 = 0x2739;
    local_15c = 0xb907;
    local_11c = 0xb908;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,(undefined4 *)0x0,(int *)0x0,local_184,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x11f,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x120,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x122,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x123,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x125,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x127,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x128,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12a,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    if (DAT_0080874e == '\x03') {
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x151,(undefined4 *)0x0,(int *)0x0,0,1);
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x159,(undefined4 *)0x0,(int *)0x0,0,1);
    }
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x149,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x148,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14a,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x153,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x155,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x154,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x156,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,299,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12e,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14b,(undefined4 *)0x0,(int *)0x0,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->slot_10)(0x201,0);
    thunk_FUN_0056a500();
    if (DAT_00801690 != (int *)0x0) {
      thunk_FUN_0051da70(DAT_00801690);
    }
    thunk_FUN_0056a500();
    if ((DAT_0080877e == '\0') && (DAT_008016d8 != (void *)0x0)) {
      uVar10 = 8;
      pcVar7 = (char *)FUN_006b0140(0x4275,DAT_00807618);
      thunk_FUN_0052d320(DAT_008016d8,pcVar7,uVar10);
    }
    g_currentExceptionFrame = local_1c8.previous;
    return 0;
  }
  g_currentExceptionFrame = local_1c8.previous;
  iVar12 = ReportDebugMessage(s_E____titans_Andrey_tintersys_cpp_007c7be8,0xb3,0,iVar3,&DAT_007a4ccc
                              ,s_InterSystemC__CreateInterfObject_007c7c10);
  if (iVar12 != 0) {
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_tintersys_cpp_007c7be8,0xb3);
  return 0xfffffffc;
}

