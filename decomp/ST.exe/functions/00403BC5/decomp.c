
void __thiscall PrividerTy::SetMode(PrividerTy *this,char param_1,char param_2)

{
  code *pcVar1;
  PrividerTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 uStack_264;
  undefined4 uStack_257;
  undefined4 uStack_253;
  undefined4 uStack_24f;
  undefined4 uStack_23d;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_216;
  undefined4 uStack_209;
  undefined4 uStack_205;
  undefined4 uStack_201;
  undefined4 uStack_1a1;
  undefined1 uStack_19d;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_17a;
  undefined1 uStack_176;
  undefined4 uStack_16d;
  undefined4 uStack_169;
  undefined4 uStack_165;
  undefined4 uStack_153;
  undefined4 uStack_146;
  undefined4 uStack_142;
  undefined4 uStack_13e;
  undefined4 auStack_68 [7];
  InternalExceptionFrame IStack_4c;
  PrividerTy *pPStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pPStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = &uStack_264;
    for (iVar2 = 0x7e; this_00 = pPStack_8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    this_00[0x1a5f] = (PrividerTy)param_1;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    if (param_1 == '\x01') {
      uStack_1a1 = 0x2340;
      if ((this_00[0x65] != (PrividerTy)0x5) || (uStack_19d = 0, this_00[0x1a72] != (PrividerTy)0x0)
         ) {
        uStack_19d = 1;
      }
      uStack_194 = *(undefined4 *)(this_00 + 8);
      uStack_190 = 2;
      uStack_18c = 0x6943;
    }
    uStack_17a = 0x24bc;
    if ((this_00[0x65] != (PrividerTy)0x5) || (uStack_176 = 0, this_00[0x1a72] != (PrividerTy)0x0))
    {
      uStack_176 = 1;
    }
    uStack_230 = *(undefined4 *)(this_00 + 8);
    uStack_169 = 2;
    uStack_165 = 0x6952;
    if (param_1 == '\x01') {
      uStack_23d = 0x2357;
      uStack_228 = 0x694e;
      uStack_216 = 0x2616;
      uStack_201 = 0x64ff;
    }
    else {
      uStack_264 = 0x2617;
      uStack_253 = 2;
      uStack_24f = 0x6501;
      uStack_23d = 0x2618;
      uStack_228 = 0x6502;
      uStack_216 = 0x233e;
      uStack_201 = 0x6949;
      uStack_153 = 0x2619;
      uStack_142 = 2;
      uStack_13e = 0x6951;
      uStack_257 = uStack_230;
      uStack_146 = uStack_230;
    }
    uStack_205 = 2;
    uStack_22c = 2;
    iVar2 = *(int *)(this_00 + 0x1a5b);
    uStack_209 = uStack_230;
    uStack_16d = uStack_230;
    if (*(int *)(iVar2 + 0x2e6) != 0) {
      puVar4 = auStack_68;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0xffff;
      MMsgTy::SetPanel(*(MMsgTy **)(iVar2 + 0x2e6),0,(int)&uStack_264,0,0);
      MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),(int)auStack_68);
    }
    PaintPrivider(this_00,param_2);
    this_00[0x65] = (PrividerTy)0x3;
    thunk_FUN_00568bc0(&g_sound,0);
    if ((DAT_00807300._1_1_ & 8) != 0) {
      thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
    }
    thunk_FUN_005b6730(this_00,0xb,'\0',-1);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x11e,0,iVar2,&DAT_007a4ccc,
                             s_PrividerTy__SetMode_007cce00);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x11e);
  return;
}

