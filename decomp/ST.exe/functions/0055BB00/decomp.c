
void __thiscall
FUN_0055bb00(void *this,undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
            uint param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 local_10;
  undefined2 local_c;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined4 local_8;
  
  if ((((*(int *)((int)this + 0x114) != 0) && (*(uint **)((int)this + 0x110) != (uint *)0x0)) &&
      (param_5 < 8)) &&
     ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_5 * 0x51] < 8)))) {
    local_10 = CONCAT22(param_2,(short)CONCAT31((int3)param_5,param_1));
    _local_c = CONCAT13(param_6,CONCAT12(param_4,param_3));
    local_8 = param_7;
    Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x110),&local_10);
  }
  return;
}

