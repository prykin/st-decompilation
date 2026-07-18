
void __thiscall
FUN_0055bbc0(void *this,undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
            uint param_5,undefined1 param_6,undefined4 param_7)

{
  uint uVar1;
  char local_10;
  undefined1 uStack_f;
  undefined2 uStack_e;
  undefined3 local_c;
  undefined1 uStack_9;
  undefined4 local_8;
  
  if ((((*(int *)((int)this + 0x114) != 0) && (*(int *)((int)this + 0x110) != 0)) && (param_5 < 8))
     && ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[param_5 * 0x51] < 8)))) {
    _local_10 = CONCAT22(param_2,CONCAT11((char)param_5,param_1));
    _local_c = CONCAT13(param_6,CONCAT12(param_4,param_3));
    local_8 = param_7;
    uVar1 = thunk_FUN_0055b9f0(this,&local_10);
    if (-1 < (int)uVar1) {
      FUN_006b0c70(*(int *)((int)this + 0x110),uVar1);
    }
  }
  return;
}

