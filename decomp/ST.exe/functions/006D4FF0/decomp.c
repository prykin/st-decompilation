
undefined4 * __thiscall
FUN_006d4ff0(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  FUN_0074abc4(this,(undefined4 *)&DAT_0079dad0,param_1,param_2);
  FUN_006d5720((void *)((int)this + 0x150),0,(int)this,(int)this + 0x7c,param_3,
               (char *)u_Input_007ee27c);
  FUN_0074b91d((undefined4 *)((int)this + 0x240));
  *(int *)((int)this + 0x288) = param_4;
  FUN_006d5cd0((void *)((int)this + 0x294),this,0,param_3);
  *(VTable_0079DB78 **)this = &VTable_0079DB78;
  *(VTable_0079DB3C **)((int)this + 0xc) = &VTable_0079DB3C;
  *(VTable_0079DB28 **)((int)this + 0x10) = &VTable_0079DB28;
  *(VTable_0079DB04 **)((int)this + 200) = &VTable_0079DB04;
  *(VTable_0079DAF0 **)((int)this + 0xcc) = &VTable_0079DAF0;
  FUN_0074bb83((undefined4 *)((int)this + 0x240));
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x30c) = 1;
  if (DAT_007ee240 < 8) {
    MessageBoxA(*(HWND *)(param_4 + 0x78),s_Need_compile__vidrend_cpp__with___007ee244,
                s_Error_007ee274,0x1010);
    Library::MSVCRT::FUN_0072ef80(0xffffffff);
  }
  return this;
}

