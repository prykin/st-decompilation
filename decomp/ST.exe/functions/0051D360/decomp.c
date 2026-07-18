
void FUN_0051d360(int param_1,char param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  UINT UVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  int local_8;
  
  local_8 = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_2 == '\0') {
      cVar1 = *(char *)((int)local_c + 0x1a1);
      if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
        *(char *)((int)local_c + 0x1a2) = cVar1;
        *(undefined4 *)((int)local_c + 0x1ab) = *(undefined4 *)((int)local_c + 0x1a3);
      }
      else {
        *(undefined1 *)((int)local_c + 0x1a2) = 0;
        *(undefined4 *)((int)local_c + 0x1ab) = 0;
      }
      *(undefined1 *)((int)local_c + 0x1a1) = 0xc;
      *(int *)((int)local_c + 0x1a3) = param_1;
      *(undefined4 *)((int)local_c + 0x1a7) = 0;
      *(undefined2 *)((int)local_c + 0x1af) = 0x23;
      *(undefined2 *)((int)local_c + 0x1b1) = 5;
      if (*(int *)((int)local_c + 0x178) != 0) {
        *(undefined4 *)((int)local_c + 0x28) = 0x4202;
        *(undefined2 *)((int)local_c + 0x2c) = 0;
        *(undefined2 *)((int)local_c + 0x2e) = 2;
        *(int *)((int)local_c + 0x30) = *(int *)((int)local_c + 0x178);
        if (DAT_00802a30 != (undefined4 *)0x0) {
          (**(code **)*DAT_00802a30)((int)local_c + 0x18);
        }
      }
    }
    UVar4 = thunk_FUN_00523410(param_1,'\0',0);
    thunk_FUN_00515310(0x55f9,0,UVar4);
    thunk_FUN_00515650(&local_8,param_1,0,0);
    UVar4 = thunk_FUN_00523410(param_1,'\0',2);
    thunk_FUN_00515c00(&local_8,UVar4);
    thunk_FUN_00515e30(local_c,&local_8,'\f',param_1,0);
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x93f,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x93f);
  return;
}

