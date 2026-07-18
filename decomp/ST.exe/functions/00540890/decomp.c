
void __cdecl
FUN_00540890(int param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,uint param_7,
            uint param_8,void *param_9,undefined4 param_10)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  BITMAPINFO *local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_4 < 1) {
      iVar2 = FUN_00711370(param_9,param_6);
      param_4 = iVar2 + (((int)param_7 < 1) - 1 & param_7);
    }
    local_8 = param_4;
    if (param_5 < 1) {
      iVar2 = FUN_007113e0(param_9,param_6);
      param_5 = iVar2 + (((int)param_8 < 1) - 1 & param_8);
    }
    if (param_1 == 0) {
      local_c = (BITMAPINFO *)FUN_00710ba0(0,0,0,0,local_8,param_5,1);
    }
    else {
      local_c = (BITMAPINFO *)
                FUN_006b55f0((undefined4 *)0x0,0,0,0,param_1,0,param_2,param_3,local_8,param_5);
      FUN_00710a90((int)local_c,0,0,0,0,0);
    }
    FUN_00711b70(param_6,param_7,param_8,param_10,-1,-1);
    FUN_006b5f80(DAT_008075a8,param_2,param_3,local_8,param_5);
    thunk_FUN_005404f0(param_2,param_3,'\x01',local_c,-(uint)(param_1 != 0));
    FUN_00710f00();
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar2 = FUN_006ad4d0(s_E____titans_Andrey_support_cpp_007c7b2c,0x75,0,iVar2,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00710f00();
  return;
}

