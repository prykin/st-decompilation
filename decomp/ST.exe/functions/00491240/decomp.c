
void __thiscall
FUN_00491240(void *this,int param_1,short param_2,short param_3,short param_4,undefined2 param_5)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_1 == *(int *)((int)this + 0x5a2)) {
    sVar1 = *(short *)((int)this + 0x5f);
    *(short *)((int)this + 0x5ac) = param_3;
    *(short *)((int)this + 0x5ae) = param_4;
    *(undefined2 *)((int)this + 0x5b0) = param_5;
    *(undefined4 *)((int)this + 0x5c0) = 1;
    *(short *)((int)this + 0x5aa) = param_2;
    switch((int)param_4 - (int)sVar1) {
    case 0:
      *(undefined2 *)((int)this + 0x5b2) = 0xffff;
      break;
    case 1:
      *(undefined2 *)((int)this + 0x5b4) = 0xffff;
      *(short *)((int)this + 0x5b2) = sVar1 + 1;
      break;
    case 2:
      *(short *)((int)this + 0x5b2) = sVar1 + 1;
      *(short *)((int)this + 0x5b4) = sVar1 + 2;
      *(undefined2 *)((int)this + 0x5b6) = 0xffff;
      break;
    case 3:
      *(short *)((int)this + 0x5b2) = sVar1 + 1;
      *(short *)((int)this + 0x5b4) = sVar1 + 2;
      *(short *)((int)this + 0x5b6) = sVar1 + 3;
      *(undefined2 *)((int)this + 0x5b8) = 0xffff;
      break;
    case 4:
      *(short *)((int)this + 0x5b2) = sVar1 + 1;
      *(short *)((int)this + 0x5b4) = sVar1 + 2;
      *(short *)((int)this + 0x5b6) = sVar1 + 3;
      *(short *)((int)this + 0x5b8) = sVar1 + 4;
      *(undefined2 *)((int)this + 0x5ba) = 0xffff;
      break;
    case -4:
      *(short *)((int)this + 0x5b2) = sVar1 + -1;
      *(short *)((int)this + 0x5b4) = sVar1 + -2;
      *(short *)((int)this + 0x5b6) = sVar1 + -3;
      *(short *)((int)this + 0x5b8) = sVar1 + -4;
      *(undefined2 *)((int)this + 0x5ba) = 0xffff;
      break;
    case -3:
      *(short *)((int)this + 0x5b2) = sVar1 + -1;
      *(short *)((int)this + 0x5b4) = sVar1 + -2;
      *(short *)((int)this + 0x5b6) = sVar1 + -3;
      *(undefined2 *)((int)this + 0x5b8) = 0xffff;
      break;
    case -2:
      *(short *)((int)this + 0x5b2) = sVar1 + -1;
      *(short *)((int)this + 0x5b4) = sVar1 + -2;
      *(undefined2 *)((int)this + 0x5b6) = 0xffff;
      break;
    case -1:
      *(undefined2 *)((int)this + 0x5b4) = 0xffff;
      *(short *)((int)this + 0x5b2) = sVar1 + -1;
      break;
    default:
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4fe6,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a9d3c,0x4fe6);
    }
    if (*(short *)((int)this + 0x5b2) != -1) {
      *(undefined4 *)((int)this + 0x5c4) = 0;
      *(undefined4 *)((int)this + 0x5bc) = 0;
      thunk_FUN_00481520(this,(int)param_2,(int)param_3,(int)*(short *)((int)this + 0x5b2));
      thunk_FUN_00460260(this,0);
      return;
    }
    if ((*(short *)((int)this + 0x41) == (short)(*(short *)((int)this + 0x5aa) * 0xc9 + 100)) &&
       (*(short *)((int)this + 0x43) == (short)(*(short *)((int)this + 0x5ac) * 0xc9 + 100))) {
      if (*(short *)((int)this + 0x45) != (short)(*(short *)((int)this + 0x5ae) * 200 + 100)) {
        *(undefined4 *)((int)this + 0x5c4) = 3;
        return;
      }
      if (*(short *)((int)this + 0x6c) == *(short *)((int)this + 0x5b0)) {
        *(undefined4 *)((int)this + 0x5c4) = 6;
        return;
      }
      *(undefined4 *)((int)this + 0x5c4) = 5;
      return;
    }
    *(undefined4 *)((int)this + 0x5c4) = 1;
  }
  else {
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4fcb,0,0,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

