
undefined4 __thiscall FUN_00495750(void *this,float param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  longlong lVar6;
  CHAR local_6c [100];
  float local_8;
  
  fVar2 = param_1;
  FUN_006e5fd0();
  uVar1 = *(uint *)((int)fVar2 + 0x10);
  if (uVar1 < 0x61) {
    if (uVar1 == 0x60) {
      *(uint *)((int)this + 0x1c) = (uint)*(ushort *)((int)fVar2 + 0x18);
      *(uint *)((int)this + 0x20) = (uint)*(ushort *)((int)fVar2 + 0x1a);
      return 0;
    }
    switch(uVar1) {
    case 2:
      iVar3 = FUN_006e4d40(*(void **)((int)this + 0x10),*(int *)((int)this + 0xc));
      if (iVar3 == 1) {
        DVar4 = timeGetTime();
        *(DWORD *)((int)this + 0x24) = DVar4;
        return 0;
      }
      break;
    case 3:
      FUN_006e4d40(*(void **)((int)this + 0x10),*(int *)((int)this + 0xc));
      return 0;
    }
  }
  else if ((uVar1 != 0x61) && (uVar1 == 0x8102)) {
    FUN_006e1c20(PTR_00807598,*(float *)((int)this + 0x1c),*(int *)((int)this + 0x20),0.0,&local_8,
                 &param_1);
    lVar6 = Library::MSVCRT::__ftol();
    uVar5 = (undefined4)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    wsprintfA(local_6c,s_X____d_Y____d_Xc____d_Yc____d_007abc38,*(undefined4 *)((int)this + 0x1c),
              *(undefined4 *)((int)this + 0x20),(int)lVar6,uVar5);
    MessageBoxA(g_hWnd_00806748,local_6c,s_Coordinates_of_Mouse_007abc1c,0x40);
  }
  return 0;
}

