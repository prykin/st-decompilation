
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::SetMode */

void __thiscall PrividerTy::SetMode(PrividerTy *this,char param_1,char param_2)

{
  code *pcVar1;
  PrividerTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 local_264;
  undefined4 local_257;
  undefined4 local_253;
  undefined4 local_24f;
  undefined4 local_23d;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_216;
  undefined4 local_209;
  undefined4 local_205;
  undefined4 local_201;
  undefined4 local_1a1;
  undefined1 local_19d;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_17a;
  undefined1 local_176;
  undefined4 local_16d;
  undefined4 local_169;
  undefined4 local_165;
  undefined4 local_153;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_68 [7];
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = &local_264;
    for (iVar2 = 0x7e; this_00 = local_8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    this_00[0x1a5f] = (PrividerTy)param_1;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    if (param_1 == '\x01') {
      local_1a1 = 0x2340;
      if ((this_00[0x65] != (PrividerTy)0x5) || (local_19d = 0, this_00[0x1a72] != (PrividerTy)0x0))
      {
        local_19d = 1;
      }
      local_194 = *(undefined4 *)(this_00 + 8);
      local_190 = 2;
      local_18c = 0x6943;
    }
    local_17a = 0x24bc;
    if ((this_00[0x65] != (PrividerTy)0x5) || (local_176 = 0, this_00[0x1a72] != (PrividerTy)0x0)) {
      local_176 = 1;
    }
    local_230 = *(undefined4 *)(this_00 + 8);
    local_169 = 2;
    local_165 = 0x6952;
    if (param_1 == '\x01') {
      local_23d = 0x2357;
      local_228 = 0x694e;
      local_216 = 0x2616;
      local_201 = 0x64ff;
    }
    else {
      local_264 = 0x2617;
      local_253 = 2;
      local_24f = 0x6501;
      local_23d = 0x2618;
      local_228 = 0x6502;
      local_216 = 0x233e;
      local_201 = 0x6949;
      local_153 = 0x2619;
      local_142 = 2;
      local_13e = 0x6951;
      local_257 = local_230;
      local_146 = local_230;
    }
    local_205 = 2;
    local_22c = 2;
    iVar2 = *(int *)(this_00 + 0x1a5b);
    local_209 = local_230;
    local_16d = local_230;
    if (*(int *)(iVar2 + 0x2e6) != 0) {
      puVar4 = local_68;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0xffff;
      MMsgTy::SetPanel(*(MMsgTy **)(iVar2 + 0x2e6),0,(int)&local_264,0,0);
      MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),(int)local_68);
    }
    PaintPrivider(this_00,param_2);
    this_00[0x65] = (PrividerTy)0x3;
    thunk_FUN_00568bc0(&g_sound,0);
    if ((DAT_00807300._1_1_ & 8) != 0) {
      thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
    }
    thunk_FUN_005b6730(this_00,0xb,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
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

