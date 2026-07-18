
undefined4 * __thiscall
FUN_006d4ff0(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  FUN_0074abc4(this,(undefined4 *)&DAT_0079dad0,param_1,param_2);
  FUN_006d5720((void *)((int)this + 0x150),0,(int)this,(int)this + 0x7c,param_3,u_Input_007ee27c);
  FUN_0074b91d((undefined4 *)((int)this + 0x240));
  *(int *)((int)this + 0x288) = param_4;
  FUN_006d5cd0((void *)((int)this + 0x294),this,0,param_3);
  *(undefined ***)this = &PTR_FUN_0079db78;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_0079db3c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_0079db28;
  *(undefined ***)((int)this + 200) = &PTR_LAB_0079db04;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_0079daf0;
  FUN_0074bb83((undefined4 *)((int)this + 0x240));
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x30c) = 1;
  if (DAT_007ee240 < 8) {
    MessageBoxA(*(HWND *)(param_4 + 0x78),s_Need_compile__vidrend_cpp__with___007ee244,
                s_Error_007ee274,0x1010);
    FUN_0072ef80(0xffffffff);
  }
  return this;
}

